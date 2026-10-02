#include "position.h"

#include <QJsonObject>

position::position()
{
    x = 0.0;

    y = 0.0;

    theta = 0.0;
}

QJsonObject position::toJson() const
{
    QJsonObject json;

    json["x"] = x;
    json["y"] = y;
    json["theta"] = theta;

    return json;
}