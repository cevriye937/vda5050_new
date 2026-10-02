#ifndef PLANNEDPATH_H
#define PLANNEDPATH_H

#include <QStringList>
#include <QJsonObject>

#include "trajectory.h"

class plannedPath
{
public:
    plannedPath();

    //==================================================
    // VDA5050 State Message
    // -> plannedPath
    //==================================================

    trajectory trajectory;

    QStringList traversedNodes;

    QJsonObject toJson() const;
};

#endif // PLANNEDPATH_H