#include "safetystate.h"


safetyState::safetyState()
{

    activeEmergencyStop = "NONE";

    fieldViolation = false;

}



QJsonObject safetyState::toJson() const
{
    QJsonObject json;


    //==================================================
    // VDA5050 safetyState
    //==================================================


    json["activeEmergencyStop"] = activeEmergencyStop;

    json["fieldViolation"] = fieldViolation;


    return json;
}