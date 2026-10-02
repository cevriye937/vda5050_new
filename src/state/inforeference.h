#ifndef INFOREFERENCE_H
#define INFOREFERENCE_H

#include <QString>
#include <QJsonObject>

class infoReference
{
public:
    infoReference();

    //==================================================
    // VDA5050 State Message -> infoReference
    //==================================================

    QString referenceKey;

    QString referenceValue;

    QJsonObject toJson() const;
};

#endif // INFOREFERENCE_H