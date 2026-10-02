#include "edgerequest.h"

#include <QJsonObject>

edgeRequest::edgeRequest()
{
    requestId = "";

    requestType = "";

    edgeId = "";

    sequenceId = 0;

    requestStatus = "";
}

QJsonObject edgeRequest::toJson() const
{
    QJsonObject json;

    json["requestId"] = requestId;
    json["requestType"] = requestType;
    json["edgeId"] = edgeId;
    json["sequenceId"] = static_cast<int>(sequenceId);
    json["requestStatus"] = requestStatus;

    return json;
}