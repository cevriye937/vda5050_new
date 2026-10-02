#ifndef NODESTATE_H
#define NODESTATE_H

#include <QString>
#include <QJsonObject>

#include "nodeposition.h"

class nodeState
{
public:
    nodeState();

    //==================================================
    // VDA5050 State Message -> nodeState
    //==================================================

    QString nodeId;

    quint32 sequenceId;

    QString nodeDescriptor;

    bool released;

    nodePosition nodePosition;

    QJsonObject toJson() const;
};

#endif // NODESTATE_H