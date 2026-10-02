/****************************************************************************
** Meta object code from reading C++ file 'qmqttmessage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../qtmqtt/src/mqtt/qmqttmessage.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmqttmessage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQMqttMessageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQMqttMessageENDCLASS = QtMocHelpers::stringData(
    "QMqttMessage",
    "topic",
    "QMqttTopicName",
    "payload",
    "id",
    "qos",
    "duplicate",
    "retain"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQMqttMessageENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[13];
    char stringdata1[6];
    char stringdata2[15];
    char stringdata3[8];
    char stringdata4[3];
    char stringdata5[4];
    char stringdata6[10];
    char stringdata7[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQMqttMessageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQMqttMessageENDCLASS_t qt_meta_stringdata_CLASSQMqttMessageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "QMqttMessage"
        QT_MOC_LITERAL(13, 5),  // "topic"
        QT_MOC_LITERAL(19, 14),  // "QMqttTopicName"
        QT_MOC_LITERAL(34, 7),  // "payload"
        QT_MOC_LITERAL(42, 2),  // "id"
        QT_MOC_LITERAL(45, 3),  // "qos"
        QT_MOC_LITERAL(49, 9),  // "duplicate"
        QT_MOC_LITERAL(59, 6)   // "retain"
    },
    "QMqttMessage",
    "topic",
    "QMqttTopicName",
    "payload",
    "id",
    "qos",
    "duplicate",
    "retain"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQMqttMessageENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       3, QMetaType::QByteArray, 0x00015401, uint(-1), 0,
       4, QMetaType::UShort, 0x00015401, uint(-1), 0,
       5, QMetaType::UChar, 0x00015401, uint(-1), 0,
       6, QMetaType::Bool, 0x00015401, uint(-1), 0,
       7, QMetaType::Bool, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QMqttMessage::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQMqttMessageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQMqttMessageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQMqttMessageENDCLASS_t,
        // property 'topic'
        QtPrivate::TypeAndForceComplete<QMqttTopicName, std::true_type>,
        // property 'payload'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'id'
        QtPrivate::TypeAndForceComplete<quint16, std::true_type>,
        // property 'qos'
        QtPrivate::TypeAndForceComplete<quint8, std::true_type>,
        // property 'duplicate'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'retain'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QMqttMessage, std::true_type>
    >,
    nullptr
} };

void QMqttMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMqttTopicName >(); break;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<QMqttMessage *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QMqttTopicName*>(_v) = _t->topic(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = _t->payload(); break;
        case 2: *reinterpret_cast< quint16*>(_v) = _t->id(); break;
        case 3: *reinterpret_cast< quint8*>(_v) = _t->qos(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->duplicate(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->retain(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}
QT_WARNING_POP
