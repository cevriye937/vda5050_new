#ifndef TYPESPECIFICATION_H
#define TYPESPECIFICATION_H

#include <QString>
#include <QList>
#include <QJsonObject>


class typeSpecification
{
public:

    typeSpecification();


    //==================================================
    // VDA5050 Factsheet Message -> typeSpecification
    //==================================================


    QString seriesName;

    QString seriesDescription;

    QString mobileRobotKinematics;

    QString mobileRobotClass;

    double maximumLoadMass;


    QList<QString> localizationTypes;

    QList<QString> navigationTypes;

    QList<QString> supportedZones;


    QJsonObject toJson() const;

};


#endif // TYPESPECIFICATION_H