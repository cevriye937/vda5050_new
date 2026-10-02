#include "velocity.h"


velocity::velocity()
{

    vx = 0.0;

    vy = 0.0;

    omega = 0.0;

}



QJsonObject velocity::toJson() const
{
    QJsonObject json;


    //==================================================
    // VDA5050 velocity Object
    //==================================================


    json["vx"] = vx;

    json["vy"] = vy;

    json["omega"] = omega;


    return json;
}