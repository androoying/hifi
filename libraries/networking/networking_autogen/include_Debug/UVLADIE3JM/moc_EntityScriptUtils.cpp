/****************************************************************************
** Meta object code from reading C++ file 'EntityScriptUtils.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/EntityScriptUtils.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntityScriptUtils.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EntityScriptStatus__t {
    QByteArrayData data[8];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EntityScriptStatus__t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EntityScriptStatus__t qt_meta_stringdata_EntityScriptStatus_ = {
    {
QT_MOC_LITERAL(0, 0, 19), // "EntityScriptStatus_"
QT_MOC_LITERAL(1, 20, 18), // "EntityScriptStatus"
QT_MOC_LITERAL(2, 39, 7), // "PENDING"
QT_MOC_LITERAL(3, 47, 7), // "LOADING"
QT_MOC_LITERAL(4, 55, 20), // "ERROR_LOADING_SCRIPT"
QT_MOC_LITERAL(5, 76, 20), // "ERROR_RUNNING_SCRIPT"
QT_MOC_LITERAL(6, 97, 7), // "RUNNING"
QT_MOC_LITERAL(7, 105, 8) // "UNLOADED"

    },
    "EntityScriptStatus_\0EntityScriptStatus\0"
    "PENDING\0LOADING\0ERROR_LOADING_SCRIPT\0"
    "ERROR_RUNNING_SCRIPT\0RUNNING\0UNLOADED"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EntityScriptStatus_[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    6,   18,

 // enum data: key, value
       2, uint(EntityScriptStatus_::PENDING),
       3, uint(EntityScriptStatus_::LOADING),
       4, uint(EntityScriptStatus_::ERROR_LOADING_SCRIPT),
       5, uint(EntityScriptStatus_::ERROR_RUNNING_SCRIPT),
       6, uint(EntityScriptStatus_::RUNNING),
       7, uint(EntityScriptStatus_::UNLOADED),

       0        // eod
};

void EntityScriptStatus_::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EntityScriptStatus_::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EntityScriptStatus_.data,
      qt_meta_data_EntityScriptStatus_,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EntityScriptStatus_::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EntityScriptStatus_::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EntityScriptStatus_.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int EntityScriptStatus_::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
