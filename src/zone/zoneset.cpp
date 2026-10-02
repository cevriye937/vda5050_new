#include "zoneset.h"

#include <QJsonArray>

zoneSet::zoneSet()
{
    //==================================================
    // Header
    //==================================================

    headerId = 0;

    timestamp = "";

    version = "";

    manufacturer = "";

    serialNumber = "";

    //==================================================
    // ZoneSet Information
    //==================================================

    zoneSetId = "";

    mapId = "";

    zoneSetStatus = "";

    zoneSetVersion = "";

    zoneSetDescription = "";
}

QJsonObject zoneSet::toJson() const
{
    QJsonObject json;

    //==================================================
    // Header
    //==================================================

    json["headerId"] = static_cast<int>(headerId);
    json["timestamp"] = timestamp;
    json["version"] = version;
    json["manufacturer"] = manufacturer;
    json["serialNumber"] = serialNumber;

    //==================================================
    // ZoneSet Information
    //==================================================

    json["zoneSetId"] = zoneSetId;
    json["mapId"] = mapId;
    json["zoneSetStatus"] = zoneSetStatus;
    json["zoneSetVersion"] = zoneSetVersion;
    json["zoneSetDescription"] = zoneSetDescription;

    //==================================================
    // Zones
    //==================================================

    QJsonArray zoneArray;

    for (const zone &item : zones)
    {
        zoneArray.append(item.toJson());
    }

    json["zones"] = zoneArray;

    return json;
}

void zoneSet::fromJson(const QJsonObject &json)
{
    //==================================================
    // Header
    //==================================================

    headerId = json["headerId"].toInt();
    timestamp = json["timestamp"].toString();
    version = json["version"].toString();
    manufacturer = json["manufacturer"].toString();
    serialNumber = json["serialNumber"].toString();

    //==================================================
    // ZoneSet Information
    //==================================================

    zoneSetId = json["zoneSetId"].toString();
    mapId = json["mapId"].toString();
    zoneSetStatus = json["zoneSetStatus"].toString();
    zoneSetVersion = json["zoneSetVersion"].toString();
    zoneSetDescription = json["zoneSetDescription"].toString();

    //==================================================
    // Zones
    //==================================================

    zones.clear();

    QJsonArray zoneArray = json["zones"].toArray();

    for (const QJsonValue &value : zoneArray)
    {
        zone z;
        z.fromJson(value.toObject());
        zones.append(z);
    }
}