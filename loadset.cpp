#include "loadset.h"

#include <QJsonObject>
#include <QJsonArray>

loadSet::loadSet()
{
    setName = "";

    loadType = "";

    maximumWeight = 0.0;

    minimumLoadhandlingHeight = 0.0;
    maximumLoadhandlingHeight = 0.0;

    minimumLoadhandlingDepth = 0.0;
    maximumLoadhandlingDepth = 0.0;

    minimumLoadhandlingTilt = 0.0;
    maximumLoadhandlingTilt = 0.0;

    maximumSpeed = 0.0;

    maximumAcceleration = 0.0;

    maximumDeceleration = 0.0;

    pickTime = 0.0;

    dropTime = 0.0;

    description = "";
}

QJsonObject loadSet::toJson() const
{
    QJsonObject json;

    json["setName"] = setName;
    json["loadType"] = loadType;

    QJsonArray loadPositionsArray;
    for (const QString &position : loadPositions)
    {
        loadPositionsArray.append(position);
    }

    json["loadPositions"] = loadPositionsArray;

    json["boundingBoxReference"] = boundingBoxReference.toJson();
    json["loadDimensions"] = loadDimensions.toJson();

    json["maximumWeight"] = maximumWeight;

    json["minimumLoadhandlingHeight"] = minimumLoadhandlingHeight;
    json["maximumLoadhandlingHeight"] = maximumLoadhandlingHeight;

    json["minimumLoadhandlingDepth"] = minimumLoadhandlingDepth;
    json["maximumLoadhandlingDepth"] = maximumLoadhandlingDepth;

    json["minimumLoadhandlingTilt"] = minimumLoadhandlingTilt;
    json["maximumLoadhandlingTilt"] = maximumLoadhandlingTilt;

    json["maximumSpeed"] = maximumSpeed;

    json["maximumAcceleration"] = maximumAcceleration;
    json["maximumDeceleration"] = maximumDeceleration;

    json["pickTime"] = pickTime;
    json["dropTime"] = dropTime;

    json["description"] = description;

    return json;
}