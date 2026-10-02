#include "mobilerobotaction.h"

#include <QJsonObject>
#include <QJsonArray>

mobileRobotAction::mobileRobotAction()
{
    actionType = "";

    actionDescription = "";

    actionResult = "";

    pauseAllowed = false;

    cancelAllowed = false;
}

QJsonObject mobileRobotAction::toJson() const
{
    QJsonObject json;

    json["actionType"] = actionType;

    json["actionDescription"] = actionDescription;

    QJsonArray scopesArray;
    for (const QString &scope : actionScopes)
    {
        scopesArray.append(scope);
    }
    json["actionScopes"] = scopesArray;

    QJsonArray parametersArray;
    for (const actionParameter &parameter : actionParameters)
    {
        parametersArray.append(parameter.toJson());
    }
    json["actionParameters"] = parametersArray;

    json["actionResult"] = actionResult;

    QJsonArray blockingTypesArray;
    for (const QString &blockingType : blockingTypes)
    {
        blockingTypesArray.append(blockingType);
    }
    json["blockingTypes"] = blockingTypesArray;

    json["pauseAllowed"] = pauseAllowed;

    json["cancelAllowed"] = cancelAllowed;

    return json;
}