#ifndef TRANSLATION_H
#define TRANSLATION_H

#include <QString>
#include <QJsonObject>


class translation
{
public:

    translation();


    //==================================================
    // VDA5050 Translation Object
    //==================================================


    QString translationKey;

    QString translationValue;


    QJsonObject toJson() const;

};


#endif // TRANSLATION_H