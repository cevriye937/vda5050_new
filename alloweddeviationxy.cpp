#include "alloweddeviationxy.h"

allowedDeviationXY::allowedDeviationXY()
{
    a = 0.0;
    b = 0.0;
    theta = 0.0;
}

QJsonObject allowedDeviationXY::toJson() const
{
    QJsonObject json;

    json["a"] = a;
    json["b"] = b;
    json["theta"] = theta;

    return json;
}

void allowedDeviationXY::fromJson(const QJsonObject &json)
{
    a = json["a"].toDouble();
    b = json["b"].toDouble();
    theta = json["theta"].toDouble();
}