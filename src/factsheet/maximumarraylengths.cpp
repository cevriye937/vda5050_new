#include "maximumarraylengths.h"

#include <QJsonObject>

//==================================================
// OrderArrayLengths
//==================================================

OrderArrayLengths::OrderArrayLengths()
{
    nodes = 0;
    edges = 0;
}

QJsonObject OrderArrayLengths::toJson() const
{
    QJsonObject json;

    json["nodes"] = static_cast<int>(nodes);
    json["edges"] = static_cast<int>(edges);

    return json;
}

//==================================================
// NodeArrayLengths
//==================================================

NodeArrayLengths::NodeArrayLengths()
{
    actions = 0;
}

QJsonObject NodeArrayLengths::toJson() const
{
    QJsonObject json;

    json["actions"] = static_cast<int>(actions);

    return json;
}

//==================================================
// EdgeArrayLengths
//==================================================

EdgeArrayLengths::EdgeArrayLengths()
{
    actions = 0;
}

QJsonObject EdgeArrayLengths::toJson() const
{
    QJsonObject json;

    json["actions"] = static_cast<int>(actions);

    return json;
}

//==================================================
// ActionsArrayLengths
//==================================================

ActionsArrayLengths::ActionsArrayLengths()
{
    actionsParameters = 0;
}

QJsonObject ActionsArrayLengths::toJson() const
{
    QJsonObject json;

    json["actionsParameters"] = static_cast<int>(actionsParameters);

    return json;
}

//==================================================
// TrajectoryArrayLengths
//==================================================

TrajectoryArrayLengths::TrajectoryArrayLengths()
{
    knotVector = 0;
    controlPoints = 0;
}

QJsonObject TrajectoryArrayLengths::toJson() const
{
    QJsonObject json;

    json["knotVector"] = static_cast<int>(knotVector);
    json["controlPoints"] = static_cast<int>(controlPoints);

    return json;
}

//==================================================
// ZoneSetArrayLengths
//==================================================

ZoneSetArrayLengths::ZoneSetArrayLengths()
{
    zones = 0;
}

QJsonObject ZoneSetArrayLengths::toJson() const
{
    QJsonObject json;

    json["zones"] = static_cast<int>(zones);

    return json;
}

//==================================================
// StateArrayLengths
//==================================================

StateArrayLengths::StateArrayLengths()
{
    nodeStates = 0;
    edgeStates = 0;
    loads = 0;
    actionStates = 0;
    instantActionStates = 0;
    zoneActionStates = 0;
    errors = 0;
    information = 0;
}

QJsonObject StateArrayLengths::toJson() const
{
    QJsonObject json;

    json["nodeStates"] = static_cast<int>(nodeStates);
    json["edgeStates"] = static_cast<int>(edgeStates);
    json["loads"] = static_cast<int>(loads);
    json["actionStates"] = static_cast<int>(actionStates);
    json["instantActionStates"] = static_cast<int>(instantActionStates);
    json["zoneActionStates"] = static_cast<int>(zoneActionStates);
    json["errors"] = static_cast<int>(errors);
    json["information"] = static_cast<int>(information);

    return json;
}

//==================================================
// ErrorArrayLengths
//==================================================

ErrorArrayLengths::ErrorArrayLengths()
{
    errorReferences = 0;
}

QJsonObject ErrorArrayLengths::toJson() const
{
    QJsonObject json;

    json["errorReferences"] = static_cast<int>(errorReferences);

    return json;
}

//==================================================
// InformationArrayLengths
//==================================================

InformationArrayLengths::InformationArrayLengths()
{
    infoReferences = 0;
}

QJsonObject InformationArrayLengths::toJson() const
{
    QJsonObject json;

    json["infoReferences"] = static_cast<int>(infoReferences);

    return json;
}

//==================================================
// maximumArrayLengths
//==================================================

maximumArrayLengths::maximumArrayLengths()
{
    instantActions = 0;
}

QJsonObject maximumArrayLengths::toJson() const
{
    QJsonObject json;

    json["order"] = order.toJson();
    json["node"] = node.toJson();
    json["edge"] = edge.toJson();
    json["actions"] = actions.toJson();
    json["instantActions"] = static_cast<int>(instantActions);
    json["trajectory"] = trajectory.toJson();
    json["zoneSet"] = zoneSet.toJson();
    json["state"] = state.toJson();
    json["error"] = error.toJson();
    json["information"] = information.toJson();

    return json;
}