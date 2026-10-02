#include "loaddimensions.h"

#include <QJsonObject>

loadDimensions::loadDimensions()
{
    length = 0.0;

    width = 0.0;

    height = 0.0;
}

QJsonObject loadDimensions::toJson() const
{
    QJsonObject json;

    json["length"] = length;
    json["width"] = width;

    // PDF:
    // "height" alanı opsiyoneldir.
    // Yalnızca değeri biliniyorsa gönderilir.
    if (height > 0.0)
    {
        json["height"] = height;
    }

    return json;
}