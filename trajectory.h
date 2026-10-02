#ifndef TRAJECTORY_H
#define TRAJECTORY_H

#include <QList>
#include <QJsonObject>

#include "controlpoint.h"

class trajectory
{
public:
    trajectory();

    //==================================================
    // VDA5050 Edge -> trajectory
    //==================================================

    quint32 degree;

    QList<double> knotVector;

    QList<controlPoint> controlPoints;

    QJsonObject toJson() const;

    void fromJson(const QJsonObject &json);
};

#endif // TRAJECTORY_H