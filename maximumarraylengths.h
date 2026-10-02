#ifndef MAXIMUMARRAYLENGTHS_H
#define MAXIMUMARRAYLENGTHS_H

#include <QtGlobal>
#include <QJsonObject>

class OrderArrayLengths
{
public:
    OrderArrayLengths();

    quint32 nodes;
    quint32 edges;

    QJsonObject toJson() const;
};

class NodeArrayLengths
{
public:
    NodeArrayLengths();

    quint32 actions;

    QJsonObject toJson() const;
};

class EdgeArrayLengths
{
public:
    EdgeArrayLengths();

    quint32 actions;

    QJsonObject toJson() const;
};

class ActionsArrayLengths
{
public:
    ActionsArrayLengths();

    quint32 actionsParameters;

    QJsonObject toJson() const;
};

class TrajectoryArrayLengths
{
public:
    TrajectoryArrayLengths();

    quint32 knotVector;
    quint32 controlPoints;

    QJsonObject toJson() const;
};

class ZoneSetArrayLengths
{
public:
    ZoneSetArrayLengths();

    quint32 zones;

    QJsonObject toJson() const;
};

class StateArrayLengths
{
public:
    StateArrayLengths();

    quint32 nodeStates;
    quint32 edgeStates;
    quint32 loads;
    quint32 actionStates;
    quint32 instantActionStates;
    quint32 zoneActionStates;
    quint32 errors;
    quint32 information;

    QJsonObject toJson() const;
};

class ErrorArrayLengths
{
public:
    ErrorArrayLengths();

    quint32 errorReferences;

    QJsonObject toJson() const;
};

class InformationArrayLengths
{
public:
    InformationArrayLengths();

    quint32 infoReferences;

    QJsonObject toJson() const;
};

class maximumArrayLengths
{
public:
    maximumArrayLengths();

    //==================================================
    // VDA5050 Factsheet Message
    // -> protocolLimits
    // -> maximumArrayLengths
    //==================================================

    OrderArrayLengths order;

    NodeArrayLengths node;

    EdgeArrayLengths edge;

    ActionsArrayLengths actions;

    quint32 instantActions;

    TrajectoryArrayLengths trajectory;

    ZoneSetArrayLengths zoneSet;

    StateArrayLengths state;

    ErrorArrayLengths error;

    InformationArrayLengths information;

    QJsonObject toJson() const;
};

#endif // MAXIMUMARRAYLENGTHS_H