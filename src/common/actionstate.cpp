#include "actionstate.h"

actionState::actionState()
{
    actionId = "";

    actionType = "";

    actionDescriptor = "";

    actionStatus = "WAITING";

    actionResult = "";
}

QJsonObject actionState::toJson() const
{
    QJsonObject json;

    json["actionId"] = actionId;
    json["actionType"] = actionType;
    json["actionDescriptor"] = actionDescriptor;
    json["actionStatus"] = actionStatus;
    json["actionResult"] = actionResult;

    return json;
}