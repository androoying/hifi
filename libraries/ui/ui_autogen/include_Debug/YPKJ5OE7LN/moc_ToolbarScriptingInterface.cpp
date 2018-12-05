/****************************************************************************
** Meta object code from reading C++ file 'ToolbarScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ui/ToolbarScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToolbarScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ToolbarButtonProxy_t {
    QByteArrayData data[5];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToolbarButtonProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToolbarButtonProxy_t qt_meta_stringdata_ToolbarButtonProxy = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ToolbarButtonProxy"
QT_MOC_LITERAL(1, 19, 7), // "clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "editProperties"
QT_MOC_LITERAL(4, 43, 10) // "properties"

    },
    "ToolbarButtonProxy\0clicked\0\0editProperties\0"
    "properties"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToolbarButtonProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QVariantMap,    4,

       0        // eod
};

void ToolbarButtonProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ToolbarButtonProxy *_t = static_cast<ToolbarButtonProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->editProperties((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ToolbarButtonProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolbarButtonProxy::clicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ToolbarButtonProxy::staticMetaObject = {
    { &QmlWrapper::staticMetaObject, qt_meta_stringdata_ToolbarButtonProxy.data,
      qt_meta_data_ToolbarButtonProxy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ToolbarButtonProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToolbarButtonProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToolbarButtonProxy.stringdata0))
        return static_cast<void*>(this);
    return QmlWrapper::qt_metacast(_clname);
}

int ToolbarButtonProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmlWrapper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ToolbarButtonProxy::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ToolbarProxy_t {
    QByteArrayData data[7];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToolbarProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToolbarProxy_t qt_meta_stringdata_ToolbarProxy = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ToolbarProxy"
QT_MOC_LITERAL(1, 13, 9), // "addButton"
QT_MOC_LITERAL(2, 23, 19), // "ToolbarButtonProxy*"
QT_MOC_LITERAL(3, 43, 0), // ""
QT_MOC_LITERAL(4, 44, 10), // "properties"
QT_MOC_LITERAL(5, 55, 12), // "removeButton"
QT_MOC_LITERAL(6, 68, 4) // "name"

    },
    "ToolbarProxy\0addButton\0ToolbarButtonProxy*\0"
    "\0properties\0removeButton\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToolbarProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   24,    3, 0x02 /* Public */,
       5,    1,   27,    3, 0x02 /* Public */,

 // methods: parameters
    0x80000000 | 2, QMetaType::QVariant,    4,
    QMetaType::Void, QMetaType::QVariant,    6,

       0        // eod
};

void ToolbarProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ToolbarProxy *_t = static_cast<ToolbarProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { ToolbarButtonProxy* _r = _t->addButton((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ToolbarButtonProxy**>(_a[0]) = std::move(_r); }  break;
        case 1: _t->removeButton((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ToolbarProxy::staticMetaObject = {
    { &QmlWrapper::staticMetaObject, qt_meta_stringdata_ToolbarProxy.data,
      qt_meta_data_ToolbarProxy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ToolbarProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToolbarProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToolbarProxy.stringdata0))
        return static_cast<void*>(this);
    return QmlWrapper::qt_metacast(_clname);
}

int ToolbarProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmlWrapper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_ToolbarScriptingInterface_t {
    QByteArrayData data[5];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToolbarScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToolbarScriptingInterface_t qt_meta_stringdata_ToolbarScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ToolbarScriptingInterface"
QT_MOC_LITERAL(1, 26, 10), // "getToolbar"
QT_MOC_LITERAL(2, 37, 13), // "ToolbarProxy*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 9) // "toolbarId"

    },
    "ToolbarScriptingInterface\0getToolbar\0"
    "ToolbarProxy*\0\0toolbarId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToolbarScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   19,    3, 0x02 /* Public */,

 // methods: parameters
    0x80000000 | 2, QMetaType::QString,    4,

       0        // eod
};

void ToolbarScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ToolbarScriptingInterface *_t = static_cast<ToolbarScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { ToolbarProxy* _r = _t->getToolbar((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ToolbarProxy**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ToolbarScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ToolbarScriptingInterface.data,
      qt_meta_data_ToolbarScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ToolbarScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToolbarScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToolbarScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int ToolbarScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
