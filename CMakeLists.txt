cmake_minimum_required(VERSION 3.19)

project(VDA5050_AGV LANGUAGES CXX)

add_compile_options(-Wno-error=changes-meaning)

# Qt6::Mqtt, kullanılan Qt kitiyle birlikte kurulu olmalı.
find_package(Qt6 6.5 REQUIRED COMPONENTS Core Network Mqtt)

qt_standard_project_setup()

set(VDA5050_INCLUDE_DIRS
    src
    src/agv
    src/mqtt
    src/common
    src/state
    src/order
    src/instantaction
    src/response
    src/connection
    src/visualization
    src/factsheet
    src/zone
)

qt_add_executable(VDA5050_AGV
    src/main.cpp

    src/agv/agv.h
    src/agv/agv.cpp

    src/mqtt/mqttclient.h
    src/mqtt/mqttclient.cpp

    src/common/enums.h
    src/common/support.h
    src/common/action.h
    src/common/action.cpp
    src/common/actionparameter.h
    src/common/actionparameter.cpp
    src/common/actionstate.h
    src/common/actionstate.cpp
    src/common/translation.h
    src/common/translation.cpp
    src/common/position.h
    src/common/position.cpp
    src/common/velocity.h
    src/common/velocity.cpp
    src/common/map.h
    src/common/map.cpp
    src/common/controlpoint.h
    src/common/controlpoint.cpp
    src/common/trajectory.h
    src/common/trajectory.cpp
    src/common/corridor.h
    src/common/corridor.cpp
    src/common/waypoint.h
    src/common/waypoint.cpp
    src/common/nodeposition.h
    src/common/nodeposition.cpp
    src/common/alloweddeviationxy.h
    src/common/alloweddeviationxy.cpp
    src/common/boundingboxreference.h
    src/common/boundingboxreference.cpp
    src/common/loaddimensions.h
    src/common/loaddimensions.cpp
    src/common/vertex.h
    src/common/vertex.cpp

    src/state/state.h
    src/state/state.cpp
    src/state/mobilerobotposition.h
    src/state/mobilerobotposition.cpp
    src/state/safetystate.h
    src/state/safetystate.cpp
    src/state/powersupply.h
    src/state/powersupply.cpp
    src/state/error.h
    src/state/error.cpp
    src/state/errorreference.h
    src/state/errorreference.cpp
    src/state/info.h
    src/state/info.cpp
    src/state/inforeference.h
    src/state/inforeference.cpp
    src/state/nodestate.h
    src/state/nodestate.cpp
    src/state/edgestate.h
    src/state/edgestate.cpp
    src/state/plannedpath.h
    src/state/plannedpath.cpp
    src/state/intermediatepath.h
    src/state/intermediatepath.cpp
    src/state/load.h
    src/state/load.cpp
    src/state/zonerequest.h
    src/state/zonerequest.cpp
    src/state/edgerequest.h
    src/state/edgerequest.cpp

    src/order/order.h
    src/order/order.cpp
    src/order/node.h
    src/order/node.cpp
    src/order/edge.h
    src/order/edge.cpp

    src/instantaction/instantaction.h
    src/instantaction/instantaction.cpp

    src/response/response.h
    src/response/response.cpp
    src/response/responsemessage.h
    src/response/responsemessage.cpp

    src/connection/connection.h
    src/connection/connection.cpp

    src/visualization/visualization.h
    src/visualization/visualization.cpp

    src/factsheet/factsheet.h
    src/factsheet/factsheet.cpp
    src/factsheet/typespecification.h
    src/factsheet/typespecification.cpp
    src/factsheet/physicalparameters.h
    src/factsheet/physicalparameters.cpp
    src/factsheet/maximumstringlengths.h
    src/factsheet/maximumstringlengths.cpp
    src/factsheet/maximumarraylengths.h
    src/factsheet/maximumarraylengths.cpp
    src/factsheet/timing.h
    src/factsheet/timing.cpp
    src/factsheet/protocollimits.h
    src/factsheet/protocollimits.cpp
    src/factsheet/optionalparameter.h
    src/factsheet/optionalparameter.cpp
    src/factsheet/mobilerobotaction.h
    src/factsheet/mobilerobotaction.cpp
    src/factsheet/protocolfeatures.h
    src/factsheet/protocolfeatures.cpp
    src/factsheet/wheeldefinition.h
    src/factsheet/wheeldefinition.cpp
    src/factsheet/envelope2d.h
    src/factsheet/envelope2d.cpp
    src/factsheet/envelope3d.h
    src/factsheet/envelope3d.cpp
    src/factsheet/mobilerobotgeometry.h
    src/factsheet/mobilerobotgeometry.cpp
    src/factsheet/loadset.h
    src/factsheet/loadset.cpp
    src/factsheet/versioninfo.h
    src/factsheet/versioninfo.cpp
    src/factsheet/network.h
    src/factsheet/network.cpp
    src/factsheet/batterycharging.h
    src/factsheet/batterycharging.cpp
    src/factsheet/mobilerobotconfiguration.h
    src/factsheet/mobilerobotconfiguration.cpp
    src/factsheet/loadspecification.h
    src/factsheet/loadspecification.cpp

    src/zone/zone.h
    src/zone/zone.cpp
    src/zone/zoneaction.h
    src/zone/zoneaction.cpp
    src/zone/zoneset.h
    src/zone/zoneset.cpp
    src/zone/zonesetdefinition.h
    src/zone/zonesetdefinition.cpp
)

target_include_directories(VDA5050_AGV PRIVATE ${VDA5050_INCLUDE_DIRS})

target_link_libraries(VDA5050_AGV
    PRIVATE
    Qt6::Core
    Qt6::Network
    Qt6::Mqtt
)
