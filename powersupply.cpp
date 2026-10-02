#include "powersupply.h"
#include <QJsonObject>
powerSupply::powerSupply()
{
    stateOfCharge = 0.0;

    batteryVoltage = 0.0;

    batteryCurrent = 0.0;

    batteryHealth = 100;

    charging = false;

    range = 0;
}
QJsonObject powerSupply::toJson() const
{
    QJsonObject json;

    json["stateOfCharge"] = stateOfCharge;
    json["batteryVoltage"] = batteryVoltage;
    json["batteryCurrent"] = batteryCurrent;
    json["batteryHealth"] = batteryHealth;
    json["charging"] = charging;
    json["range"] = static_cast<int>(range);

    return json;
}