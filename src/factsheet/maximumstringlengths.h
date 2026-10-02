#ifndef MAXIMUMSTRINGLENGTHS_H
#define MAXIMUMSTRINGLENGTHS_H

#include <QtGlobal>
#include <QJsonObject>

class maximumStringLengths
{
public:
    maximumStringLengths();

    //==================================================
    // VDA5050 Factsheet Message
    // -> protocolLimits
    // -> maximumStringLengths
    //==================================================

    quint32 maximumMessageLength;

    quint32 maximumTopicSerialLength;

    quint32 maximumTopicElementLength;

    quint32 maximumIdLength;

    bool idNumericalOnly;

    quint32 maximumLoadIdLength;

    QJsonObject toJson() const;
};

#endif // MAXIMUMSTRINGLENGTHS_H