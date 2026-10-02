#ifndef ACTIONSTATE_H
#define ACTIONSTATE_H

#include <QString>
#include <QJsonObject>

class actionState
{
public:
    actionState();

    //==================================================
    // VDA5050 State Message -> actionState
    //==================================================

    QString actionId;

    QString actionType;

    QString actionDescriptor;

    QString actionStatus;

    QString actionResult;

    QJsonObject toJson() const;
};

#endif // ACTIONSTATE_H