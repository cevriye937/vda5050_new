#ifndef MOBILEROBOTGEOMETRY_H
#define MOBILEROBOTGEOMETRY_H

#include <QList>
#include <QJsonObject>

#include "wheeldefinition.h"
#include "envelope2d.h"
#include "envelope3d.h"

class mobileRobotGeometry
{
public:
    mobileRobotGeometry();

    //==================================================
    // VDA5050 Factsheet Message
    // -> mobileRobotGeometry
    //==================================================

    QList<wheelDefinition> wheelDefinitions;

    QList<envelope2d> envelopes2d;

    QList<envelope3d> envelopes3d;

    QJsonObject toJson() const;
};

#endif // MOBILEROBOTGEOMETRY_H