/****************************************************************************
** Meta object code from reading C++ file 'MiniPromises.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/shared/MiniPromises.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MiniPromises.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MiniPromise_t {
    QByteArrayData data[10];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MiniPromise_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MiniPromise_t qt_meta_stringdata_MiniPromise = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MiniPromise"
QT_MOC_LITERAL(1, 12, 22), // "executeOnPromiseThread"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 21), // "std::function<void()>"
QT_MOC_LITERAL(4, 58, 8), // "function"
QT_MOC_LITERAL(5, 67, 20), // "MiniPromise::Promise"
QT_MOC_LITERAL(6, 88, 4), // "root"
QT_MOC_LITERAL(7, 93, 5), // "state"
QT_MOC_LITERAL(8, 99, 5), // "error"
QT_MOC_LITERAL(9, 105, 6) // "result"

    },
    "MiniPromise\0executeOnPromiseThread\0\0"
    "std::function<void()>\0function\0"
    "MiniPromise::Promise\0root\0state\0error\0"
    "result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MiniPromise[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x02 /* Public */,
       1,    1,   29,    2, 0x22 /* Public | MethodCloned */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00095001,
       8, QMetaType::QString, 0x00095001,
       9, QMetaType::QVariantMap, 0x00095001,

       0        // eod
};

void MiniPromise::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MiniPromise *_t = static_cast<MiniPromise *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->executeOnPromiseThread((*reinterpret_cast< std::function<void()>(*)>(_a[1])),(*reinterpret_cast< MiniPromise::Promise(*)>(_a[2]))); break;
        case 1: _t->executeOnPromiseThread((*reinterpret_cast< std::function<void()>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MiniPromise::Promise >(); break;
            }
            break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MiniPromise *_t = static_cast<MiniPromise *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getStateString(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getError(); break;
        case 2: *reinterpret_cast< QVariantMap*>(_v) = _t->getResult(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MiniPromise::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MiniPromise.data,
      qt_meta_data_MiniPromise,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MiniPromise::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MiniPromise::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MiniPromise.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "std::enable_shared_from_this<MiniPromise>"))
        return static_cast< std::enable_shared_from_this<MiniPromise>*>(this);
    if (!strcmp(_clname, "ReadWriteLockable"))
        return static_cast< ReadWriteLockable*>(this);
    return QObject::qt_metacast(_clname);
}

int MiniPromise::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
