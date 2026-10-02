#ifndef EDGE_H
#define EDGE_H

#include <QString>
#include <QList>
#include <QJsonObject>

#include "trajectory.h"
#include "corridor.h"
#include "action.h"

class edge
{
public:
    edge();

    //==================================================
    // VDA5050 Order Message -> edge
    //==================================================

    QString edgeId;

    quint32 sequenceId;

    QString edgeDescriptor;

    bool released;

    double maximumSpeed;

    double maximumMobileRobotHeight;

    double minimumLoadHandlingDeviceHeight;

    double orientation;

    QString orientationType;

    QString direction;

    bool reachOrientationBeforeEntering;

    double maximumRotationSpeed;

    trajectory trajectory;

    double length;

    corridor corridor;

    QList<action> actions;

    QJsonObject toJson() const;

    void fromJson(const QJsonObject &json);
};

#endif // EDGE_H