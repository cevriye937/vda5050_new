#ifndef ZONESET_H
#define ZONESET_H

#include <QString>
#include <QList>
#include <QJsonObject>

#include "zone.h"

class zoneSet
{
public:

    zoneSet();

    //==================================================
    // VDA5050 ZoneSet Message
    //==================================================

    // Header
    quint32 headerId;

    QString timestamp;

    QString version;

    QString manufacturer;

    QString serialNumber;

    // ZoneSet Information
    QString zoneSetId;

    QString mapId;

    QString zoneSetStatus;

    QString zoneSetVersion;

    QString zoneSetDescription;

    // Zones
    QList<zone> zones;

    // JSON
    QJsonObject toJson() const;

    void fromJson(const QJsonObject &json);
};

#endif // ZONESET_H