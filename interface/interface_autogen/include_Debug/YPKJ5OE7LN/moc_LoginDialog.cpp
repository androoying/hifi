/****************************************************************************
** Meta object code from reading C++ file 'LoginDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ui/LoginDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoginDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoginDialog_t {
    QByteArrayData data[31];
    char stringdata0[409];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginDialog_t qt_meta_stringdata_LoginDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LoginDialog"
QT_MOC_LITERAL(1, 12, 20), // "handleLoginCompleted"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "handleLoginFailed"
QT_MOC_LITERAL(4, 52, 19), // "handleLinkCompleted"
QT_MOC_LITERAL(5, 72, 16), // "handleLinkFailed"
QT_MOC_LITERAL(6, 89, 5), // "error"
QT_MOC_LITERAL(7, 95, 21), // "handleCreateCompleted"
QT_MOC_LITERAL(8, 117, 18), // "handleCreateFailed"
QT_MOC_LITERAL(9, 136, 21), // "handleSignupCompleted"
QT_MOC_LITERAL(10, 158, 18), // "handleSignupFailed"
QT_MOC_LITERAL(11, 177, 11), // "errorString"
QT_MOC_LITERAL(12, 189, 13), // "linkCompleted"
QT_MOC_LITERAL(13, 203, 14), // "QNetworkReply*"
QT_MOC_LITERAL(14, 218, 5), // "reply"
QT_MOC_LITERAL(15, 224, 10), // "linkFailed"
QT_MOC_LITERAL(16, 235, 15), // "createCompleted"
QT_MOC_LITERAL(17, 251, 12), // "createFailed"
QT_MOC_LITERAL(18, 264, 15), // "signupCompleted"
QT_MOC_LITERAL(19, 280, 12), // "signupFailed"
QT_MOC_LITERAL(20, 293, 14), // "isSteamRunning"
QT_MOC_LITERAL(21, 308, 5), // "login"
QT_MOC_LITERAL(22, 314, 8), // "username"
QT_MOC_LITERAL(23, 323, 8), // "password"
QT_MOC_LITERAL(24, 332, 17), // "loginThroughSteam"
QT_MOC_LITERAL(25, 350, 9), // "linkSteam"
QT_MOC_LITERAL(26, 360, 23), // "createAccountFromStream"
QT_MOC_LITERAL(27, 384, 6), // "signup"
QT_MOC_LITERAL(28, 391, 5), // "email"
QT_MOC_LITERAL(29, 397, 7), // "openUrl"
QT_MOC_LITERAL(30, 405, 3) // "url"

    },
    "LoginDialog\0handleLoginCompleted\0\0"
    "handleLoginFailed\0handleLinkCompleted\0"
    "handleLinkFailed\0error\0handleCreateCompleted\0"
    "handleCreateFailed\0handleSignupCompleted\0"
    "handleSignupFailed\0errorString\0"
    "linkCompleted\0QNetworkReply*\0reply\0"
    "linkFailed\0createCompleted\0createFailed\0"
    "signupCompleted\0signupFailed\0"
    "isSteamRunning\0login\0username\0password\0"
    "loginThroughSteam\0linkSteam\0"
    "createAccountFromStream\0signup\0email\0"
    "openUrl\0url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  124,    2, 0x06 /* Public */,
       3,    0,  125,    2, 0x06 /* Public */,
       4,    0,  126,    2, 0x06 /* Public */,
       5,    1,  127,    2, 0x06 /* Public */,
       7,    0,  130,    2, 0x06 /* Public */,
       8,    1,  131,    2, 0x06 /* Public */,
       9,    0,  134,    2, 0x06 /* Public */,
      10,    1,  135,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  138,    2, 0x0a /* Public */,
      15,    1,  141,    2, 0x0a /* Public */,
      16,    1,  144,    2, 0x0a /* Public */,
      17,    1,  147,    2, 0x0a /* Public */,
      18,    1,  150,    2, 0x0a /* Public */,
      19,    1,  153,    2, 0x0a /* Public */,
      20,    0,  156,    2, 0x09 /* Protected */,
      21,    2,  157,    2, 0x09 /* Protected */,
      24,    0,  162,    2, 0x09 /* Protected */,
      25,    0,  163,    2, 0x09 /* Protected */,
      26,    1,  164,    2, 0x09 /* Protected */,
      26,    0,  167,    2, 0x29 /* Protected | MethodCloned */,
      27,    3,  168,    2, 0x09 /* Protected */,
      29,    1,  175,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   22,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   28,   22,   23,
    QMetaType::Void, QMetaType::QString,   30,

       0        // eod
};

void LoginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoginDialog *_t = static_cast<LoginDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleLoginCompleted(); break;
        case 1: _t->handleLoginFailed(); break;
        case 2: _t->handleLinkCompleted(); break;
        case 3: _t->handleLinkFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->handleCreateCompleted(); break;
        case 5: _t->handleCreateFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->handleSignupCompleted(); break;
        case 7: _t->handleSignupFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->linkCompleted((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 9: _t->linkFailed((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 10: _t->createCompleted((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 11: _t->createFailed((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 12: _t->signupCompleted((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 13: _t->signupFailed((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 14: { bool _r = _t->isSteamRunning();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->login((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: _t->loginThroughSteam(); break;
        case 17: _t->linkSteam(); break;
        case 18: _t->createAccountFromStream((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->createAccountFromStream(); break;
        case 20: _t->signup((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 21: _t->openUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoginDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginDialog::handleLoginCompleted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LoginDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginDialog::handleLoginFailed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LoginDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginDialog::handleLinkCompleted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LoginDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginDialog::handleLinkFailed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LoginDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginDialog::handleCreateCompleted)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (LoginDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginDialog::handleCreateFailed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (LoginDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginDialog::handleSignupCompleted)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (LoginDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginDialog::handleSignupFailed)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LoginDialog::staticMetaObject = {
    { &OffscreenQmlDialog::staticMetaObject, qt_meta_stringdata_LoginDialog.data,
      qt_meta_data_LoginDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LoginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoginDialog.stringdata0))
        return static_cast<void*>(this);
    return OffscreenQmlDialog::qt_metacast(_clname);
}

int LoginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OffscreenQmlDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void LoginDialog::handleLoginCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LoginDialog::handleLoginFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LoginDialog::handleLinkCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LoginDialog::handleLinkFailed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LoginDialog::handleCreateCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void LoginDialog::handleCreateFailed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void LoginDialog::handleSignupCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void LoginDialog::handleSignupFailed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
