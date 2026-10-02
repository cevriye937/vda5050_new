#include "order.h"

#include <QJsonArray>

order::order()
{
    headerId = 0;

    timestamp = "";

    version = "";

    manufacturer = "";

    serialNumber = "";

    orderId = "";

    orderUpdateId = 0;

    orderDescription = "";
}

QJsonObject order::toJson() const
{
    QJsonObject json;

    // Header
    json["headerId"] = static_cast<int>(headerId);
    json["timestamp"] = timestamp;
    json["version"] = version;
    json["manufacturer"] = manufacturer;
    json["serialNumber"] = serialNumber;

    // Order
    json["orderId"] = orderId;
    json["orderUpdateId"] = static_cast<int>(orderUpdateId);
    json["orderDescription"] = orderDescription;

    // Nodes
    QJsonArray nodeArray;

    for (const node &n : nodes)
    {
        nodeArray.append(n.toJson());
    }

    json["nodes"] = nodeArray;

    // Edges
    QJsonArray edgeArray;

    for (const edge &e : edges)
    {
        edgeArray.append(e.toJson());
    }

    json["edges"] = edgeArray;

    return json;
}

void order::fromJson(const QJsonObject &json)
{
    // Header
    headerId = json["headerId"].toInt();
    timestamp = json["timestamp"].toString();
    version = json["version"].toString();
    manufacturer = json["manufacturer"].toString();
    serialNumber = json["serialNumber"].toString();

    // Order
    orderId = json["orderId"].toString();
    orderUpdateId = json["orderUpdateId"].toInt();
    orderDescription = json["orderDescription"].toString();

    // Nodes
    nodes.clear();

    QJsonArray nodeArray = json["nodes"].toArray();

    for (const QJsonValue &value : nodeArray)
    {
        node n;
        n.fromJson(value.toObject());
        nodes.append(n);
    }

    // Edges
    edges.clear();

    QJsonArray edgeArray = json["edges"].toArray();

    for (const QJsonValue &value : edgeArray)
    {
        edge e;
        e.fromJson(value.toObject());
        edges.append(e);
    }
}
