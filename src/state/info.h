#ifndef INFO_H
#define INFO_H

#include <QString>
#include <QList>
#include <QJsonObject>

#include "inforeference.h"

class info
{
public:
    info();

    //==================================================
    // VDA5050 State Message -> info
    //==================================================

    QString infoType;

    QList<infoReference> infoReferences;

    QString infoDescriptor;

    QString infoLevel;

    QJsonObject toJson() const;
};

#endif // INFO_H