#include "zoneaction.h"

#include <QJsonArray>

zoneAction::zoneAction()
{
    actionType = "";

    actionDescriptor = "";

    blockingType = "";

    retriable = false;
}

QJsonObject zoneAction::toJson() const
{
    QJsonObject json;

    //==================================================
    // VDA5050 Zone Action Object
    //==================================================

    json["actionType"] = actionType;

    json["actionDescriptor"] = actionDescriptor;

    json["blockingType"] = blockingType;

    QJsonArray parameterArray;

    for (const actionParameter &item : actionParameters)
    {
        parameterArray.append(item.toJson());
    }

    json["actionParameters"] = parameterArray;

    json["retriable"] = retriable;

    return json;
}

void zoneAction::fromJson(const QJsonObject &json)
{
    actionType = json["actionType"].toString();

    actionDescriptor = json["actionDescriptor"].toString();

    blockingType = json["blockingType"].toString();

    retriable = json["retriable"].toBool();

    actionParameters.clear();

    QJsonArray parameterArray = json["actionParameters"].toArray();

    for (const QJsonValue &value : parameterArray)
    {
        actionParameter parameter;
        parameter.fromJson(value.toObject());
        actionParameters.append(parameter);
    }
}