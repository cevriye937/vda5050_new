#include "visualization.h"


visualization::visualization()
{

    headerId = 0;

    timestamp = "";

    version = "";

    manufacturer = "";

    serialNumber = "";

    referenceStateHeaderId = 0;

}



QJsonObject visualization::toJson() const
{
    QJsonObject json;


    //==================================================
    // VDA5050 Visualization Message
    //==================================================


    json["headerId"] = static_cast<int>(headerId);

    json["timestamp"] = timestamp;

    json["version"] = version;

    json["manufacturer"] = manufacturer;

    json["serialNumber"] = serialNumber;

    json["referenceStateHeaderId"] = static_cast<int>(referenceStateHeaderId);



    json["plannedPath"] = plannedPath.toJson();

    json["intermediatePath"] = intermediatePath.toJson();

    json["mobileRobotPosition"] = mobileRobotPosition.toJson();

    json["velocity"] = velocity.toJson();



    return json;
}