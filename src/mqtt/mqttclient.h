#ifndef MQTTCLIENT_H

#define MQTTCLIENT_H



#include <QObject>

#include <QMqttClient>

#include <QTimer>

#include <QElapsedTimer>



#include "state.h"

#include "connection.h"

#include "factsheet.h"

#include "agv.h"



class MQTTClient : public QObject

{

    Q_OBJECT

public:

    explicit MQTTClient(QObject *parent = nullptr);

    ~MQTTClient() override = default;



    // Connection

    void connectToBroker();

    void disconnectFromBroker();



    // AGV Binding

    void setAGV(AGV *agv);



    // Publish Methods

    void publishState(const state &stateData);

    void publishFactsheet();

    void publishFactsheet(const factsheet &factsheetData);

    void publishConnection(const connection &connectionData);

    void publishOrder(const order &orderData);

    void publish(const QString &topic, const QByteArray &payload);



    // Subscriptions & Testing

    void subscribeTopics();

    void sendTestOrder();



signals:

    void connected();



private:

    void setupClientConnections();

    void handleIncomingMessage(const QByteArray &message, const QMqttTopicName &topic);



    QMqttClient m_client;

    QString m_baseTopic;

    AGV *m_agv = nullptr;



    QTimer m_stateTimer;

    QElapsedTimer m_lastStatePublishTimer;



    quint32 m_connectionHeaderId = 0;

    quint32 m_stateHeaderId = 0;

};



#endif // MQTTCLIENT_H