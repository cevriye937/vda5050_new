#ifndef MOBILEROBOTPOSITION_H
#define MOBILEROBOTPOSITION_H

#include <QString>
#include <QJsonObject>
class mobileRobotPosition
{
public:
    mobileRobotPosition();

    // VDA5050 State Message -> mobileRobotPosition

    double x;
    double y;
    double theta;

    QString mapId;

    bool localized;

    double localizationScore;

    double deviationRange;

    QJsonObject toJson() const;
};

#endif // MOBILEROBOTPOSITION_H