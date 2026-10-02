#ifndef CORRIDOR_H
#define CORRIDOR_H

#include <QString>
#include <QJsonObject>

class corridor
{
public:
    corridor();

    //==================================================
    // VDA5050 Order Message -> corridor
    //==================================================

    double leftWidth;

    double rightWidth;

    QString corridorReferencePoint;

    bool releaseRequired;

    QString releaseLossBehavior;

    QJsonObject toJson() const;

    void fromJson(const QJsonObject &json);
};

#endif // CORRIDOR_H