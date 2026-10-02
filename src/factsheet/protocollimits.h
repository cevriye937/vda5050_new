#ifndef PROTOCOLLIMITS_H
#define PROTOCOLLIMITS_H

#include "maximumstringlengths.h"
#include "maximumarraylengths.h"
#include "timing.h"

#include <QJsonObject>

class protocolLimits
{
public:
    protocolLimits();

    // VDA5050 Factsheet -> protocolLimits

    maximumStringLengths maximumStringLengths;

    maximumArrayLengths maximumArrayLengths;

    timing timing;

    QJsonObject toJson() const;
};

#endif // PROTOCOLLIMITS_H