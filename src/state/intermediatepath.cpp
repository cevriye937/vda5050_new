#include "intermediatepath.h"

#include <QJsonObject>
#include <QJsonArray>

intermediatePath::intermediatePath()
{
}

QJsonObject intermediatePath::toJson() const
{
    QJsonObject json;

    QJsonArray polylineArray;

    for (const waypoint &point : polyline)
    {
        polylineArray.append(point.toJson());
    }

    json["polyline"] = polylineArray;

    return json;
}