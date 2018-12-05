/****************************************************************************
** Meta object code from reading C++ file 'AccountServicesScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/scripting/AccountServicesScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AccountServicesScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AccountServicesScriptingInterface_t {
    QByteArrayData data[28];
    char stringdata0[434];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccountServicesScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccountServicesScriptingInterface_t qt_meta_stringdata_AccountServicesScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 33), // "AccountServicesScriptingInter..."
QT_MOC_LITERAL(1, 34, 9), // "connected"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 12), // "disconnected"
QT_MOC_LITERAL(4, 58, 6), // "reason"
QT_MOC_LITERAL(5, 65, 17), // "myUsernameChanged"
QT_MOC_LITERAL(6, 83, 8), // "username"
QT_MOC_LITERAL(7, 92, 19), // "downloadInfoChanged"
QT_MOC_LITERAL(8, 112, 18), // "DownloadInfoResult"
QT_MOC_LITERAL(9, 131, 4), // "info"
QT_MOC_LITERAL(10, 136, 17), // "findableByChanged"
QT_MOC_LITERAL(11, 154, 19), // "discoverabilityMode"
QT_MOC_LITERAL(12, 174, 15), // "loggedInChanged"
QT_MOC_LITERAL(13, 190, 8), // "loggedIn"
QT_MOC_LITERAL(14, 199, 15), // "getDownloadInfo"
QT_MOC_LITERAL(15, 215, 18), // "updateDownloadInfo"
QT_MOC_LITERAL(16, 234, 10), // "isLoggedIn"
QT_MOC_LITERAL(17, 245, 28), // "checkAndSignalForAccessToken"
QT_MOC_LITERAL(18, 274, 6), // "logOut"
QT_MOC_LITERAL(19, 281, 9), // "loggedOut"
QT_MOC_LITERAL(20, 291, 17), // "checkDownloadInfo"
QT_MOC_LITERAL(21, 309, 13), // "getFindableBy"
QT_MOC_LITERAL(22, 323, 13), // "setFindableBy"
QT_MOC_LITERAL(23, 337, 26), // "discoverabilityModeChanged"
QT_MOC_LITERAL(24, 364, 21), // "Discoverability::Mode"
QT_MOC_LITERAL(25, 386, 17), // "onUsernameChanged"
QT_MOC_LITERAL(26, 404, 10), // "findableBy"
QT_MOC_LITERAL(27, 415, 18) // "metaverseServerURL"

    },
    "AccountServicesScriptingInterface\0"
    "connected\0\0disconnected\0reason\0"
    "myUsernameChanged\0username\0"
    "downloadInfoChanged\0DownloadInfoResult\0"
    "info\0findableByChanged\0discoverabilityMode\0"
    "loggedInChanged\0loggedIn\0getDownloadInfo\0"
    "updateDownloadInfo\0isLoggedIn\0"
    "checkAndSignalForAccessToken\0logOut\0"
    "loggedOut\0checkDownloadInfo\0getFindableBy\0"
    "setFindableBy\0discoverabilityModeChanged\0"
    "Discoverability::Mode\0onUsernameChanged\0"
    "findableBy\0metaverseServerURL"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccountServicesScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       4,  132, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    1,  100,    2, 0x06 /* Public */,
       5,    1,  103,    2, 0x06 /* Public */,
       7,    1,  106,    2, 0x06 /* Public */,
      10,    1,  109,    2, 0x06 /* Public */,
      12,    1,  112,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  115,    2, 0x0a /* Public */,
      15,    0,  116,    2, 0x0a /* Public */,
      16,    0,  117,    2, 0x0a /* Public */,
      17,    0,  118,    2, 0x0a /* Public */,
      18,    0,  119,    2, 0x0a /* Public */,
      19,    0,  120,    2, 0x08 /* Private */,
      20,    0,  121,    2, 0x08 /* Private */,
      21,    0,  122,    2, 0x08 /* Private */,
      22,    1,  123,    2, 0x08 /* Private */,
      23,    1,  126,    2, 0x08 /* Private */,
      25,    1,  129,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Bool,   13,

 // slots: parameters
    0x80000000 | 8,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, 0x80000000 | 24,   11,
    QMetaType::Void, QMetaType::QString,    6,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00495001,
      13, QMetaType::Bool, 0x00495001,
      26, QMetaType::QString, 0x00495103,
      27, QMetaType::QUrl, 0x00095401,

 // properties: notify_signal_id
       2,
       5,
       4,
       0,

       0        // eod
};

void AccountServicesScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AccountServicesScriptingInterface *_t = static_cast<AccountServicesScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->myUsernameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->downloadInfoChanged((*reinterpret_cast< DownloadInfoResult(*)>(_a[1]))); break;
        case 4: _t->findableByChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->loggedInChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: { DownloadInfoResult _r = _t->getDownloadInfo();
            if (_a[0]) *reinterpret_cast< DownloadInfoResult*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->updateDownloadInfo(); break;
        case 8: { bool _r = _t->isLoggedIn();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->checkAndSignalForAccessToken();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->logOut(); break;
        case 11: _t->loggedOut(); break;
        case 12: _t->checkDownloadInfo(); break;
        case 13: { QString _r = _t->getFindableBy();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->setFindableBy((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->discoverabilityModeChanged((*reinterpret_cast< Discoverability::Mode(*)>(_a[1]))); break;
        case 16: _t->onUsernameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DownloadInfoResult >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Discoverability::Mode >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AccountServicesScriptingInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountServicesScriptingInterface::connected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AccountServicesScriptingInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountServicesScriptingInterface::disconnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AccountServicesScriptingInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountServicesScriptingInterface::myUsernameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AccountServicesScriptingInterface::*)(DownloadInfoResult );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountServicesScriptingInterface::downloadInfoChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AccountServicesScriptingInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountServicesScriptingInterface::findableByChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AccountServicesScriptingInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountServicesScriptingInterface::loggedInChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AccountServicesScriptingInterface *_t = static_cast<AccountServicesScriptingInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getUsername(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->loggedIn(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getFindableBy(); break;
        case 3: *reinterpret_cast< QUrl*>(_v) = _t->getMetaverseServerURL(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AccountServicesScriptingInterface *_t = static_cast<AccountServicesScriptingInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setFindableBy(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AccountServicesScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AccountServicesScriptingInterface.data,
      qt_meta_data_AccountServicesScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AccountServicesScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccountServicesScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccountServicesScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AccountServicesScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AccountServicesScriptingInterface::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AccountServicesScriptingInterface::disconnected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AccountServicesScriptingInterface::myUsernameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AccountServicesScriptingInterface::downloadInfoChanged(DownloadInfoResult _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AccountServicesScriptingInterface::findableByChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AccountServicesScriptingInterface::loggedInChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
