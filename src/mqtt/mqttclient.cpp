#include "mqttclient.h"

#include "instantaction.h"

#include "zoneset.h"

#include "responsemessage.h"

#include "order.h"

#include "node.h"

#include "edge.h"



#include <QDebug>

#include <QJsonDocument>

#include <QJsonObject>

#include <QDateTime>



MQTTClient::MQTTClient(QObject *parent)

    : QObject(parent)

{

    m_stateTimer.setInterval(5000);

    m_client.setHostname("192.168.0.66");

    m_client.setPort(1883);

    m_client.setClientId("MODOYA_AGV_01_Client");



    // VDA 5050 Topic Structure

    m_baseTopic = "vda5050/v3/MODOYA/AGV_01/";



    // Setup MQTT Connections Once

    setupClientConnections();



    // Periodic Heartbeat State Timer

    connect(&m_stateTimer, &QTimer::timeout, this, [this]() {

        if (!m_agv)

        return;



        // Robot hareket halindeyken (moveToNextNode) state otomatik basılıyor.

        if (m_agv->getState().driving)

        return;



        publishState(m_agv->getState());

    });

}



void MQTTClient::setupClientConnections()

{

    // ==========================================

    // Connected Handler

    // ==========================================

    connect(&m_client, &QMqttClient::connected, this, [this]() {

        qDebug().noquote() << "[MQTT] Broker bağlantısı kuruldu.";



        connection onlineConnection;

        onlineConnection.headerId = ++m_connectionHeaderId;

        onlineConnection.timestamp = QDateTime::currentDateTimeUtc().toString(Qt::ISODateWithMs);

        onlineConnection.version = "3.0.0";

        onlineConnection.manufacturer = "MODOYA";

        onlineConnection.serialNumber = "AGV_01";

        onlineConnection.connectionState = "ONLINE";



        publishConnection(onlineConnection);

        publishFactsheet();

        subscribeTopics();



        m_stateTimer.start();

        emit connected();

    });



    // ==========================================

    // Disconnected Handler

    // ==========================================

    connect(&m_client, &QMqttClient::disconnected, this, [this]() {

        qDebug().noquote() << "[MQTT] Broker bağlantısı kesildi.";

        m_stateTimer.stop();

    });



    // ==========================================

    // Message Dispatcher

    // ==========================================

    connect(&m_client, &QMqttClient::messageReceived, this, &MQTTClient::handleIncomingMessage);

}



void MQTTClient::connectToBroker()

{

    // Last Will Setup (VDA 5050 Connection State)

    QJsonObject willJson;

    willJson["headerId"] = 0;

    willJson["timestamp"] = QDateTime::currentDateTimeUtc().toString(Qt::ISODateWithMs);

    willJson["version"] = "3.0.0";

    willJson["manufacturer"] = "MODOYA";

    willJson["serialNumber"] = "AGV_01";

    willJson["connectionState"] = "CONNECTION_BROKEN";



    QByteArray willPayload = QJsonDocument(willJson).toJson(QJsonDocument::Compact);



    m_client.setWillTopic(m_baseTopic + "connection");

    m_client.setWillMessage(willPayload);

    m_client.setWillQoS(1);

    m_client.setWillRetain(true);



    m_client.connectToHost();

}



void MQTTClient::disconnectFromBroker()

{

    connection offlineMessage;

    offlineMessage.headerId = ++m_connectionHeaderId;

    offlineMessage.timestamp = QDateTime::currentDateTimeUtc().toString(Qt::ISODateWithMs);

    offlineMessage.version = "3.0.0";

    offlineMessage.manufacturer = "MODOYA";

    offlineMessage.serialNumber = "AGV_01";

    offlineMessage.connectionState = "OFFLINE";



    publishConnection(offlineMessage);

    m_stateTimer.stop();

    m_client.disconnectFromHost();

}



void MQTTClient::setAGV(AGV *agv)

{

    m_agv = agv;

}



void MQTTClient::handleIncomingMessage(const QByteArray &message, const QMqttTopicName &topic)

{

    const QString topicName = topic.name();



    // ==========================================

    // ORDER

    // ==========================================

    if (topicName.endsWith("/order"))

    {

        QJsonDocument doc = QJsonDocument::fromJson(message);

        if (!doc.isObject()) {

            qWarning() << "[MQTT] Geçersiz Order JSON payload!";

            return;

        }



        order receivedOrder;

        receivedOrder.fromJson(doc.object());



        if (m_agv != nullptr)

        {

            OperatingMode mode = m_agv->operatingMode();

            if (mode == OperatingMode::MANUAL  ||

                    mode == OperatingMode::SERVICE ||

                    mode == OperatingMode::STARTUP ||

                    mode == OperatingMode::TEACH_IN)

            {

                qWarning() << "[MQTT] Order reddedildi: AGV Manuel veya Servis modunda!";

                return;

            }



            m_agv->executeOrder(receivedOrder);

            publishState(m_agv->getState());

        }

    }

    // ==========================================
    // POSITION (Gerçek Robot Konumu - ROS'tan)
    // ==========================================
    else if (topicName.endsWith("/position"))
    {
        QString payloadStr = QString::fromUtf8(message);
        QStringList parts = payloadStr.split(",");

        if (parts.size() == 3)
        {
            bool okX, okY, okTheta;
            double x = parts[0].toDouble(&okX);
            double y = parts[1].toDouble(&okY);
            double theta = parts[2].toDouble(&okTheta);

            if (okX && okY && okTheta && m_agv != nullptr)
            {
                m_agv->updatePosition(x, y, theta);
            }
        }
    }

    // ==========================================

    // INSTANT ACTIONS

    // ==========================================

    else if (topicName.endsWith("/instantActions"))

    {

        QJsonDocument doc = QJsonDocument::fromJson(message);

        if (!doc.isObject()) return;



        instantAction receivedInstantAction;

        receivedInstantAction.fromJson(doc.object());



        if (m_agv != nullptr)

        {

            m_agv->executeInstantAction(receivedInstantAction);



            for (const action &act : receivedInstantAction.actions)

            {

                if (act.actionType == "stateRequest") {

                    publishState(m_agv->getState());

                } else if (act.actionType == "factsheetRequest") {

                    publishFactsheet();

                }

            }

        }

    }

    // ==========================================

    // ZONE SET

    // ==========================================

    else if (topicName.endsWith("/zoneSet"))

    {

        QJsonDocument doc = QJsonDocument::fromJson(message);

        if (!doc.isObject()) return;



        zoneSet receivedZoneSet;

        receivedZoneSet.fromJson(doc.object());

        qDebug() << "[MQTT] ZoneSet alındı. Zone Count:" << receivedZoneSet.zones.size();

    }

    // ==========================================

    // RESPONSE

    // ==========================================

    else if (topicName.endsWith("/response"))

    {

        QJsonDocument doc = QJsonDocument::fromJson(message);

        if (!doc.isObject()) return;



        responseMessage receivedResponse;

        receivedResponse.fromJson(doc.object());

        qDebug() << "[MQTT] Response mesajı işlendi.";

    }

}



// ==========================================

// PUBLISHERS

// ==========================================



void MQTTClient::publishState(const state &stateData)
{
    // Son 300ms içinde mesaj atıldıysa (spam önleme)
    if (m_lastStatePublishTimer.isValid() &&
        m_lastStatePublishTimer.elapsed() < 300) {
        return;
    }

    state currentState = stateData;

    currentState.headerId = ++m_stateHeaderId;

    currentState.timestamp =
        QDateTime::currentDateTimeUtc().toString(Qt::ISODateWithMs);

    //==================================================
    // CONSOLE OUTPUT
    //==================================================

    qDebug().noquote()
        << "\n========== VDA5050 STATE ==========\n"

        << "Header ID       :" << currentState.headerId << "\n"
        << "Order ID        :" << currentState.orderId << "\n"
        << "Order Update ID :" << currentState.orderUpdateId << "\n"
        << "Driving         :" << currentState.driving << "\n"
        << "Paused          :" << currentState.paused << "\n"
        << "Operating Mode  :"
        << operatingModeToString(currentState.operatingMode) << "\n"

        << "\n----- ROBOT POSITION -----\n"
        << "X:" << currentState.mobileRobotPosition.x << "m"
        << "| Y:" << currentState.mobileRobotPosition.y << "m"
        << "| Theta:" << currentState.mobileRobotPosition.theta << "rad"
        << "| Map:" << currentState.mobileRobotPosition.mapId << "\n"

        << "Localized:" << currentState.mobileRobotPosition.localized
        << "| Localization Score:"
        << currentState.mobileRobotPosition.localizationScore
        << "| Deviation:"
        << currentState.mobileRobotPosition.deviationRange << "\n"

        << "\n----- VELOCITY -----\n"
        << "Vx:" << currentState.velocity.vx << "m/s"
        << "| Vy:" << currentState.velocity.vy << "m/s"
        << "| Omega:" << currentState.velocity.omega << "rad/s\n"

        << "\n----- POWER SUPPLY -----\n"
        << "Charge:" << currentState.powerSupply.stateOfCharge << "%"
        << "| Voltage:" << currentState.powerSupply.batteryVoltage << "V"
        << "| Current:" << currentState.powerSupply.batteryCurrent << "A"
        << "| Health:" << currentState.powerSupply.batteryHealth << "%"
        << "| Charging:" << currentState.powerSupply.charging
        << "| Range:" << currentState.powerSupply.range << "\n"

        << "\n----- NODE STATES -----";

    for (const nodeState &ns : currentState.nodeStates)
    {
        qDebug().noquote()
        << "\nNode:" << ns.nodeId
        << "| Seq:" << ns.sequenceId
        << "| Released:" << ns.released;
    }

    qDebug().noquote()
        << "\n\n----- EDGE STATES -----";

    for (const edgeState &es : currentState.edgeStates)
    {
        qDebug().noquote()
        << "\nEdge:" << es.edgeId
        << "| Seq:" << es.sequenceId
        << "| Released:" << es.released;
    }

    qDebug().noquote()
        << "\n==================================\n";

    //==================================================
    // MQTT JSON
    //==================================================

    QByteArray payload =
        QJsonDocument(currentState.toJson())
            .toJson(QJsonDocument::Compact);

    m_lastStatePublishTimer.restart();

    m_client.publish(
        QMqttTopicName(m_baseTopic + "state"),
        payload,
        0,
        true
        );
}

void MQTTClient::publishConnection(const connection &connectionData)

{

    QByteArray payload = QJsonDocument(connectionData.toJson()).toJson(QJsonDocument::Compact);

    m_client.publish(QMqttTopicName(m_baseTopic + "connection"), payload, 1, true);

}



void MQTTClient::publishFactsheet(const factsheet &factsheetData)

{

    QByteArray payload = QJsonDocument(factsheetData.toJson()).toJson(QJsonDocument::Compact);

    m_client.publish(QMqttTopicName(m_baseTopic + "factsheet"), payload, 0, true);

}



void MQTTClient::publishFactsheet()

{

    factsheet fs;

    fs.headerId = 1;

    fs.timestamp = QDateTime::currentDateTimeUtc().toString(Qt::ISODateWithMs);

    fs.version = "3.0.0";

    fs.manufacturer = "MODOYA";

    fs.serialNumber = "AGV_01";



    publishFactsheet(fs);

}



void MQTTClient::publishOrder(const order &orderData)

{

    QByteArray payload = QJsonDocument(orderData.toJson()).toJson(QJsonDocument::Compact);

    m_client.publish(QMqttTopicName(m_baseTopic + "order"), payload, 1, false);

}



void MQTTClient::publish(const QString &topic, const QByteArray &payload)

{

    m_client.publish(QMqttTopicName(topic), payload, 0, false);

}



// ==========================================

// SUBSCRIBERS

// ==========================================



void MQTTClient::subscribeTopics()
{
    auto *orderSub = m_client.subscribe(QMqttTopicFilter(m_baseTopic + "order"));

    if (orderSub)
        qDebug().noquote() << "[MQTT] ORDER subscribe başarılı:" << m_baseTopic + "order";
    else
        qDebug().noquote() << "[MQTT] ORDER subscribe BAŞARISIZ!";

    m_client.subscribe(QMqttTopicFilter(m_baseTopic + "instantActions"));
    m_client.subscribe(QMqttTopicFilter(m_baseTopic + "zoneSet"));
    m_client.subscribe(QMqttTopicFilter(m_baseTopic + "response"));
    m_client.subscribe(QMqttTopicFilter(m_baseTopic + "position"));
    qDebug().noquote() << "[MQTT] Tüm varsayılan topic'ler dinlenmeye başlandı.";
}


void MQTTClient::sendTestOrder()

{

    order testOrder;

    testOrder.headerId = 1;

    testOrder.timestamp = QDateTime::currentDateTimeUtc().toString(Qt::ISODateWithMs);

    testOrder.version = "3.0.0";

    testOrder.manufacturer = "MODOYA";

    testOrder.serialNumber = "AGV_01";

    testOrder.orderId = "TEST_ORDER_001";

    testOrder.orderUpdateId = 0;

    testOrder.orderDescription = "Qt test order";



    node node1;

    node1.nodeId = "1";

    node1.sequenceId = 0;

    node1.released = true;

    node1.nodePosition.x = 0.0;

    node1.nodePosition.y = 0.0;

    node1.nodePosition.theta = 0.0;

    node1.nodePosition.mapId = "warehouse";



    node node2;

    node2.nodeId = "2";

    node2.sequenceId = 2;

    node2.released = true;

    node2.nodePosition.x = 1.0;

    node2.nodePosition.y = 0.0;

    node2.nodePosition.theta = 0.0;

    node2.nodePosition.mapId = "warehouse";



    edge edge1;

    edge1.edgeId = "1-2";

    edge1.sequenceId = 1;

    edge1.released = true;

    edge1.maximumSpeed = 0.5;

    edge1.orientation = 0.0;

    edge1.orientationType = "TANGENTIAL";

    edge1.direction = "FORWARD";

    edge1.reachOrientationBeforeEntering = false;

    edge1.maximumRotationSpeed = 1.0;

    edge1.length = 1.0;



    testOrder.nodes.append(node1);

    testOrder.nodes.append(node2);

    testOrder.edges.append(edge1);



    publishOrder(testOrder);

}

