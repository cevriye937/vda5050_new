#ifndef EDGESTATE_H
#define EDGESTATE_H

#include <QString>
#include <QJsonObject>

#include "trajectory.h"

class edgeState
{
public:
    edgeState();

    //==================================================
    // VDA5050 State Message -> edgeState
    //==================================================

    QString edgeId;

    quint32 sequenceId;

    QString edgeDescriptor;

    bool released;

    trajectory trajectory;

    QString edgeStatus;

    QJsonObject toJson() const;
};

#endif // EDGESTATE_H