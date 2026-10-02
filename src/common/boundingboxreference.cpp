#include "boundingboxreference.h"

boundingBoxReference::boundingBoxReference()
{
    x = 0.0;

    y = 0.0;

    z = 0.0;

    theta = 0.0;
}

QJsonObject boundingBoxReference::toJson() const
{
    QJsonObject json;

    json["x"] = x;
    json["y"] = y;
    json["z"] = z;
    json["theta"] = theta;

    return json;
}