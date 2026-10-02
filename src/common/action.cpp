#include "action.h"

#include <QJsonArray>

action::action()
{
    actionType = "";

    actionId = "";

    actionDescriptor = "";

    blockingType = "";

    retriable = false;
}

QJsonObject action::toJson() const
{
    QJsonObject json;

    json["actionType"] = actionType;
    json["actionId"] = actionId;
    json["actionDescriptor"] = actionDescriptor;
    json["blockingType"] = blockingType;

    QJsonArray parameterArray;

    for (const actionParameter &parameter : actionParameters)
    {
        parameterArray.append(parameter.toJson());
    }

    json["actionParameters"] = parameterArray;

    json["retriable"] = retriable;

    return json;
}

void action::fromJson(const QJsonObject &json)
{
    actionType = json["actionType"].toString();
    actionId = json["actionId"].toString();
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