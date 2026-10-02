#include "edgestate.h"

#include <QJsonObject>

edgeState::edgeState()
{
    edgeId = "";

    sequenceId = 0;

    edgeDescriptor = "";

    released = false;

    edgeStatus = "WAITING";
}

QJsonObject edgeState::toJson() const
{
    QJsonObject json;

    json["edgeId"] = edgeId;
    json["sequenceId"] = static_cast<int>(sequenceId);
    json["edgeDescriptor"] = edgeDescriptor;
    json["released"] = released;
    json["trajectory"] = trajectory.toJson();
    json["edgeStatus"] = edgeStatus;

    return json;
}