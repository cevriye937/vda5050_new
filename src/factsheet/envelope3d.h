#ifndef ENVELOPE3D_H
#define ENVELOPE3D_H

#include <QString>
#include <QJsonObject>

class envelope3d
{
public:
    envelope3d();

    //==================================================
    // VDA5050 Factsheet Message
    // -> mobileRobotGeometry
    // -> envelopes3d[]
    //==================================================

    QString envelope3dId;

    QString format;

    QJsonObject data;

    QString url;

    QString description;

    QJsonObject toJson() const;
};

#endif // ENVELOPE3D_H