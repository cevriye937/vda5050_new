#ifndef MAP_H
#define MAP_H

#include <QString>
#include <QJsonObject>

class map
{
public:
    map();

    //==================================================
    // VDA5050 State Message -> map
    //==================================================

    QString mapId;

    QString mapVersion;

    QString mapStatus;

    QString mapDescriptor;

    QJsonObject toJson() const;
};

#endif // MAP_H