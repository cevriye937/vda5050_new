#include "state.h"
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
state::state()
{
    headerId = 0;

    timestamp = "";

    version = "";

    manufacturer = "";

    serialNumber = "";

    orderId = "";

    orderUpdateId = 0;

    lastNodeId = "";

    lastNodeSequenceId = 0;

    driving = false;

    paused = false;

    newBaseRequest = false;

    distanceSinceLastNode = 0.0;

    operatingMode = OperatingMode::AUTOMATIC;
}

QJsonObject state::toJson() const
{
    QJsonObject json;

    //==================================================
    // Header
    //==================================================

    json["headerId"] = static_cast<int>(headerId);
    json["timestamp"] = timestamp;
    json["version"] = version;
    json["manufacturer"] = manufacturer;
    json["serialNumber"] = serialNumber;

    //==================================================
    // Maps
    //==================================================

    QJsonArray mapArray;

    for (const map &item : maps)
    {
        mapArray.append(item.toJson());
    }

    json["maps"] = mapArray;

    //==================================================
    // ZoneSets
    //==================================================

    QJsonArray zoneSetArray;

    for (const zoneSet &item : zoneSets)
    {
        zoneSetArray.append(item.toJson());
    }

    json["zoneSets"] = zoneSetArray;

    //==================================================
    // Order Information
    //==================================================

    json["orderId"] = orderId;
    json["orderUpdateId"] = static_cast<int>(orderUpdateId);
    json["lastNodeId"] = lastNodeId;
    json["lastNodeSequenceId"] = static_cast<int>(lastNodeSequenceId);

    //==================================================
    // NodeStates
    //==================================================

    QJsonArray nodeStateArray;

    for (const nodeState &item : nodeStates)
    {
        nodeStateArray.append(item.toJson());
    }

    json["nodeStates"] = nodeStateArray;

    //==================================================
    // EdgeStates
    //==================================================

    QJsonArray edgeStateArray;

    for (const edgeState &item : edgeStates)
    {
        edgeStateArray.append(item.toJson());
    }

    json["edgeStates"] = edgeStateArray;

    //==================================================
    // PlannedPath
    //==================================================

    json["plannedPath"] = plannedPath.toJson();

    //==================================================
    // IntermediatePath
    //==================================================

    json["intermediatePath"] = intermediatePath.toJson();

    //==================================================
    // MobileRobotPosition
    //==================================================

    json["mobileRobotPosition"] = mobileRobotPosition.toJson();

    //==================================================
    // Velocity
    //==================================================

    json["velocity"] = velocity.toJson();

    //==================================================
    // Loads
    //==================================================

    QJsonArray loadArray;

    for (const load &item : loads)
    {
        loadArray.append(item.toJson());
    }

    json["loads"] = loadArray;

    //==================================================
    // Driving State
    //==================================================

    json["driving"] = driving;
    json["paused"] = paused;
    json["newBaseRequest"] = newBaseRequest;

    //==================================================
    // ZoneRequests
    //==================================================

    QJsonArray zoneRequestArray;

    for (const zoneRequest &item : zoneRequests)
    {
        zoneRequestArray.append(item.toJson());
    }

    json["zoneRequests"] = zoneRequestArray;

    //==================================================
    // EdgeRequests
    //==================================================

    QJsonArray edgeRequestArray;

    for (const edgeRequest &item : edgeRequests)
    {
        edgeRequestArray.append(item.toJson());
    }

    json["edgeRequests"] = edgeRequestArray;

    //==================================================
    // Distance
    //==================================================

    json["distanceSinceLastNode"] = distanceSinceLastNode;

    //==================================================
    // ActionStates
    //==================================================

    QJsonArray actionStateArray;

    for (const actionState &item : actionStates)
    {
        actionStateArray.append(item.toJson());
    }

    json["actionStates"] = actionStateArray;

    //==================================================
    // InstantActionStates
    //==================================================

    QJsonArray instantActionArray;

    for (const actionState &item : instantActionStates)
    {
        instantActionArray.append(item.toJson());
    }

    json["instantActionStates"] = instantActionArray;

    //==================================================
    // ZoneActionStates
    //==================================================

    QJsonArray zoneActionArray;

    for (const actionState &item : zoneActionStates)
    {
        zoneActionArray.append(item.toJson());
    }

    json["zoneActionStates"] = zoneActionArray;

    //==================================================
    // PowerSupply
    //==================================================

    json["powerSupply"] = powerSupply.toJson();

    //==================================================
    // OperatingMode
    //==================================================

    json["operatingMode"] = operatingModeToString(operatingMode);

    //==================================================
    // Errors
    //==================================================

    QJsonArray errorArray;

    for (const error &item : errors)
    {
        errorArray.append(item.toJson());
    }

    json["errors"] = errorArray;

    //==================================================
    // Information
    //==================================================

    QJsonArray infoArray;

    for (const info &item : information)
    {
        infoArray.append(item.toJson());
    }

    json["information"] = infoArray;

    //==================================================
    // SafetyState
    //==================================================

    json["safetyState"] = safetyState.toJson();

    return json;
}