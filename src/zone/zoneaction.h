#ifndef ZONEACTION_H
#define ZONEACTION_H

#include <QString>
#include <QList>
#include <QJsonObject>

#include "actionparameter.h"

class zoneAction
{
public:

    zoneAction();

    //==================================================
    // VDA5050 Zone Action
    //==================================================

    // Type of the action
    QString actionType;

    // Human-readable description
    QString actionDescriptor;

    // NONE, SINGLE, SOFT, HARD
    QString blockingType;

    // Parameters of the action
    QList<actionParameter> actionParameters;

    // Can the action be retried?
    bool retriable;

    QJsonObject toJson() const;

    void fromJson(const QJsonObject &json);
};

#endif // ZONEACTION_H