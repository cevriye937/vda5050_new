cmake_minimum_required(VERSION 3.19)

project(VDA5050_AGV LANGUAGES CXX)

add_compile_options(-Wno-error=changes-meaning)

# Network modülünü buraya ekledik (qtmqtt için şarttır)
find_package(Qt6 6.5 REQUIRED COMPONENTS Core Network)

qt_standard_project_setup()

qt_add_executable(VDA5050_AGV

    #==================================================
    # Main
    #==================================================

    main.cpp

    #==================================================
    # AGV
    #==================================================

    agv.h
    agv.cpp

    state.h
    state.cpp

    #==================================================
    # State Message
    #==================================================

    velocity.h
    velocity.cpp

    mobilerobotposition.h
    mobilerobotposition.cpp

    safetystate.h
    safetystate.cpp

    powersupply.h
    powersupply.cpp

    error.h
    error.cpp

    errorreference.h
    errorreference.cpp

    translation.h
    translation.cpp

    info.h
    info.cpp

    inforeference.h
    inforeference.cpp

    map.h
    map.cpp

    zoneset.h
    zoneset.cpp

    nodestate.h
    nodestate.cpp

    nodeposition.h
    nodeposition.cpp

    edgestate.h
    edgestate.cpp

    plannedpath.h
    plannedpath.cpp

    trajectory.h
    trajectory.cpp

    intermediatepath.h
    intermediatepath.cpp

    waypoint.h
    waypoint.cpp

    actionstate.h
    actionstate.cpp

    load.h
    load.cpp

    boundingboxreference.h
    boundingboxreference.cpp

    loaddimensions.h
    loaddimensions.cpp

    zonerequest.h
    zonerequest.cpp

    edgerequest.h
    edgerequest.cpp

    #==================================================
    # Factsheet Message
    #==================================================

    typespecification.h
    typespecification.cpp

    physicalparameters.h
    physicalparameters.cpp

    maximumstringlengths.h
    maximumstringlengths.cpp

    maximumarraylengths.h
    maximumarraylengths.cpp

    timing.h
    timing.cpp

    protocollimits.h
    protocollimits.cpp

    optionalparameter.h
    optionalparameter.cpp

    actionparameter.h
    actionparameter.cpp

    mobilerobotaction.h
    mobilerobotaction.cpp

    protocolfeatures.h
    protocolfeatures.cpp

    position.h
    position.cpp

    wheeldefinition.h
    wheeldefinition.cpp

    vertex.h
    vertex.cpp

    envelope2d.h
    envelope2d.cpp

    envelope3d.h
    envelope3d.cpp

    mobilerobotgeometry.h
    mobilerobotgeometry.cpp

    loadset.h
    loadset.cpp

    versioninfo.h
    versioninfo.cpp

    network.h
    network.cpp

    batterycharging.h
    batterycharging.cpp

    mobilerobotconfiguration.h
    mobilerobotconfiguration.cpp

    support.h
    enums.h
    loadspecification.h loadspecification.cpp
    factsheet.h factsheet.cpp
    action.h action.cpp
    node.h node.cpp
    edge.h edge.cpp
    corridor.h corridor.cpp
    order.h order.cpp
    instantaction.h instantaction.cpp
    response.h response.cpp
    responsemessage.h responsemessage.cpp
    connection.h connection.cpp
    visualization.h visualization.cpp
    alloweddeviationxy.h alloweddeviationxy.cpp
    zoneaction.h zoneaction.cpp
    zone.h zone.cpp
    controlpoint.h controlpoint.cpp

    zonesetdefinition.h zonesetdefinition.cpp
    mqttclient.h mqttclient.cpp
    order_update.json
)

# qtmqtt klasörünü hedef oluşturulduktan sonra ekliyoruz
add_subdirectory(qtmqtt)

target_link_libraries(VDA5050_AGV
    PRIVATE
    Qt6::Core
    Qt6::Network
    Qt6::Mqtt
)
