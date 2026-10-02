#ifndef ERRORREFERENCE_H
#define ERRORREFERENCE_H

#include <QString>
#include <QJsonObject>

class errorReference
{
public:
    errorReference();

    //==================================================
    // VDA5050 State Message -> errorReference
    //==================================================

    QString referenceKey;

    QString referenceValue;

    QJsonObject toJson() const;
};

#endif // ERRORREFERENCE_H