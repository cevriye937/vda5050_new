/****************************************************************************
** Meta object code from reading C++ file 'qmqttsubscription.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../qtmqtt/src/mqtt/qmqttsubscription.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmqttsubscription.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQMqttSubscriptionENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQMqttSubscriptionENDCLASS = QtMocHelpers::stringData(
    "QMqttSubscription",
    "stateChanged",
    "",
    "SubscriptionState",
    "state",
    "qosChanged",
    "messageReceived",
    "QMqttMessage",
    "msg",
    "unsubscribe",
    "qos",
    "topic",
    "QMqttTopicFilter",
    "reason",
    "reasonCode",
    "QMqtt::ReasonCode",
    "sharedSubscription",
    "sharedSubscriptionName",
    "Unsubscribed",
    "SubscriptionPending",
    "Subscribed",
    "UnsubscriptionPending",
    "Error"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQMqttSubscriptionENDCLASS_t {
    uint offsetsAndSizes[46];
    char stringdata0[18];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[6];
    char stringdata5[11];
    char stringdata6[16];
    char stringdata7[13];
    char stringdata8[4];
    char stringdata9[12];
    char stringdata10[4];
    char stringdata11[6];
    char stringdata12[17];
    char stringdata13[7];
    char stringdata14[11];
    char stringdata15[18];
    char stringdata16[19];
    char stringdata17[23];
    char stringdata18[13];
    char stringdata19[20];
    char stringdata20[11];
    char stringdata21[22];
    char stringdata22[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQMqttSubscriptionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQMqttSubscriptionENDCLASS_t qt_meta_stringdata_CLASSQMqttSubscriptionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "QMqttSubscription"
        QT_MOC_LITERAL(18, 12),  // "stateChanged"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 17),  // "SubscriptionState"
        QT_MOC_LITERAL(50, 5),  // "state"
        QT_MOC_LITERAL(56, 10),  // "qosChanged"
        QT_MOC_LITERAL(67, 15),  // "messageReceived"
        QT_MOC_LITERAL(83, 12),  // "QMqttMessage"
        QT_MOC_LITERAL(96, 3),  // "msg"
        QT_MOC_LITERAL(100, 11),  // "unsubscribe"
        QT_MOC_LITERAL(112, 3),  // "qos"
        QT_MOC_LITERAL(116, 5),  // "topic"
        QT_MOC_LITERAL(122, 16),  // "QMqttTopicFilter"
        QT_MOC_LITERAL(139, 6),  // "reason"
        QT_MOC_LITERAL(146, 10),  // "reasonCode"
        QT_MOC_LITERAL(157, 17),  // "QMqtt::ReasonCode"
        QT_MOC_LITERAL(175, 18),  // "sharedSubscription"
        QT_MOC_LITERAL(194, 22),  // "sharedSubscriptionName"
        QT_MOC_LITERAL(217, 12),  // "Unsubscribed"
        QT_MOC_LITERAL(230, 19),  // "SubscriptionPending"
        QT_MOC_LITERAL(250, 10),  // "Subscribed"
        QT_MOC_LITERAL(261, 21),  // "UnsubscriptionPending"
        QT_MOC_LITERAL(283, 5)   // "Error"
    },
    "QMqttSubscription",
    "stateChanged",
    "",
    "SubscriptionState",
    "state",
    "qosChanged",
    "messageReceived",
    "QMqttMessage",
    "msg",
    "unsubscribe",
    "qos",
    "topic",
    "QMqttTopicFilter",
    "reason",
    "reasonCode",
    "QMqtt::ReasonCode",
    "sharedSubscription",
    "sharedSubscriptionName",
    "Unsubscribed",
    "SubscriptionPending",
    "Subscribed",
    "UnsubscriptionPending",
    "Error"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQMqttSubscriptionENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       7,   48, // properties
       1,   83, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    8 /* Public */,
       5,    1,   41,    2, 0x06,   10 /* Public */,
       6,    1,   44,    2, 0x06,   12 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   47,    2, 0x0a,   14 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::UChar,    2,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x00015009, uint(0), 0,
      10, QMetaType::UChar, 0x00015001, uint(1), 0,
      11, 0x80000000 | 12, 0x00015009, uint(-1), 0,
      13, QMetaType::QString, 0x00015001, uint(-1), 0,
      14, 0x80000000 | 15, 0x00015009, uint(-1), 0,
      16, QMetaType::Bool, 0x00015001, uint(-1), 0,
      17, QMetaType::QString, 0x00015001, uint(-1), 0,

 // enums: name, alias, flags, count, data
       3,    3, 0x0,    5,   88,

 // enum data: key, value
      18, uint(QMqttSubscription::Unsubscribed),
      19, uint(QMqttSubscription::SubscriptionPending),
      20, uint(QMqttSubscription::Subscribed),
      21, uint(QMqttSubscription::UnsubscriptionPending),
      22, uint(QMqttSubscription::Error),

       0        // eod
};

Q_CONSTINIT const QMetaObject QMqttSubscription::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQMqttSubscriptionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQMqttSubscriptionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQMqttSubscriptionENDCLASS_t,
        // property 'state'
        QtPrivate::TypeAndForceComplete<SubscriptionState, std::true_type>,
        // property 'qos'
        QtPrivate::TypeAndForceComplete<quint8, std::true_type>,
        // property 'topic'
        QtPrivate::TypeAndForceComplete<QMqttTopicFilter, std::true_type>,
        // property 'reason'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'reasonCode'
        QtPrivate::TypeAndForceComplete<QMqtt::ReasonCode, std::true_type>,
        // property 'sharedSubscription'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'sharedSubscriptionName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QMqttSubscription, std::true_type>,
        // method 'stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SubscriptionState, std::false_type>,
        // method 'qosChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint8, std::false_type>,
        // method 'messageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMqttMessage, std::false_type>,
        // method 'unsubscribe'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QMqttSubscription::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QMqttSubscription *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< std::add_pointer_t<SubscriptionState>>(_a[1]))); break;
        case 1: _t->qosChanged((*reinterpret_cast< std::add_pointer_t<quint8>>(_a[1]))); break;
        case 2: _t->messageReceived((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 3: _t->unsubscribe(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttMessage >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QMqttSubscription::*)(SubscriptionState );
            if (_t _q_method = &QMqttSubscription::stateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QMqttSubscription::*)(quint8 );
            if (_t _q_method = &QMqttSubscription::qosChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QMqttSubscription::*)(QMqttMessage );
            if (_t _q_method = &QMqttSubscription::messageReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMqttTopicFilter >(); break;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QMqttSubscription *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< SubscriptionState*>(_v) = _t->state(); break;
        case 1: *reinterpret_cast< quint8*>(_v) = _t->qos(); break;
        case 2: *reinterpret_cast< QMqttTopicFilter*>(_v) = _t->topic(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->reason(); break;
        case 4: *reinterpret_cast< QMqtt::ReasonCode*>(_v) = _t->reasonCode(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isSharedSubscription(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->sharedSubscriptionName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QMqttSubscription::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMqttSubscription::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQMqttSubscriptionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QMqttSubscription::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QMqttSubscription::stateChanged(SubscriptionState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QMqttSubscription::qosChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QMqttSubscription::messageReceived(QMqttMessage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
