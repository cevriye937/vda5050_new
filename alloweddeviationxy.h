#ifndef ALLOWEDDEVIATIONXY_H
#define ALLOWEDDEVIATIONXY_H

#include <QJsonObject>

class allowedDeviationXY
{
public:
    allowedDeviationXY();

    //==================================================
    // VDA5050 allowedDeviationXY
    //==================================================

    double a;

    double b;

    double theta;

    QJsonObject toJson() const;

    void fromJson(const QJsonObject &json);
};

#endif // ALLOWEDDEVIATIONXY_H