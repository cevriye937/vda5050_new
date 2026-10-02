#ifndef VISUALIZATION_H
#define VISUALIZATION_H

#include <QString>
#include <QJsonObject>


#include "plannedpath.h"
#include "intermediatepath.h"
#include "mobilerobotposition.h"
#include "velocity.h"


class visualization
{
public:

    visualization();


    //==================================================
    // VDA5050 Visualization Message
    //==================================================


    quint32 headerId;

    QString timestamp;

    QString version;

    QString manufacturer;

    QString serialNumber;

    quint32 referenceStateHeaderId;


    plannedPath plannedPath;

    intermediatePath intermediatePath;

    mobileRobotPosition mobileRobotPosition;

    velocity velocity;


    QJsonObject toJson() const;

};


#endif // VISUALIZATION_H