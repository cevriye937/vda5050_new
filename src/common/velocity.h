#ifndef VELOCITY_H
#define VELOCITY_H

#include <QJsonObject>


class velocity
{
public:

    velocity();


    //==================================================
    // VDA5050 State Message -> velocity
    //==================================================


    double vx;

    double vy;

    double omega;


    QJsonObject toJson() const;

};


#endif // VELOCITY_H