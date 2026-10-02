#ifndef CONNECTION_H
#define CONNECTION_H

#include <QString>
#include <QJsonObject>

class connection
{
public:
    connection();

    //==================================================
    // VDA5050 Connection Message
    //==================================================

    // Header
    quint32 headerId;

    QString timestamp;

    QString version;

    QString manufacturer;

    QString serialNumber;

    // Connection State
    QString connectionState;

    // JSON
    QJsonObject toJson() const;
};

#endif // CONNECTION_H