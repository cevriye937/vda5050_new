#ifndef ZONESETDEFINITION_H
#define ZONESETDEFINITION_H

#include <QString>
#include <QList>
#include <QJsonObject>

#include "zone.h"


class zoneSetDefinition
{
public:

    zoneSetDefinition();


    //==================================================
    // VDA5050 ZoneSet Definition
    //==================================================


    QString mapId;

    QString zoneSetId;

    QString zoneSetDescriptor;


    QList<zone> zones;


    QJsonObject toJson() const;

};


#endif // ZONESETDEFINITION_H