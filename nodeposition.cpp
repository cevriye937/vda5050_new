#include "nodeposition.h"

nodePosition::nodePosition()
{
    x = 0.0;
    y = 0.0;
    theta = 0.0;

    allowedDeviationTheta = 0.0;

    mapId = "";
}

QJsonObject nodePosition::toJson() const
{
    QJsonObject json;

    json["x"] = x;
    json["y"] = y;
    json["theta"] = theta;
    json["mapId"] = mapId;
    json["allowedDeviationXY"] = allowedDeviationXY.toJson();
    json["allowedDeviationTheta"] = allowedDeviationTheta;

    return json;
}

void nodePosition::fromJson(const QJsonObject &json)
{
    x = json["x"].toDouble();
    y = json["y"].toDouble();
    theta = json["theta"].toDouble();

    mapId = json["mapId"].toString();

    allowedDeviationTheta =
        json["allowedDeviationTheta"].toDouble();

    if (json.contains("allowedDeviationXY") &&
        json["allowedDeviationXY"].isObject())
    {
        allowedDeviationXY.fromJson(
            json["allowedDeviationXY"].toObject());
    }
}