#include "optionalparameter.h"

#include <QJsonObject>

optionalParameter::optionalParameter()
{
    parameter = "";

    support = Support::SUPPORTED;

    description = "";
}

QJsonObject optionalParameter::toJson() const
{
    QJsonObject json;

    json["parameter"] = parameter;

    json["support"] = supportToString(support);

    json["description"] = description;

    return json;
}