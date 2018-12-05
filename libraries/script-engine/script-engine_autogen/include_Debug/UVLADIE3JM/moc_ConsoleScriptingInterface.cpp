/****************************************************************************
** Meta object code from reading C++ file 'ConsoleScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ConsoleScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConsoleScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConsoleScriptingInterface_t {
    QByteArrayData data[7];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConsoleScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConsoleScriptingInterface_t qt_meta_stringdata_ConsoleScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ConsoleScriptingInterface"
QT_MOC_LITERAL(1, 26, 4), // "time"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "labelName"
QT_MOC_LITERAL(4, 42, 7), // "timeEnd"
QT_MOC_LITERAL(5, 50, 5), // "trace"
QT_MOC_LITERAL(6, 56, 5) // "clear"

    },
    "ConsoleScriptingInterface\0time\0\0"
    "labelName\0timeEnd\0trace\0clear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConsoleScriptingInterface[] = {

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

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       5,    0,   40,    2, 0x0a /* Public */,
       6,    0,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ConsoleScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConsoleScriptingInterface *_t = static_cast<ConsoleScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->time((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->timeEnd((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->trace(); break;
        case 3: _t->clear(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ConsoleScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ConsoleScriptingInterface.data,
      qt_meta_data_ConsoleScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ConsoleScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConsoleScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConsoleScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QScriptable"))
        return static_cast< QScriptable*>(this);
    return QObject::qt_metacast(_clname);
}

int ConsoleScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
