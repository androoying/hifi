/****************************************************************************
** Meta object code from reading C++ file 'Forward.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/graphics-scripting/Forward.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Forward.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_scriptable__ScriptableMeshBase_t {
    QByteArrayData data[8];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_scriptable__ScriptableMeshBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_scriptable__ScriptableMeshBase_t qt_meta_stringdata_scriptable__ScriptableMeshBase = {
    {
QT_MOC_LITERAL(0, 0, 30), // "scriptable::ScriptableMeshBase"
QT_MOC_LITERAL(1, 31, 14), // "getMeshPointer"
QT_MOC_LITERAL(2, 46, 23), // "scriptable::MeshPointer"
QT_MOC_LITERAL(3, 70, 0), // ""
QT_MOC_LITERAL(4, 71, 23), // "getModelProviderPointer"
QT_MOC_LITERAL(5, 95, 32), // "scriptable::ModelProviderPointer"
QT_MOC_LITERAL(6, 128, 19), // "getModelBasePointer"
QT_MOC_LITERAL(7, 148, 38) // "scriptable::ScriptableModelBa..."

    },
    "scriptable::ScriptableMeshBase\0"
    "getMeshPointer\0scriptable::MeshPointer\0"
    "\0getModelProviderPointer\0"
    "scriptable::ModelProviderPointer\0"
    "getModelBasePointer\0"
    "scriptable::ScriptableModelBasePointer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_scriptable__ScriptableMeshBase[] = {

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
       1,    0,   29,    3, 0x02 /* Public */,
       4,    0,   30,    3, 0x02 /* Public */,
       6,    0,   31,    3, 0x02 /* Public */,

 // methods: parameters
    0x80000000 | 2,
    0x80000000 | 5,
    0x80000000 | 7,

       0        // eod
};

void scriptable::ScriptableMeshBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScriptableMeshBase *_t = static_cast<ScriptableMeshBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { scriptable::MeshPointer _r = _t->getMeshPointer();
            if (_a[0]) *reinterpret_cast< scriptable::MeshPointer*>(_a[0]) = std::move(_r); }  break;
        case 1: { scriptable::ModelProviderPointer _r = _t->getModelProviderPointer();
            if (_a[0]) *reinterpret_cast< scriptable::ModelProviderPointer*>(_a[0]) = std::move(_r); }  break;
        case 2: { scriptable::ScriptableModelBasePointer _r = _t->getModelBasePointer();
            if (_a[0]) *reinterpret_cast< scriptable::ScriptableModelBasePointer*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject scriptable::ScriptableMeshBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_scriptable__ScriptableMeshBase.data,
      qt_meta_data_scriptable__ScriptableMeshBase,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *scriptable::ScriptableMeshBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *scriptable::ScriptableMeshBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_scriptable__ScriptableMeshBase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int scriptable::ScriptableMeshBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_scriptable__ScriptableModelBase_t {
    QByteArrayData data[1];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_scriptable__ScriptableModelBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_scriptable__ScriptableModelBase_t qt_meta_stringdata_scriptable__ScriptableModelBase = {
    {
QT_MOC_LITERAL(0, 0, 31) // "scriptable::ScriptableModelBase"

    },
    "scriptable::ScriptableModelBase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_scriptable__ScriptableModelBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void scriptable::ScriptableModelBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject scriptable::ScriptableModelBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_scriptable__ScriptableModelBase.data,
      qt_meta_data_scriptable__ScriptableModelBase,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *scriptable::ScriptableModelBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *scriptable::ScriptableModelBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_scriptable__ScriptableModelBase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int scriptable::ScriptableModelBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_scriptable__ModelProviderFactory_t {
    QByteArrayData data[9];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_scriptable__ModelProviderFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_scriptable__ModelProviderFactory_t qt_meta_stringdata_scriptable__ModelProviderFactory = {
    {
QT_MOC_LITERAL(0, 0, 32), // "scriptable::ModelProviderFactory"
QT_MOC_LITERAL(1, 33, 17), // "modelAddedToScene"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 8), // "objectID"
QT_MOC_LITERAL(4, 61, 12), // "NestableType"
QT_MOC_LITERAL(5, 74, 12), // "nestableType"
QT_MOC_LITERAL(6, 87, 12), // "ModelPointer"
QT_MOC_LITERAL(7, 100, 6), // "sender"
QT_MOC_LITERAL(8, 107, 21) // "modelRemovedFromScene"

    },
    "scriptable::ModelProviderFactory\0"
    "modelAddedToScene\0\0objectID\0NestableType\0"
    "nestableType\0ModelPointer\0sender\0"
    "modelRemovedFromScene"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_scriptable__ModelProviderFactory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,
       8,    3,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 4, 0x80000000 | 6,    3,    5,    7,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 4, 0x80000000 | 6,    3,    5,    7,

       0        // eod
};

void scriptable::ModelProviderFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModelProviderFactory *_t = static_cast<ModelProviderFactory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelAddedToScene((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< NestableType(*)>(_a[2])),(*reinterpret_cast< const ModelPointer(*)>(_a[3]))); break;
        case 1: _t->modelRemovedFromScene((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< NestableType(*)>(_a[2])),(*reinterpret_cast< const ModelPointer(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ModelProviderFactory::*)(const QUuid & , NestableType , const ModelPointer & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModelProviderFactory::modelAddedToScene)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ModelProviderFactory::*)(const QUuid & , NestableType , const ModelPointer & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModelProviderFactory::modelRemovedFromScene)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject scriptable::ModelProviderFactory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_scriptable__ModelProviderFactory.data,
      qt_meta_data_scriptable__ModelProviderFactory,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *scriptable::ModelProviderFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *scriptable::ModelProviderFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_scriptable__ModelProviderFactory.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int scriptable::ModelProviderFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void scriptable::ModelProviderFactory::modelAddedToScene(const QUuid & _t1, NestableType _t2, const ModelPointer & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void scriptable::ModelProviderFactory::modelRemovedFromScene(const QUuid & _t1, NestableType _t2, const ModelPointer & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
