#include "maximumstringlengths.h"

#include <QJsonObject>

maximumStringLengths::maximumStringLengths()
{
    maximumMessageLength = 0;

    maximumTopicSerialLength = 0;

    maximumTopicElementLength = 0;

    maximumIdLength = 0;

    idNumericalOnly = false;

    maximumLoadIdLength = 0;
}

QJsonObject maximumStringLengths::toJson() const
{
    QJsonObject json;

    json["maximumMessageLength"] = static_cast<int>(maximumMessageLength);
    json["maximumTopicSerialLength"] = static_cast<int>(maximumTopicSerialLength);
    json["maximumTopicElementLength"] = static_cast<int>(maximumTopicElementLength);
    json["maximumIdLength"] = static_cast<int>(maximumIdLength);
    json["idNumericalOnly"] = idNumericalOnly;
    json["maximumLoadIdLength"] = static_cast<int>(maximumLoadIdLength);

    return json;
}