#ifndef BOUNDINGBOXREFERENCE_H
#define BOUNDINGBOXREFERENCE_H

#include <QJsonObject>

class boundingBoxReference
{
public:
    boundingBoxReference();

    double x;

    double y;

    double z;

    double theta;

    QJsonObject toJson() const;
};

#endif // BOUNDINGBOXREFERENCE_H