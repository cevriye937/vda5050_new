#include "response.h"

response::response()
{
    requestId = "";

    grantType = "";

    leaseExpiry = "";
}

QJsonObject response::toJson() const
{
    QJsonObject json;

    //==================================================
    // VDA5050 Response Object
    //==================================================

    json["requestId"] = requestId;

    json["grantType"] = grantType;

    json["leaseExpiry"] = leaseExpiry;

    return json;
}

void response::fromJson(const QJsonObject &json)
{
    requestId = json["requestId"].toString();

    grantType = json["grantType"].toString();

    leaseExpiry = json["leaseExpiry"].toString();
}