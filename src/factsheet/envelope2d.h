#ifndef ENVELOPE2D_H
#define ENVELOPE2D_H

#include <QString>
#include <QList>
#include <QJsonObject>

#include "vertex.h"

class envelope2d
{
public:
    envelope2d();

    //==================================================
    // VDA5050 Factsheet Message
    // -> mobileRobotGeometry
    // -> envelopes2d[]
    //==================================================

    QString envelope2dId;

    QList<vertex> vertices;

    QString description;

    QJsonObject toJson() const;
};

#endif // ENVELOPE2D_H