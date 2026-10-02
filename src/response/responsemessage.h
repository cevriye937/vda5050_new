#ifndef RESPONSEMESSAGE_H
#define RESPONSEMESSAGE_H

#include <QString>
#include <QList>
#include <QJsonObject>

#include "response.h"

class responseMessage
{
public:

    responseMessage();

    //==================================================
    // VDA5050 Response Message
    //==================================================

    quint32 headerId;

    QString timestamp;

    QString version;

    QString manufacturer;

    QString serialNumber;

    QList<response> responses;

    QJsonObject toJson() const;

    void fromJson(const QJsonObject &json);
};

#endif // RESPONSEMESSAGE_H