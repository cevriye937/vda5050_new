#ifndef INTERMEDIATEPATH_H
#define INTERMEDIATEPATH_H

#include <QList>
#include <QJsonObject>

#include "waypoint.h"

class intermediatePath
{
public:
    intermediatePath();

    //==================================================
    // VDA5050 State Message -> intermediatePath
    //==================================================

    QList<waypoint> polyline;

    QJsonObject toJson() const;
};

#endif // INTERMEDIATEPATH_H