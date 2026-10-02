#include "mobilerobotposition.h"
#include <QJsonObject>
mobileRobotPosition::mobileRobotPosition()
{
    x = 0.0;
    y = 0.0;
    theta = 0.0;

    mapId = "";

    localized = false;

    localizationScore = 0.0;

    deviationRange = 0.0;
}
QJsonObject mobileRobotPosition::toJson() const
{
    QJsonObject json;

    json["x"] = x;
    json["y"] = y;
    json["theta"] = theta;
    json["mapId"] = mapId;
    json["localized"] = localized;
    json["localizationScore"] = localizationScore;
    json["deviationRange"] = deviationRange;

    return json;
}