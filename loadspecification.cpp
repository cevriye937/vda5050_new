#include "loadspecification.h"

#include <QJsonObject>
#include <QJsonArray>

loadSpecification::loadSpecification()
{
}

QJsonObject loadSpecification::toJson() const
{
    QJsonObject json;

    // loadPositions
    QJsonArray loadPositionsArray;

    for (const QString &position : loadPositions)
    {
        loadPositionsArray.append(position);
    }

    json["loadPositions"] = loadPositionsArray;

    // loadSets
    QJsonArray loadSetsArray;

    for (const loadSet &set : loadSets)
    {
        loadSetsArray.append(set.toJson());
    }

    json["loadSets"] = loadSetsArray;

    return json;
}