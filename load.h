#ifndef LOAD_H
#define LOAD_H

#include <QString>
#include <QJsonObject>

#include "boundingboxreference.h"
#include "loaddimensions.h"

class load
{
public:
    load();

    //==================================================
    // VDA5050 State Message -> load
    //==================================================

    QString loadId;

    QString loadType;

    QString loadPosition;

    boundingBoxReference boundingBoxReference;

    loadDimensions loadDimensions;

    double weight;

    QJsonObject toJson() const;
};

#endif // LOAD_H