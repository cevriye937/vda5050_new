#ifndef LOADDIMENSIONS_H
#define LOADDIMENSIONS_H

#include <QJsonObject>

class loadDimensions
{
public:
    loadDimensions();

    //==================================================
    // VDA5050 LoadDimensions
    //
    // Used by:
    // - State Message -> loads[]
    // - Factsheet Message -> loadSpecification -> loadSet
    //==================================================

    double length;

    double width;

    double height;

    QJsonObject toJson() const;
};

#endif // LOADDIMENSIONS_H