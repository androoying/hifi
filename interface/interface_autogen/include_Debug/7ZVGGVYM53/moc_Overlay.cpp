/****************************************************************************
** Meta object code from reading C++ file 'Overlay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ui/overlays/Overlay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Overlay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Overlay_t {
    QByteArrayData data[8];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Overlay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Overlay_t qt_meta_stringdata_Overlay = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Overlay"
QT_MOC_LITERAL(1, 8, 13), // "setProperties"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 10), // "properties"
QT_MOC_LITERAL(4, 34, 11), // "createClone"
QT_MOC_LITERAL(5, 46, 8), // "Overlay*"
QT_MOC_LITERAL(6, 55, 11), // "getProperty"
QT_MOC_LITERAL(7, 67, 8) // "property"

    },
    "Overlay\0setProperties\0\0properties\0"
    "createClone\0Overlay*\0getProperty\0"
    "property"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Overlay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x02 /* Public */,
       4,    0,   32,    2, 0x02 /* Public */,
       6,    1,   33,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QVariantMap,    3,
    0x80000000 | 5,
    QMetaType::QVariant, QMetaType::QString,    7,

       0        // eod
};

void Overlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Overlay *_t = static_cast<Overlay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setProperties((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 1: { Overlay* _r = _t->createClone();
            if (_a[0]) *reinterpret_cast< Overlay**>(_a[0]) = std::move(_r); }  break;
        case 2: { QVariant _r = _t->getProperty((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Overlay::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Overlay.data,
      qt_meta_data_Overlay,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Overlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Overlay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Overlay.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Overlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
