/****************************************************************************
** Meta object code from reading C++ file 'GraphicsScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/graphics-scripting/GraphicsScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GraphicsScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GraphicsScriptingInterface_t {
    QByteArrayData data[19];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphicsScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphicsScriptingInterface_t qt_meta_stringdata_GraphicsScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 26), // "GraphicsScriptingInterface"
QT_MOC_LITERAL(1, 27, 8), // "getModel"
QT_MOC_LITERAL(2, 36, 34), // "scriptable::ScriptableModelPo..."
QT_MOC_LITERAL(3, 71, 0), // ""
QT_MOC_LITERAL(4, 72, 4), // "uuid"
QT_MOC_LITERAL(5, 77, 11), // "updateModel"
QT_MOC_LITERAL(6, 89, 5), // "model"
QT_MOC_LITERAL(7, 95, 14), // "canUpdateModel"
QT_MOC_LITERAL(8, 110, 9), // "meshIndex"
QT_MOC_LITERAL(9, 120, 10), // "partNumber"
QT_MOC_LITERAL(10, 131, 8), // "newModel"
QT_MOC_LITERAL(11, 140, 28), // "scriptable::ScriptableMeshes"
QT_MOC_LITERAL(12, 169, 6), // "meshes"
QT_MOC_LITERAL(13, 176, 7), // "newMesh"
QT_MOC_LITERAL(14, 184, 33), // "scriptable::ScriptableMeshPoi..."
QT_MOC_LITERAL(15, 218, 11), // "ifsMeshData"
QT_MOC_LITERAL(16, 230, 16), // "exportModelToOBJ"
QT_MOC_LITERAL(17, 247, 27), // "scriptable::ScriptableModel"
QT_MOC_LITERAL(18, 275, 2) // "in"

    },
    "GraphicsScriptingInterface\0getModel\0"
    "scriptable::ScriptableModelPointer\0\0"
    "uuid\0updateModel\0model\0canUpdateModel\0"
    "meshIndex\0partNumber\0newModel\0"
    "scriptable::ScriptableMeshes\0meshes\0"
    "newMesh\0scriptable::ScriptableMeshPointer\0"
    "ifsMeshData\0exportModelToOBJ\0"
    "scriptable::ScriptableModel\0in"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphicsScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    3, 0x0a /* Public */,
       5,    2,   57,    3, 0x0a /* Public */,
       7,    3,   62,    3, 0x0a /* Public */,
       7,    2,   69,    3, 0x2a /* Public | MethodCloned */,
       7,    1,   74,    3, 0x2a /* Public | MethodCloned */,
      10,    1,   77,    3, 0x0a /* Public */,
      13,    1,   80,    3, 0x0a /* Public */,
      16,    1,   83,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QUuid,    4,
    QMetaType::Bool, QMetaType::QUuid, 0x80000000 | 2,    4,    6,
    QMetaType::Bool, QMetaType::QUuid, QMetaType::Int, QMetaType::Int,    4,    8,    9,
    QMetaType::Bool, QMetaType::QUuid, QMetaType::Int,    4,    8,
    QMetaType::Bool, QMetaType::QUuid,    4,
    0x80000000 | 2, 0x80000000 | 11,   12,
    0x80000000 | 14, QMetaType::QVariantMap,   15,
    QMetaType::QString, 0x80000000 | 17,   18,

       0        // eod
};

void GraphicsScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GraphicsScriptingInterface *_t = static_cast<GraphicsScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { scriptable::ScriptableModelPointer _r = _t->getModel((*reinterpret_cast< QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< scriptable::ScriptableModelPointer*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->updateModel((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< const scriptable::ScriptableModelPointer(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->canUpdateModel((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->canUpdateModel((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->canUpdateModel((*reinterpret_cast< QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { scriptable::ScriptableModelPointer _r = _t->newModel((*reinterpret_cast< const scriptable::ScriptableMeshes(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< scriptable::ScriptableModelPointer*>(_a[0]) = std::move(_r); }  break;
        case 6: { scriptable::ScriptableMeshPointer _r = _t->newMesh((*reinterpret_cast< const QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< scriptable::ScriptableMeshPointer*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->exportModelToOBJ((*reinterpret_cast< const scriptable::ScriptableModel(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< scriptable::ScriptableModelPointer >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GraphicsScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GraphicsScriptingInterface.data,
      qt_meta_data_GraphicsScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GraphicsScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphicsScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicsScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QScriptable"))
        return static_cast< QScriptable*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int GraphicsScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
