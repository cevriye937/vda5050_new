#include "responsemessage.h"

#include <QJsonArray>

responseMessage::responseMessage()
{
    headerId = 0;

    timestamp = "";

    version = "";

    manufacturer = "";

    serialNumber = "";
}

QJsonObject responseMessage::toJson() const
{
    QJsonObject json;

    //==================================================
    // VDA5050 Response Message
    //==================================================

    json["headerId"] = static_cast<int>(headerId);
    json["timestamp"] = timestamp;
    json["version"] = version;
    json["manufacturer"] = manufacturer;
    json["serialNumber"] = serialNumber;

    QJsonArray responseArray;

    for (const response &item : responses)
    {
        responseArray.append(item.toJson());
    }

    json["responses"] = responseArray;

    return json;
}

void responseMessage::fromJson(const QJsonObject &json)
{
    headerId = json["headerId"].toInt();

    timestamp = json["timestamp"].toString();

    version = json["version"].toString();

    manufacturer = json["manufacturer"].toString();

    serialNumber = json["serialNumber"].toString();

    responses.clear();

    QJsonArray responseArray = json["responses"].toArray();

    for (const QJsonValue &value : responseArray)
    {
        response r;
        r.fromJson(value.toObject());
        responses.append(r);
    }
}