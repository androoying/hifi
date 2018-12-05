/****************************************************************************
** Meta object code from reading C++ file 'WalletScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/scripting/WalletScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WalletScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CheckoutProxy_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CheckoutProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CheckoutProxy_t qt_meta_stringdata_CheckoutProxy = {
    {
QT_MOC_LITERAL(0, 0, 13) // "CheckoutProxy"

    },
    "CheckoutProxy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CheckoutProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CheckoutProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CheckoutProxy::staticMetaObject = {
    { &QmlWrapper::staticMetaObject, qt_meta_stringdata_CheckoutProxy.data,
      qt_meta_data_CheckoutProxy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CheckoutProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CheckoutProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CheckoutProxy.stringdata0))
        return static_cast<void*>(this);
    return QmlWrapper::qt_metacast(_clname);
}

int CheckoutProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmlWrapper::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WalletScriptingInterface_t {
    QByteArrayData data[13];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletScriptingInterface_t qt_meta_stringdata_WalletScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 24), // "WalletScriptingInterface"
QT_MOC_LITERAL(1, 25, 19), // "walletStatusChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 22), // "limitedCommerceChanged"
QT_MOC_LITERAL(4, 69, 14), // "walletNotSetup"
QT_MOC_LITERAL(5, 84, 28), // "ownershipVerificationSuccess"
QT_MOC_LITERAL(6, 113, 8), // "entityID"
QT_MOC_LITERAL(7, 122, 27), // "ownershipVerificationFailed"
QT_MOC_LITERAL(8, 150, 19), // "refreshWalletStatus"
QT_MOC_LITERAL(9, 170, 15), // "getWalletStatus"
QT_MOC_LITERAL(10, 186, 38), // "proveAvatarEntityOwnershipVer..."
QT_MOC_LITERAL(11, 225, 12), // "walletStatus"
QT_MOC_LITERAL(12, 238, 15) // "limitedCommerce"

    },
    "WalletScriptingInterface\0walletStatusChanged\0"
    "\0limitedCommerceChanged\0walletNotSetup\0"
    "ownershipVerificationSuccess\0entityID\0"
    "ownershipVerificationFailed\0"
    "refreshWalletStatus\0getWalletStatus\0"
    "proveAvatarEntityOwnershipVerification\0"
    "walletStatus\0limitedCommerce"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       7,    1,   60,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    0,   63,    2, 0x02 /* Public */,
       9,    0,   64,    2, 0x02 /* Public */,
      10,    1,   65,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUuid,    6,
    QMetaType::Void, QMetaType::QUuid,    6,

 // methods: parameters
    QMetaType::Void,
    QMetaType::UInt,
    QMetaType::Void, QMetaType::QUuid,    6,

 // properties: name, type, flags
      11, QMetaType::UInt, 0x00495103,
      12, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void WalletScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletScriptingInterface *_t = static_cast<WalletScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->walletStatusChanged(); break;
        case 1: _t->limitedCommerceChanged(); break;
        case 2: _t->walletNotSetup(); break;
        case 3: _t->ownershipVerificationSuccess((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 4: _t->ownershipVerificationFailed((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 5: _t->refreshWalletStatus(); break;
        case 6: { uint _r = _t->getWalletStatus();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->proveAvatarEntityOwnershipVerification((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WalletScriptingInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletScriptingInterface::walletStatusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WalletScriptingInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletScriptingInterface::limitedCommerceChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WalletScriptingInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletScriptingInterface::walletNotSetup)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WalletScriptingInterface::*)(const QUuid & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletScriptingInterface::ownershipVerificationSuccess)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WalletScriptingInterface::*)(const QUuid & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletScriptingInterface::ownershipVerificationFailed)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        WalletScriptingInterface *_t = static_cast<WalletScriptingInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = _t->getWalletStatus(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getLimitedCommerce(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        WalletScriptingInterface *_t = static_cast<WalletScriptingInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWalletStatus(*reinterpret_cast< uint*>(_v)); break;
        case 1: _t->setLimitedCommerce(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject WalletScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletScriptingInterface.data,
      qt_meta_data_WalletScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void WalletScriptingInterface::walletStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WalletScriptingInterface::limitedCommerceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WalletScriptingInterface::walletNotSetup()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WalletScriptingInterface::ownershipVerificationSuccess(const QUuid & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WalletScriptingInterface::ownershipVerificationFailed(const QUuid & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
