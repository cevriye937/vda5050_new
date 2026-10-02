#include "physicalparameters.h"

#include <QJsonObject>

physicalParameters::physicalParameters()
{
    minimumSpeed = 0.0;

    maximumSpeed = 0.0;

    minimumAngularSpeed = 0.0;

    maximumAngularSpeed = 0.0;

    maximumAcceleration = 0.0;

    maximumDeceleration = 0.0;

    minimumHeight = 0.0;

    maximumHeight = 0.0;

    width = 0.0;

    length = 0.0;
}

QJsonObject physicalParameters::toJson() const
{
    QJsonObject json;

    json["minimumSpeed"] = minimumSpeed;
    json["maximumSpeed"] = maximumSpeed;
    json["minimumAngularSpeed"] = minimumAngularSpeed;
    json["maximumAngularSpeed"] = maximumAngularSpeed;
    json["maximumAcceleration"] = maximumAcceleration;
    json["maximumDeceleration"] = maximumDeceleration;
    json["minimumHeight"] = minimumHeight;
    json["maximumHeight"] = maximumHeight;
    json["width"] = width;
    json["length"] = length;

    return json;
}