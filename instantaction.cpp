#include "instantaction.h"

#include <QJsonArray>

instantAction::instantAction()
{
    headerId = 0;

    timestamp = "";

    version = "";

    manufacturer = "";

    serialNumber = "";
}

QJsonObject instantAction::toJson() const
{
    QJsonObject json;

    //==================================================
    // Header
    //==================================================

    json["headerId"] = static_cast<int>(headerId);
    json["timestamp"] = timestamp;
    json["version"] = version;
    json["manufacturer"] = manufacturer;
    json["serialNumber"] = serialNumber;

    //==================================================
    // Actions
    //==================================================

    QJsonArray actionArray;

    for (const action &a : actions)
    {
        actionArray.append(a.toJson());
    }

    json["actions"] = actionArray;

    return json;
}

void instantAction::fromJson(const QJsonObject &json)
{
    //==================================================
    // Header
    //==================================================

    headerId = json["headerId"].toInt();
    timestamp = json["timestamp"].toString();
    version = json["version"].toString();
    manufacturer = json["manufacturer"].toString();
    serialNumber = json["serialNumber"].toString();

    //==================================================
    // Actions
    //==================================================

    actions.clear();

    QJsonArray actionArray = json["actions"].toArray();

    for (const QJsonValue &value : actionArray)
    {
        action a;
        a.fromJson(value.toObject());
        actions.append(a);
    }
}