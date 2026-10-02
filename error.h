#ifndef ERROR_H
#define ERROR_H

#include <QString>
#include <QList>
#include <QJsonObject>

#include "errorreference.h"
#include "translation.h"

class error
{
public:
    error();

    //==================================================
    // VDA5050 State Message -> error
    //==================================================

    QString errorType;

    QList<errorReference> errorReferences;

    QString errorDescription;

    QList<translation> errorDescriptionTranslations;

    QString errorHint;

    QList<translation> errorHintTranslations;

    QString errorLevel;

    QJsonObject toJson() const;
};

#endif // ERROR_H