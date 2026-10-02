#include "inforeference.h"

#include <QJsonObject>

infoReference::infoReference()
{
    referenceKey = "";

    referenceValue = "";
}

QJsonObject infoReference::toJson() const
{
    QJsonObject json;

    json["referenceKey"] = referenceKey;
    json["referenceValue"] = referenceValue;

    return json;
}