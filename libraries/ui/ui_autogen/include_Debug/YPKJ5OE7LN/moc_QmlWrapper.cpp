/****************************************************************************
** Meta object code from reading C++ file 'QmlWrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ui/QmlWrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmlWrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QmlWrapper_t {
    QByteArrayData data[10];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlWrapper_t qt_meta_stringdata_QmlWrapper = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QmlWrapper"
QT_MOC_LITERAL(1, 11, 13), // "writeProperty"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "propertyName"
QT_MOC_LITERAL(4, 39, 13), // "propertyValue"
QT_MOC_LITERAL(5, 53, 15), // "writeProperties"
QT_MOC_LITERAL(6, 69, 11), // "propertyMap"
QT_MOC_LITERAL(7, 81, 12), // "readProperty"
QT_MOC_LITERAL(8, 94, 14), // "readProperties"
QT_MOC_LITERAL(9, 109, 12) // "propertyList"

    },
    "QmlWrapper\0writeProperty\0\0propertyName\0"
    "propertyValue\0writeProperties\0propertyMap\0"
    "readProperty\0readProperties\0propertyList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlWrapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x02 /* Public */,
       5,    1,   39,    2, 0x02 /* Public */,
       7,    1,   42,    2, 0x02 /* Public */,
       8,    1,   45,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    3,    4,
    QMetaType::Void, QMetaType::QVariant,    6,
    QMetaType::QVariant, QMetaType::QString,    3,
    QMetaType::QVariant, QMetaType::QVariant,    9,

       0        // eod
};

void QmlWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlWrapper *_t = static_cast<QmlWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->writeProperty((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 1: _t->writeProperties((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 2: { QVariant _r = _t->readProperty((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 3: { QVariant _r = _t->readProperties((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QmlWrapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmlWrapper.data,
      qt_meta_data_QmlWrapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QmlWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlWrapper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QmlWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
