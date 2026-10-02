#ifndef CONTROLPOINT_H
#define CONTROLPOINT_H

#include <QJsonObject>

class controlPoint
{
public:
    controlPoint();

    //==================================================
    // VDA5050 Trajectory -> controlPoint
    //==================================================

    double x;

    double y;

    double weight;

    QJsonObject toJson() const;

    void fromJson(const QJsonObject &json);
};

#endif // CONTROLPOINT_H