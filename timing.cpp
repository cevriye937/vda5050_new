#include "timing.h"


timing::timing()
{

    minimumOrderInterval = 0.0f;

    minimumStateInterval = 0.0f;

    defaultStateInterval = 0.0f;

    visualizationInterval = 0.0f;

}



QJsonObject timing::toJson() const
{
    QJsonObject json;


    //==================================================
    // VDA5050 timing
    //==================================================


    json["minimumOrderInterval"] = minimumOrderInterval;

    json["minimumStateInterval"] = minimumStateInterval;

    json["defaultStateInterval"] = defaultStateInterval;

    json["visualizationInterval"] = visualizationInterval;


    return json;
}