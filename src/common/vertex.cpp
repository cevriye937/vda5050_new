#include "vertex.h"

vertex::vertex()
{
    x = 0.0;
    y = 0.0;
}

QJsonObject vertex::toJson() const
{
    QJsonObject json;

    //==================================================
    // VDA5050 vertex Object
    //==================================================

    json["x"] = x;
    json["y"] = y;

    return json;
}

void vertex::fromJson(const QJsonObject &json)
{
    x = json["x"].toDouble();
    y = json["y"].toDouble();
}