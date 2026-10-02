#include "envelope2d.h"

#include <QJsonObject>
#include <QJsonArray>

envelope2d::envelope2d()
{
    envelope2dId = "";

    description = "";
}

QJsonObject envelope2d::toJson() const
{
    QJsonObject json;

    json["envelope2dId"] = envelope2dId;

    QJsonArray vertexArray;

    for (const vertex &v : vertices)
    {
        vertexArray.append(v.toJson());
    }

    json["vertices"] = vertexArray;

    json["description"] = description;

    return json;
}