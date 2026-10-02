#include "trajectory.h"

#include <QJsonArray>

trajectory::trajectory()
{
    degree = 1;
}

QJsonObject trajectory::toJson() const
{
    QJsonObject json;

    json["degree"] = static_cast<int>(degree);

    QJsonArray knotArray;

    for (double knot : knotVector)
    {
        knotArray.append(knot);
    }

    json["knotVector"] = knotArray;

    QJsonArray controlPointArray;

    for (const controlPoint &point : controlPoints)
    {
        controlPointArray.append(point.toJson());
    }

    json["controlPoints"] = controlPointArray;

    return json;
}

void trajectory::fromJson(const QJsonObject &json)
{
    degree = json["degree"].toInt();

    knotVector.clear();

    QJsonArray knotArray = json["knotVector"].toArray();

    for (const QJsonValue &value : knotArray)
    {
        knotVector.append(value.toDouble());
    }

    controlPoints.clear();

    QJsonArray pointArray = json["controlPoints"].toArray();

    for (const QJsonValue &value : pointArray)
    {
        controlPoint point;
        point.fromJson(value.toObject());
        controlPoints.append(point);
    }
}