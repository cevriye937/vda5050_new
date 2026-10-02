#include "zonesetdefinition.h"

#include <QJsonArray>


zoneSetDefinition::zoneSetDefinition()
{

    mapId = "";

    zoneSetId = "";

    zoneSetDescriptor = "";

}



QJsonObject zoneSetDefinition::toJson() const
{
    QJsonObject json;


    //==================================================
    // VDA5050 ZoneSet Definition
    //==================================================


    json["mapId"] = mapId;

    json["zoneSetId"] = zoneSetId;

    json["zoneSetDescriptor"] = zoneSetDescriptor;



    QJsonArray zoneArray;


    for(const zone &item : zones)
    {
        zoneArray.append(item.toJson());
    }


    json["zones"] = zoneArray;



    return json;
}