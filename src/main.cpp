#include <QCoreApplication>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>

#include "mqttclient.h"
#include "agv.h"
#include "state.h"
#include "order.h"
#include "instantaction.h"
#include "responsemessage.h"
#include "zoneset.h"
#include "connection.h"
#include "visualization.h"
#include "factsheet.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //==========================================
    // AGV Oluştur
    //==========================================
    AGV agv("AGV_01");

    //==========================================
    // State Message Test
    //==========================================
    state robotState;
    robotState.headerId = 1;
    robotState.timestamp = "2026-07-16T10:30:00Z";
    robotState.version = "3.0.0";
    robotState.manufacturer = "MODOYA";
    robotState.serialNumber = "AGV_01";

    robotState.mobileRobotPosition.x = 0;
    robotState.mobileRobotPosition.y = 0;
    robotState.mobileRobotPosition.theta = 0;
    robotState.mobileRobotPosition.mapId = "FactoryMap";
    robotState.mobileRobotPosition.localized = true;
    robotState.mobileRobotPosition.localizationScore = 100.0;
    robotState.mobileRobotPosition.deviationRange = 0.0;

    robotState.velocity.vx = 0.0;
    robotState.velocity.vy = 0.0;
    robotState.velocity.omega = 0.0;

    robotState.powerSupply.stateOfCharge = 96.5;
    robotState.powerSupply.charging = false;

    robotState.safetyState.activeEmergencyStop = "NONE";
    robotState.safetyState.fieldViolation = false;

    agv.setState(robotState);

    state currentState = agv.getState();
    QJsonDocument jsonDoc(currentState.toJson());

    qDebug().noquote() << "";
    qDebug().noquote() << "========== STATE JSON ==========";
    qDebug().noquote() << jsonDoc.toJson(QJsonDocument::Indented);

    //==================================================
    // VDA5050 ORDER MESSAGE TEST
    //==================================================
    order robotOrder;
    robotOrder.headerId = 2;
    robotOrder.timestamp = "2026-07-16T10:35:00Z";
    robotOrder.version = "3.0.0";
    robotOrder.manufacturer = "MODOYA";
    robotOrder.serialNumber = "AGV_01";
    robotOrder.orderId = "ORDER_001";
    robotOrder.orderUpdateId = 0;
    robotOrder.orderDescription = "Move AGV through factory";

    QJsonDocument orderDoc(robotOrder.toJson());
    qDebug().noquote() << "";
    qDebug().noquote() << "========== ORDER MESSAGE JSON ==========";
    qDebug().noquote() << orderDoc.toJson(QJsonDocument::Indented);

    //==================================================
    // VDA5050 INSTANT ACTION MESSAGE TEST
    //==================================================
    instantAction robotAction;
    robotAction.headerId = 3;
    robotAction.timestamp = "2026-07-16T10:40:00Z";
    robotAction.version = "3.0.0";
    robotAction.manufacturer = "MODOYA";
    robotAction.serialNumber = "AGV_01";

    QJsonDocument actionDoc(robotAction.toJson());
    qDebug().noquote() << "";
    qDebug().noquote() << "========== INSTANT ACTION MESSAGE JSON ==========";
    qDebug().noquote() << actionDoc.toJson(QJsonDocument::Indented);

    //==================================================
    // VDA5050 RESPONSE MESSAGE TEST
    //==================================================
    responseMessage robotResponse;
    robotResponse.headerId = 4;
    robotResponse.timestamp = "2026-07-16T10:45:00Z";
    robotResponse.version = "3.0.0";
    robotResponse.manufacturer = "MODOYA";
    robotResponse.serialNumber = "AGV_01";

    response responseObject;
    responseObject.requestId = "REQUEST_001";
    responseObject.grantType = "ACCEPTED";
    responseObject.leaseExpiry = "2026-07-16T11:00:00Z";

    robotResponse.responses.append(responseObject);

    QJsonDocument responseDoc(robotResponse.toJson());
    qDebug().noquote() << "";
    qDebug().noquote() << "========== RESPONSE MESSAGE JSON ==========";
    qDebug().noquote() << responseDoc.toJson(QJsonDocument::Indented);

    //==================================================
    // VDA5050 ZONESET MESSAGE TEST
    //==================================================
    zoneSet robotZoneSet;
    robotZoneSet.headerId = 5;
    robotZoneSet.timestamp = "2026-07-16T10:50:00Z";
    robotZoneSet.version = "3.0.0";
    robotZoneSet.manufacturer = "MODOYA";
    robotZoneSet.serialNumber = "AGV_01";
    robotZoneSet.zoneSetId = "ZONESET_001";
    robotZoneSet.mapId = "FactoryMap";
    robotZoneSet.zoneSetStatus = "ACTIVE";
    robotZoneSet.zoneSetVersion = "1.0";
    robotZoneSet.zoneSetDescription = "Factory restricted and speed zones";

    QJsonDocument zoneSetDoc(robotZoneSet.toJson());
    qDebug().noquote() << "";
    qDebug().noquote() << "========== ZONESET MESSAGE JSON ==========";
    qDebug().noquote() << zoneSetDoc.toJson(QJsonDocument::Indented);

    //==================================================
    // VDA5050 CONNECTION MESSAGE TEST
    //==================================================
    connection robotConnection;
    robotConnection.headerId = 6;
    robotConnection.timestamp = "2026-07-16T11:00:00Z";
    robotConnection.version = "3.0.0";
    robotConnection.manufacturer = "MODOYA";
    robotConnection.serialNumber = "AGV_01";
    robotConnection.connectionState = "ONLINE";

    QJsonDocument connectionDoc(robotConnection.toJson());
    qDebug().noquote() << "";
    qDebug().noquote() << "========== CONNECTION MESSAGE JSON ==========";
    qDebug().noquote() << connectionDoc.toJson(QJsonDocument::Indented);

    //==================================================
    // VDA5050 VISUALIZATION MESSAGE TEST
    //==================================================
    visualization robotVisualization;
    robotVisualization.headerId = 7;
    robotVisualization.timestamp = "2026-07-16T11:05:00Z";
    robotVisualization.version = "3.0.0";
    robotVisualization.manufacturer = "MODOYA";
    robotVisualization.serialNumber = "AGV_01";
    robotVisualization.referenceStateHeaderId = 1;

    robotVisualization.mobileRobotPosition.x = 12.5;
    robotVisualization.mobileRobotPosition.y = 8.3;
    robotVisualization.mobileRobotPosition.theta = 1.57;
    robotVisualization.mobileRobotPosition.mapId = "FactoryMap";

    robotVisualization.velocity.vx = 0.0;
    robotVisualization.velocity.vy = 0.0;
    robotVisualization.velocity.omega = 0.0;

    QJsonDocument visualizationDoc(robotVisualization.toJson());
    qDebug().noquote() << "";
    qDebug().noquote() << "========== VISUALIZATION MESSAGE JSON ==========";
    qDebug().noquote() << visualizationDoc.toJson(QJsonDocument::Indented);

    //==================================================
    // VDA5050 FACTSHEET MESSAGE TEST
    //==================================================
    factsheet robotFactsheet;
    robotFactsheet.headerId = 8;
    robotFactsheet.timestamp = "2026-07-16T11:10:00Z";
    robotFactsheet.version = "3.0.0";
    robotFactsheet.manufacturer = "MODOYA";
    robotFactsheet.serialNumber = "AGV_01";

    QJsonDocument factsheetDoc(robotFactsheet.toJson());
    qDebug().noquote() << "";
    qDebug().noquote() << "========== FACTSHEET MESSAGE JSON ==========";
    qDebug().noquote() << factsheetDoc.toJson(QJsonDocument::Indented);

    //==================================================
    // MQTT CLIENT INTEGRATION
    //==================================================
    MQTTClient mqttClient;

    mqttClient.setAGV(&agv);
    agv.setMQTTClient(&mqttClient);

    QObject::connect(&mqttClient, &MQTTClient::connected, [&]() {
        qDebug() << "[MAIN] MQTT Broker ile bağlantı kuruldu.";
        mqttClient.publishState(agv.getState());
    });

    mqttClient.connectToBroker();

    return a.exec();
}