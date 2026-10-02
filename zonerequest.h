#ifndef ZONEREQUEST_H
#define ZONEREQUEST_H

#include <QString>
#include <QJsonObject>


#include "trajectory.h"


class zoneRequest
{
public:

    zoneRequest();


    //==================================================
    // VDA5050 State Message -> zoneRequest
    //==================================================


    QString requestId;

    QString requestType;

    QString zoneId;

    QString zoneSetId;

    QString requestStatus;


    trajectory trajectory;


    QJsonObject toJson() const;

};


#endif // ZONEREQUEST_H