#include "load.h"

#include <QJsonObject>

load::load()
{
    loadId = "";

    loadType = "";

    loadPosition = "";

    weight = 0.0;
}

QJsonObject load::toJson() const
{
    QJsonObject json;

    json["loadId"] = loadId;
    json["loadType"] = loadType;
    json["loadPosition"] = loadPosition;
    json["boundingBoxReference"] = boundingBoxReference.toJson();
    json["loadDimensions"] = loadDimensions.toJson();
    json["weight"] = weight;

    return json;
}