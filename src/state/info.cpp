#include "info.h"

#include <QJsonObject>
#include <QJsonArray>

info::info()
{
    infoType = "";

    infoDescriptor = "";

    infoLevel = "";
}

QJsonObject info::toJson() const
{
    QJsonObject json;

    json["infoType"] = infoType;

    QJsonArray referenceArray;

    for (const infoReference &reference : infoReferences)
    {
        referenceArray.append(reference.toJson());
    }

    json["infoReferences"] = referenceArray;

    json["infoDescriptor"] = infoDescriptor;

    json["infoLevel"] = infoLevel;

    return json;
}