#ifndef RESPONSE_H
#define RESPONSE_H

#include <QString>
#include <QJsonObject>

class response
{
public:

    response();

    //==================================================
    // VDA5050 Response Object
    //==================================================

    QString requestId;

    QString grantType;

    QString leaseExpiry;

    QJsonObject toJson() const;

    void fromJson(const QJsonObject &json);
};

#endif // RESPONSE_H