#include "protocolfeatures.h"

#include <QJsonObject>
#include <QJsonArray>

protocolFeatures::protocolFeatures()
{
}

QJsonObject protocolFeatures::toJson() const
{
    QJsonObject json;

    // optionalParameters
    QJsonArray optionalParametersArray;

    for (const optionalParameter &parameter : optionalParameters)
    {
        optionalParametersArray.append(parameter.toJson());
    }

    json["optionalParameters"] = optionalParametersArray;

    // mobileRobotActions
    QJsonArray mobileRobotActionsArray;

    for (const mobileRobotAction &action : mobileRobotActions)
    {
        mobileRobotActionsArray.append(action.toJson());
    }

    json["mobileRobotActions"] = mobileRobotActionsArray;

    return json;
}