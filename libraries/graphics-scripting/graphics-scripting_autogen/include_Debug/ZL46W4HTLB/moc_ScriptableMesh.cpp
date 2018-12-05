/****************************************************************************
** Meta object code from reading C++ file 'ScriptableMesh.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/graphics-scripting/ScriptableMesh.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScriptableMesh.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_scriptable__ScriptableMesh_t {
    QByteArrayData data[44];
    char stringdata0[664];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_scriptable__ScriptableMesh_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_scriptable__ScriptableMesh_t qt_meta_stringdata_scriptable__ScriptableMesh = {
    {
QT_MOC_LITERAL(0, 0, 26), // "scriptable::ScriptableMesh"
QT_MOC_LITERAL(1, 27, 14), // "getParentModel"
QT_MOC_LITERAL(2, 42, 34), // "scriptable::ScriptableModelPo..."
QT_MOC_LITERAL(3, 77, 0), // ""
QT_MOC_LITERAL(4, 78, 10), // "getIndices"
QT_MOC_LITERAL(5, 89, 20), // "QVector<glm::uint32>"
QT_MOC_LITERAL(6, 110, 23), // "findNearbyVertexIndices"
QT_MOC_LITERAL(7, 134, 9), // "glm::vec3"
QT_MOC_LITERAL(8, 144, 6), // "origin"
QT_MOC_LITERAL(9, 151, 7), // "epsilon"
QT_MOC_LITERAL(10, 159, 12), // "addAttribute"
QT_MOC_LITERAL(11, 172, 11), // "glm::uint32"
QT_MOC_LITERAL(12, 184, 13), // "attributeName"
QT_MOC_LITERAL(13, 198, 12), // "defaultValue"
QT_MOC_LITERAL(14, 211, 13), // "fillAttribute"
QT_MOC_LITERAL(15, 225, 5), // "value"
QT_MOC_LITERAL(16, 231, 15), // "removeAttribute"
QT_MOC_LITERAL(17, 247, 21), // "queryVertexAttributes"
QT_MOC_LITERAL(18, 269, 8), // "selector"
QT_MOC_LITERAL(19, 278, 19), // "getVertexAttributes"
QT_MOC_LITERAL(20, 298, 11), // "vertexIndex"
QT_MOC_LITERAL(21, 310, 19), // "setVertexAttributes"
QT_MOC_LITERAL(22, 330, 15), // "attributeValues"
QT_MOC_LITERAL(23, 346, 17), // "getVertexProperty"
QT_MOC_LITERAL(24, 364, 17), // "setVertexProperty"
QT_MOC_LITERAL(25, 382, 9), // "cloneMesh"
QT_MOC_LITERAL(26, 392, 33), // "scriptable::ScriptableMeshPoi..."
QT_MOC_LITERAL(27, 426, 22), // "updateVertexAttributes"
QT_MOC_LITERAL(28, 449, 12), // "QScriptValue"
QT_MOC_LITERAL(29, 462, 8), // "callback"
QT_MOC_LITERAL(30, 471, 13), // "forEachVertex"
QT_MOC_LITERAL(31, 485, 12), // "isValidIndex"
QT_MOC_LITERAL(32, 498, 8), // "numParts"
QT_MOC_LITERAL(33, 507, 13), // "numAttributes"
QT_MOC_LITERAL(34, 521, 11), // "numVertices"
QT_MOC_LITERAL(35, 533, 10), // "numIndices"
QT_MOC_LITERAL(36, 544, 14), // "attributeNames"
QT_MOC_LITERAL(37, 559, 16), // "QVector<QString>"
QT_MOC_LITERAL(38, 576, 5), // "parts"
QT_MOC_LITERAL(39, 582, 46), // "QVector<scriptable::Scriptabl..."
QT_MOC_LITERAL(40, 629, 5), // "valid"
QT_MOC_LITERAL(41, 635, 6), // "strong"
QT_MOC_LITERAL(42, 642, 7), // "extents"
QT_MOC_LITERAL(43, 650, 13) // "bufferFormats"

    },
    "scriptable::ScriptableMesh\0getParentModel\0"
    "scriptable::ScriptableModelPointer\0\0"
    "getIndices\0QVector<glm::uint32>\0"
    "findNearbyVertexIndices\0glm::vec3\0"
    "origin\0epsilon\0addAttribute\0glm::uint32\0"
    "attributeName\0defaultValue\0fillAttribute\0"
    "value\0removeAttribute\0queryVertexAttributes\0"
    "selector\0getVertexAttributes\0vertexIndex\0"
    "setVertexAttributes\0attributeValues\0"
    "getVertexProperty\0setVertexProperty\0"
    "cloneMesh\0scriptable::ScriptableMeshPointer\0"
    "updateVertexAttributes\0QScriptValue\0"
    "callback\0forEachVertex\0isValidIndex\0"
    "numParts\0numAttributes\0numVertices\0"
    "numIndices\0attributeNames\0QVector<QString>\0"
    "parts\0QVector<scriptable::ScriptableMeshPartPointer>\0"
    "valid\0strong\0extents\0bufferFormats"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_scriptable__ScriptableMesh[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
      10,  168, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    3, 0x0a /* Public */,
       4,    0,  105,    3, 0x0a /* Public */,
       6,    2,  106,    3, 0x0a /* Public */,
       6,    1,  111,    3, 0x2a /* Public | MethodCloned */,
      10,    2,  114,    3, 0x0a /* Public */,
      10,    1,  119,    3, 0x2a /* Public | MethodCloned */,
      14,    2,  122,    3, 0x0a /* Public */,
      16,    1,  127,    3, 0x0a /* Public */,
      17,    1,  130,    3, 0x0a /* Public */,
      19,    1,  133,    3, 0x0a /* Public */,
      21,    2,  136,    3, 0x0a /* Public */,
      23,    2,  141,    3, 0x0a /* Public */,
      24,    3,  146,    3, 0x0a /* Public */,
      25,    0,  153,    3, 0x0a /* Public */,
      27,    1,  154,    3, 0x0a /* Public */,
      30,    1,  157,    3, 0x0a /* Public */,
      31,    2,  160,    3, 0x0a /* Public */,
      31,    1,  165,    3, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 5,
    0x80000000 | 5, 0x80000000 | 7, QMetaType::Float,    8,    9,
    0x80000000 | 5, 0x80000000 | 7,    8,
    0x80000000 | 11, QMetaType::QString, QMetaType::QVariant,   12,   13,
    0x80000000 | 11, QMetaType::QString,   12,
    0x80000000 | 11, QMetaType::QString, QMetaType::QVariant,   12,   15,
    QMetaType::Bool, QMetaType::QString,   12,
    QMetaType::QVariantList, QMetaType::QVariant,   18,
    QMetaType::QVariantMap, 0x80000000 | 11,   20,
    QMetaType::Bool, 0x80000000 | 11, QMetaType::QVariantMap,   20,   22,
    QMetaType::QVariant, 0x80000000 | 11, QMetaType::QString,   20,   12,
    QMetaType::Bool, 0x80000000 | 11, QMetaType::QString, QMetaType::QVariant,   20,   12,   15,
    0x80000000 | 26,
    0x80000000 | 11, 0x80000000 | 28,   29,
    0x80000000 | 11, 0x80000000 | 28,   29,
    QMetaType::Bool, 0x80000000 | 11, QMetaType::QString,   20,   12,
    QMetaType::Bool, 0x80000000 | 11,   20,

 // properties: name, type, flags
      32, 0x80000000 | 11, 0x00095009,
      33, 0x80000000 | 11, 0x00095009,
      34, 0x80000000 | 11, 0x00095009,
      35, 0x80000000 | 11, 0x00095009,
      36, 0x80000000 | 37, 0x00095009,
      38, 0x80000000 | 39, 0x00095009,
      40, QMetaType::Bool, 0x00095001,
      41, QMetaType::Bool, 0x00095001,
      42, QMetaType::QVariantMap, 0x00095001,
      43, QMetaType::QVariantMap, 0x00095001,

       0        // eod
};

void scriptable::ScriptableMesh::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScriptableMesh *_t = static_cast<ScriptableMesh *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { scriptable::ScriptableModelPointer _r = _t->getParentModel();
            if (_a[0]) *reinterpret_cast< scriptable::ScriptableModelPointer*>(_a[0]) = std::move(_r); }  break;
        case 1: { QVector<glm::uint32> _r = _t->getIndices();
            if (_a[0]) *reinterpret_cast< QVector<glm::uint32>*>(_a[0]) = std::move(_r); }  break;
        case 2: { QVector<glm::uint32> _r = _t->findNearbyVertexIndices((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector<glm::uint32>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QVector<glm::uint32> _r = _t->findNearbyVertexIndices((*reinterpret_cast< const glm::vec3(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<glm::uint32>*>(_a[0]) = std::move(_r); }  break;
        case 4: { glm::uint32 _r = _t->addAttribute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::uint32*>(_a[0]) = std::move(_r); }  break;
        case 5: { glm::uint32 _r = _t->addAttribute((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::uint32*>(_a[0]) = std::move(_r); }  break;
        case 6: { glm::uint32 _r = _t->fillAttribute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::uint32*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->removeAttribute((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { QVariantList _r = _t->queryVertexAttributes((*reinterpret_cast< QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 9: { QVariantMap _r = _t->getVertexAttributes((*reinterpret_cast< glm::uint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->setVertexAttributes((*reinterpret_cast< glm::uint32(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { QVariant _r = _t->getVertexProperty((*reinterpret_cast< glm::uint32(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->setVertexProperty((*reinterpret_cast< glm::uint32(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { scriptable::ScriptableMeshPointer _r = _t->cloneMesh();
            if (_a[0]) *reinterpret_cast< scriptable::ScriptableMeshPointer*>(_a[0]) = std::move(_r); }  break;
        case 14: { glm::uint32 _r = _t->updateVertexAttributes((*reinterpret_cast< QScriptValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::uint32*>(_a[0]) = std::move(_r); }  break;
        case 15: { glm::uint32 _r = _t->forEachVertex((*reinterpret_cast< QScriptValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::uint32*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->isValidIndex((*reinterpret_cast< glm::uint32(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->isValidIndex((*reinterpret_cast< glm::uint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ScriptableMesh *_t = static_cast<ScriptableMesh *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< glm::uint32*>(_v) = _t->getNumParts(); break;
        case 1: *reinterpret_cast< glm::uint32*>(_v) = _t->getNumAttributes(); break;
        case 2: *reinterpret_cast< glm::uint32*>(_v) = _t->getNumVertices(); break;
        case 3: *reinterpret_cast< glm::uint32*>(_v) = _t->getNumIndices(); break;
        case 4: *reinterpret_cast< QVector<QString>*>(_v) = _t->getAttributeNames(); break;
        case 5: *reinterpret_cast< QVector<scriptable::ScriptableMeshPartPointer>*>(_v) = _t->getMeshParts(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isValid(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->hasValidStrongMesh(); break;
        case 8: *reinterpret_cast< QVariantMap*>(_v) = _t->getMeshExtents(); break;
        case 9: *reinterpret_cast< QVariantMap*>(_v) = _t->getBufferFormats(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject scriptable::ScriptableMesh::staticMetaObject = {
    { &ScriptableMeshBase::staticMetaObject, qt_meta_stringdata_scriptable__ScriptableMesh.data,
      qt_meta_data_scriptable__ScriptableMesh,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *scriptable::ScriptableMesh::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *scriptable::ScriptableMesh::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_scriptable__ScriptableMesh.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QScriptable"))
        return static_cast< QScriptable*>(this);
    return ScriptableMeshBase::qt_metacast(_clname);
}

int scriptable::ScriptableMesh::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScriptableMeshBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
