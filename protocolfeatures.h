#ifndef PROTOCOLFEATURES_H
#define PROTOCOLFEATURES_H

#include <QList>
#include <QJsonObject>

#include "optionalparameter.h"
#include "mobilerobotaction.h"

class protocolFeatures
{
public:
    protocolFeatures();

    //==================================================
    // VDA5050 Factsheet Message
    // -> protocolFeatures
    //==================================================

    QList<optionalParameter> optionalParameters;

    QList<mobileRobotAction> mobileRobotActions;

    QJsonObject toJson() const;
};

#endif // PROTOCOLFEATURES_H