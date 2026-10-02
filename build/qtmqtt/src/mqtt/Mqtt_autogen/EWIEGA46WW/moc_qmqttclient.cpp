/****************************************************************************
** Meta object code from reading C++ file 'qmqttclient.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../qtmqtt/src/mqtt/qmqttclient.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmqttclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQMqttClientENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQMqttClientENDCLASS = QtMocHelpers::stringData(
    "QMqttClient",
    "connected",
    "",
    "disconnected",
    "messageReceived",
    "message",
    "QMqttTopicName",
    "topic",
    "messageStatusChanged",
    "id",
    "QMqtt::MessageStatus",
    "s",
    "QMqttMessageStatusProperties",
    "properties",
    "messageSent",
    "pingResponseReceived",
    "brokerSessionRestored",
    "hostnameChanged",
    "hostname",
    "portChanged",
    "port",
    "clientIdChanged",
    "clientId",
    "keepAliveChanged",
    "keepAlive",
    "protocolVersionChanged",
    "ProtocolVersion",
    "protocolVersion",
    "stateChanged",
    "ClientState",
    "state",
    "errorChanged",
    "ClientError",
    "error",
    "usernameChanged",
    "username",
    "passwordChanged",
    "password",
    "cleanSessionChanged",
    "cleanSession",
    "willTopicChanged",
    "willTopic",
    "willQoSChanged",
    "willQoS",
    "willMessageChanged",
    "willMessage",
    "willRetainChanged",
    "willRetain",
    "autoKeepAliveChanged",
    "autoKeepAlive",
    "authenticationRequested",
    "QMqttAuthenticationProperties",
    "p",
    "authenticationFinished",
    "setHostname",
    "setPort",
    "setClientId",
    "setKeepAlive",
    "setProtocolVersion",
    "setState",
    "setError",
    "setUsername",
    "setPassword",
    "setCleanSession",
    "setWillTopic",
    "setWillQoS",
    "setWillMessage",
    "setWillRetain",
    "setAutoKeepAlive",
    "publish",
    "qos",
    "retain",
    "QMqttPublishProperties",
    "connectToHost",
    "disconnectFromHost",
    "Disconnected",
    "Connecting",
    "Connected",
    "NoError",
    "InvalidProtocolVersion",
    "IdRejected",
    "ServerUnavailable",
    "BadUsernameOrPassword",
    "NotAuthorized",
    "TransportInvalid",
    "ProtocolViolation",
    "UnknownError",
    "Mqtt5SpecificError",
    "MQTT_3_1",
    "MQTT_3_1_1",
    "MQTT_5_0"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQMqttClientENDCLASS_t {
    uint offsetsAndSizes[182];
    char stringdata0[12];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[16];
    char stringdata5[8];
    char stringdata6[15];
    char stringdata7[6];
    char stringdata8[21];
    char stringdata9[3];
    char stringdata10[21];
    char stringdata11[2];
    char stringdata12[29];
    char stringdata13[11];
    char stringdata14[12];
    char stringdata15[21];
    char stringdata16[22];
    char stringdata17[16];
    char stringdata18[9];
    char stringdata19[12];
    char stringdata20[5];
    char stringdata21[16];
    char stringdata22[9];
    char stringdata23[17];
    char stringdata24[10];
    char stringdata25[23];
    char stringdata26[16];
    char stringdata27[16];
    char stringdata28[13];
    char stringdata29[12];
    char stringdata30[6];
    char stringdata31[13];
    char stringdata32[12];
    char stringdata33[6];
    char stringdata34[16];
    char stringdata35[9];
    char stringdata36[16];
    char stringdata37[9];
    char stringdata38[20];
    char stringdata39[13];
    char stringdata40[17];
    char stringdata41[10];
    char stringdata42[15];
    char stringdata43[8];
    char stringdata44[19];
    char stringdata45[12];
    char stringdata46[18];
    char stringdata47[11];
    char stringdata48[21];
    char stringdata49[14];
    char stringdata50[24];
    char stringdata51[30];
    char stringdata52[2];
    char stringdata53[23];
    char stringdata54[12];
    char stringdata55[8];
    char stringdata56[12];
    char stringdata57[13];
    char stringdata58[19];
    char stringdata59[9];
    char stringdata60[9];
    char stringdata61[12];
    char stringdata62[12];
    char stringdata63[16];
    char stringdata64[13];
    char stringdata65[11];
    char stringdata66[15];
    char stringdata67[14];
    char stringdata68[17];
    char stringdata69[8];
    char stringdata70[4];
    char stringdata71[7];
    char stringdata72[23];
    char stringdata73[14];
    char stringdata74[19];
    char stringdata75[13];
    char stringdata76[11];
    char stringdata77[10];
    char stringdata78[8];
    char stringdata79[23];
    char stringdata80[11];
    char stringdata81[18];
    char stringdata82[22];
    char stringdata83[14];
    char stringdata84[17];
    char stringdata85[18];
    char stringdata86[13];
    char stringdata87[19];
    char stringdata88[9];
    char stringdata89[11];
    char stringdata90[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQMqttClientENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQMqttClientENDCLASS_t qt_meta_stringdata_CLASSQMqttClientENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "QMqttClient"
        QT_MOC_LITERAL(12, 9),  // "connected"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 12),  // "disconnected"
        QT_MOC_LITERAL(36, 15),  // "messageReceived"
        QT_MOC_LITERAL(52, 7),  // "message"
        QT_MOC_LITERAL(60, 14),  // "QMqttTopicName"
        QT_MOC_LITERAL(75, 5),  // "topic"
        QT_MOC_LITERAL(81, 20),  // "messageStatusChanged"
        QT_MOC_LITERAL(102, 2),  // "id"
        QT_MOC_LITERAL(105, 20),  // "QMqtt::MessageStatus"
        QT_MOC_LITERAL(126, 1),  // "s"
        QT_MOC_LITERAL(128, 28),  // "QMqttMessageStatusProperties"
        QT_MOC_LITERAL(157, 10),  // "properties"
        QT_MOC_LITERAL(168, 11),  // "messageSent"
        QT_MOC_LITERAL(180, 20),  // "pingResponseReceived"
        QT_MOC_LITERAL(201, 21),  // "brokerSessionRestored"
        QT_MOC_LITERAL(223, 15),  // "hostnameChanged"
        QT_MOC_LITERAL(239, 8),  // "hostname"
        QT_MOC_LITERAL(248, 11),  // "portChanged"
        QT_MOC_LITERAL(260, 4),  // "port"
        QT_MOC_LITERAL(265, 15),  // "clientIdChanged"
        QT_MOC_LITERAL(281, 8),  // "clientId"
        QT_MOC_LITERAL(290, 16),  // "keepAliveChanged"
        QT_MOC_LITERAL(307, 9),  // "keepAlive"
        QT_MOC_LITERAL(317, 22),  // "protocolVersionChanged"
        QT_MOC_LITERAL(340, 15),  // "ProtocolVersion"
        QT_MOC_LITERAL(356, 15),  // "protocolVersion"
        QT_MOC_LITERAL(372, 12),  // "stateChanged"
        QT_MOC_LITERAL(385, 11),  // "ClientState"
        QT_MOC_LITERAL(397, 5),  // "state"
        QT_MOC_LITERAL(403, 12),  // "errorChanged"
        QT_MOC_LITERAL(416, 11),  // "ClientError"
        QT_MOC_LITERAL(428, 5),  // "error"
        QT_MOC_LITERAL(434, 15),  // "usernameChanged"
        QT_MOC_LITERAL(450, 8),  // "username"
        QT_MOC_LITERAL(459, 15),  // "passwordChanged"
        QT_MOC_LITERAL(475, 8),  // "password"
        QT_MOC_LITERAL(484, 19),  // "cleanSessionChanged"
        QT_MOC_LITERAL(504, 12),  // "cleanSession"
        QT_MOC_LITERAL(517, 16),  // "willTopicChanged"
        QT_MOC_LITERAL(534, 9),  // "willTopic"
        QT_MOC_LITERAL(544, 14),  // "willQoSChanged"
        QT_MOC_LITERAL(559, 7),  // "willQoS"
        QT_MOC_LITERAL(567, 18),  // "willMessageChanged"
        QT_MOC_LITERAL(586, 11),  // "willMessage"
        QT_MOC_LITERAL(598, 17),  // "willRetainChanged"
        QT_MOC_LITERAL(616, 10),  // "willRetain"
        QT_MOC_LITERAL(627, 20),  // "autoKeepAliveChanged"
        QT_MOC_LITERAL(648, 13),  // "autoKeepAlive"
        QT_MOC_LITERAL(662, 23),  // "authenticationRequested"
        QT_MOC_LITERAL(686, 29),  // "QMqttAuthenticationProperties"
        QT_MOC_LITERAL(716, 1),  // "p"
        QT_MOC_LITERAL(718, 22),  // "authenticationFinished"
        QT_MOC_LITERAL(741, 11),  // "setHostname"
        QT_MOC_LITERAL(753, 7),  // "setPort"
        QT_MOC_LITERAL(761, 11),  // "setClientId"
        QT_MOC_LITERAL(773, 12),  // "setKeepAlive"
        QT_MOC_LITERAL(786, 18),  // "setProtocolVersion"
        QT_MOC_LITERAL(805, 8),  // "setState"
        QT_MOC_LITERAL(814, 8),  // "setError"
        QT_MOC_LITERAL(823, 11),  // "setUsername"
        QT_MOC_LITERAL(835, 11),  // "setPassword"
        QT_MOC_LITERAL(847, 15),  // "setCleanSession"
        QT_MOC_LITERAL(863, 12),  // "setWillTopic"
        QT_MOC_LITERAL(876, 10),  // "setWillQoS"
        QT_MOC_LITERAL(887, 14),  // "setWillMessage"
        QT_MOC_LITERAL(902, 13),  // "setWillRetain"
        QT_MOC_LITERAL(916, 16),  // "setAutoKeepAlive"
        QT_MOC_LITERAL(933, 7),  // "publish"
        QT_MOC_LITERAL(941, 3),  // "qos"
        QT_MOC_LITERAL(945, 6),  // "retain"
        QT_MOC_LITERAL(952, 22),  // "QMqttPublishProperties"
        QT_MOC_LITERAL(975, 13),  // "connectToHost"
        QT_MOC_LITERAL(989, 18),  // "disconnectFromHost"
        QT_MOC_LITERAL(1008, 12),  // "Disconnected"
        QT_MOC_LITERAL(1021, 10),  // "Connecting"
        QT_MOC_LITERAL(1032, 9),  // "Connected"
        QT_MOC_LITERAL(1042, 7),  // "NoError"
        QT_MOC_LITERAL(1050, 22),  // "InvalidProtocolVersion"
        QT_MOC_LITERAL(1073, 10),  // "IdRejected"
        QT_MOC_LITERAL(1084, 17),  // "ServerUnavailable"
        QT_MOC_LITERAL(1102, 21),  // "BadUsernameOrPassword"
        QT_MOC_LITERAL(1124, 13),  // "NotAuthorized"
        QT_MOC_LITERAL(1138, 16),  // "TransportInvalid"
        QT_MOC_LITERAL(1155, 17),  // "ProtocolViolation"
        QT_MOC_LITERAL(1173, 12),  // "UnknownError"
        QT_MOC_LITERAL(1186, 18),  // "Mqtt5SpecificError"
        QT_MOC_LITERAL(1205, 8),  // "MQTT_3_1"
        QT_MOC_LITERAL(1214, 10),  // "MQTT_3_1_1"
        QT_MOC_LITERAL(1225, 8)   // "MQTT_5_0"
    },
    "QMqttClient",
    "connected",
    "",
    "disconnected",
    "messageReceived",
    "message",
    "QMqttTopicName",
    "topic",
    "messageStatusChanged",
    "id",
    "QMqtt::MessageStatus",
    "s",
    "QMqttMessageStatusProperties",
    "properties",
    "messageSent",
    "pingResponseReceived",
    "brokerSessionRestored",
    "hostnameChanged",
    "hostname",
    "portChanged",
    "port",
    "clientIdChanged",
    "clientId",
    "keepAliveChanged",
    "keepAlive",
    "protocolVersionChanged",
    "ProtocolVersion",
    "protocolVersion",
    "stateChanged",
    "ClientState",
    "state",
    "errorChanged",
    "ClientError",
    "error",
    "usernameChanged",
    "username",
    "passwordChanged",
    "password",
    "cleanSessionChanged",
    "cleanSession",
    "willTopicChanged",
    "willTopic",
    "willQoSChanged",
    "willQoS",
    "willMessageChanged",
    "willMessage",
    "willRetainChanged",
    "willRetain",
    "autoKeepAliveChanged",
    "autoKeepAlive",
    "authenticationRequested",
    "QMqttAuthenticationProperties",
    "p",
    "authenticationFinished",
    "setHostname",
    "setPort",
    "setClientId",
    "setKeepAlive",
    "setProtocolVersion",
    "setState",
    "setError",
    "setUsername",
    "setPassword",
    "setCleanSession",
    "setWillTopic",
    "setWillQoS",
    "setWillMessage",
    "setWillRetain",
    "setAutoKeepAlive",
    "publish",
    "qos",
    "retain",
    "QMqttPublishProperties",
    "connectToHost",
    "disconnectFromHost",
    "Disconnected",
    "Connecting",
    "Connected",
    "NoError",
    "InvalidProtocolVersion",
    "IdRejected",
    "ServerUnavailable",
    "BadUsernameOrPassword",
    "NotAuthorized",
    "TransportInvalid",
    "ProtocolViolation",
    "UnknownError",
    "Mqtt5SpecificError",
    "MQTT_3_1",
    "MQTT_3_1_1",
    "MQTT_5_0"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQMqttClientENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
      15,  490, // properties
       3,  565, // enums/sets
       0,    0, // constructors
       0,       // flags
      25,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  314,    2, 0x06,   16 /* Public */,
       3,    0,  315,    2, 0x06,   17 /* Public */,
       4,    2,  316,    2, 0x06,   18 /* Public */,
       4,    1,  321,    2, 0x26,   21 /* Public | MethodCloned */,
       8,    3,  324,    2, 0x06,   23 /* Public */,
      14,    1,  331,    2, 0x06,   27 /* Public */,
      15,    0,  334,    2, 0x06,   29 /* Public */,
      16,    0,  335,    2, 0x06,   30 /* Public */,
      17,    1,  336,    2, 0x06,   31 /* Public */,
      19,    1,  339,    2, 0x06,   33 /* Public */,
      21,    1,  342,    2, 0x06,   35 /* Public */,
      23,    1,  345,    2, 0x06,   37 /* Public */,
      25,    1,  348,    2, 0x06,   39 /* Public */,
      28,    1,  351,    2, 0x06,   41 /* Public */,
      31,    1,  354,    2, 0x06,   43 /* Public */,
      34,    1,  357,    2, 0x06,   45 /* Public */,
      36,    1,  360,    2, 0x06,   47 /* Public */,
      38,    1,  363,    2, 0x06,   49 /* Public */,
      40,    1,  366,    2, 0x06,   51 /* Public */,
      42,    1,  369,    2, 0x06,   53 /* Public */,
      44,    1,  372,    2, 0x06,   55 /* Public */,
      46,    1,  375,    2, 0x06,   57 /* Public */,
      48,    1,  378,    2, 0x06,   59 /* Public */,
      50,    1,  381,    2, 0x06,   61 /* Public */,
      53,    1,  384,    2, 0x06,   63 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      54,    1,  387,    2, 0x0a,   65 /* Public */,
      55,    1,  390,    2, 0x0a,   67 /* Public */,
      56,    1,  393,    2, 0x0a,   69 /* Public */,
      57,    1,  396,    2, 0x0a,   71 /* Public */,
      58,    1,  399,    2, 0x0a,   73 /* Public */,
      59,    1,  402,    2, 0x0a,   75 /* Public */,
      60,    1,  405,    2, 0x0a,   77 /* Public */,
      61,    1,  408,    2, 0x0a,   79 /* Public */,
      62,    1,  411,    2, 0x0a,   81 /* Public */,
      63,    1,  414,    2, 0x0a,   83 /* Public */,
      64,    1,  417,    2, 0x0a,   85 /* Public */,
      65,    1,  420,    2, 0x0a,   87 /* Public */,
      66,    1,  423,    2, 0x0a,   89 /* Public */,
      67,    1,  426,    2, 0x0a,   91 /* Public */,
      68,    1,  429,    2, 0x0a,   93 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      69,    4,  432,    2, 0x02,   95 /* Public */,
      69,    3,  441,    2, 0x22,  100 /* Public | MethodCloned */,
      69,    2,  448,    2, 0x22,  104 /* Public | MethodCloned */,
      69,    1,  453,    2, 0x22,  107 /* Public | MethodCloned */,
      69,    5,  456,    2, 0x02,  109 /* Public */,
      69,    4,  467,    2, 0x22,  115 /* Public | MethodCloned */,
      69,    3,  476,    2, 0x22,  120 /* Public | MethodCloned */,
      69,    2,  483,    2, 0x22,  124 /* Public | MethodCloned */,
      73,    0,  488,    2, 0x02,  127 /* Public */,
      74,    0,  489,    2, 0x02,  128 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10, 0x80000000 | 12,    9,   11,   13,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::UShort,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::UShort,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void, QMetaType::QString,   41,
    QMetaType::Void, QMetaType::UChar,   43,
    QMetaType::Void, QMetaType::QByteArray,   45,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, QMetaType::Bool,   49,
    QMetaType::Void, 0x80000000 | 51,   52,
    QMetaType::Void, 0x80000000 | 51,   52,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::UShort,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::UShort,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void, QMetaType::QString,   41,
    QMetaType::Void, QMetaType::UChar,   43,
    QMetaType::Void, QMetaType::QByteArray,   45,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, QMetaType::Bool,   49,

 // methods: parameters
    QMetaType::Int, 0x80000000 | 6, QMetaType::QByteArray, QMetaType::UChar, QMetaType::Bool,    7,    5,   70,   71,
    QMetaType::Int, 0x80000000 | 6, QMetaType::QByteArray, QMetaType::UChar,    7,    5,   70,
    QMetaType::Int, 0x80000000 | 6, QMetaType::QByteArray,    7,    5,
    QMetaType::Int, 0x80000000 | 6,    7,
    QMetaType::Int, 0x80000000 | 6, 0x80000000 | 72, QMetaType::QByteArray, QMetaType::UChar, QMetaType::Bool,    7,   13,    5,   70,   71,
    QMetaType::Int, 0x80000000 | 6, 0x80000000 | 72, QMetaType::QByteArray, QMetaType::UChar,    7,   13,    5,   70,
    QMetaType::Int, 0x80000000 | 6, 0x80000000 | 72, QMetaType::QByteArray,    7,   13,    5,
    QMetaType::Int, 0x80000000 | 6, 0x80000000 | 72,    7,   13,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      22, QMetaType::QString, 0x00015103, uint(10), 0,
      18, QMetaType::QString, 0x00015103, uint(8), 0,
      20, QMetaType::UShort, 0x00015103, uint(9), 0,
      24, QMetaType::UShort, 0x00015103, uint(11), 0,
      27, 0x80000000 | 26, 0x0001510b, uint(12), 0,
      30, 0x80000000 | 29, 0x0001510b, uint(13), 0,
      33, 0x80000000 | 32, 0x0001510b, uint(14), 0,
      35, QMetaType::QString, 0x00015103, uint(15), 0,
      37, QMetaType::QString, 0x00015103, uint(16), 0,
      39, QMetaType::Bool, 0x00015103, uint(17), 0,
      41, QMetaType::QString, 0x00015103, uint(18), 0,
      45, QMetaType::QByteArray, 0x00015103, uint(20), 0,
      43, QMetaType::UChar, 0x00015103, uint(19), 0,
      47, QMetaType::Bool, 0x00015103, uint(21), 0,
      49, QMetaType::Bool, 0x00015103, uint(22), 0,

 // enums: name, alias, flags, count, data
      29,   29, 0x0,    3,  580,
      32,   32, 0x0,   10,  586,
      26,   26, 0x0,    3,  606,

 // enum data: key, value
      75, uint(QMqttClient::Disconnected),
      76, uint(QMqttClient::Connecting),
      77, uint(QMqttClient::Connected),
      78, uint(QMqttClient::NoError),
      79, uint(QMqttClient::InvalidProtocolVersion),
      80, uint(QMqttClient::IdRejected),
      81, uint(QMqttClient::ServerUnavailable),
      82, uint(QMqttClient::BadUsernameOrPassword),
      83, uint(QMqttClient::NotAuthorized),
      84, uint(QMqttClient::TransportInvalid),
      85, uint(QMqttClient::ProtocolViolation),
      86, uint(QMqttClient::UnknownError),
      87, uint(QMqttClient::Mqtt5SpecificError),
      88, uint(QMqttClient::MQTT_3_1),
      89, uint(QMqttClient::MQTT_3_1_1),
      90, uint(QMqttClient::MQTT_5_0),

       0        // eod
};

Q_CONSTINIT const QMetaObject QMqttClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQMqttClientENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQMqttClientENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQMqttClientENDCLASS_t,
        // property 'clientId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hostname'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'port'
        QtPrivate::TypeAndForceComplete<quint16, std::true_type>,
        // property 'keepAlive'
        QtPrivate::TypeAndForceComplete<quint16, std::true_type>,
        // property 'protocolVersion'
        QtPrivate::TypeAndForceComplete<ProtocolVersion, std::true_type>,
        // property 'state'
        QtPrivate::TypeAndForceComplete<ClientState, std::true_type>,
        // property 'error'
        QtPrivate::TypeAndForceComplete<ClientError, std::true_type>,
        // property 'username'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'password'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'cleanSession'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'willTopic'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'willMessage'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'willQoS'
        QtPrivate::TypeAndForceComplete<quint8, std::true_type>,
        // property 'willRetain'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'autoKeepAlive'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QMqttClient, std::true_type>,
        // method 'connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'messageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMqttTopicName &, std::false_type>,
        // method 'messageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'messageStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMqtt::MessageStatus, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMqttMessageStatusProperties &, std::false_type>,
        // method 'messageSent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'pingResponseReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'brokerSessionRestored'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hostnameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'portChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        // method 'clientIdChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'keepAliveChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        // method 'protocolVersionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ProtocolVersion, std::false_type>,
        // method 'stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ClientState, std::false_type>,
        // method 'errorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ClientError, std::false_type>,
        // method 'usernameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'passwordChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'cleanSessionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'willTopicChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'willQoSChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint8, std::false_type>,
        // method 'willMessageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'willRetainChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'autoKeepAliveChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'authenticationRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMqttAuthenticationProperties &, std::false_type>,
        // method 'authenticationFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMqttAuthenticationProperties &, std::false_type>,
        // method 'setHostname'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setPort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        // method 'setClientId'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setKeepAlive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        // method 'setProtocolVersion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ProtocolVersion, std::false_type>,
        // method 'setState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ClientState, std::false_type>,
        // method 'setError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ClientError, std::false_type>,
        // method 'setUsername'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setPassword'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setCleanSession'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setWillTopic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setWillQoS'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint8, std::false_type>,
        // method 'setWillMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'setWillRetain'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setAutoKeepAlive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'publish'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMqttTopicName &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint8, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'publish'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMqttTopicName &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint8, std::false_type>,
        // method 'publish'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMqttTopicName &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'publish'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMqttTopicName &, std::false_type>,
        // method 'publish'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMqttTopicName &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMqttPublishProperties &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint8, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'publish'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMqttTopicName &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMqttPublishProperties &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint8, std::false_type>,
        // method 'publish'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMqttTopicName &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMqttPublishProperties &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'publish'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMqttTopicName &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMqttPublishProperties &, std::false_type>,
        // method 'connectToHost'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disconnectFromHost'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QMqttClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QMqttClient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->messageReceived((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMqttTopicName>>(_a[2]))); break;
        case 3: _t->messageReceived((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 4: _t->messageStatusChanged((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMqtt::MessageStatus>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QMqttMessageStatusProperties>>(_a[3]))); break;
        case 5: _t->messageSent((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1]))); break;
        case 6: _t->pingResponseReceived(); break;
        case 7: _t->brokerSessionRestored(); break;
        case 8: _t->hostnameChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->portChanged((*reinterpret_cast< std::add_pointer_t<quint16>>(_a[1]))); break;
        case 10: _t->clientIdChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->keepAliveChanged((*reinterpret_cast< std::add_pointer_t<quint16>>(_a[1]))); break;
        case 12: _t->protocolVersionChanged((*reinterpret_cast< std::add_pointer_t<ProtocolVersion>>(_a[1]))); break;
        case 13: _t->stateChanged((*reinterpret_cast< std::add_pointer_t<ClientState>>(_a[1]))); break;
        case 14: _t->errorChanged((*reinterpret_cast< std::add_pointer_t<ClientError>>(_a[1]))); break;
        case 15: _t->usernameChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->passwordChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->cleanSessionChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->willTopicChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->willQoSChanged((*reinterpret_cast< std::add_pointer_t<quint8>>(_a[1]))); break;
        case 20: _t->willMessageChanged((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 21: _t->willRetainChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->autoKeepAliveChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->authenticationRequested((*reinterpret_cast< std::add_pointer_t<QMqttAuthenticationProperties>>(_a[1]))); break;
        case 24: _t->authenticationFinished((*reinterpret_cast< std::add_pointer_t<QMqttAuthenticationProperties>>(_a[1]))); break;
        case 25: _t->setHostname((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->setPort((*reinterpret_cast< std::add_pointer_t<quint16>>(_a[1]))); break;
        case 27: _t->setClientId((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->setKeepAlive((*reinterpret_cast< std::add_pointer_t<quint16>>(_a[1]))); break;
        case 29: _t->setProtocolVersion((*reinterpret_cast< std::add_pointer_t<ProtocolVersion>>(_a[1]))); break;
        case 30: _t->setState((*reinterpret_cast< std::add_pointer_t<ClientState>>(_a[1]))); break;
        case 31: _t->setError((*reinterpret_cast< std::add_pointer_t<ClientError>>(_a[1]))); break;
        case 32: _t->setUsername((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 33: _t->setPassword((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 34: _t->setCleanSession((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 35: _t->setWillTopic((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 36: _t->setWillQoS((*reinterpret_cast< std::add_pointer_t<quint8>>(_a[1]))); break;
        case 37: _t->setWillMessage((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 38: _t->setWillRetain((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 39: _t->setAutoKeepAlive((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 40: { qint32 _r = _t->publish((*reinterpret_cast< std::add_pointer_t<QMqttTopicName>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<quint8>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 41: { qint32 _r = _t->publish((*reinterpret_cast< std::add_pointer_t<QMqttTopicName>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<quint8>>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 42: { qint32 _r = _t->publish((*reinterpret_cast< std::add_pointer_t<QMqttTopicName>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 43: { qint32 _r = _t->publish((*reinterpret_cast< std::add_pointer_t<QMqttTopicName>>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 44: { qint32 _r = _t->publish((*reinterpret_cast< std::add_pointer_t<QMqttTopicName>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMqttPublishProperties>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<quint8>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 45: { qint32 _r = _t->publish((*reinterpret_cast< std::add_pointer_t<QMqttTopicName>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMqttPublishProperties>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<quint8>>(_a[4])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 46: { qint32 _r = _t->publish((*reinterpret_cast< std::add_pointer_t<QMqttTopicName>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMqttPublishProperties>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 47: { qint32 _r = _t->publish((*reinterpret_cast< std::add_pointer_t<QMqttTopicName>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMqttPublishProperties>>(_a[2])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 48: _t->connectToHost(); break;
        case 49: _t->disconnectFromHost(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttTopicName >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttTopicName >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttTopicName >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttTopicName >(); break;
            }
            break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttTopicName >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttTopicName >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttTopicName >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttTopicName >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttTopicName >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QMqttClient::*)();
            if (_t _q_method = &QMqttClient::connected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)();
            if (_t _q_method = &QMqttClient::disconnected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(const QByteArray & , const QMqttTopicName & );
            if (_t _q_method = &QMqttClient::messageReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(qint32 , QMqtt::MessageStatus , const QMqttMessageStatusProperties & );
            if (_t _q_method = &QMqttClient::messageStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(qint32 );
            if (_t _q_method = &QMqttClient::messageSent; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)();
            if (_t _q_method = &QMqttClient::pingResponseReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)();
            if (_t _q_method = &QMqttClient::brokerSessionRestored; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(QString );
            if (_t _q_method = &QMqttClient::hostnameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(quint16 );
            if (_t _q_method = &QMqttClient::portChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(QString );
            if (_t _q_method = &QMqttClient::clientIdChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(quint16 );
            if (_t _q_method = &QMqttClient::keepAliveChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(ProtocolVersion );
            if (_t _q_method = &QMqttClient::protocolVersionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(ClientState );
            if (_t _q_method = &QMqttClient::stateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(ClientError );
            if (_t _q_method = &QMqttClient::errorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(QString );
            if (_t _q_method = &QMqttClient::usernameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(QString );
            if (_t _q_method = &QMqttClient::passwordChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(bool );
            if (_t _q_method = &QMqttClient::cleanSessionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(QString );
            if (_t _q_method = &QMqttClient::willTopicChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(quint8 );
            if (_t _q_method = &QMqttClient::willQoSChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(QByteArray );
            if (_t _q_method = &QMqttClient::willMessageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(bool );
            if (_t _q_method = &QMqttClient::willRetainChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(bool );
            if (_t _q_method = &QMqttClient::autoKeepAliveChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(const QMqttAuthenticationProperties & );
            if (_t _q_method = &QMqttClient::authenticationRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(const QMqttAuthenticationProperties & );
            if (_t _q_method = &QMqttClient::authenticationFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 24;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QMqttClient *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->clientId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->hostname(); break;
        case 2: *reinterpret_cast< quint16*>(_v) = _t->port(); break;
        case 3: *reinterpret_cast< quint16*>(_v) = _t->keepAlive(); break;
        case 4: *reinterpret_cast< ProtocolVersion*>(_v) = _t->protocolVersion(); break;
        case 5: *reinterpret_cast< ClientState*>(_v) = _t->state(); break;
        case 6: *reinterpret_cast< ClientError*>(_v) = _t->error(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->username(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->password(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->cleanSession(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->willTopic(); break;
        case 11: *reinterpret_cast< QByteArray*>(_v) = _t->willMessage(); break;
        case 12: *reinterpret_cast< quint8*>(_v) = _t->willQoS(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->willRetain(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->autoKeepAlive(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QMqttClient *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setClientId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setHostname(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setPort(*reinterpret_cast< quint16*>(_v)); break;
        case 3: _t->setKeepAlive(*reinterpret_cast< quint16*>(_v)); break;
        case 4: _t->setProtocolVersion(*reinterpret_cast< ProtocolVersion*>(_v)); break;
        case 5: _t->setState(*reinterpret_cast< ClientState*>(_v)); break;
        case 6: _t->setError(*reinterpret_cast< ClientError*>(_v)); break;
        case 7: _t->setUsername(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setPassword(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setCleanSession(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setWillTopic(*reinterpret_cast< QString*>(_v)); break;
        case 11: _t->setWillMessage(*reinterpret_cast< QByteArray*>(_v)); break;
        case 12: _t->setWillQoS(*reinterpret_cast< quint8*>(_v)); break;
        case 13: _t->setWillRetain(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setAutoKeepAlive(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QMqttClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMqttClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQMqttClientENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QMqttClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void QMqttClient::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QMqttClient::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QMqttClient::messageReceived(const QByteArray & _t1, const QMqttTopicName & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 4
void QMqttClient::messageStatusChanged(qint32 _t1, QMqtt::MessageStatus _t2, const QMqttMessageStatusProperties & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QMqttClient::messageSent(qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QMqttClient::pingResponseReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QMqttClient::brokerSessionRestored()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QMqttClient::hostnameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QMqttClient::portChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QMqttClient::clientIdChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QMqttClient::keepAliveChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QMqttClient::protocolVersionChanged(ProtocolVersion _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QMqttClient::stateChanged(ClientState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QMqttClient::errorChanged(ClientError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QMqttClient::usernameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QMqttClient::passwordChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void QMqttClient::cleanSessionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void QMqttClient::willTopicChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void QMqttClient::willQoSChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void QMqttClient::willMessageChanged(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void QMqttClient::willRetainChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void QMqttClient::autoKeepAliveChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void QMqttClient::authenticationRequested(const QMqttAuthenticationProperties & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void QMqttClient::authenticationFinished(const QMqttAuthenticationProperties & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}
QT_WARNING_POP
