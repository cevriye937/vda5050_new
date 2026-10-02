#ifndef WHEELDEFINITION_H
#define WHEELDEFINITION_H

#include <QString>
#include <QJsonObject>

#include "position.h"


class wheelDefinition
{
public:

    wheelDefinition();


    //==================================================
    // VDA5050 Factsheet
    // mobileRobotGeometry -> wheelDefinitions[]
    //==================================================


    QString type;

    bool isActiveDriven;

    bool isActiveSteered;


    position position;


    double diameter;

    double width;

    double centerDisplacement;

    QString constraints;


    QJsonObject toJson() const;

};


#endif // WHEELDEFINITION_H