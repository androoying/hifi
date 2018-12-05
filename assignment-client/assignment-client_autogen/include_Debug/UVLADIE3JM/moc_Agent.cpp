/****************************************************************************
** Meta object code from reading C++ file 'Agent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Agent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Agent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Agent_t {
    QByteArrayData data[30];
    char stringdata0[462];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Agent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Agent_t qt_meta_stringdata_Agent = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Agent"
QT_MOC_LITERAL(1, 6, 3), // "run"
QT_MOC_LITERAL(2, 10, 0), // ""
QT_MOC_LITERAL(3, 11, 15), // "playAvatarSound"
QT_MOC_LITERAL(4, 27, 18), // "SharedSoundPointer"
QT_MOC_LITERAL(5, 46, 11), // "avatarSound"
QT_MOC_LITERAL(6, 58, 11), // "setIsAvatar"
QT_MOC_LITERAL(7, 70, 8), // "isAvatar"
QT_MOC_LITERAL(8, 79, 4), // "stop"
QT_MOC_LITERAL(9, 84, 13), // "requestScript"
QT_MOC_LITERAL(10, 98, 21), // "scriptRequestFinished"
QT_MOC_LITERAL(11, 120, 13), // "executeScript"
QT_MOC_LITERAL(12, 134, 17), // "handleAudioPacket"
QT_MOC_LITERAL(13, 152, 31), // "QSharedPointer<ReceivedMessage>"
QT_MOC_LITERAL(14, 184, 7), // "message"
QT_MOC_LITERAL(15, 192, 18), // "handleOctreePacket"
QT_MOC_LITERAL(16, 211, 17), // "SharedNodePointer"
QT_MOC_LITERAL(17, 229, 10), // "senderNode"
QT_MOC_LITERAL(18, 240, 25), // "handleSelectedAudioFormat"
QT_MOC_LITERAL(19, 266, 13), // "nodeActivated"
QT_MOC_LITERAL(20, 280, 13), // "activatedNode"
QT_MOC_LITERAL(21, 294, 10), // "nodeKilled"
QT_MOC_LITERAL(22, 305, 10), // "killedNode"
QT_MOC_LITERAL(23, 316, 18), // "processAgentAvatar"
QT_MOC_LITERAL(24, 335, 23), // "processAgentAvatarAudio"
QT_MOC_LITERAL(25, 359, 20), // "isPlayingAvatarSound"
QT_MOC_LITERAL(26, 380, 24), // "isListeningToAudioStream"
QT_MOC_LITERAL(27, 405, 18), // "isNoiseGateEnabled"
QT_MOC_LITERAL(28, 424, 25), // "lastReceivedAudioLoudness"
QT_MOC_LITERAL(29, 450, 11) // "sessionUUID"

    },
    "Agent\0run\0\0playAvatarSound\0"
    "SharedSoundPointer\0avatarSound\0"
    "setIsAvatar\0isAvatar\0stop\0requestScript\0"
    "scriptRequestFinished\0executeScript\0"
    "handleAudioPacket\0QSharedPointer<ReceivedMessage>\0"
    "message\0handleOctreePacket\0SharedNodePointer\0"
    "senderNode\0handleSelectedAudioFormat\0"
    "nodeActivated\0activatedNode\0nodeKilled\0"
    "killedNode\0processAgentAvatar\0"
    "processAgentAvatarAudio\0isPlayingAvatarSound\0"
    "isListeningToAudioStream\0isNoiseGateEnabled\0"
    "lastReceivedAudioLoudness\0sessionUUID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Agent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       6,  120, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    1,   90,    2, 0x0a /* Public */,
       6,    1,   93,    2, 0x0a /* Public */,
       7,    0,   96,    2, 0x0a /* Public */,
       8,    0,   97,    2, 0x0a /* Public */,
       9,    0,   98,    2, 0x08 /* Private */,
      10,    0,   99,    2, 0x08 /* Private */,
      11,    0,  100,    2, 0x08 /* Private */,
      12,    1,  101,    2, 0x08 /* Private */,
      15,    2,  104,    2, 0x08 /* Private */,
      18,    1,  109,    2, 0x08 /* Private */,
      19,    1,  112,    2, 0x08 /* Private */,
      21,    1,  115,    2, 0x08 /* Private */,
      23,    0,  118,    2, 0x08 /* Private */,
      24,    0,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 16,   14,   17,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   20,
    QMetaType::Void, 0x80000000 | 16,   22,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00095103,
      25, QMetaType::Bool, 0x00095001,
      26, QMetaType::Bool, 0x00095103,
      27, QMetaType::Bool, 0x00095103,
      28, QMetaType::Float, 0x00095001,
      29, QMetaType::QUuid, 0x00095001,

       0        // eod
};

void Agent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Agent *_t = static_cast<Agent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->run(); break;
        case 1: _t->playAvatarSound((*reinterpret_cast< SharedSoundPointer(*)>(_a[1]))); break;
        case 2: _t->setIsAvatar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: { bool _r = _t->isAvatar();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->stop(); break;
        case 5: _t->requestScript(); break;
        case 6: _t->scriptRequestFinished(); break;
        case 7: _t->executeScript(); break;
        case 8: _t->handleAudioPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 9: _t->handleOctreePacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 10: _t->handleSelectedAudioFormat((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 11: _t->nodeActivated((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 12: _t->nodeKilled((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 13: _t->processAgentAvatar(); break;
        case 14: _t->processAgentAvatarAudio(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedSoundPointer >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Agent *_t = static_cast<Agent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isAvatar(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isPlayingAvatarSound(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isListeningToAudioStream(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isNoiseGateEnabled(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getLastReceivedAudioLoudness(); break;
        case 5: *reinterpret_cast< QUuid*>(_v) = _t->getSessionUUID(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Agent *_t = static_cast<Agent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsAvatar(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setIsListeningToAudioStream(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setIsNoiseGateEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Agent::staticMetaObject = {
    { &ThreadedAssignment::staticMetaObject, qt_meta_stringdata_Agent.data,
      qt_meta_data_Agent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Agent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Agent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Agent.stringdata0))
        return static_cast<void*>(this);
    return ThreadedAssignment::qt_metacast(_clname);
}

int Agent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ThreadedAssignment::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
