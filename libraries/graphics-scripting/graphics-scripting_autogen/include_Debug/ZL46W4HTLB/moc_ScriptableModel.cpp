/****************************************************************************
** Meta object code from reading C++ file 'ScriptableModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/graphics-scripting/ScriptableModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScriptableModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_scriptable__ScriptableModel_t {
    QByteArrayData data[15];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_scriptable__ScriptableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_scriptable__ScriptableModel_t qt_meta_stringdata_scriptable__ScriptableModel = {
    {
QT_MOC_LITERAL(0, 0, 27), // "scriptable::ScriptableModel"
QT_MOC_LITERAL(1, 28, 10), // "cloneModel"
QT_MOC_LITERAL(2, 39, 34), // "scriptable::ScriptableModelPo..."
QT_MOC_LITERAL(3, 74, 0), // ""
QT_MOC_LITERAL(4, 75, 7), // "options"
QT_MOC_LITERAL(5, 83, 8), // "toString"
QT_MOC_LITERAL(6, 92, 8), // "objectID"
QT_MOC_LITERAL(7, 101, 9), // "numMeshes"
QT_MOC_LITERAL(8, 111, 11), // "glm::uint32"
QT_MOC_LITERAL(9, 123, 6), // "meshes"
QT_MOC_LITERAL(10, 130, 16), // "ScriptableMeshes"
QT_MOC_LITERAL(11, 147, 14), // "materialLayers"
QT_MOC_LITERAL(12, 162, 28), // "scriptable::MultiMaterialMap"
QT_MOC_LITERAL(13, 191, 13), // "materialNames"
QT_MOC_LITERAL(14, 205, 16) // "QVector<QString>"

    },
    "scriptable::ScriptableModel\0cloneModel\0"
    "scriptable::ScriptableModelPointer\0\0"
    "options\0toString\0objectID\0numMeshes\0"
    "glm::uint32\0meshes\0ScriptableMeshes\0"
    "materialLayers\0scriptable::MultiMaterialMap\0"
    "materialNames\0QVector<QString>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_scriptable__ScriptableModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       5,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       5,    0,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QVariantMap,    4,
    0x80000000 | 2,
    QMetaType::QString,

 // properties: name, type, flags
       6, QMetaType::QUuid, 0x00095401,
       7, 0x80000000 | 8, 0x00095009,
       9, 0x80000000 | 10, 0x00095009,
      11, 0x80000000 | 12, 0x00095009,
      13, 0x80000000 | 14, 0x00095009,

       0        // eod
};

void scriptable::ScriptableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScriptableModel *_t = static_cast<ScriptableModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { scriptable::ScriptableModelPointer _r = _t->cloneModel((*reinterpret_cast< const QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< scriptable::ScriptableModelPointer*>(_a[0]) = std::move(_r); }  break;
        case 1: { scriptable::ScriptableModelPointer _r = _t->cloneModel();
            if (_a[0]) *reinterpret_cast< scriptable::ScriptableModelPointer*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< scriptable::MultiMaterialMap >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ScriptableModel *_t = static_cast<ScriptableModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUuid*>(_v) = _t->objectID; break;
        case 1: *reinterpret_cast< glm::uint32*>(_v) = _t->getNumMeshes(); break;
        case 2: *reinterpret_cast< ScriptableMeshes*>(_v) = _t->getMeshes(); break;
        case 3: *reinterpret_cast< scriptable::MultiMaterialMap*>(_v) = _t->getMaterialLayers(); break;
        case 4: *reinterpret_cast< QVector<QString>*>(_v) = _t->getMaterialNames(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject scriptable::ScriptableModel::staticMetaObject = {
    { &ScriptableModelBase::staticMetaObject, qt_meta_stringdata_scriptable__ScriptableModel.data,
      qt_meta_data_scriptable__ScriptableModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *scriptable::ScriptableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *scriptable::ScriptableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_scriptable__ScriptableModel.stringdata0))
        return static_cast<void*>(this);
    return ScriptableModelBase::qt_metacast(_clname);
}

int scriptable::ScriptableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScriptableModelBase::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
