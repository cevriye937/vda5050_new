#ifndef NODE_H
#define NODE_H

#include <QString>
#include <QList>
#include <QJsonObject>

#include "nodeposition.h"
#include "action.h"

class node
{
public:
    node();

    //==================================================
    // VDA5050 Node
    //==================================================

    QString nodeId;

    quint32 sequenceId;

    QString nodeDescriptor;

    bool released;

    nodePosition nodePosition;

    QList<action> actions;

    // JSON
    QJsonObject toJson() const;

    void fromJson(const QJsonObject &json);
};

#endif // NODE_H