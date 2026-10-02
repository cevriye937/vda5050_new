#ifndef MOBILEROBOTCONFIGURATION_H
#define MOBILEROBOTCONFIGURATION_H

#include <QList>
#include <QJsonObject>

#include "versioninfo.h"
#include "network.h"
#include "batterycharging.h"

class mobileRobotConfiguration
{
public:
    mobileRobotConfiguration();

    //==================================================
    // VDA5050 Factsheet Message
    // -> mobileRobotConfiguration
    //==================================================

    QList<versionInfo> versions;

    network network;

    batteryCharging batteryCharging;

    QJsonObject toJson() const;
};

#endif // MOBILEROBOTCONFIGURATION_H