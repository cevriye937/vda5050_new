#ifndef INSTANTACTION_H
#define INSTANTACTION_H

#include <QString>
#include <QList>
#include <QJsonObject>

#include "action.h"

class instantAction
{
public:
    instantAction();

    //==================================================
    // VDA5050 InstantAction Message
    //==================================================

    // Header
    quint32 headerId;

    QString timestamp;

    QString version;

    QString manufacturer;

    QString serialNumber;

    // Actions
    QList<action> actions;

    // JSON
    QJsonObject toJson() const;

    void fromJson(const QJsonObject &json);
};

#endif // INSTANTACTION_H