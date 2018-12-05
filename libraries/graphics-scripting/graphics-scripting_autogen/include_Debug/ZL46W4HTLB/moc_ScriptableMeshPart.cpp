/****************************************************************************
** Meta object code from reading C++ file 'ScriptableMeshPart.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/graphics-scripting/ScriptableMeshPart.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScriptableMeshPart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_scriptable__ScriptableMeshPart_t {
    QByteArrayData data[68];
    char stringdata0[936];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_scriptable__ScriptableMeshPart_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_scriptable__ScriptableMeshPart_t qt_meta_stringdata_scriptable__ScriptableMeshPart = {
    {
QT_MOC_LITERAL(0, 0, 30), // "scriptable::ScriptableMeshPart"
QT_MOC_LITERAL(1, 31, 10), // "getIndices"
QT_MOC_LITERAL(2, 42, 20), // "QVector<glm::uint32>"
QT_MOC_LITERAL(3, 63, 0), // ""
QT_MOC_LITERAL(4, 64, 10), // "setIndices"
QT_MOC_LITERAL(5, 75, 7), // "indices"
QT_MOC_LITERAL(6, 83, 27), // "findNearbyPartVertexIndices"
QT_MOC_LITERAL(7, 111, 9), // "glm::vec3"
QT_MOC_LITERAL(8, 121, 6), // "origin"
QT_MOC_LITERAL(9, 128, 7), // "epsilon"
QT_MOC_LITERAL(10, 136, 21), // "queryVertexAttributes"
QT_MOC_LITERAL(11, 158, 8), // "selector"
QT_MOC_LITERAL(12, 167, 19), // "getVertexAttributes"
QT_MOC_LITERAL(13, 187, 11), // "glm::uint32"
QT_MOC_LITERAL(14, 199, 11), // "vertexIndex"
QT_MOC_LITERAL(15, 211, 19), // "setVertexAttributes"
QT_MOC_LITERAL(16, 231, 15), // "attributeValues"
QT_MOC_LITERAL(17, 247, 17), // "getVertexProperty"
QT_MOC_LITERAL(18, 265, 13), // "attributeName"
QT_MOC_LITERAL(19, 279, 17), // "setVertexProperty"
QT_MOC_LITERAL(20, 297, 7), // "getFace"
QT_MOC_LITERAL(21, 305, 9), // "faceIndex"
QT_MOC_LITERAL(22, 315, 10), // "scaleToFit"
QT_MOC_LITERAL(23, 326, 9), // "unitScale"
QT_MOC_LITERAL(24, 336, 9), // "translate"
QT_MOC_LITERAL(25, 346, 11), // "translation"
QT_MOC_LITERAL(26, 358, 5), // "scale"
QT_MOC_LITERAL(27, 364, 13), // "rotateDegrees"
QT_MOC_LITERAL(28, 378, 11), // "eulerAngles"
QT_MOC_LITERAL(29, 390, 6), // "rotate"
QT_MOC_LITERAL(30, 397, 9), // "glm::quat"
QT_MOC_LITERAL(31, 407, 8), // "rotation"
QT_MOC_LITERAL(32, 416, 9), // "transform"
QT_MOC_LITERAL(33, 426, 9), // "glm::mat4"
QT_MOC_LITERAL(34, 436, 12), // "addAttribute"
QT_MOC_LITERAL(35, 449, 12), // "defaultValue"
QT_MOC_LITERAL(36, 462, 13), // "fillAttribute"
QT_MOC_LITERAL(37, 476, 5), // "value"
QT_MOC_LITERAL(38, 482, 15), // "removeAttribute"
QT_MOC_LITERAL(39, 498, 14), // "dedupeVertices"
QT_MOC_LITERAL(40, 513, 13), // "getParentMesh"
QT_MOC_LITERAL(41, 527, 33), // "scriptable::ScriptableMeshPoi..."
QT_MOC_LITERAL(42, 561, 19), // "replaceMeshPartData"
QT_MOC_LITERAL(43, 581, 37), // "scriptable::ScriptableMeshPar..."
QT_MOC_LITERAL(44, 619, 6), // "source"
QT_MOC_LITERAL(45, 626, 16), // "QVector<QString>"
QT_MOC_LITERAL(46, 643, 14), // "attributeNames"
QT_MOC_LITERAL(47, 658, 13), // "cloneMeshPart"
QT_MOC_LITERAL(48, 672, 5), // "toOBJ"
QT_MOC_LITERAL(49, 678, 22), // "updateVertexAttributes"
QT_MOC_LITERAL(50, 701, 12), // "QScriptValue"
QT_MOC_LITERAL(51, 714, 8), // "callback"
QT_MOC_LITERAL(52, 723, 13), // "forEachVertex"
QT_MOC_LITERAL(53, 737, 12), // "isValidIndex"
QT_MOC_LITERAL(54, 750, 5), // "valid"
QT_MOC_LITERAL(55, 756, 9), // "partIndex"
QT_MOC_LITERAL(56, 766, 16), // "firstVertexIndex"
QT_MOC_LITERAL(57, 783, 15), // "baseVertexIndex"
QT_MOC_LITERAL(58, 799, 15), // "lastVertexIndex"
QT_MOC_LITERAL(59, 815, 18), // "numVerticesPerFace"
QT_MOC_LITERAL(60, 834, 8), // "topology"
QT_MOC_LITERAL(61, 843, 24), // "graphics::Mesh::Topology"
QT_MOC_LITERAL(62, 868, 8), // "numFaces"
QT_MOC_LITERAL(63, 877, 13), // "numAttributes"
QT_MOC_LITERAL(64, 891, 11), // "numVertices"
QT_MOC_LITERAL(65, 903, 10), // "numIndices"
QT_MOC_LITERAL(66, 914, 7), // "extents"
QT_MOC_LITERAL(67, 922, 13) // "bufferFormats"

    },
    "scriptable::ScriptableMeshPart\0"
    "getIndices\0QVector<glm::uint32>\0\0"
    "setIndices\0indices\0findNearbyPartVertexIndices\0"
    "glm::vec3\0origin\0epsilon\0queryVertexAttributes\0"
    "selector\0getVertexAttributes\0glm::uint32\0"
    "vertexIndex\0setVertexAttributes\0"
    "attributeValues\0getVertexProperty\0"
    "attributeName\0setVertexProperty\0getFace\0"
    "faceIndex\0scaleToFit\0unitScale\0translate\0"
    "translation\0scale\0rotateDegrees\0"
    "eulerAngles\0rotate\0glm::quat\0rotation\0"
    "transform\0glm::mat4\0addAttribute\0"
    "defaultValue\0fillAttribute\0value\0"
    "removeAttribute\0dedupeVertices\0"
    "getParentMesh\0scriptable::ScriptableMeshPointer\0"
    "replaceMeshPartData\0"
    "scriptable::ScriptableMeshPartPointer\0"
    "source\0QVector<QString>\0attributeNames\0"
    "cloneMeshPart\0toOBJ\0updateVertexAttributes\0"
    "QScriptValue\0callback\0forEachVertex\0"
    "isValidIndex\0valid\0partIndex\0"
    "firstVertexIndex\0baseVertexIndex\0"
    "lastVertexIndex\0numVerticesPerFace\0"
    "topology\0graphics::Mesh::Topology\0"
    "numFaces\0numAttributes\0numVertices\0"
    "numIndices\0extents\0bufferFormats"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_scriptable__ScriptableMeshPart[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
      14,  300, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  184,    3, 0x0a /* Public */,
       4,    1,  185,    3, 0x0a /* Public */,
       6,    2,  188,    3, 0x0a /* Public */,
       6,    1,  193,    3, 0x2a /* Public | MethodCloned */,
      10,    1,  196,    3, 0x0a /* Public */,
      12,    1,  199,    3, 0x0a /* Public */,
      15,    2,  202,    3, 0x0a /* Public */,
      17,    2,  207,    3, 0x0a /* Public */,
      19,    3,  212,    3, 0x0a /* Public */,
      20,    1,  219,    3, 0x0a /* Public */,
      22,    1,  222,    3, 0x0a /* Public */,
      24,    1,  225,    3, 0x0a /* Public */,
      26,    2,  228,    3, 0x0a /* Public */,
      26,    1,  233,    3, 0x2a /* Public | MethodCloned */,
      27,    2,  236,    3, 0x0a /* Public */,
      27,    1,  241,    3, 0x2a /* Public | MethodCloned */,
      29,    2,  244,    3, 0x0a /* Public */,
      29,    1,  249,    3, 0x2a /* Public | MethodCloned */,
      32,    1,  252,    3, 0x0a /* Public */,
      34,    2,  255,    3, 0x0a /* Public */,
      34,    1,  260,    3, 0x2a /* Public | MethodCloned */,
      36,    2,  263,    3, 0x0a /* Public */,
      38,    1,  268,    3, 0x0a /* Public */,
      39,    1,  271,    3, 0x0a /* Public */,
      39,    0,  274,    3, 0x2a /* Public | MethodCloned */,
      40,    0,  275,    3, 0x0a /* Public */,
      42,    2,  276,    3, 0x0a /* Public */,
      42,    1,  281,    3, 0x2a /* Public | MethodCloned */,
      47,    0,  284,    3, 0x0a /* Public */,
      48,    0,  285,    3, 0x0a /* Public */,
      49,    1,  286,    3, 0x0a /* Public */,
      52,    1,  289,    3, 0x0a /* Public */,
      53,    2,  292,    3, 0x0a /* Public */,
      53,    1,  297,    3, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Bool, 0x80000000 | 2,    5,
    0x80000000 | 2, 0x80000000 | 7, QMetaType::Float,    8,    9,
    0x80000000 | 2, 0x80000000 | 7,    8,
    QMetaType::QVariantList, QMetaType::QVariant,   11,
    QMetaType::QVariantMap, 0x80000000 | 13,   14,
    QMetaType::Bool, 0x80000000 | 13, QMetaType::QVariantMap,   14,   16,
    QMetaType::QVariant, 0x80000000 | 13, QMetaType::QString,   14,   18,
    QMetaType::Bool, 0x80000000 | 13, QMetaType::QString, QMetaType::QVariant,   14,   18,   16,
    0x80000000 | 2, 0x80000000 | 13,   21,
    QMetaType::QVariantMap, QMetaType::Float,   23,
    QMetaType::QVariantMap, 0x80000000 | 7,   25,
    QMetaType::QVariantMap, 0x80000000 | 7, 0x80000000 | 7,   26,    8,
    QMetaType::QVariantMap, 0x80000000 | 7,   26,
    QMetaType::QVariantMap, 0x80000000 | 7, 0x80000000 | 7,   28,    8,
    QMetaType::QVariantMap, 0x80000000 | 7,   28,
    QMetaType::QVariantMap, 0x80000000 | 30, 0x80000000 | 7,   31,    8,
    QMetaType::QVariantMap, 0x80000000 | 30,   31,
    QMetaType::QVariantMap, 0x80000000 | 33,   32,
    0x80000000 | 13, QMetaType::QString, QMetaType::QVariant,   18,   35,
    0x80000000 | 13, QMetaType::QString,   18,
    0x80000000 | 13, QMetaType::QString, QMetaType::QVariant,   18,   37,
    QMetaType::Bool, QMetaType::QString,   18,
    QMetaType::Bool, QMetaType::Float,    9,
    QMetaType::Bool,
    0x80000000 | 41,
    QMetaType::Bool, 0x80000000 | 43, 0x80000000 | 45,   44,   46,
    QMetaType::Bool, 0x80000000 | 43,   44,
    0x80000000 | 43,
    QMetaType::QString,
    0x80000000 | 13, 0x80000000 | 50,   51,
    0x80000000 | 13, 0x80000000 | 50,   51,
    QMetaType::Bool, 0x80000000 | 13, QMetaType::QString,   14,   18,
    QMetaType::Bool, 0x80000000 | 13,   14,

 // properties: name, type, flags
      54, QMetaType::Bool, 0x00095001,
      55, 0x80000000 | 13, 0x00095409,
      56, 0x80000000 | 13, 0x0009510b,
      57, 0x80000000 | 13, 0x0009510b,
      58, 0x80000000 | 13, 0x0009510b,
      59, QMetaType::Int, 0x00095001,
      60, 0x80000000 | 61, 0x00095009,
      62, 0x80000000 | 13, 0x00095009,
      63, 0x80000000 | 13, 0x00095009,
      64, 0x80000000 | 13, 0x00095009,
      65, 0x80000000 | 13, 0x0009510b,
      66, QMetaType::QVariantMap, 0x00095001,
      46, 0x80000000 | 45, 0x00095009,
      67, QMetaType::QVariantMap, 0x00095001,

       0        // eod
};

void scriptable::ScriptableMeshPart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScriptableMeshPart *_t = static_cast<ScriptableMeshPart *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QVector<glm::uint32> _r = _t->getIndices();
            if (_a[0]) *reinterpret_cast< QVector<glm::uint32>*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->setIndices((*reinterpret_cast< const QVector<glm::uint32>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { QVector<glm::uint32> _r = _t->findNearbyPartVertexIndices((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector<glm::uint32>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QVector<glm::uint32> _r = _t->findNearbyPartVertexIndices((*reinterpret_cast< const glm::vec3(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<glm::uint32>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QVariantList _r = _t->queryVertexAttributes((*reinterpret_cast< QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 5: { QVariantMap _r = _t->getVertexAttributes((*reinterpret_cast< glm::uint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->setVertexAttributes((*reinterpret_cast< glm::uint32(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { QVariant _r = _t->getVertexProperty((*reinterpret_cast< glm::uint32(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->setVertexProperty((*reinterpret_cast< glm::uint32(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { QVector<glm::uint32> _r = _t->getFace((*reinterpret_cast< glm::uint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<glm::uint32>*>(_a[0]) = std::move(_r); }  break;
        case 10: { QVariantMap _r = _t->scaleToFit((*reinterpret_cast< float(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 11: { QVariantMap _r = _t->translate((*reinterpret_cast< const glm::vec3(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 12: { QVariantMap _r = _t->scale((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 13: { QVariantMap _r = _t->scale((*reinterpret_cast< const glm::vec3(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 14: { QVariantMap _r = _t->rotateDegrees((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 15: { QVariantMap _r = _t->rotateDegrees((*reinterpret_cast< const glm::vec3(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 16: { QVariantMap _r = _t->rotate((*reinterpret_cast< const glm::quat(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 17: { QVariantMap _r = _t->rotate((*reinterpret_cast< const glm::quat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 18: { QVariantMap _r = _t->transform((*reinterpret_cast< const glm::mat4(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 19: { glm::uint32 _r = _t->addAttribute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::uint32*>(_a[0]) = std::move(_r); }  break;
        case 20: { glm::uint32 _r = _t->addAttribute((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::uint32*>(_a[0]) = std::move(_r); }  break;
        case 21: { glm::uint32 _r = _t->fillAttribute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::uint32*>(_a[0]) = std::move(_r); }  break;
        case 22: { bool _r = _t->removeAttribute((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: { bool _r = _t->dedupeVertices((*reinterpret_cast< float(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: { bool _r = _t->dedupeVertices();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 25: { scriptable::ScriptableMeshPointer _r = _t->getParentMesh();
            if (_a[0]) *reinterpret_cast< scriptable::ScriptableMeshPointer*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->replaceMeshPartData((*reinterpret_cast< scriptable::ScriptableMeshPartPointer(*)>(_a[1])),(*reinterpret_cast< const QVector<QString>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->replaceMeshPartData((*reinterpret_cast< scriptable::ScriptableMeshPartPointer(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { scriptable::ScriptableMeshPartPointer _r = _t->cloneMeshPart();
            if (_a[0]) *reinterpret_cast< scriptable::ScriptableMeshPartPointer*>(_a[0]) = std::move(_r); }  break;
        case 29: { QString _r = _t->toOBJ();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 30: { glm::uint32 _r = _t->updateVertexAttributes((*reinterpret_cast< QScriptValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::uint32*>(_a[0]) = std::move(_r); }  break;
        case 31: { glm::uint32 _r = _t->forEachVertex((*reinterpret_cast< QScriptValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::uint32*>(_a[0]) = std::move(_r); }  break;
        case 32: { bool _r = _t->isValidIndex((*reinterpret_cast< glm::uint32(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: { bool _r = _t->isValidIndex((*reinterpret_cast< glm::uint32(*)>(_a[1])));
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
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::mat4 >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< scriptable::ScriptableMeshPartPointer >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< scriptable::ScriptableMeshPartPointer >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< graphics::Mesh::Topology >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ScriptableMeshPart *_t = static_cast<ScriptableMeshPart *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isValid(); break;
        case 1: *reinterpret_cast< glm::uint32*>(_v) = _t->partIndex; break;
        case 2: *reinterpret_cast< glm::uint32*>(_v) = _t->getFirstVertexIndex(); break;
        case 3: *reinterpret_cast< glm::uint32*>(_v) = _t->getBaseVertexIndex(); break;
        case 4: *reinterpret_cast< glm::uint32*>(_v) = _t->getLastVertexIndex(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getTopologyLength(); break;
        case 6: *reinterpret_cast< graphics::Mesh::Topology*>(_v) = _t->getTopology(); break;
        case 7: *reinterpret_cast< glm::uint32*>(_v) = _t->getNumFaces(); break;
        case 8: *reinterpret_cast< glm::uint32*>(_v) = _t->getNumAttributes(); break;
        case 9: *reinterpret_cast< glm::uint32*>(_v) = _t->getNumVertices(); break;
        case 10: *reinterpret_cast< glm::uint32*>(_v) = _t->getNumIndices(); break;
        case 11: *reinterpret_cast< QVariantMap*>(_v) = _t->getPartExtents(); break;
        case 12: *reinterpret_cast< QVector<QString>*>(_v) = _t->getAttributeNames(); break;
        case 13: *reinterpret_cast< QVariantMap*>(_v) = _t->getBufferFormats(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ScriptableMeshPart *_t = static_cast<ScriptableMeshPart *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setFirstVertexIndex(*reinterpret_cast< glm::uint32*>(_v)); break;
        case 3: _t->setBaseVertexIndex(*reinterpret_cast< glm::uint32*>(_v)); break;
        case 4: _t->setLastVertexIndex(*reinterpret_cast< glm::uint32*>(_v)); break;
        case 10: _t->setNumIndices(*reinterpret_cast< glm::uint32*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject scriptable::ScriptableMeshPart::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_scriptable__ScriptableMeshPart.data,
      qt_meta_data_scriptable__ScriptableMeshPart,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *scriptable::ScriptableMeshPart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *scriptable::ScriptableMeshPart::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_scriptable__ScriptableMeshPart.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QScriptable"))
        return static_cast< QScriptable*>(this);
    return QObject::qt_metacast(_clname);
}

int scriptable::ScriptableMeshPart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
