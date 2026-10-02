#include "mobilerobotgeometry.h"

#include <QJsonObject>
#include <QJsonArray>

mobileRobotGeometry::mobileRobotGeometry()
{
}

QJsonObject mobileRobotGeometry::toJson() const
{
    QJsonObject json;

    // wheelDefinitions
    QJsonArray wheelDefinitionsArray;
    for (const wheelDefinition &wheel : wheelDefinitions)
    {
        wheelDefinitionsArray.append(wheel.toJson());
    }
    json["wheelDefinitions"] = wheelDefinitionsArray;

    // envelopes2d
    QJsonArray envelopes2dArray;
    for (const envelope2d &envelope : envelopes2d)
    {
        envelopes2dArray.append(envelope.toJson());
    }
    json["envelopes2d"] = envelopes2dArray;

    // envelopes3d
    QJsonArray envelopes3dArray;
    for (const envelope3d &envelope : envelopes3d)
    {
        envelopes3dArray.append(envelope.toJson());
    }
    json["envelopes3d"] = envelopes3dArray;

    return json;
}