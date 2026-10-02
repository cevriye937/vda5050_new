#ifndef ACTIONPARAMETER_H
#define ACTIONPARAMETER_H

#include <QString>
#include <QVariant>
#include <QJsonObject>

class actionParameter
{
public:
    actionParameter();

    //==================================================
    // VDA5050 Action Parameter
    //==================================================

    QString key;
    QVariant value;

    // Factsheet için
    QString valueDataType;
    QString description;
    bool isOptional;

    QJsonObject toJson() const;

    void fromJson(const QJsonObject &json);
};

#endif // ACTIONPARAMETER_H