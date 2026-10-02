#include "errorreference.h"

#include <QJsonObject>

errorReference::errorReference()
{
    referenceKey = "";

    referenceValue = "";
}

QJsonObject errorReference::toJson() const
{
    QJsonObject json;

    json["referenceKey"] = referenceKey;
    json["referenceValue"] = referenceValue;

    return json;
}