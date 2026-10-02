#ifndef ACTION_H
#define ACTION_H

#include <QString>
#include <QList>
#include <QJsonObject>

#include "actionparameter.h"

class action
{
public:
    action();

    //==================================================
    // VDA5050 Action
    //==================================================

    QString actionType;

    QString actionId;

    QString actionDescriptor;

    QString blockingType;

    QList<actionParameter> actionParameters;

    bool retriable;

    QJsonObject toJson() const;

    void fromJson(const QJsonObject &json);
};

#endif // ACTION_H