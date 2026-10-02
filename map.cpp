#include "map.h"

#include <QJsonObject>

map::map()
{
    mapId = "";

    mapVersion = "";

    mapStatus = "";

    mapDescriptor = "";
}

QJsonObject map::toJson() const
{
    QJsonObject json;

    json["mapId"] = mapId;
    json["mapVersion"] = mapVersion;
    json["mapStatus"] = mapStatus;
    json["mapDescriptor"] = mapDescriptor;

    return json;
}