#ifndef POWERSUPPLY_H
#define POWERSUPPLY_H

#include <QtGlobal>
#include <QJsonObject>
class powerSupply
{
public:
    powerSupply();

    // VDA5050 State Message -> powerSupply

    double stateOfCharge;

    double batteryVoltage;

    double batteryCurrent;

    qint8 batteryHealth;

    bool charging;

    quint32 range;

    QJsonObject toJson() const;
};

#endif // POWERSUPPLY_H