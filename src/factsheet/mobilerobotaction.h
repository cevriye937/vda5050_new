#ifndef MOBILEROBOTACTION_H
#define MOBILEROBOTACTION_H

#include <QString>
#include <QStringList>
#include <QList>
#include <QJsonObject>

#include "actionparameter.h"

class mobileRobotAction
{
public:
    mobileRobotAction();

    //==================================================
    // VDA5050 Factsheet Message
    // -> protocolFeatures
    // -> mobileRobotActions[]
    //==================================================

    QString actionType;

    QString actionDescription;

    QStringList actionScopes;

    QList<actionParameter> actionParameters;

    QString actionResult;

    QStringList blockingTypes;

    bool pauseAllowed;

    bool cancelAllowed;

    QJsonObject toJson() const;
};

#endif // MOBILEROBOTACTION_H