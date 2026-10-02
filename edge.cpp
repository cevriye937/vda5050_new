#include "edge.h"

#include <QJsonObject>
#include <QJsonArray>

edge::edge()
{
    edgeId = "";

    sequenceId = 0;

    edgeDescriptor = "";

    released = false;

    maximumSpeed = 0.0;

    maximumMobileRobotHeight = 0.0;

    minimumLoadHandlingDeviceHeight = 0.0;

    orientation = 0.0;

    // VDA5050 Default
    orientationType = "TANGENTIAL";

    direction = "";

    // VDA5050 Default
    reachOrientationBeforeEntering = false;

    maximumRotationSpeed = 0.0;

    length = 0.0;
}

QJsonObject edge::toJson() const
{
    QJsonObject json;

    json["edgeId"] = edgeId;
    json["sequenceId"] = static_cast<int>(sequenceId);
    json["edgeDescriptor"] = edgeDescriptor;
    json["released"] = released;
    json["maximumSpeed"] = maximumSpeed;
    json["maximumMobileRobotHeight"] = maximumMobileRobotHeight;
    json["minimumLoadHandlingDeviceHeight"] = minimumLoadHandlingDeviceHeight;
    json["orientation"] = orientation;
    json["orientationType"] = orientationType;
    json["direction"] = direction;
    json["reachOrientationBeforeEntering"] = reachOrientationBeforeEntering;
    json["maximumRotationSpeed"] = maximumRotationSpeed;

    json["trajectory"] = trajectory.toJson();

    json["length"] = length;

    json["corridor"] = corridor.toJson();

    QJsonArray actionArray;

    for (const action &a : actions)
    {
        actionArray.append(a.toJson());
    }

    json["actions"] = actionArray;

    return json;
}

void edge::fromJson(const QJsonObject &json)
{
    edgeId = json["edgeId"].toString();

    sequenceId = json["sequenceId"].toInt();

    edgeDescriptor = json["edgeDescriptor"].toString();

    released = json["released"].toBool();

    maximumSpeed = json["maximumSpeed"].toDouble();

    maximumMobileRobotHeight =
        json["maximumMobileRobotHeight"].toDouble();

    minimumLoadHandlingDeviceHeight =
        json["minimumLoadHandlingDeviceHeight"].toDouble();

    orientation = json["orientation"].toDouble();

    orientationType =
        json["orientationType"].toString();

    direction =
        json["direction"].toString();

    reachOrientationBeforeEntering =
        json["reachOrientationBeforeEntering"].toBool();

    maximumRotationSpeed =
        json["maximumRotationSpeed"].toDouble();

    length =
        json["length"].toDouble();

    actions.clear();

    QJsonArray actionArray =
        json["actions"].toArray();

    for(const QJsonValue &value : actionArray)
    {
        action a;
        a.fromJson(value.toObject());
        actions.append(a);
    }
    trajectory.fromJson(json["trajectory"].toObject());

    corridor.fromJson(json["corridor"].toObject());
}