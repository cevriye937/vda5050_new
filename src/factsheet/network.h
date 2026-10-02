#ifndef NETWORK_H
#define NETWORK_H

#include <QString>
#include <QStringList>
#include <QJsonObject>

class network
{
public:
    network();

    //==================================================
    // VDA5050 Factsheet Message
    // -> mobileRobotConfiguration
    // -> network
    //==================================================

    QStringList dnsServers;

    QStringList ntpServers;

    QString localIpAddress;

    QString netmask;

    QString defaultGateway;

    QJsonObject toJson() const;
};

#endif // NETWORK_H