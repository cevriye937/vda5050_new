#ifndef ZONE_H
#define ZONE_H

#include <QString>
#include <QList>
#include <QJsonObject>


#include "vertex.h"
#include "zoneaction.h"


class zone
{
public:

    zone();


    //==================================================
    // VDA5050 Zone
    //==================================================


    // Locally unique identifier
    QString zoneId;


    // BLOCKED, LINE_GUIDED, RELEASE,
    // COORDINATED_REPLANNING, SPEED_LIMIT,
    // ACTION, PRIORITY, PENALTY,
    // DIRECTED, BIDIRECTED
    QString zoneType;


    // Human-readable description
    QString zoneDescriptor;


    // Polygon vertices
    QList<vertex> vertices;


    // SPEED_LIMIT zone
    double maximumSpeed;


    // ACTION zone
    QList<zoneAction> entryActions;

    QList<zoneAction> duringActions;

    QList<zoneAction> exitActions;


    // RELEASE zone
    QString releaseLossBehavior;


    // PRIORITY zone
    double priorityFactor;


    // PENALTY zone
    double penaltyFactor;


    // DIRECTED / BIDIRECTED zone
    double direction;


    // DIRECTED zone
    QString directedLimitation;


    // BIDIRECTED zone
    QString bidirectedLimitation;



    QJsonObject toJson() const;

    void fromJson(const QJsonObject &json);

};


#endif // ZONE_H