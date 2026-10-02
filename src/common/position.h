#ifndef POSITION_H
#define POSITION_H

#include <QJsonObject>

class position
{
public:
    position();

    //==================================================
    // VDA5050 Factsheet Message
    // -> mobileRobotGeometry
    // -> wheelDefinitions
    // -> position
    //==================================================

    double x;

    double y;

    double theta;

    QJsonObject toJson() const;
};

#endif // POSITION_H