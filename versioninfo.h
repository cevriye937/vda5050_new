#ifndef VERSIONINFO_H
#define VERSIONINFO_H

#include <QString>
#include <QJsonObject>


class versionInfo
{
public:

    versionInfo();


    //==================================================
    // VDA5050 Factsheet Message
    // -> mobileRobotConfiguration -> versions
    //==================================================


    QString key;

    QString value;


    QJsonObject toJson() const;

};


#endif // VERSIONINFO_H