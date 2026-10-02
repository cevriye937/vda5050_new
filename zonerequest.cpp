#include "zonerequest.h"


zoneRequest::zoneRequest()
{

    requestId = "";

    requestType = "";

    zoneId = "";

    zoneSetId = "";

    requestStatus = "";

}



QJsonObject zoneRequest::toJson() const
{
    QJsonObject json;


    //==================================================
    // VDA5050 zoneRequest Object
    //==================================================


    json["requestId"] = requestId;

    json["requestType"] = requestType;

    json["zoneId"] = zoneId;

    json["zoneSetId"] = zoneSetId;

    json["requestStatus"] = requestStatus;


    json["trajectory"] = trajectory.toJson();


    return json;
}