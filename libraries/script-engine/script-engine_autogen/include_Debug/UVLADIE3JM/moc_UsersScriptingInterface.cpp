/****************************************************************************
** Meta object code from reading C++ file 'UsersScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/UsersScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UsersScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UsersScriptingInterface_t {
    QByteArrayData data[31];
    char stringdata0[451];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UsersScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UsersScriptingInterface_t qt_meta_stringdata_UsersScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 23), // "UsersScriptingInterface"
QT_MOC_LITERAL(1, 24, 14), // "canKickChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 7), // "canKick"
QT_MOC_LITERAL(4, 48, 26), // "ignoreRadiusEnabledChanged"
QT_MOC_LITERAL(5, 75, 9), // "isEnabled"
QT_MOC_LITERAL(6, 85, 19), // "enteredIgnoreRadius"
QT_MOC_LITERAL(7, 105, 19), // "usernameFromIDReply"
QT_MOC_LITERAL(8, 125, 6), // "nodeID"
QT_MOC_LITERAL(9, 132, 8), // "username"
QT_MOC_LITERAL(10, 141, 18), // "machineFingerprint"
QT_MOC_LITERAL(11, 160, 7), // "isAdmin"
QT_MOC_LITERAL(12, 168, 18), // "avatarDisconnected"
QT_MOC_LITERAL(13, 187, 6), // "ignore"
QT_MOC_LITERAL(14, 194, 13), // "ignoreEnabled"
QT_MOC_LITERAL(15, 208, 15), // "getIgnoreStatus"
QT_MOC_LITERAL(16, 224, 12), // "personalMute"
QT_MOC_LITERAL(17, 237, 11), // "muteEnabled"
QT_MOC_LITERAL(18, 249, 21), // "getPersonalMuteStatus"
QT_MOC_LITERAL(19, 271, 13), // "setAvatarGain"
QT_MOC_LITERAL(20, 285, 4), // "gain"
QT_MOC_LITERAL(21, 290, 13), // "getAvatarGain"
QT_MOC_LITERAL(22, 304, 4), // "kick"
QT_MOC_LITERAL(23, 309, 4), // "mute"
QT_MOC_LITERAL(24, 314, 21), // "requestUsernameFromID"
QT_MOC_LITERAL(25, 336, 10), // "getCanKick"
QT_MOC_LITERAL(26, 347, 18), // "toggleIgnoreRadius"
QT_MOC_LITERAL(27, 366, 18), // "enableIgnoreRadius"
QT_MOC_LITERAL(28, 385, 19), // "disableIgnoreRadius"
QT_MOC_LITERAL(29, 405, 22), // "getIgnoreRadiusEnabled"
QT_MOC_LITERAL(30, 428, 22) // "requestsDomainListData"

    },
    "UsersScriptingInterface\0canKickChanged\0"
    "\0canKick\0ignoreRadiusEnabledChanged\0"
    "isEnabled\0enteredIgnoreRadius\0"
    "usernameFromIDReply\0nodeID\0username\0"
    "machineFingerprint\0isAdmin\0"
    "avatarDisconnected\0ignore\0ignoreEnabled\0"
    "getIgnoreStatus\0personalMute\0muteEnabled\0"
    "getPersonalMuteStatus\0setAvatarGain\0"
    "gain\0getAvatarGain\0kick\0mute\0"
    "requestUsernameFromID\0getCanKick\0"
    "toggleIgnoreRadius\0enableIgnoreRadius\0"
    "disableIgnoreRadius\0getIgnoreRadiusEnabled\0"
    "requestsDomainListData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UsersScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       2,  182, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       4,    1,  122,    2, 0x06 /* Public */,
       6,    0,  125,    2, 0x06 /* Public */,
       7,    4,  126,    2, 0x06 /* Public */,
      12,    1,  135,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    2,  138,    2, 0x0a /* Public */,
      13,    1,  143,    2, 0x2a /* Public | MethodCloned */,
      15,    1,  146,    2, 0x0a /* Public */,
      16,    2,  149,    2, 0x0a /* Public */,
      16,    1,  154,    2, 0x2a /* Public | MethodCloned */,
      18,    1,  157,    2, 0x0a /* Public */,
      19,    2,  160,    2, 0x0a /* Public */,
      21,    1,  165,    2, 0x0a /* Public */,
      22,    1,  168,    2, 0x0a /* Public */,
      23,    1,  171,    2, 0x0a /* Public */,
      24,    1,  174,    2, 0x0a /* Public */,
      25,    0,  177,    2, 0x0a /* Public */,
      26,    0,  178,    2, 0x0a /* Public */,
      27,    0,  179,    2, 0x0a /* Public */,
      28,    0,  180,    2, 0x0a /* Public */,
      29,    0,  181,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::QUuid,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QUuid, QMetaType::Bool,    8,   14,
    QMetaType::Void, QMetaType::QUuid,    8,
    QMetaType::Bool, QMetaType::QUuid,    8,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Bool,    8,   17,
    QMetaType::Void, QMetaType::QUuid,    8,
    QMetaType::Bool, QMetaType::QUuid,    8,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Float,    8,   20,
    QMetaType::Float, QMetaType::QUuid,    8,
    QMetaType::Void, QMetaType::QUuid,    8,
    QMetaType::Void, QMetaType::QUuid,    8,
    QMetaType::Void, QMetaType::QUuid,    8,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00095001,
      30, QMetaType::Bool, 0x00095103,

       0        // eod
};

void UsersScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UsersScriptingInterface *_t = static_cast<UsersScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->canKickChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->ignoreRadiusEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->enteredIgnoreRadius(); break;
        case 3: _t->usernameFromIDReply((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 4: _t->avatarDisconnected((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 5: _t->ignore((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->ignore((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 7: { bool _r = _t->getIgnoreStatus((*reinterpret_cast< const QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->personalMute((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->personalMute((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 10: { bool _r = _t->getPersonalMuteStatus((*reinterpret_cast< const QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->setAvatarGain((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 12: { float _r = _t->getAvatarGain((*reinterpret_cast< const QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->kick((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 14: _t->mute((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 15: _t->requestUsernameFromID((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 16: { bool _r = _t->getCanKick();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->toggleIgnoreRadius(); break;
        case 18: _t->enableIgnoreRadius(); break;
        case 19: _t->disableIgnoreRadius(); break;
        case 20: { bool _r = _t->getIgnoreRadiusEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UsersScriptingInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UsersScriptingInterface::canKickChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UsersScriptingInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UsersScriptingInterface::ignoreRadiusEnabledChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UsersScriptingInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UsersScriptingInterface::enteredIgnoreRadius)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UsersScriptingInterface::*)(const QString & , const QString & , const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UsersScriptingInterface::usernameFromIDReply)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UsersScriptingInterface::*)(const QUuid & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UsersScriptingInterface::avatarDisconnected)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        UsersScriptingInterface *_t = static_cast<UsersScriptingInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getCanKick(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getRequestsDomainListData(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        UsersScriptingInterface *_t = static_cast<UsersScriptingInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setRequestsDomainListData(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject UsersScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UsersScriptingInterface.data,
      qt_meta_data_UsersScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UsersScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UsersScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UsersScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int UsersScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UsersScriptingInterface::canKickChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UsersScriptingInterface::ignoreRadiusEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UsersScriptingInterface::enteredIgnoreRadius()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void UsersScriptingInterface::usernameFromIDReply(const QString & _t1, const QString & _t2, const QString & _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UsersScriptingInterface::avatarDisconnected(const QUuid & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
