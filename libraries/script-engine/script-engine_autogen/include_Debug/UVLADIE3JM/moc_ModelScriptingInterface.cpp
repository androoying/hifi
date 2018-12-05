/****************************************************************************
** Meta object code from reading C++ file 'ModelScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ModelScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModelScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModelScriptingInterface_t {
    QByteArrayData data[21];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelScriptingInterface_t qt_meta_stringdata_ModelScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 23), // "ModelScriptingInterface"
QT_MOC_LITERAL(1, 24, 9), // "meshToOBJ"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "MeshProxyList"
QT_MOC_LITERAL(4, 49, 2), // "in"
QT_MOC_LITERAL(5, 52, 12), // "appendMeshes"
QT_MOC_LITERAL(6, 65, 12), // "QScriptValue"
QT_MOC_LITERAL(7, 78, 13), // "transformMesh"
QT_MOC_LITERAL(8, 92, 9), // "glm::mat4"
QT_MOC_LITERAL(9, 102, 9), // "transform"
QT_MOC_LITERAL(10, 112, 10), // "MeshProxy*"
QT_MOC_LITERAL(11, 123, 9), // "meshProxy"
QT_MOC_LITERAL(12, 133, 7), // "newMesh"
QT_MOC_LITERAL(13, 141, 18), // "QVector<glm::vec3>"
QT_MOC_LITERAL(14, 160, 8), // "vertices"
QT_MOC_LITERAL(15, 169, 7), // "normals"
QT_MOC_LITERAL(16, 177, 17), // "QVector<MeshFace>"
QT_MOC_LITERAL(17, 195, 5), // "faces"
QT_MOC_LITERAL(18, 201, 14), // "getVertexCount"
QT_MOC_LITERAL(19, 216, 9), // "getVertex"
QT_MOC_LITERAL(20, 226, 11) // "vertexIndex"

    },
    "ModelScriptingInterface\0meshToOBJ\0\0"
    "MeshProxyList\0in\0appendMeshes\0"
    "QScriptValue\0transformMesh\0glm::mat4\0"
    "transform\0MeshProxy*\0meshProxy\0newMesh\0"
    "QVector<glm::vec3>\0vertices\0normals\0"
    "QVector<MeshFace>\0faces\0getVertexCount\0"
    "getVertex\0vertexIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x02 /* Public */,
       5,    1,   47,    2, 0x02 /* Public */,
       7,    2,   50,    2, 0x02 /* Public */,
      12,    3,   55,    2, 0x02 /* Public */,
      18,    1,   62,    2, 0x02 /* Public */,
      19,    2,   65,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString, 0x80000000 | 3,    4,
    0x80000000 | 6, 0x80000000 | 3,    4,
    0x80000000 | 6, 0x80000000 | 8, 0x80000000 | 10,    9,   11,
    0x80000000 | 6, 0x80000000 | 13, 0x80000000 | 13, 0x80000000 | 16,   14,   15,   17,
    0x80000000 | 6, 0x80000000 | 10,   11,
    0x80000000 | 6, 0x80000000 | 10, QMetaType::Int,   11,   20,

       0        // eod
};

void ModelScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModelScriptingInterface *_t = static_cast<ModelScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->meshToOBJ((*reinterpret_cast< MeshProxyList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QScriptValue _r = _t->appendMeshes((*reinterpret_cast< MeshProxyList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 2: { QScriptValue _r = _t->transformMesh((*reinterpret_cast< glm::mat4(*)>(_a[1])),(*reinterpret_cast< MeshProxy*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 3: { QScriptValue _r = _t->newMesh((*reinterpret_cast< const QVector<glm::vec3>(*)>(_a[1])),(*reinterpret_cast< const QVector<glm::vec3>(*)>(_a[2])),(*reinterpret_cast< const QVector<MeshFace>(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 4: { QScriptValue _r = _t->getVertexCount((*reinterpret_cast< MeshProxy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 5: { QScriptValue _r = _t->getVertex((*reinterpret_cast< MeshProxy*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MeshProxyList >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MeshProxyList >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MeshProxy* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::mat4 >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<MeshFace> >(); break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<glm::vec3> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MeshProxy* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MeshProxy* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ModelScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ModelScriptingInterface.data,
      qt_meta_data_ModelScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ModelScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModelScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ModelScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
