#ifndef BATTERYCHARGING_H
#define BATTERYCHARGING_H

#include <QtGlobal>
#include <QJsonObject>

class batteryCharging
{
public:
    batteryCharging();

    //==================================================
    // VDA5050 Factsheet Message
    // -> mobileRobotConfiguration
    // -> batteryCharging
    //==================================================

    double criticalLowChargingLevel;

    double maximumDesiredChargingLevel;

    double minimumDesiredChargingLevel;

    quint32 minimumChargingTime;

    QJsonObject toJson() const;
};

#endif // BATTERYCHARGING_H