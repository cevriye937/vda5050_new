#include "translation.h"


translation::translation()
{

    translationKey = "";

    translationValue = "";

}



QJsonObject translation::toJson() const
{
    QJsonObject json;


    //==================================================
    // VDA5050 Translation Object
    //==================================================


    json["translationKey"] = translationKey;

    json["translationValue"] = translationValue;


    return json;
}