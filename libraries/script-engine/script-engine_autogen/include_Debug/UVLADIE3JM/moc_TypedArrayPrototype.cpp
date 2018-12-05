/****************************************************************************
** Meta object code from reading C++ file 'TypedArrayPrototype.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/TypedArrayPrototype.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TypedArrayPrototype.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TypedArrayPrototype_t {
    QByteArrayData data[13];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TypedArrayPrototype_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TypedArrayPrototype_t qt_meta_stringdata_TypedArrayPrototype = {
    {
QT_MOC_LITERAL(0, 0, 19), // "TypedArrayPrototype"
QT_MOC_LITERAL(1, 20, 3), // "set"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "QScriptValue"
QT_MOC_LITERAL(4, 38, 5), // "array"
QT_MOC_LITERAL(5, 44, 6), // "offset"
QT_MOC_LITERAL(6, 51, 8), // "subarray"
QT_MOC_LITERAL(7, 60, 5), // "begin"
QT_MOC_LITERAL(8, 66, 3), // "end"
QT_MOC_LITERAL(9, 70, 3), // "get"
QT_MOC_LITERAL(10, 74, 5), // "index"
QT_MOC_LITERAL(11, 80, 13), // "QScriptValue&"
QT_MOC_LITERAL(12, 94, 5) // "value"

    },
    "TypedArrayPrototype\0set\0\0QScriptValue\0"
    "array\0offset\0subarray\0begin\0end\0get\0"
    "index\0QScriptValue&\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TypedArrayPrototype[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x0a /* Public */,
       1,    1,   49,    2, 0x2a /* Public | MethodCloned */,
       6,    1,   52,    2, 0x0a /* Public */,
       6,    2,   55,    2, 0x0a /* Public */,
       9,    1,   60,    2, 0x0a /* Public */,
       1,    2,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    0x80000000 | 3, QMetaType::Int,    7,
    0x80000000 | 3, QMetaType::Int, QMetaType::Int,    7,    8,
    0x80000000 | 3, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 11,   10,   12,

       0        // eod
};

void TypedArrayPrototype::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TypedArrayPrototype *_t = static_cast<TypedArrayPrototype *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->set((*reinterpret_cast< QScriptValue(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        case 1: _t->set((*reinterpret_cast< QScriptValue(*)>(_a[1]))); break;
        case 2: { QScriptValue _r = _t->subarray((*reinterpret_cast< qint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 3: { QScriptValue _r = _t->subarray((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 4: { QScriptValue _r = _t->get((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->set((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< QScriptValue(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TypedArrayPrototype::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TypedArrayPrototype.data,
      qt_meta_data_TypedArrayPrototype,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TypedArrayPrototype::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TypedArrayPrototype::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TypedArrayPrototype.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QScriptable"))
        return static_cast< QScriptable*>(this);
    return QObject::qt_metacast(_clname);
}

int TypedArrayPrototype::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
