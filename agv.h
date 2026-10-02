 #ifndef AGV_H

#define AGV_H



#include <QString>

#include <QTimer>



#include "mobilerobotposition.h"

#include "velocity.h"

#include "state.h"

#include "order.h"

#include "instantaction.h"

#include "enums.h"







class MQTTClient;



class AGV : public QObject

{

public:

    explicit AGV(const QString &id, QObject *parent = nullptr);



    QString id() const;



    mobileRobotPosition position() const;

    void setPosition(const mobileRobotPosition &pos);



    velocity getVelocity() const;

    void setVelocity(const velocity &vel);



    double battery() const;

    void setBattery(double value);



    int currentNode() const;

    void setCurrentNode(int node);



    state getState() const;

    void setState(const state &newState);



    OperatingMode operatingMode() const;

    void setOperatingMode(OperatingMode mode);



    // MQTT Client

    void setMQTTClient(MQTTClient *client);



    // MQTT'den gelen Order'ı çalıştırır

    void executeOrder(const order &newOrder);



    void moveToNextNode();



    // AGV'nin konumunu günceller

    void updatePosition(double x,

                        double y,

                        double theta);



    // Bataryayı günceller

    void updateBattery(double value);



    // MQTT'den gelen Instant Action'ı çalıştırır

    void executeInstantAction(const instantAction &newInstantAction);



    void cancelCurrentOrder();



    QString currentOrderId() const;



    quint32 currentOrderUpdateId() const;



    void pauseOrder();

    void resumeOrder();



    bool validateOrder(const order &newOrder);



    bool isOrderUpdate(const order &newOrder) const;



    void mergeOrderUpdate(const order &newOrder);



private:

    QString m_id;



    mobileRobotPosition m_position;



    velocity m_velocity;



    double m_battery;



    int m_currentNode;



    int m_currentNodeIndex;



    int m_currentEdgeIndex = 0;



    state m_state;



    OperatingMode m_operatingMode = OperatingMode::AUTOMATIC;



    order m_currentOrder;



    order m_pendingOrder;



    bool m_hasPendingOrder = false;



    QTimer m_moveTimer;



    double m_targetX;

    double m_targetY;

    double m_targetTheta;



    double m_step = 0.2;



    bool m_isPaused = false;



    MQTTClient *m_mqttClient = nullptr;





};



#endif // AGV_H