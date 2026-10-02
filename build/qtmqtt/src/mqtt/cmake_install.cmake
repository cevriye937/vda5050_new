# Install script for directory: /home/cevriye/QtProjects/VDA5050_AGV/qtmqtt/src/mqtt

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/cevriye/Qt/6.5.3/gcc_64")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./metatypes" TYPE FILE FILES "/home/cevriye/QtProjects/VDA5050_AGV/build/qtmqtt/src/mqtt/meta_types/qt6mqtt_relwithdebinfo_metatypes.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6Mqtt" TYPE FILE FILES
    "/home/cevriye/QtProjects/VDA5050_AGV/build/lib/cmake/Qt6Mqtt/Qt6MqttConfig.cmake"
    "/home/cevriye/QtProjects/VDA5050_AGV/build/lib/cmake/Qt6Mqtt/Qt6MqttConfigVersion.cmake"
    "/home/cevriye/QtProjects/VDA5050_AGV/build/lib/cmake/Qt6Mqtt/Qt6MqttConfigVersionImpl.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQt6Mqtt.so.6.5.3"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQt6Mqtt.so.6"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "\$ORIGIN:\$ORIGIN/../lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/cevriye/QtProjects/VDA5050_AGV/build/lib/libQt6Mqtt.so.6.5.3"
    "/home/cevriye/QtProjects/VDA5050_AGV/build/lib/libQt6Mqtt.so.6"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQt6Mqtt.so.6.5.3"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQt6Mqtt.so.6"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/cevriye/Qt/6.5.3/gcc_64/lib:"
           NEW_RPATH "\$ORIGIN:\$ORIGIN/../lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/home/cevriye/QtProjects/VDA5050_AGV/build/libexec/qt-internal-strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/cevriye/QtProjects/VDA5050_AGV/build/lib/libQt6Mqtt.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6Mqtt/Qt6MqttTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6Mqtt/Qt6MqttTargets.cmake"
         "/home/cevriye/QtProjects/VDA5050_AGV/build/qtmqtt/src/mqtt/CMakeFiles/Export/4fad7c2282f83b62338f8317ce35cfb1/Qt6MqttTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6Mqtt/Qt6MqttTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6Mqtt/Qt6MqttTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6Mqtt" TYPE FILE FILES "/home/cevriye/QtProjects/VDA5050_AGV/build/qtmqtt/src/mqtt/CMakeFiles/Export/4fad7c2282f83b62338f8317ce35cfb1/Qt6MqttTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6Mqtt" TYPE FILE FILES "/home/cevriye/QtProjects/VDA5050_AGV/build/qtmqtt/src/mqtt/CMakeFiles/Export/4fad7c2282f83b62338f8317ce35cfb1/Qt6MqttTargets-relwithdebinfo.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6Mqtt/Qt6MqttVersionlessTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6Mqtt/Qt6MqttVersionlessTargets.cmake"
         "/home/cevriye/QtProjects/VDA5050_AGV/build/qtmqtt/src/mqtt/CMakeFiles/Export/4fad7c2282f83b62338f8317ce35cfb1/Qt6MqttVersionlessTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6Mqtt/Qt6MqttVersionlessTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6Mqtt/Qt6MqttVersionlessTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6Mqtt" TYPE FILE FILES "/home/cevriye/QtProjects/VDA5050_AGV/build/qtmqtt/src/mqtt/CMakeFiles/Export/4fad7c2282f83b62338f8317ce35cfb1/Qt6MqttVersionlessTargets.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/home/cevriye/QtProjects/VDA5050_AGV/build/lib/Qt6Mqtt.debug")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./modules" TYPE FILE FILES "/home/cevriye/QtProjects/VDA5050_AGV/build/./modules/Mqtt.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "_install_html_docs_Mqtt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./doc/qtmqtt" TYPE DIRECTORY FILES "/home/cevriye/QtProjects/VDA5050_AGV/build/./doc/qtmqtt/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "_install_qch_docs_Mqtt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./doc" TYPE FILE FILES "/home/cevriye/QtProjects/VDA5050_AGV/build/./doc/qtmqtt.qch")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6Mqtt" TYPE FILE FILES "/home/cevriye/QtProjects/VDA5050_AGV/build/lib/cmake/Qt6Mqtt/Qt6MqttAdditionalTargetInfo.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/QtMqtt" TYPE DIRECTORY FILES "/home/cevriye/QtProjects/VDA5050_AGV/build/include/QtMqtt/.syncqt_staging/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/QtMqtt" TYPE FILE FILES
    "/home/cevriye/QtProjects/VDA5050_AGV/build/include/QtMqtt/qtmqttexports.h"
    "/home/cevriye/QtProjects/VDA5050_AGV/qtmqtt/src/mqtt/qmqttauthenticationproperties.h"
    "/home/cevriye/QtProjects/VDA5050_AGV/qtmqtt/src/mqtt/qmqttclient.h"
    "/home/cevriye/QtProjects/VDA5050_AGV/qtmqtt/src/mqtt/qmqttconnectionproperties.h"
    "/home/cevriye/QtProjects/VDA5050_AGV/qtmqtt/src/mqtt/qmqttglobal.h"
    "/home/cevriye/QtProjects/VDA5050_AGV/qtmqtt/src/mqtt/qmqttmessage.h"
    "/home/cevriye/QtProjects/VDA5050_AGV/qtmqtt/src/mqtt/qmqttpublishproperties.h"
    "/home/cevriye/QtProjects/VDA5050_AGV/qtmqtt/src/mqtt/qmqttsubscription.h"
    "/home/cevriye/QtProjects/VDA5050_AGV/qtmqtt/src/mqtt/qmqttsubscriptionproperties.h"
    "/home/cevriye/QtProjects/VDA5050_AGV/qtmqtt/src/mqtt/qmqtttopicfilter.h"
    "/home/cevriye/QtProjects/VDA5050_AGV/qtmqtt/src/mqtt/qmqtttopicname.h"
    "/home/cevriye/QtProjects/VDA5050_AGV/qtmqtt/src/mqtt/qmqtttype.h"
    "/home/cevriye/QtProjects/VDA5050_AGV/build/include/QtMqtt/QtMqttDepends"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/QtMqtt/6.5.3/QtMqtt/private" TYPE FILE FILES
    "/home/cevriye/QtProjects/VDA5050_AGV/qtmqtt/src/mqtt/qmqttclient_p.h"
    "/home/cevriye/QtProjects/VDA5050_AGV/qtmqtt/src/mqtt/qmqttconnection_p.h"
    "/home/cevriye/QtProjects/VDA5050_AGV/qtmqtt/src/mqtt/qmqttconnectionproperties_p.h"
    "/home/cevriye/QtProjects/VDA5050_AGV/qtmqtt/src/mqtt/qmqttcontrolpacket_p.h"
    "/home/cevriye/QtProjects/VDA5050_AGV/qtmqtt/src/mqtt/qmqttmessage_p.h"
    "/home/cevriye/QtProjects/VDA5050_AGV/qtmqtt/src/mqtt/qmqttpublishproperties_p.h"
    "/home/cevriye/QtProjects/VDA5050_AGV/qtmqtt/src/mqtt/qmqttsubscription_p.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES
    "/home/cevriye/QtProjects/VDA5050_AGV/build/mkspecs/modules/qt_lib_mqtt.pri"
    "/home/cevriye/QtProjects/VDA5050_AGV/build/mkspecs/modules/qt_lib_mqtt_private.pri"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/cevriye/QtProjects/VDA5050_AGV/build/lib/pkgconfig/Qt6Mqtt.pc")
endif()

