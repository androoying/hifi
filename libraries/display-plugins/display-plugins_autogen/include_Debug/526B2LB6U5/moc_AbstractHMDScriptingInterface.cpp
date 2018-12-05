/****************************************************************************
** Meta object code from reading C++ file 'AbstractHMDScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/display-plugins/AbstractHMDScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AbstractHMDScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AbstractHMDScriptingInterface_t {
    QByteArrayData data[12];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractHMDScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractHMDScriptingInterface_t qt_meta_stringdata_AbstractHMDScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 29), // "AbstractHMDScriptingInterface"
QT_MOC_LITERAL(1, 30, 15), // "IPDScaleChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 18), // "displayModeChanged"
QT_MOC_LITERAL(4, 66, 9), // "isHMDMode"
QT_MOC_LITERAL(5, 76, 14), // "mountedChanged"
QT_MOC_LITERAL(6, 91, 6), // "active"
QT_MOC_LITERAL(7, 98, 3), // "ipd"
QT_MOC_LITERAL(8, 102, 9), // "eyeHeight"
QT_MOC_LITERAL(9, 112, 12), // "playerHeight"
QT_MOC_LITERAL(10, 125, 8), // "ipdScale"
QT_MOC_LITERAL(11, 134, 7) // "mounted"

    },
    "AbstractHMDScriptingInterface\0"
    "IPDScaleChanged\0\0displayModeChanged\0"
    "isHMDMode\0mountedChanged\0active\0ipd\0"
    "eyeHeight\0playerHeight\0ipdScale\0mounted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractHMDScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       6,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    1,   30,    2, 0x06 /* Public */,
       5,    0,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x00095001,
       7, QMetaType::Float, 0x00095001,
       8, QMetaType::Float, 0x00095001,
       9, QMetaType::Float, 0x00095001,
      10, QMetaType::Float, 0x00495003,
      11, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       2,

       0        // eod
};

void AbstractHMDScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractHMDScriptingInterface *_t = static_cast<AbstractHMDScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->IPDScaleChanged(); break;
        case 1: _t->displayModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->mountedChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractHMDScriptingInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractHMDScriptingInterface::IPDScaleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AbstractHMDScriptingInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractHMDScriptingInterface::displayModeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AbstractHMDScriptingInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractHMDScriptingInterface::mountedChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AbstractHMDScriptingInterface *_t = static_cast<AbstractHMDScriptingInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isHMDMode(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getIPD(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getEyeHeight(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getPlayerHeight(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getIPDScale(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isMounted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AbstractHMDScriptingInterface *_t = static_cast<AbstractHMDScriptingInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setIPDScale(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AbstractHMDScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AbstractHMDScriptingInterface.data,
      qt_meta_data_AbstractHMDScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AbstractHMDScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractHMDScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractHMDScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AbstractHMDScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
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

// SIGNAL 0
void AbstractHMDScriptingInterface::IPDScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AbstractHMDScriptingInterface::displayModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AbstractHMDScriptingInterface::mountedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
