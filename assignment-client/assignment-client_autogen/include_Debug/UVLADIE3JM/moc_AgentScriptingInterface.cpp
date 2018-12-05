/****************************************************************************
** Meta object code from reading C++ file 'AgentScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AgentScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AgentScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AgentScriptingInterface_t {
    QByteArrayData data[12];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AgentScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AgentScriptingInterface_t qt_meta_stringdata_AgentScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 23), // "AgentScriptingInterface"
QT_MOC_LITERAL(1, 24, 11), // "setIsAvatar"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 8), // "isAvatar"
QT_MOC_LITERAL(4, 46, 15), // "playAvatarSound"
QT_MOC_LITERAL(5, 62, 18), // "SharedSoundPointer"
QT_MOC_LITERAL(6, 81, 11), // "avatarSound"
QT_MOC_LITERAL(7, 93, 20), // "isPlayingAvatarSound"
QT_MOC_LITERAL(8, 114, 24), // "isListeningToAudioStream"
QT_MOC_LITERAL(9, 139, 18), // "isNoiseGateEnabled"
QT_MOC_LITERAL(10, 158, 25), // "lastReceivedAudioLoudness"
QT_MOC_LITERAL(11, 184, 11) // "sessionUUID"

    },
    "AgentScriptingInterface\0setIsAvatar\0"
    "\0isAvatar\0playAvatarSound\0SharedSoundPointer\0"
    "avatarSound\0isPlayingAvatarSound\0"
    "isListeningToAudioStream\0isNoiseGateEnabled\0"
    "lastReceivedAudioLoudness\0sessionUUID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AgentScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       6,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       3,    0,   32,    2, 0x0a /* Public */,
       4,    1,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 5,    6,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00095103,
       7, QMetaType::Bool, 0x00095001,
       8, QMetaType::Bool, 0x00095103,
       9, QMetaType::Bool, 0x00095103,
      10, QMetaType::Float, 0x00095001,
      11, QMetaType::QUuid, 0x00095001,

       0        // eod
};

void AgentScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AgentScriptingInterface *_t = static_cast<AgentScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setIsAvatar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: { bool _r = _t->isAvatar();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->playAvatarSound((*reinterpret_cast< SharedSoundPointer(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedSoundPointer >(); break;
            }
            break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AgentScriptingInterface *_t = static_cast<AgentScriptingInterface *>(_o);
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
        AgentScriptingInterface *_t = static_cast<AgentScriptingInterface *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject AgentScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AgentScriptingInterface.data,
      qt_meta_data_AgentScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AgentScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AgentScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AgentScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AgentScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
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
