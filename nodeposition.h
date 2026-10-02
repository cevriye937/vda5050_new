#ifndef NODEPOSITION_H
#define NODEPOSITION_H

#include <QString>
#include <QJsonObject>

#include "alloweddeviationxy.h"

class nodePosition
{
public:

    nodePosition();

    // VDA5050 nodePosition

    double x;

    double y;

    double theta;

    allowedDeviationXY allowedDeviationXY;

    double allowedDeviationTheta;

    QString mapId;

    QJsonObject toJson() const;

    void fromJson(const QJsonObject &json);
};

#endif // NODEPOSITION_H