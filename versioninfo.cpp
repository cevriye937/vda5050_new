#include "versioninfo.h"


versionInfo::versionInfo()
{

    key = "";

    value = "";

}



QJsonObject versionInfo::toJson() const
{
    QJsonObject json;


    //==================================================
    // VDA5050 versionInfo Object
    //==================================================


    json["key"] = key;

    json["value"] = value;


    return json;
}