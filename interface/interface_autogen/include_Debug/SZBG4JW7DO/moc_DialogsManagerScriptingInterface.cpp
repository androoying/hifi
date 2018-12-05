/****************************************************************************
** Meta object code from reading C++ file 'DialogsManagerScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/scripting/DialogsManagerScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogsManagerScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogsManagerScriptingInterface_t {
    QByteArrayData data[8];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogsManagerScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogsManagerScriptingInterface_t qt_meta_stringdata_DialogsManagerScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 32), // "DialogsManagerScriptingInterface"
QT_MOC_LITERAL(1, 33, 15), // "addressBarShown"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 7), // "visible"
QT_MOC_LITERAL(4, 58, 14), // "showAddressBar"
QT_MOC_LITERAL(5, 73, 14), // "hideAddressBar"
QT_MOC_LITERAL(6, 88, 15), // "showLoginDialog"
QT_MOC_LITERAL(7, 104, 8) // "showFeed"

    },
    "DialogsManagerScriptingInterface\0"
    "addressBarShown\0\0visible\0showAddressBar\0"
    "hideAddressBar\0showLoginDialog\0showFeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogsManagerScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x0a /* Public */,
       5,    0,   43,    2, 0x0a /* Public */,
       6,    0,   44,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   45,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void DialogsManagerScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogsManagerScriptingInterface *_t = static_cast<DialogsManagerScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addressBarShown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->showAddressBar(); break;
        case 2: _t->hideAddressBar(); break;
        case 3: _t->showLoginDialog(); break;
        case 4: _t->showFeed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DialogsManagerScriptingInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogsManagerScriptingInterface::addressBarShown)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DialogsManagerScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DialogsManagerScriptingInterface.data,
      qt_meta_data_DialogsManagerScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DialogsManagerScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogsManagerScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogsManagerScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DialogsManagerScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void DialogsManagerScriptingInterface::addressBarShown(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
