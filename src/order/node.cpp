#include "node.h"

#include <QJsonArray>

node::node()
{
    nodeId = "";

    sequenceId = 0;

    nodeDescriptor = "";

    released = false;
}

QJsonObject node::toJson() const
{
    QJsonObject json;

    json["nodeId"] = nodeId;
    json["sequenceId"] = static_cast<int>(sequenceId);
    json["nodeDescriptor"] = nodeDescriptor;
    json["released"] = released;

    // Node Position
    json["nodePosition"] = nodePosition.toJson();

    // Actions
    QJsonArray actionArray;

    for (const action &a : actions)
    {
        actionArray.append(a.toJson());
    }

    json["actions"] = actionArray;

    return json;
}

void node::fromJson(const QJsonObject &json)
{
    nodeId = json["nodeId"].toString();

    sequenceId = json["sequenceId"].toInt();

    nodeDescriptor = json["nodeDescriptor"].toString();

    released = json["released"].toBool();

    nodePosition.fromJson(json["nodePosition"].toObject());

    actions.clear();

    QJsonArray actionArray = json["actions"].toArray();

    for (const QJsonValue &value : actionArray)
    {
        action a;
        a.fromJson(value.toObject());
        actions.append(a);
    }
}