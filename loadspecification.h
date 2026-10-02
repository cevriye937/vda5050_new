#ifndef LOADSPECIFICATION_H
#define LOADSPECIFICATION_H

#include <QStringList>
#include <QList>
#include <QJsonObject>

#include "loadset.h"

class loadSpecification
{
public:
    loadSpecification();

    //==================================================
    // VDA5050 Factsheet Message
    // -> loadSpecification
    //==================================================

    // Array of load positions / load handling devices
    QStringList loadPositions;

    // Array of load sets
    QList<loadSet> loadSets;

    QJsonObject toJson() const;
};

#endif // LOADSPECIFICATION_H