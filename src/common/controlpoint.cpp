#include "controlpoint.h"

controlPoint::controlPoint()
{
    x = 0.0;
    y = 0.0;
    weight = 1.0;
}

QJsonObject controlPoint::toJson() const
{
    QJsonObject json;

    json["x"] = x;
    json["y"] = y;
    json["weight"] = weight;

    return json;
}

void controlPoint::fromJson(const QJsonObject &json)
{
    x = json["x"].toDouble();
    y = json["y"].toDouble();
    weight = json["weight"].toDouble();
}