#include "batterycharging.h"

batteryCharging::batteryCharging()
{
    criticalLowChargingLevel = 0.0;

    maximumDesiredChargingLevel = 100.0;

    minimumDesiredChargingLevel = 0.0;

    minimumChargingTime = 0;
}

QJsonObject batteryCharging::toJson() const
{
    QJsonObject json;

    json["criticalLowChargingLevel"] = criticalLowChargingLevel;
    json["maximumDesiredChargingLevel"] = maximumDesiredChargingLevel;
    json["minimumDesiredChargingLevel"] = minimumDesiredChargingLevel;
    json["minimumChargingTime"] = static_cast<int>(minimumChargingTime);

    return json;
}