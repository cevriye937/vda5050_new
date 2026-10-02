#include "plannedpath.h"

#include <QJsonObject>
#include <QJsonArray>

plannedPath::plannedPath()
{
}

QJsonObject plannedPath::toJson() const
{
    QJsonObject json;

    json["trajectory"] = trajectory.toJson();

    QJsonArray traversedNodesArray;

    for (const QString &node : traversedNodes)
    {
        traversedNodesArray.append(node);
    }

    json["traversedNodes"] = traversedNodesArray;

    return json;
}