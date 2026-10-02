#ifndef VERTEX_H
#define VERTEX_H


#include <QJsonObject>


class vertex
{
public:

    vertex();


    //==================================================
    // VDA5050 Factsheet
    // mobileRobotGeometry -> envelopes2d -> vertices[]
    //==================================================


    double x;

    double y;


    QJsonObject toJson() const;

    void fromJson(const QJsonObject &json);

};


#endif // VERTEX_H