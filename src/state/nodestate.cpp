#include "nodestate.h"

#include <QJsonObject>

nodeState::nodeState()
{
    nodeId = "";

    sequenceId = 0;

    nodeDescriptor = "";

    released = false;
}

QJsonObject nodeState::toJson() const
{
    QJsonObject json;

    json["nodeId"] = nodeId;
    json["sequenceId"] = static_cast<int>(sequenceId);
    json["nodeDescriptor"] = nodeDescriptor;
    json["released"] = released;
    json["nodePosition"] = nodePosition.toJson();

    return json;
}