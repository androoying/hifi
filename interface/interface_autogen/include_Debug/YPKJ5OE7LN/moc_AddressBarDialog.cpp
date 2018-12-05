/****************************************************************************
** Meta object code from reading C++ file 'AddressBarDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ui/AddressBarDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddressBarDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddressBarDialog_t {
    QByteArrayData data[18];
    char stringdata0[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddressBarDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddressBarDialog_t qt_meta_stringdata_AddressBarDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AddressBarDialog"
QT_MOC_LITERAL(1, 17, 18), // "backEnabledChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 21), // "forwardEnabledChanged"
QT_MOC_LITERAL(4, 59, 14), // "useFeedChanged"
QT_MOC_LITERAL(5, 74, 11), // "hostChanged"
QT_MOC_LITERAL(6, 86, 11), // "loadAddress"
QT_MOC_LITERAL(7, 98, 7), // "address"
QT_MOC_LITERAL(8, 106, 15), // "fromSuggestions"
QT_MOC_LITERAL(9, 122, 8), // "loadHome"
QT_MOC_LITERAL(10, 131, 8), // "loadBack"
QT_MOC_LITERAL(11, 140, 11), // "loadForward"
QT_MOC_LITERAL(12, 152, 19), // "observeShownChanged"
QT_MOC_LITERAL(13, 172, 7), // "visible"
QT_MOC_LITERAL(14, 180, 11), // "backEnabled"
QT_MOC_LITERAL(15, 192, 14), // "forwardEnabled"
QT_MOC_LITERAL(16, 207, 7), // "useFeed"
QT_MOC_LITERAL(17, 215, 18) // "metaverseServerUrl"

    },
    "AddressBarDialog\0backEnabledChanged\0"
    "\0forwardEnabledChanged\0useFeedChanged\0"
    "hostChanged\0loadAddress\0address\0"
    "fromSuggestions\0loadHome\0loadBack\0"
    "loadForward\0observeShownChanged\0visible\0"
    "backEnabled\0forwardEnabled\0useFeed\0"
    "metaverseServerUrl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddressBarDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       4,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    2,   68,    2, 0x01 /* Protected */,
       6,    1,   73,    2, 0x21 /* Protected | MethodCloned */,
       9,    0,   76,    2, 0x01 /* Protected */,
      10,    0,   77,    2, 0x01 /* Protected */,
      11,    0,   78,    2, 0x01 /* Protected */,
      12,    1,   79,    2, 0x01 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    7,    8,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,

 // properties: name, type, flags
      14, QMetaType::Bool, 0x00495001,
      15, QMetaType::Bool, 0x00495001,
      16, QMetaType::Bool, 0x00495103,
      17, QMetaType::QString, 0x00095401,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,

       0        // eod
};

void AddressBarDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddressBarDialog *_t = static_cast<AddressBarDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backEnabledChanged(); break;
        case 1: _t->forwardEnabledChanged(); break;
        case 2: _t->useFeedChanged(); break;
        case 3: _t->hostChanged(); break;
        case 4: _t->loadAddress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->loadAddress((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->loadHome(); break;
        case 7: _t->loadBack(); break;
        case 8: _t->loadForward(); break;
        case 9: _t->observeShownChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AddressBarDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressBarDialog::backEnabledChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AddressBarDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressBarDialog::forwardEnabledChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AddressBarDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressBarDialog::useFeedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AddressBarDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressBarDialog::hostChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AddressBarDialog *_t = static_cast<AddressBarDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->backEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->forwardEnabled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->useFeed(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->metaverseServerUrl(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AddressBarDialog *_t = static_cast<AddressBarDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setUseFeed(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AddressBarDialog::staticMetaObject = {
    { &OffscreenQmlDialog::staticMetaObject, qt_meta_stringdata_AddressBarDialog.data,
      qt_meta_data_AddressBarDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AddressBarDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddressBarDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddressBarDialog.stringdata0))
        return static_cast<void*>(this);
    return OffscreenQmlDialog::qt_metacast(_clname);
}

int AddressBarDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OffscreenQmlDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
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
void AddressBarDialog::backEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AddressBarDialog::forwardEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AddressBarDialog::useFeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AddressBarDialog::hostChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
