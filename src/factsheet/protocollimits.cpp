#include "protocollimits.h"

protocolLimits::protocolLimits()
{

}


QJsonObject protocolLimits::toJson() const
{
    QJsonObject json;

    // VDA5050 protocolLimits
    json["maximumStringLengths"] = maximumStringLengths.toJson();

    json["maximumArrayLengths"] = maximumArrayLengths.toJson();

    json["timing"] = timing.toJson();

    return json;
}