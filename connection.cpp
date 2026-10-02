#include "connection.h"

connection::connection()
{
    headerId = 0;

    timestamp = "";

    version = "";

    manufacturer = "";

    serialNumber = "";

    connectionState = "ONLINE";
}

QJsonObject connection::toJson() const
{
    QJsonObject json;

    json["headerId"] = static_cast<int>(headerId);
    json["timestamp"] = timestamp;
    json["version"] = version;
    json["manufacturer"] = manufacturer;
    json["serialNumber"] = serialNumber;
    json["connectionState"] = connectionState;

    return json;
}