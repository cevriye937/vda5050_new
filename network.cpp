#include "network.h"

#include <QJsonObject>
#include <QJsonArray>

network::network()
{
    localIpAddress = "";

    netmask = "";

    defaultGateway = "";
}

QJsonObject network::toJson() const
{
    QJsonObject json;

    QJsonArray dnsArray;
    for (const QString &dns : dnsServers)
    {
        dnsArray.append(dns);
    }
    json["dnsServers"] = dnsArray;

    QJsonArray ntpArray;
    for (const QString &ntp : ntpServers)
    {
        ntpArray.append(ntp);
    }
    json["ntpServers"] = ntpArray;

    json["localIpAddress"] = localIpAddress;
    json["netmask"] = netmask;
    json["defaultGateway"] = defaultGateway;

    return json;
}