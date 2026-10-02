#ifndef FACTSHEET_H
#define FACTSHEET_H

#include <QString>
#include <QJsonObject>

#include "typespecification.h"
#include "physicalparameters.h"
#include "protocollimits.h"
#include "protocolfeatures.h"
#include "mobilerobotgeometry.h"
#include "loadspecification.h"
#include "mobilerobotconfiguration.h"

class factsheet
{
public:
    factsheet();

    //==================================================
    // VDA5050 Factsheet Message
    //==================================================

    // Header
    quint32 headerId;

    QString timestamp;

    QString version;

    QString manufacturer;

    QString serialNumber;

    // JSON Objects
    typeSpecification typeSpecification;

    physicalParameters physicalParameters;

    protocolLimits protocolLimits;

    protocolFeatures protocolFeatures;

    mobileRobotGeometry mobileRobotGeometry;

    loadSpecification loadSpecification;

    mobileRobotConfiguration mobileRobotConfiguration;

    QJsonObject toJson() const;
};

#endif // FACTSHEET_H