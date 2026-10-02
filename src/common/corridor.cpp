#include "corridor.h"

corridor::corridor()
{
    leftWidth = 0.0;

    rightWidth = 0.0;

    corridorReferencePoint = "KINEMATIC_CENTER";

    releaseRequired = false;

    releaseLossBehavior = "STOP";
}

QJsonObject corridor::toJson() const
{
    QJsonObject json;

    json["leftWidth"] = leftWidth;
    json["rightWidth"] = rightWidth;
    json["corridorReferencePoint"] = corridorReferencePoint;
    json["releaseRequired"] = releaseRequired;
    json["releaseLossBehavior"] = releaseLossBehavior;

    return json;
}

void corridor::fromJson(const QJsonObject &json)
{
    leftWidth = json["leftWidth"].toDouble();

    rightWidth = json["rightWidth"].toDouble();

    corridorReferencePoint =
        json["corridorReferencePoint"].toString();

    releaseRequired =
        json["releaseRequired"].toBool();

    releaseLossBehavior =
        json["releaseLossBehavior"].toString();
}