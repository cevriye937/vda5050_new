#ifndef ORDER_H
#define ORDER_H

#include <QString>
#include <QList>
#include <QJsonObject>

#include "node.h"
#include "edge.h"

class order
{
public:
    order();

    //==================================================
    // VDA5050 Order Message
    //==================================================

    // Header
    quint32 headerId;
    QString timestamp;
    QString version;
    QString manufacturer;
    QString serialNumber;

    // Order
    QString orderId;
    quint32 orderUpdateId;
    QString orderDescription;

    // Nodes
    QList<node> nodes;

    // Edges
    QList<edge> edges;

    QJsonObject toJson() const;

    void fromJson(const QJsonObject &json);

};

#endif // ORDER_H