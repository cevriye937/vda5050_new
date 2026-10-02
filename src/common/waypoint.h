#ifndef WAYPOINT_H
#define WAYPOINT_H

#include <QString>
#include <QJsonObject>


class waypoint
{
public:

    waypoint();


    //==================================================
    // VDA5050 State Message -> intermediatePath -> waypoint
    //==================================================


    double x;

    double y;

    double theta;

    QString eta;


    QJsonObject toJson() const;

};


#endif // WAYPOINT_H