#ifndef PHYSICALPARAMETERS_H
#define PHYSICALPARAMETERS_H

#include <QJsonObject>

class physicalParameters
{
public:
    physicalParameters();

    //==================================================
    // VDA5050 Factsheet Message
    // -> physicalParameters
    //==================================================

    double minimumSpeed;

    double maximumSpeed;

    double minimumAngularSpeed;

    double maximumAngularSpeed;

    double maximumAcceleration;

    double maximumDeceleration;

    double minimumHeight;

    double maximumHeight;

    double width;

    double length;

    QJsonObject toJson() const;
};

#endif // PHYSICALPARAMETERS_H