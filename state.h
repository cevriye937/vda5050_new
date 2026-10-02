#ifndef STATE_H
#define STATE_H

#include <QString>
#include <QList>
#include <QJsonObject>

#include "map.h"
#include "zoneset.h"
#include "nodestate.h"
#include "edgestate.h"
#include "enums.h"
#include "plannedpath.h"
#include "intermediatepath.h"
#include "mobilerobotposition.h"
#include "velocity.h"
#include "load.h"
#include "zonerequest.h"
#include "edgerequest.h"
#include "actionstate.h"
#include "powersupply.h"
#include "error.h"
#include "info.h"
#include "safetystate.h"

class state
{
public:
    state();

    // Header
    quint32 headerId;
    QString timestamp;
    QString version;
    QString manufacturer;
    QString serialNumber;

    // Maps
    QList<map> maps;

    // Zone Sets
    QList<zoneSet> zoneSets;

    // Order Information
    QString orderId;
    quint32 orderUpdateId;
    QString lastNodeId;
    quint32 lastNodeSequenceId;

    // Node States
    QList<nodeState> nodeStates;

    // Edge States
    QList<edgeState> edgeStates;

    // Planned Path
    plannedPath plannedPath;

    // Intermediate Path
    intermediatePath intermediatePath;

    // Mobile Robot Position
    mobileRobotPosition mobileRobotPosition;

    // Velocity
    velocity velocity;

    // Loads
    QList<load> loads;

    // Driving State
    bool driving;

    bool paused;

    bool newBaseRequest;

    // Zone Requests
    QList<zoneRequest> zoneRequests;

    // Edge Requests
    QList<edgeRequest> edgeRequests;

    // Distance Since Last Node
    double distanceSinceLastNode;

    // Action States
    QList<actionState> actionStates;

    // Instant Action States
    QList<actionState> instantActionStates;

    // Zone Action States
    QList<actionState> zoneActionStates;

    // Power Supply
    powerSupply powerSupply;

    // Operating Mode
    OperatingMode operatingMode;

    // Errors
    QList<error> errors;

    // Information
    QList<info> information;

    // Safety State

    safetyState safetyState;



    QJsonObject toJson() const;
};

#endif // STATE_H