#include "wheeldefinition.h"


wheelDefinition::wheelDefinition()
{

    type = "";

    isActiveDriven = false;

    isActiveSteered = false;


    diameter = 0.0;

    width = 0.0;

    centerDisplacement = 0.0;

    constraints = "";

}



QJsonObject wheelDefinition::toJson() const
{
    QJsonObject json;


    //==================================================
    // VDA5050 wheelDefinition Object
    //==================================================


    json["type"] = type;

    json["isActiveDriven"] = isActiveDriven;

    json["isActiveSteered"] = isActiveSteered;


    json["position"] = position.toJson();


    json["diameter"] = diameter;

    json["width"] = width;

    json["centerDisplacement"] = centerDisplacement;

    json["constraints"] = constraints;


    return json;
}