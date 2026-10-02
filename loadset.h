#ifndef LOADSET_H
#define LOADSET_H

#include <QString>
#include <QStringList>
#include <QJsonObject>

#include "boundingboxreference.h"
#include "loaddimensions.h"

class loadSet
{
public:
    loadSet();

    //==================================================
    // VDA5050 Factsheet Message
    // -> loadSpecification
    // -> loadSets[]
    //==================================================

    QString setName;

    QString loadType;

    QStringList loadPositions;

    boundingBoxReference boundingBoxReference;

    loadDimensions loadDimensions;

    double maximumWeight;

    double minimumLoadhandlingHeight;

    double maximumLoadhandlingHeight;

    double minimumLoadhandlingDepth;

    double maximumLoadhandlingDepth;

    double minimumLoadhandlingTilt;

    double maximumLoadhandlingTilt;

    double maximumSpeed;

    double maximumAcceleration;

    double maximumDeceleration;

    double pickTime;

    double dropTime;

    QString description;

    QJsonObject toJson() const;
};

#endif // LOADSET_H