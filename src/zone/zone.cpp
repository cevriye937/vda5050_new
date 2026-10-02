#include "zone.h"

#include <QJsonArray>


zone::zone()
{

    zoneId = "";

    zoneType = "";

    zoneDescriptor = "";


    maximumSpeed = 0.0;


    releaseLossBehavior = "";


    priorityFactor = 0.0;

    penaltyFactor = 0.0;


    direction = 0.0;


    directedLimitation = "";

    bidirectedLimitation = "";

}



QJsonObject zone::toJson() const
{
    QJsonObject json;


    //==================================================
    // VDA5050 Zone Object
    //==================================================


    json["zoneId"] = zoneId;

    json["zoneType"] = zoneType;

    json["zoneDescriptor"] = zoneDescriptor;



    // vertices[]

    QJsonArray vertexArray;

    for(const vertex &item : vertices)
    {
        vertexArray.append(item.toJson());
    }

    json["vertices"] = vertexArray;



    json["maximumSpeed"] = maximumSpeed;



    // entryActions[]

    QJsonArray entryActionArray;

    for(const zoneAction &item : entryActions)
    {
        entryActionArray.append(item.toJson());
    }

    json["entryActions"] = entryActionArray;



    // duringActions[]

    QJsonArray duringActionArray;

    for(const zoneAction &item : duringActions)
    {
        duringActionArray.append(item.toJson());
    }

    json["duringActions"] = duringActionArray;



    // exitActions[]

    QJsonArray exitActionArray;

    for(const zoneAction &item : exitActions)
    {
        exitActionArray.append(item.toJson());
    }

    json["exitActions"] = exitActionArray;



    json["releaseLossBehavior"] = releaseLossBehavior;


    json["priorityFactor"] = priorityFactor;


    json["penaltyFactor"] = penaltyFactor;


    json["direction"] = direction;


    json["directedLimitation"] = directedLimitation;


    json["bidirectedLimitation"] = bidirectedLimitation;



    return json;
}

void zone::fromJson(const QJsonObject &json)
{
    zoneId = json["zoneId"].toString();
    zoneType = json["zoneType"].toString();
    zoneDescriptor = json["zoneDescriptor"].toString();

    maximumSpeed = json["maximumSpeed"].toDouble();

    releaseLossBehavior = json["releaseLossBehavior"].toString();

    priorityFactor = json["priorityFactor"].toDouble();

    penaltyFactor = json["penaltyFactor"].toDouble();

    direction = json["direction"].toDouble();

    directedLimitation = json["directedLimitation"].toString();

    bidirectedLimitation = json["bidirectedLimitation"].toString();

    //--------------------------------------------------
    // vertices
    //--------------------------------------------------

    vertices.clear();

    QJsonArray vertexArray = json["vertices"].toArray();

    for (const QJsonValue &value : vertexArray)
    {
        vertex v;
        v.fromJson(value.toObject());
        vertices.append(v);
    }

    //--------------------------------------------------
    // entryActions
    //--------------------------------------------------

    entryActions.clear();

    QJsonArray entryArray = json["entryActions"].toArray();

    for (const QJsonValue &value : entryArray)
    {
        zoneAction action;
        action.fromJson(value.toObject());
        entryActions.append(action);
    }

    //--------------------------------------------------
    // duringActions
    //--------------------------------------------------

    duringActions.clear();

    QJsonArray duringArray = json["duringActions"].toArray();

    for (const QJsonValue &value : duringArray)
    {
        zoneAction action;
        action.fromJson(value.toObject());
        duringActions.append(action);
    }

    //--------------------------------------------------
    // exitActions
    //--------------------------------------------------

    exitActions.clear();

    QJsonArray exitArray = json["exitActions"].toArray();

    for (const QJsonValue &value : exitArray)
    {
        zoneAction action;
        action.fromJson(value.toObject());
        exitActions.append(action);
    }
}