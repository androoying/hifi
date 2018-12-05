/****************************************************************************
** Meta object code from reading C++ file 'AndroidHelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AndroidHelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AndroidHelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AndroidHelper_t {
    QByteArrayData data[22];
    char stringdata0[320];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AndroidHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AndroidHelper_t qt_meta_stringdata_AndroidHelper = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AndroidHelper"
QT_MOC_LITERAL(1, 14, 24), // "androidActivityRequested"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 12), // "activityName"
QT_MOC_LITERAL(4, 53, 11), // "backToScene"
QT_MOC_LITERAL(5, 65, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(6, 87, 4), // "args"
QT_MOC_LITERAL(7, 92, 17), // "qtAppLoadComplete"
QT_MOC_LITERAL(8, 110, 15), // "enterForeground"
QT_MOC_LITERAL(9, 126, 21), // "beforeEnterBackground"
QT_MOC_LITERAL(10, 148, 15), // "enterBackground"
QT_MOC_LITERAL(11, 164, 23), // "hapticFeedbackRequested"
QT_MOC_LITERAL(12, 188, 8), // "duration"
QT_MOC_LITERAL(13, 197, 21), // "handleSignupCompleted"
QT_MOC_LITERAL(14, 219, 18), // "handleSignupFailed"
QT_MOC_LITERAL(15, 238, 11), // "errorString"
QT_MOC_LITERAL(16, 250, 15), // "showLoginDialog"
QT_MOC_LITERAL(17, 266, 3), // "url"
QT_MOC_LITERAL(18, 270, 15), // "signupCompleted"
QT_MOC_LITERAL(19, 286, 14), // "QNetworkReply*"
QT_MOC_LITERAL(20, 301, 5), // "reply"
QT_MOC_LITERAL(21, 307, 12) // "signupFailed"

    },
    "AndroidHelper\0androidActivityRequested\0"
    "\0activityName\0backToScene\0"
    "QMap<QString,QString>\0args\0qtAppLoadComplete\0"
    "enterForeground\0beforeEnterBackground\0"
    "enterBackground\0hapticFeedbackRequested\0"
    "duration\0handleSignupCompleted\0"
    "handleSignupFailed\0errorString\0"
    "showLoginDialog\0url\0signupCompleted\0"
    "QNetworkReply*\0reply\0signupFailed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AndroidHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   74,    2, 0x06 /* Public */,
       1,    2,   81,    2, 0x26 /* Public | MethodCloned */,
       7,    0,   86,    2, 0x06 /* Public */,
       8,    0,   87,    2, 0x06 /* Public */,
       9,    0,   88,    2, 0x06 /* Public */,
      10,    0,   89,    2, 0x06 /* Public */,
      11,    1,   90,    2, 0x06 /* Public */,
      13,    0,   93,    2, 0x06 /* Public */,
      14,    1,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,   97,    2, 0x0a /* Public */,
      18,    1,  100,    2, 0x0a /* Public */,
      21,    1,  103,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 19,   20,

       0        // eod
};

void AndroidHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AndroidHelper *_t = static_cast<AndroidHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->androidActivityRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])),(*reinterpret_cast< QMap<QString,QString>(*)>(_a[3]))); break;
        case 1: _t->androidActivityRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 2: _t->qtAppLoadComplete(); break;
        case 3: _t->enterForeground(); break;
        case 4: _t->beforeEnterBackground(); break;
        case 5: _t->enterBackground(); break;
        case 6: _t->hapticFeedbackRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->handleSignupCompleted(); break;
        case 8: _t->handleSignupFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->showLoginDialog((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 10: _t->signupCompleted((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 11: _t->signupFailed((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AndroidHelper::*)(const QString & , const bool , QMap<QString,QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AndroidHelper::androidActivityRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AndroidHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AndroidHelper::qtAppLoadComplete)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AndroidHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AndroidHelper::enterForeground)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AndroidHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AndroidHelper::beforeEnterBackground)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AndroidHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AndroidHelper::enterBackground)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AndroidHelper::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AndroidHelper::hapticFeedbackRequested)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AndroidHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AndroidHelper::handleSignupCompleted)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AndroidHelper::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AndroidHelper::handleSignupFailed)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AndroidHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AndroidHelper.data,
      qt_meta_data_AndroidHelper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AndroidHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AndroidHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AndroidHelper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AndroidHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void AndroidHelper::androidActivityRequested(const QString & _t1, const bool _t2, QMap<QString,QString> _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void AndroidHelper::qtAppLoadComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AndroidHelper::enterForeground()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AndroidHelper::beforeEnterBackground()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void AndroidHelper::enterBackground()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void AndroidHelper::hapticFeedbackRequested(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void AndroidHelper::handleSignupCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void AndroidHelper::handleSignupFailed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
