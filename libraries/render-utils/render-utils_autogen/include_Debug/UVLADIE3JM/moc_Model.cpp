/****************************************************************************
** Meta object code from reading C++ file 'Model.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Model_t {
    QByteArrayData data[15];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Model_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Model_t qt_meta_stringdata_Model = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Model"
QT_MOC_LITERAL(1, 6, 14), // "setURLFinished"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "success"
QT_MOC_LITERAL(4, 30, 28), // "setCollisionModelURLFinished"
QT_MOC_LITERAL(5, 59, 19), // "requestRenderUpdate"
QT_MOC_LITERAL(6, 79, 8), // "rigReady"
QT_MOC_LITERAL(7, 88, 8), // "rigReset"
QT_MOC_LITERAL(8, 97, 15), // "loadURLFinished"
QT_MOC_LITERAL(9, 113, 6), // "setURL"
QT_MOC_LITERAL(10, 120, 3), // "url"
QT_MOC_LITERAL(11, 124, 11), // "setTextures"
QT_MOC_LITERAL(12, 136, 8), // "textures"
QT_MOC_LITERAL(13, 145, 9), // "getMeshes"
QT_MOC_LITERAL(14, 155, 13) // "MeshProxyList"

    },
    "Model\0setURLFinished\0\0success\0"
    "setCollisionModelURLFinished\0"
    "requestRenderUpdate\0rigReady\0rigReset\0"
    "loadURLFinished\0setURL\0url\0setTextures\0"
    "textures\0getMeshes\0MeshProxyList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Model[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       5,    0,   65,    2, 0x06 /* Public */,
       6,    0,   66,    2, 0x06 /* Public */,
       7,    0,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   68,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    1,   71,    2, 0x02 /* Public */,
      11,    1,   74,    2, 0x02 /* Public */,
      13,    0,   77,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // methods: parameters
    QMetaType::Void, QMetaType::QUrl,   10,
    QMetaType::Void, QMetaType::QVariantMap,   12,
    0x80000000 | 14,

       0        // eod
};

void Model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Model *_t = static_cast<Model *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setURLFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setCollisionModelURLFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->requestRenderUpdate(); break;
        case 3: _t->rigReady(); break;
        case 4: _t->rigReset(); break;
        case 5: _t->loadURLFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setURL((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 7: _t->setTextures((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 8: { MeshProxyList _r = _t->getMeshes();
            if (_a[0]) *reinterpret_cast< MeshProxyList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Model::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::setURLFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Model::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::setCollisionModelURLFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::requestRenderUpdate)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::rigReady)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::rigReset)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Model::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Model.data,
      qt_meta_data_Model,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Model::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Model::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Model.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "std::enable_shared_from_this<Model>"))
        return static_cast< std::enable_shared_from_this<Model>*>(this);
    if (!strcmp(_clname, "scriptable::ModelProvider"))
        return static_cast< scriptable::ModelProvider*>(this);
    return QObject::qt_metacast(_clname);
}

int Model::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Model::setURLFinished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Model::setCollisionModelURLFinished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Model::requestRenderUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Model::rigReady()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Model::rigReset()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_ModelBlender_t {
    QByteArrayData data[12];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelBlender_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelBlender_t qt_meta_stringdata_ModelBlender = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ModelBlender"
QT_MOC_LITERAL(1, 13, 18), // "setBlendedVertices"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 12), // "ModelPointer"
QT_MOC_LITERAL(4, 46, 5), // "model"
QT_MOC_LITERAL(5, 52, 11), // "blendNumber"
QT_MOC_LITERAL(6, 64, 25), // "QVector<BlendshapeOffset>"
QT_MOC_LITERAL(7, 90, 17), // "blendshapeOffsets"
QT_MOC_LITERAL(8, 108, 12), // "QVector<int>"
QT_MOC_LITERAL(9, 121, 16), // "blendedMeshSizes"
QT_MOC_LITERAL(10, 138, 21), // "setComputeBlendshapes"
QT_MOC_LITERAL(11, 160, 18) // "computeBlendshapes"

    },
    "ModelBlender\0setBlendedVertices\0\0"
    "ModelPointer\0model\0blendNumber\0"
    "QVector<BlendshapeOffset>\0blendshapeOffsets\0"
    "QVector<int>\0blendedMeshSizes\0"
    "setComputeBlendshapes\0computeBlendshapes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelBlender[] = {

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

 // slots: name, argc, parameters, tag, flags
       1,    4,   24,    2, 0x0a /* Public */,
      10,    1,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 6, 0x80000000 | 8,    4,    5,    7,    9,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void ModelBlender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModelBlender *_t = static_cast<ModelBlender *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setBlendedVertices((*reinterpret_cast< ModelPointer(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QVector<BlendshapeOffset>(*)>(_a[3])),(*reinterpret_cast< QVector<int>(*)>(_a[4]))); break;
        case 1: _t->setComputeBlendshapes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModelPointer >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<BlendshapeOffset> >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ModelBlender::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ModelBlender.data,
      qt_meta_data_ModelBlender,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ModelBlender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelBlender::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModelBlender.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int ModelBlender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
