#include "error.h"

#include <QJsonObject>
#include <QJsonArray>

error::error()
{
    errorType = "";

    errorDescription = "";

    errorHint = "";

    errorLevel = "";
}

QJsonObject error::toJson() const
{
    QJsonObject json;

    json["errorType"] = errorType;

    QJsonArray referenceArray;
    for (const errorReference &ref : errorReferences)
    {
        referenceArray.append(ref.toJson());
    }
    json["errorReferences"] = referenceArray;

    json["errorDescription"] = errorDescription;

    QJsonArray descriptionTranslationsArray;
    for (const translation &t : errorDescriptionTranslations)
    {
        descriptionTranslationsArray.append(t.toJson());
    }
    json["errorDescriptionTranslations"] = descriptionTranslationsArray;

    json["errorHint"] = errorHint;

    QJsonArray hintTranslationsArray;
    for (const translation &t : errorHintTranslations)
    {
        hintTranslationsArray.append(t.toJson());
    }
    json["errorHintTranslations"] = hintTranslationsArray;

    json["errorLevel"] = errorLevel;

    return json;
}