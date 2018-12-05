/****************************************************************************
** Meta object code from reading C++ file 'MappingBuilderProxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/controllers/impl/MappingBuilderProxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MappingBuilderProxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_controller__MappingBuilderProxy_t {
    QByteArrayData data[13];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_controller__MappingBuilderProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_controller__MappingBuilderProxy_t qt_meta_stringdata_controller__MappingBuilderProxy = {
    {
QT_MOC_LITERAL(0, 0, 31), // "controller::MappingBuilderProxy"
QT_MOC_LITERAL(1, 32, 7), // "fromQml"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 8), // "QJSValue"
QT_MOC_LITERAL(4, 50, 6), // "source"
QT_MOC_LITERAL(5, 57, 11), // "makeAxisQml"
QT_MOC_LITERAL(6, 69, 7), // "source1"
QT_MOC_LITERAL(7, 77, 7), // "source2"
QT_MOC_LITERAL(8, 85, 4), // "from"
QT_MOC_LITERAL(9, 90, 12), // "QScriptValue"
QT_MOC_LITERAL(10, 103, 8), // "makeAxis"
QT_MOC_LITERAL(11, 112, 6), // "enable"
QT_MOC_LITERAL(12, 119, 7) // "disable"

    },
    "controller::MappingBuilderProxy\0fromQml\0"
    "\0QJSValue\0source\0makeAxisQml\0source1\0"
    "source2\0from\0QScriptValue\0makeAxis\0"
    "enable\0disable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_controller__MappingBuilderProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x02 /* Public */,
       5,    2,   52,    2, 0x02 /* Public */,
       8,    1,   57,    2, 0x02 /* Public */,
      10,    2,   60,    2, 0x02 /* Public */,
      11,    1,   65,    2, 0x02 /* Public */,
      11,    0,   68,    2, 0x22 /* Public | MethodCloned */,
      12,    0,   69,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QObjectStar, 0x80000000 | 3,    4,
    QMetaType::QObjectStar, 0x80000000 | 3, 0x80000000 | 3,    6,    7,
    QMetaType::QObjectStar, 0x80000000 | 9,    4,
    QMetaType::QObjectStar, 0x80000000 | 9, 0x80000000 | 9,    6,    7,
    QMetaType::QObjectStar, QMetaType::Bool,   11,
    QMetaType::QObjectStar,
    QMetaType::QObjectStar,

       0        // eod
};

void controller::MappingBuilderProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MappingBuilderProxy *_t = static_cast<MappingBuilderProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QObject* _r = _t->fromQml((*reinterpret_cast< const QJSValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 1: { QObject* _r = _t->makeAxisQml((*reinterpret_cast< const QJSValue(*)>(_a[1])),(*reinterpret_cast< const QJSValue(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 2: { QObject* _r = _t->from((*reinterpret_cast< const QScriptValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 3: { QObject* _r = _t->makeAxis((*reinterpret_cast< const QScriptValue(*)>(_a[1])),(*reinterpret_cast< const QScriptValue(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 4: { QObject* _r = _t->enable((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 5: { QObject* _r = _t->enable();
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 6: { QObject* _r = _t->disable();
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject controller::MappingBuilderProxy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_controller__MappingBuilderProxy.data,
      qt_meta_data_controller__MappingBuilderProxy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *controller::MappingBuilderProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *controller::MappingBuilderProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_controller__MappingBuilderProxy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int controller::MappingBuilderProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
