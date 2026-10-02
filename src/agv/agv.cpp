#include "agv.h"

#include "mqttclient.h"



#include <QDebug>

#include <cmath>

#include <QThread>



AGV::AGV(const QString &id, QObject *parent)

    : QObject(parent)

{

    m_id = id;



    m_velocity = velocity();



    m_battery = 100.0;



    m_currentNode = -1;



    m_currentNodeIndex = 0;



    // Robot ilk açıldığında hareketsiz olmalı

    m_state.velocity.vx = 0.0;

    m_state.velocity.vy = 0.0;

    m_state.velocity.omega = 0.0;

    m_state.driving = false;



    QObject::connect(&m_moveTimer,

                     &QTimer::timeout,

                     this,

                     [this]()

                     {

                         qDebug() << "TIMEOUT";

                         moveToNextNode();

                     });



    m_moveTimer.setInterval(1000);

}



QString AGV::id() const

{

    return m_id;

}



QString AGV::currentOrderId() const

{

    return m_state.orderId;

}



quint32 AGV::currentOrderUpdateId() const

{

    return m_state.orderUpdateId;

}



mobileRobotPosition AGV::position() const

{

    return m_position;

}



void AGV::setPosition(const mobileRobotPosition &pos)

{

    m_position = pos;

}



velocity AGV::getVelocity() const

{

    return m_velocity;

}



void AGV::setVelocity(const velocity &vel)

{

    m_velocity = vel;

}



double AGV::battery() const

{

    return m_battery;

}



void AGV::setBattery(double value)

{

    m_battery = value;

}



int AGV::currentNode() const

{

    return m_currentNode;

}



void AGV::setCurrentNode(int node)

{

    m_currentNode = node;

}



state AGV::getState() const

{

    return m_state;

}



OperatingMode AGV::operatingMode() const

{

    return m_operatingMode;

}



void AGV::setState(const state &newState)

{

    m_state = newState;



    //==================================================

    // INTERVENED modundan çıkıldığında bekleyen order'ı başlat

    //==================================================



    if (m_hasPendingOrder &&

        (m_state.operatingMode == OperatingMode::AUTOMATIC ||

             m_state.operatingMode == OperatingMode::SEMIAUTOMATIC))

    {

        qDebug() << "Pending order is now started.";



        order pendingOrder = m_pendingOrder;



        m_hasPendingOrder = false;



        executeOrder(pendingOrder);

    }

}



void AGV::setOperatingMode(OperatingMode mode)

{

    m_operatingMode = mode;

    m_state.operatingMode = mode;



    switch (mode)

    {

    case OperatingMode::AUTOMATIC:

    case OperatingMode::SEMIAUTOMATIC:

        break;



    case OperatingMode::MANUAL:

    case OperatingMode::SERVICE:

    case OperatingMode::TEACH_IN:

    case OperatingMode::STARTUP:



        m_currentOrder = order();



        m_state.orderId = "";

        m_state.orderUpdateId = 0;



        m_state.driving = false;



        break;



    case OperatingMode::INTERVENED:



        m_state.driving = false;



        break;

    }

}



void AGV::setMQTTClient(MQTTClient *client)

{

    m_mqttClient = client;

}



bool AGV::validateOrder(const order &newOrder)

{

    if (newOrder.orderId.isEmpty())

    {

        qDebug().noquote() << "[ORDER VALIDATION] Order ID is empty.";



        m_state.errors.clear();



        error err;

        err.errorType = "orderValidationError";

        err.errorDescription = "Order ID is empty";

        err.errorHint = "Fleet controller shall send a valid orderId.";

        err.errorLevel = "WARNING";



        errorReference ref;

        ref.referenceKey = "orderId";

        ref.referenceValue = "";



        err.errorReferences.append(ref);



        m_state.errors.append(err);



        if (m_mqttClient)

        {

            m_mqttClient->publishState(m_state);

        }



        return false;

    }



    if (newOrder.nodes.isEmpty())

    {

        qDebug().noquote() << "[ORDER VALIDATION] Order does not contain any nodes.";

        return false;

    }



    if (newOrder.edges.isEmpty())

    {

        qDebug().noquote() << "[ORDER VALIDATION] Order does not contain any edges.";

        return false;

    }



    if (newOrder.edges.size() != newOrder.nodes.size() - 1)

    {

        qDebug().noquote() << "[ORDER VALIDATION] Node / Edge count mismatch.";

        return false;

    }



    if (newOrder.nodes.first().sequenceId != 0)

    {

        qDebug().noquote() << "[ORDER VALIDATION] First node sequenceId must be 0.";

        return false;

    }



    int expectedSequence = 0;



    for (int i = 0; i < newOrder.nodes.size(); i++)

    {

        if (newOrder.nodes[i].sequenceId != expectedSequence)

        {

            qDebug().noquote() << "[ORDER VALIDATION] Invalid node sequenceId.";

            return false;

        }



        expectedSequence++;



        if (i < newOrder.edges.size())

        {

            if (newOrder.edges[i].sequenceId != expectedSequence)

            {

                qDebug().noquote() << "[ORDER VALIDATION] Invalid edge sequenceId.";

                return false;

            }



            expectedSequence++;

        }

    }



    qDebug().noquote() << "[ORDER VALIDATION] Order accepted.";

    return true;

}



bool AGV::isOrderUpdate(const order &newOrder) const

{

    return newOrder.orderId == m_currentOrder.orderId &&

               newOrder.orderUpdateId > m_currentOrder.orderUpdateId;

}



//==================================================

// ORDER EXECUTION

//==================================================



void AGV::executeOrder(const order &newOrder)

{

    if (!validateOrder(newOrder))

    {

        return;

    }



    bool isOrderUpdate = false;



    if (m_state.orderId == newOrder.orderId)

    {

        if (newOrder.orderUpdateId <= m_state.orderUpdateId)

        {

            qDebug().noquote() << "[ORDER] Old orderUpdateId received. Ignored.";

            return;

        }



        qDebug().noquote() << "[ORDER] Order Update received.";

        isOrderUpdate = true;

    }

    else

    {

        qDebug().noquote() << "[ORDER] New Order received.";

    }



    if (m_state.operatingMode == OperatingMode::INTERVENED)

    {

        qDebug() << "Robot INTERVENED modunda.";

        qDebug() << "Order pending olarak kaydedildi.";



        m_pendingOrder = newOrder;

        m_hasPendingOrder = true;



        return;

    }



    if (isOrderUpdate)

    {

        qDebug().noquote() << "[ORDER] Current Order Node Count :" << m_currentOrder.nodes.size();

        qDebug().noquote() << "[ORDER] Incoming Order Node Count :" << newOrder.nodes.size();

        qDebug().noquote() << "[ORDER] Current Order Edge Count :" << m_currentOrder.edges.size();

        qDebug().noquote() << "[ORDER] Incoming Order Edge Count :" << newOrder.edges.size();



        mergeOrderUpdate(newOrder);

    }

    else

    {

        m_currentOrder = newOrder;

        m_currentNodeIndex = 0;

        m_currentEdgeIndex = 0;

    }



    setOperatingMode(OperatingMode::AUTOMATIC);



    m_state.orderId = newOrder.orderId;

    m_state.orderUpdateId = newOrder.orderUpdateId;



    m_state.errors.clear();

    m_state.information.clear();



    qDebug() << "========== TEST-1 ==========";



    m_state.nodeStates.clear();



    for (const node &n : newOrder.nodes)

    {

        nodeState ns;

        ns.nodeId = n.nodeId;

        ns.sequenceId = n.sequenceId;

        ns.nodeDescriptor = n.nodeDescriptor;

        ns.released = n.released;

        ns.nodePosition = n.nodePosition;



        m_state.nodeStates.append(ns);



        qDebug() << "APPEND:" << ns.nodeId << "SIZE =" << m_state.nodeStates.size();

    }



    qDebug() << "FINAL SIZE =" << m_state.nodeStates.size();



    m_state.actionStates.clear();



    for (const node &n : newOrder.nodes)

    {

        for (const action &a : n.actions)

        {

            actionState as;

            as.actionId = a.actionId;

            as.actionType = a.actionType;

            as.actionDescriptor = a.actionDescriptor;

            as.actionStatus = "WAITING";

            as.actionResult = "";



            m_state.actionStates.append(as);

        }

    }



    qDebug().noquote() << "";

    qDebug().noquote() << "Node State Count :" << m_state.nodeStates.size();



    for(const nodeState &ns : m_state.nodeStates)

    {

        qDebug().noquote() << "NodeState ->" << ns.nodeId << "Sequence :" << ns.sequenceId;

    }



    qDebug().noquote() << "";

    qDebug().noquote() << "Action State Count :" << m_state.actionStates.size();



    for(const actionState &as : m_state.actionStates)

    {

        qDebug().noquote() << "Action ->" << as.actionId << as.actionType << as.actionStatus;

    }



    m_state.edgeStates.clear();



    for(const edge &e : newOrder.edges)

    {

        edgeState es;

        es.edgeId = e.edgeId;

        es.sequenceId = e.sequenceId;

        es.edgeDescriptor = e.edgeDescriptor;

        es.released = e.released;

        es.trajectory = e.trajectory;

        es.edgeStatus = "WAITING";



        m_state.edgeStates.append(es);

    }



    qDebug().noquote() << "";

    qDebug().noquote() << "===== m_state.edgeStates =====";



    for(int i = 0; i < m_state.edgeStates.size(); ++i)

    {

        qDebug().noquote()

        << "Index:" << i

        << "Edge:" << m_state.edgeStates[i].edgeId

        << "Sequence:" << m_state.edgeStates[i].sequenceId;

    }



    m_state.driving = true;

    m_state.paused = false;



    if (!m_state.edgeStates.isEmpty())

    {

        m_state.edgeStates[0].edgeStatus = "RUNNING";

        qDebug().noquote() << "Edge" << m_state.edgeStates[0].edgeId << "RUNNING";

    }



    if (!m_state.actionStates.isEmpty())

    {

        for(actionState &a : m_state.actionStates)

        {

            a.actionStatus = "INITIALIZING";

            qDebug().noquote() << "Action" << a.actionId << "INITIALIZING";

        }

    }



    info orderInfo;

    orderInfo.infoType = "ORDER";

    orderInfo.infoDescriptor = "Order accepted";

    orderInfo.infoLevel = "INFO";



    infoReference ref;

    ref.referenceKey = "orderId";

    ref.referenceValue = newOrder.orderId;



    orderInfo.infoReferences.append(ref);



    m_state.information.append(orderInfo);



    qDebug().noquote() << "";

    qDebug().noquote() << "========== AGV ==========";

    qDebug().noquote() << "Executing Order...";

    qDebug().noquote() << "Order ID :" << newOrder.orderId;

    qDebug().noquote() << "Description :" << newOrder.orderDescription;

    qDebug().noquote() << "";

    qDebug().noquote() << "Node Count :" << newOrder.nodes.size();

    qDebug().noquote() << "Edge Count :" << newOrder.edges.size();



    for (const edge &e : newOrder.edges)

    {

        qDebug().noquote() << "Edge ->" << e.edgeId << "Seq:" << e.sequenceId << "Released:" << e.released;

    }



    for (const node &n : newOrder.nodes)

    {

        qDebug().noquote()

        << "Node ->" << n.nodeId

        << "Seq:" << n.sequenceId

        << "Released:" << n.released

        << "X:" << n.nodePosition.x

        << "Y:" << n.nodePosition.y;

    }



    if(!newOrder.nodes.isEmpty())

    {

        m_state.lastNodeId = newOrder.nodes.first().nodeId;

        m_state.lastNodeSequenceId = newOrder.nodes.first().sequenceId;



        m_targetX = newOrder.nodes.first().nodePosition.x;

        m_targetY = newOrder.nodes.first().nodePosition.y;

        m_targetTheta = newOrder.nodes.first().nodePosition.theta;



        m_state.mobileRobotPosition.mapId = newOrder.nodes.first().nodePosition.mapId;

    }



    qDebug().noquote() << "State Order ID :" << m_state.orderId;

    qDebug().noquote() << "State Update ID :" << m_state.orderUpdateId;

    qDebug().noquote() << "Driving :" << m_state.driving;

    qDebug().noquote() << "Last Node :" << m_state.lastNodeId;

    qDebug().noquote()

        << "Robot Position :"

        << m_state.mobileRobotPosition.x

        << m_state.mobileRobotPosition.y

        << m_state.mobileRobotPosition.theta;



    qDebug().noquote() << "";

    qDebug().noquote() << "===== BEFORE TIMER =====";



    for(const edgeState &e : m_state.edgeStates)

    {

        qDebug().noquote() << e.edgeId << e.edgeStatus;

    }



    m_moveTimer.start();

    qDebug() << "Timer Active =" << m_moveTimer.isActive();



    qDebug().noquote() << "=========================";

    qDebug().noquote() << "Order Edge Count :" << newOrder.edges.size();

    qDebug().noquote() << "";

    qDebug().noquote() << "Edge State Count :" << m_state.edgeStates.size();



    for(int i=0; i<m_state.edgeStates.size(); i++)

    {

        qDebug().noquote()

        << "Index:" << i

        << "Edge:" << m_state.edgeStates[i].edgeId

        << "Seq:" << m_state.edgeStates[i].sequenceId;

    }

}



void AGV::mergeOrderUpdate(const order &newOrder)

{

    qDebug().noquote() << "[ORDER UPDATE] Merging order update...";



    for (const node &newNode : newOrder.nodes)

    {

        bool exists = false;



        for (const node &oldNode : m_currentOrder.nodes)

        {

            if (oldNode.nodeId == newNode.nodeId)

            {

                exists = true;

                break;

            }

        }



        if (!exists)

        {

            qDebug().noquote() << "[ORDER UPDATE] Added Node:" << newNode.nodeId;

            m_currentOrder.nodes.append(newNode);

        }

    }



    for (const edge &newEdge : newOrder.edges)

    {

        bool exists = false;



        for (const edge &oldEdge : m_currentOrder.edges)

        {

            if (oldEdge.edgeId == newEdge.edgeId)

            {

                exists = true;

                break;

            }

        }



        if (!exists)

        {

            qDebug().noquote() << "[ORDER UPDATE] Added Edge:" << newEdge.edgeId;

            m_currentOrder.edges.append(newEdge);

        }

    }

}



//==================================================

// POSITION UPDATE

//==================================================



void AGV::updatePosition(double x, double y, double theta)

{

    m_position.x = x;

    m_position.y = y;

    m_position.theta = theta;



    m_state.mobileRobotPosition = m_position;



    m_state.mobileRobotPosition.localized = true;

    m_state.mobileRobotPosition.localizationScore = 100.0;

    m_state.mobileRobotPosition.deviationRange = 0.0;



       qDebug().noquote() << "[AGV] Position Updated ->" << x << y << theta;

}



//==================================================

// BATTERY UPDATE

//==================================================



void AGV::updateBattery(double value)

{

    m_battery = value;

    m_state.powerSupply.stateOfCharge = value;



    bool errorExists = false;



    for(const error &e : m_state.errors)

    {

        if(e.errorType == "LOW_BATTERY")

        {

            errorExists = true;

            break;

        }

    }



    if(value <= 15.0 && !errorExists)

    {

        error lowBattery;

        lowBattery.errorType = "LOW_BATTERY";

        lowBattery.errorDescription = "Battery level is critical.";

        lowBattery.errorHint = "Recharge AGV.";

        lowBattery.errorLevel = "WARNING";



        m_state.errors.append(lowBattery);



        qDebug().noquote() << "[ERROR] LOW_BATTERY added.";

    }



    if(value > 15.0)

    {

        for(int i = 0; i < m_state.errors.size(); )

        {

            if(m_state.errors[i].errorType == "LOW_BATTERY")

            {

                m_state.errors.removeAt(i);

                qDebug().noquote() << "[ERROR] LOW_BATTERY cleared.";

            }

            else

            {

                ++i;

            }

        }

    }



    if(m_mqttClient)

    {

        m_mqttClient->publishState(m_state);

    }



    qDebug().noquote() << "[AGV] Battery ->" << value << "%";

}



void AGV::executeInstantAction(const instantAction &newInstantAction)

{

    qDebug().noquote() << "";

    qDebug().noquote() << "========== AGV ==========";

    qDebug().noquote() << "Executing Instant Actions...";

    qDebug().noquote() << "Action Count :" << newInstantAction.actions.size();



    for (const action &a : newInstantAction.actions)

    {

        qDebug().noquote() << "";

        qDebug().noquote() << "Action ID        :" << a.actionId;

        qDebug().noquote() << "Action Type      :" << a.actionType;

        qDebug().noquote() << "Blocking Type    :" << a.blockingType;

        qDebug().noquote() << "Retriable        :" << a.retriable;



        for (const actionParameter &p : a.actionParameters)

        {

            qDebug().noquote() << "Parameter ->" << p.key << "=" << p.value.toString();

        }



        if (a.actionType == "cancelOrder")

        {

            qDebug().noquote() << "[AGV] Cancel Order";

            cancelCurrentOrder();

            return;

        }

        else if (a.actionType == "factsheetRequest")

        {

            qDebug().noquote() << "[AGV] Factsheet Request";

        }

        else if (a.actionType == "stateRequest")

        {

            qDebug().noquote() << "[AGV] State Request";

        }

        else

        {

            qDebug().noquote() << "[AGV] Unknown Instant Action :" << a.actionType;

        }

    }



    qDebug().noquote() << "=========================";

}



void AGV::cancelCurrentOrder()

{

    qDebug() << "";

    qDebug() << "========== CANCEL ORDER ==========";



    m_moveTimer.stop();

    m_state.driving = false;



    // Hızı sıfırla ve MQTT'ye durma komutu bas

    m_state.velocity.vx = 0.0;

    m_state.velocity.vy = 0.0;

    m_state.velocity.omega = 0.0;



    if (m_mqttClient != nullptr)

    {

        QString stopCmd = "0.0,0.0,0.0";

        m_mqttClient->publish("vda5050/v3/MODOYA/AGV_01/cmd_vel", stopCmd.toUtf8());

    }



    for (actionState &as : m_state.actionStates)

    {

        if (as.actionStatus == "WAITING" ||

                as.actionStatus == "INITIALIZING" ||

                as.actionStatus == "RUNNING")

        {

            as.actionStatus = "FAILED";

            qDebug().noquote() << "Action" << as.actionId << "FAILED (cancelled)";

        }

    }



    for (edgeState &edge : m_state.edgeStates)

    {

        if (edge.edgeStatus == "RUNNING" || edge.edgeStatus == "WAITING")

        {

            edge.edgeStatus = "CANCELLED";

        }

    }



    qDebug() << "Current order cancelled.";



    m_currentOrder = order();

    m_currentNodeIndex = 0;

    m_currentEdgeIndex = 0;



    if (m_mqttClient != nullptr)

    {

        m_mqttClient->publishState(m_state);

    }

}



void AGV::moveToNextNode()

{

    if (m_isPaused)

    {

        return;

    }



    if (m_currentOrder.nodes.isEmpty())

    {

        qDebug().noquote() << "CurrentNodeIndex =" << m_currentNodeIndex;

        return;

    }



    if (m_currentNodeIndex >= m_currentOrder.nodes.size())

    {

        qDebug().noquote() << "Order Finished.";



        m_state.driving = false;



        // Robot tamamen durdu

        m_state.velocity.vx = 0.0;

        m_state.velocity.vy = 0.0;

        m_state.velocity.omega = 0.0;

        m_state.distanceSinceLastNode = 0.0;



        // --- ROS2 Bridge için Durma Komutu Gönder ---

        if (m_mqttClient != nullptr)

        {

            QString stopCmd = "0.0,0.0,0.0";

            m_mqttClient->publish("vda5050/v3/MODOYA/AGV_01/cmd_vel", stopCmd.toUtf8());

        }



        m_currentNodeIndex = 0;

        m_moveTimer.stop();



        return;

    }



    const node &nextNode = m_currentOrder.nodes[m_currentNodeIndex];



    double targetX = nextNode.nodePosition.x;

    double targetY = nextNode.nodePosition.y;



    double currentX = m_state.mobileRobotPosition.x;

    double currentY = m_state.mobileRobotPosition.y;



    double dx = targetX - currentX;

    double dy = targetY - currentY;



    double distance = std::sqrt(dx * dx + dy * dy);



    //--------------------------------------------------

    // Hedefe ulaşıldıysa

    //--------------------------------------------------

    if (distance <= m_step)

    {

        updatePosition(

            targetX,

            targetY,

            nextNode.nodePosition.theta);



        m_state.mobileRobotPosition.localized = true;

        m_state.mobileRobotPosition.localizationScore = 100.0;

        m_state.mobileRobotPosition.deviationRange = 0.0;



        // Robot hedefe ulaştı, hız sıfırlanır

        m_state.velocity.vx = 0.0;

        m_state.velocity.vy = 0.0;

        m_state.velocity.omega = 0.0;

        m_state.distanceSinceLastNode = 0.0;



        // --- ROS2 Bridge için Hedefe Ulaşma Durma Komutu Gönder ---

        if (m_mqttClient != nullptr)

        {

            QString stopCmd = "0.0,0.0,0.0";

            m_mqttClient->publish("vda5050/v3/MODOYA/AGV_01/cmd_vel", stopCmd.toUtf8());

        }



        m_state.lastNodeId = nextNode.nodeId;

        m_state.lastNodeSequenceId = nextNode.sequenceId;



        if (!m_state.nodeStates.isEmpty())

        {

            qDebug() << " Current node =" << nextNode.nodeId;

            qDebug() << "First state node =" << m_state.nodeStates.first().nodeId;



            if (m_state.nodeStates.first().nodeId == nextNode.nodeId)

            {

                qDebug() << "REMOVE NODE";

                m_state.nodeStates.removeFirst();

                qDebug() << "Remaining =" << m_state.nodeStates.size();

            }

        }



        info nodeInfo;

        nodeInfo.infoType = "NODE";

        nodeInfo.infoDescriptor = "Node reached";

        nodeInfo.infoLevel = "INFO";



        infoReference nodeRef;

        nodeRef.referenceKey = "nodeId";

        nodeRef.referenceValue = nextNode.nodeId;



        nodeInfo.infoReferences.append(nodeRef);

        m_state.information.append(nodeInfo);



        qDebug().noquote() << "AGV reached Node :" << nextNode.nodeId;

        qDebug().noquote()

            << "Current Position :"

            << m_state.mobileRobotPosition.x

            << m_state.mobileRobotPosition.y

            << m_state.mobileRobotPosition.theta;



        if (m_currentNodeIndex > 0)

        {

            if (!m_state.edgeStates.isEmpty())

            {

                qDebug().noquote() << "[STATE] Traversed Edge :" << m_state.edgeStates.first().edgeId;

                m_state.edgeStates.removeFirst();

                qDebug().noquote() << "[STATE] Remaining EdgeStates :" << m_state.edgeStates.size();

            }

        }



        // Execute Node Actions

        for (const action &a : nextNode.actions)

        {

            for (actionState &as : m_state.actionStates)

            {

                if (as.actionId == a.actionId)

                {

                    as.actionStatus = "INITIALIZING";



                    qDebug().noquote() << "Action" << as.actionId << "INITIALIZING" << "Blocking:" << a.blockingType;



                    if (m_mqttClient)

                    m_mqttClient->publishState(m_state);



                    as.actionStatus = "RUNNING";



                    qDebug().noquote() << "Action" << as.actionId << "RUNNING";



                    if (m_mqttClient)

                    m_mqttClient->publishState(m_state);



                    int duration = 0;



                    for (const actionParameter &p : a.actionParameters)

                    {

                        if (p.key == "duration")

                        duration = p.value.toInt();

                    }



                    if (a.blockingType == "HARD" || a.blockingType == "SOFT")

                    {

                        qDebug().noquote() << "Blocking Action (" << a.blockingType << ")...";



                        if (duration > 0)

                        QThread::sleep(duration);

                    }

                    else if (a.blockingType == "NONE")

                    {

                        qDebug().noquote() << "Non Blocking Action (NONE)";

                    }



                    as.actionStatus = "FINISHED";

                    as.actionResult = "SUCCESS";



                    qDebug().noquote() << "Action" << as.actionId << "FINISHED";



                    if (m_mqttClient)

                    m_mqttClient->publishState(m_state);

                }

            }

        }



        m_currentNodeIndex++;



        qDebug() << "m_currentEdgeIndex =" << m_currentEdgeIndex;



        if (m_currentEdgeIndex < m_state.edgeStates.size())

        {

            qDebug() << "Selected =" << m_state.edgeStates[m_currentEdgeIndex].edgeId;



            edgeState &es = m_state.edgeStates[m_currentEdgeIndex];



            if (es.edgeStatus == "WAITING")

            {

                es.edgeStatus = "RUNNING";

                qDebug().noquote() << "Edge" << es.edgeId << "RUNNING";

            }

        }



        if (m_mqttClient)

        {

            m_mqttClient->publishState(m_state);

        }



        return;

    }



    //--------------------------------------------------

    // Küçük adımlarla ilerle (Hareket anı)

    //--------------------------------------------------



    //--------------------------------------------------

    // Waffle için hareket hesabı

    // Önce hedefe doğru dön, sonra ileri git

    //--------------------------------------------------



    double targetAngle = std::atan2(dy, dx);



    double currentAngle = m_state.mobileRobotPosition.theta;



    // Açı farkını -PI ile +PI arasına getir

    double angleError = targetAngle - currentAngle;



    while (angleError > M_PI)

        angleError -= 2.0 * M_PI;



    while (angleError < -M_PI)

        angleError += 2.0 * M_PI;



    //--------------------------------------------------

    // 1. Hedef yönüne dön

    //--------------------------------------------------



    const double angleTolerance = 0.08;

    const double angularSpeed = 0.5;



    if (std::abs(angleError) > angleTolerance)

    {

        double angularZ = (angleError > 0)

        ? angularSpeed

        : -angularSpeed;



        // Dönüş sırasında ileri gitme

        double linearX = 0.0;



        // Simülasyon için açıyı küçük adımlarla güncelle

        double newAngle =

            currentAngle + angularZ * 0.1;



        while (newAngle > M_PI)

            newAngle -= 2.0 * M_PI;



        while (newAngle < -M_PI)

            newAngle += 2.0 * M_PI;



        updatePosition(

           currentX,

           currentY,

           newAngle);



        // VDA5050 State velocity

        m_state.velocity.vx = 0.0;

        m_state.velocity.vy = 0.0;

        m_state.velocity.omega = angularZ;



        //--------------------------------------------------

        // MQTT -> ROS2 -> Gazebo

        //--------------------------------------------------



        if (m_mqttClient != nullptr)

        {

            QString velTopic =

                "vda5050/v3/MODOYA/AGV_01/cmd_vel";



            QString velPayload =

                QString("%1,%2,%3")

                    .arg(linearX)

                    .arg(0.0)

                    .arg(angularZ);



            m_mqttClient->publish(

                velTopic,

                velPayload.toUtf8());



            m_mqttClient->publishState(m_state);

        }



        qDebug().noquote()

            << "[TURNING]"

            << "Current angle =" << currentAngle

            << "Target angle =" << targetAngle

            << "Error =" << angleError;



        return;

    }



    //--------------------------------------------------

    // 2. Hedef yönüne döndük.

    // Şimdi sadece ileri git.

    //--------------------------------------------------



    const double linearSpeed = 0.2;



    double moveX =

        std::cos(currentAngle) * linearSpeed;



    double moveY =

        std::sin(currentAngle) * linearSpeed;



    double newX =

        currentX + moveX * 0.1;



    double newY =

        currentY + moveY * 0.1;



    updatePosition(

       newX,

        newY,

       currentAngle);



    //--------------------------------------------------

    // VDA5050 State velocity

    //--------------------------------------------------



    m_state.velocity.vx = linearSpeed;

    m_state.velocity.vy = 0.0;

    m_state.velocity.omega = 0.0;



    m_state.distanceSinceLastNode +=

        linearSpeed * 0.1;



    //--------------------------------------------------

    // MQTT -> ROS2 -> Gazebo

    //--------------------------------------------------



    if (m_mqttClient != nullptr)

    {

        QString velTopic =

            "vda5050/v3/MODOYA/AGV_01/cmd_vel";



        QString velPayload =

            QString("%1,%2,%3")

                .arg(linearSpeed)

                .arg(0.0)

                .arg(0.0);



        m_mqttClient->publish(

            velTopic,

            velPayload.toUtf8());



        m_mqttClient->publishState(m_state);

    }



    qDebug().noquote()

        << "[MOVING]"

        << "Position:"

        << m_state.mobileRobotPosition.x

        << m_state.mobileRobotPosition.y

        << "Theta:"

        << m_state.mobileRobotPosition.theta;

}

