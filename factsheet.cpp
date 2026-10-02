#include "factsheet.h"

#include <QJsonObject>

factsheet::factsheet()
{
    headerId = 0;

    timestamp = "";

    version = "";

    manufacturer = "";

    serialNumber = "";
}

QJsonObject factsheet::toJson() const
{
    QJsonObject json;

    // Header
    json["headerId"] = static_cast<int>(headerId);
    json["timestamp"] = timestamp;
    json["version"] = version;
    json["manufacturer"] = manufacturer;
    json["serialNumber"] = serialNumber;

    // Factsheet Objects
    json["typeSpecification"] = typeSpecification.toJson();
    json["physicalParameters"] = physicalParameters.toJson();
    json["protocolLimits"] = protocolLimits.toJson();
    json["protocolFeatures"] = protocolFeatures.toJson();
    json["mobileRobotGeometry"] = mobileRobotGeometry.toJson();
    json["loadSpecification"] = loadSpecification.toJson();
    json["mobileRobotConfiguration"] = mobileRobotConfiguration.toJson();

    return json;
}