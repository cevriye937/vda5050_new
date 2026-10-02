#include "waypoint.h"


waypoint::waypoint()
{

    x = 0.0;

    y = 0.0;

    theta = 0.0;

    eta = "";

}



QJsonObject waypoint::toJson() const
{
    QJsonObject json;


    //==================================================
    // VDA5050 waypoint Object
    //==================================================


    json["x"] = x;

    json["y"] = y;

    json["theta"] = theta;

    json["eta"] = eta;


    return json;
}