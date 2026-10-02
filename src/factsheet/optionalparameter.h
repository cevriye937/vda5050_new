#ifndef OPTIONALPARAMETER_H
#define OPTIONALPARAMETER_H

#include <QString>
#include <QJsonObject>

#include "enums.h"

class optionalParameter
{
public:
    optionalParameter();

    //==================================================
    // VDA5050 Factsheet Message
    // -> protocolFeatures
    // -> optionalParameters[]
    //==================================================

    QString parameter;

    Support support;

    QString description;

    QJsonObject toJson() const;
};

#endif // OPTIONALPARAMETER_H