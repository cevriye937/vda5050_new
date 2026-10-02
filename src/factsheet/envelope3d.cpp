#include "envelope3d.h"

#include <QJsonObject>

envelope3d::envelope3d()
{
    envelope3dId = "";

    format = "";

    url = "";

    description = "";
}

QJsonObject envelope3d::toJson() const
{
    QJsonObject json;

    json["envelope3dId"] = envelope3dId;
    json["format"] = format;
    json["data"] = data;
    json["url"] = url;
    json["description"] = description;

    return json;
}