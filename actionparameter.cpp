#include "actionparameter.h"

#include <QJsonValue>

actionParameter::actionParameter()
{
    key = "";

    value = QVariant();

    valueDataType = "";

    description = "";

    isOptional = false;
}

QJsonObject actionParameter::toJson() const
{
    QJsonObject json;

    // Order / InstantAction formatı
    json["key"] = key;
    json["value"] = QJsonValue::fromVariant(value);

    return json;
}

void actionParameter::fromJson(const QJsonObject &json)
{
    key = json["key"].toString();

    value = json["value"].toVariant();

    // Factsheet alanları (varsa okunur)
    if (json.contains("valueDataType"))
        valueDataType = json["valueDataType"].toString();

    if (json.contains("description"))
        description = json["description"].toString();

    if (json.contains("isOptional"))
        isOptional = json["isOptional"].toBool();
}