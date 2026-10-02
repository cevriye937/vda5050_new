#include "mobilerobotconfiguration.h"

#include <QJsonObject>
#include <QJsonArray>

mobileRobotConfiguration::mobileRobotConfiguration()
{
}

QJsonObject mobileRobotConfiguration::toJson() const
{
    QJsonObject json;

    QJsonArray versionsArray;

    for (const versionInfo &version : versions)
    {
        versionsArray.append(version.toJson());
    }

    json["versions"] = versionsArray;

    json["network"] = network.toJson();

    json["batteryCharging"] = batteryCharging.toJson();

    return json;
}