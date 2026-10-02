#ifndef EDGEREQUEST_H
#define EDGEREQUEST_H

#include <QString>
#include <QtGlobal>
#include <QJsonObject>

class edgeRequest
{
public:
    edgeRequest();

    //==================================================
    // VDA5050 State Message -> edgeRequest
    //==================================================

    QString requestId;

    QString requestType;

    QString edgeId;

    quint32 sequenceId;

    QString requestStatus;

    QJsonObject toJson() const;
};

#endif // EDGEREQUEST_H