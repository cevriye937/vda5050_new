#ifndef SAFETYSTATE_H
#define SAFETYSTATE_H

#include <QString>
#include <QJsonObject>


class safetyState
{
public:

    safetyState();


    //==================================================
    // VDA5050 State Message -> safetyState
    //==================================================


    QString activeEmergencyStop;

    bool fieldViolation;


    QJsonObject toJson() const;

};


#endif // SAFETYSTATE_H