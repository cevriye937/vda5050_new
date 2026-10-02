#include "typespecification.h"

#include <QJsonArray>


typeSpecification::typeSpecification()
{

    seriesName = "";

    seriesDescription = "";

    mobileRobotKinematics = "";

    mobileRobotClass = "";

    maximumLoadMass = 0.0;

}



QJsonObject typeSpecification::toJson() const
{
    QJsonObject json;


    //==================================================
    // VDA5050 typeSpecification
    //==================================================


    json["seriesName"] = seriesName;

    json["seriesDescription"] = seriesDescription;

    json["mobileRobotKinematics"] = mobileRobotKinematics;

    json["mobileRobotClass"] = mobileRobotClass;

    json["maximumLoadMass"] = maximumLoadMass;



    QJsonArray localizationArray;

    for(const QString &item : localizationTypes)
    {
        localizationArray.append(item);
    }

    json["localizationTypes"] = localizationArray;




    QJsonArray navigationArray;

    for(const QString &item : navigationTypes)
    {
        navigationArray.append(item);
    }

    json["navigationTypes"] = navigationArray;




    QJsonArray zonesArray;

    for(const QString &item : supportedZones)
    {
        zonesArray.append(item);
    }

    json["supportedZones"] = zonesArray;



    return json;
}