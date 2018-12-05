/****************************************************************************
** Meta object code from reading C++ file 'PointerScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/raypick/PointerScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PointerScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PointerScriptingInterface_t {
    QByteArrayData data[32];
    char stringdata0[420];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PointerScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PointerScriptingInterface_t qt_meta_stringdata_PointerScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PointerScriptingInterface"
QT_MOC_LITERAL(1, 26, 13), // "createPointer"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 19), // "PickQuery::PickType"
QT_MOC_LITERAL(4, 61, 4), // "type"
QT_MOC_LITERAL(5, 66, 10), // "properties"
QT_MOC_LITERAL(6, 77, 13), // "enablePointer"
QT_MOC_LITERAL(7, 91, 3), // "uid"
QT_MOC_LITERAL(8, 95, 14), // "disablePointer"
QT_MOC_LITERAL(9, 110, 13), // "removePointer"
QT_MOC_LITERAL(10, 124, 15), // "editRenderState"
QT_MOC_LITERAL(11, 140, 11), // "renderState"
QT_MOC_LITERAL(12, 152, 14), // "setRenderState"
QT_MOC_LITERAL(13, 167, 17), // "getPrevPickResult"
QT_MOC_LITERAL(14, 185, 19), // "setPrecisionPicking"
QT_MOC_LITERAL(15, 205, 16), // "precisionPicking"
QT_MOC_LITERAL(16, 222, 9), // "setLength"
QT_MOC_LITERAL(17, 232, 6), // "length"
QT_MOC_LITERAL(18, 239, 14), // "setIgnoreItems"
QT_MOC_LITERAL(19, 254, 12), // "QScriptValue"
QT_MOC_LITERAL(20, 267, 14), // "ignoreEntities"
QT_MOC_LITERAL(21, 282, 15), // "setIncludeItems"
QT_MOC_LITERAL(22, 298, 15), // "includeEntities"
QT_MOC_LITERAL(23, 314, 14), // "setLockEndUUID"
QT_MOC_LITERAL(24, 329, 8), // "objectID"
QT_MOC_LITERAL(25, 338, 9), // "isOverlay"
QT_MOC_LITERAL(26, 348, 9), // "glm::mat4"
QT_MOC_LITERAL(27, 358, 9), // "offsetMat"
QT_MOC_LITERAL(28, 368, 10), // "isLeftHand"
QT_MOC_LITERAL(29, 379, 11), // "isRightHand"
QT_MOC_LITERAL(30, 391, 7), // "isMouse"
QT_MOC_LITERAL(31, 399, 20) // "getPointerProperties"

    },
    "PointerScriptingInterface\0createPointer\0"
    "\0PickQuery::PickType\0type\0properties\0"
    "enablePointer\0uid\0disablePointer\0"
    "removePointer\0editRenderState\0renderState\0"
    "setRenderState\0getPrevPickResult\0"
    "setPrecisionPicking\0precisionPicking\0"
    "setLength\0length\0setIgnoreItems\0"
    "QScriptValue\0ignoreEntities\0setIncludeItems\0"
    "includeEntities\0setLockEndUUID\0objectID\0"
    "isOverlay\0glm::mat4\0offsetMat\0isLeftHand\0"
    "isRightHand\0isMouse\0getPointerProperties"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PointerScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   99,    2, 0x02 /* Public */,
       6,    1,  104,    2, 0x02 /* Public */,
       8,    1,  107,    2, 0x02 /* Public */,
       9,    1,  110,    2, 0x02 /* Public */,
      10,    3,  113,    2, 0x02 /* Public */,
      12,    2,  120,    2, 0x02 /* Public */,
      13,    1,  125,    2, 0x02 /* Public */,
      14,    2,  128,    2, 0x02 /* Public */,
      16,    2,  133,    2, 0x02 /* Public */,
      18,    2,  138,    2, 0x02 /* Public */,
      21,    2,  143,    2, 0x02 /* Public */,
      23,    4,  148,    2, 0x02 /* Public */,
      23,    3,  157,    2, 0x22 /* Public | MethodCloned */,
      28,    1,  164,    2, 0x02 /* Public */,
      29,    1,  167,    2, 0x02 /* Public */,
      30,    1,  170,    2, 0x02 /* Public */,
      31,    1,  173,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::UInt, 0x80000000 | 3, QMetaType::QVariant,    4,    5,
    QMetaType::Void, QMetaType::UInt,    7,
    QMetaType::Void, QMetaType::UInt,    7,
    QMetaType::Void, QMetaType::UInt,    7,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString, QMetaType::QVariant,    7,   11,    5,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    7,   11,
    QMetaType::QVariantMap, QMetaType::UInt,    7,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,    7,   15,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    7,   17,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 19,    7,   20,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 19,    7,   22,
    QMetaType::Void, QMetaType::UInt, QMetaType::QUuid, QMetaType::Bool, 0x80000000 | 26,    7,   24,   25,   27,
    QMetaType::Void, QMetaType::UInt, QMetaType::QUuid, QMetaType::Bool,    7,   24,   25,
    QMetaType::Bool, QMetaType::UInt,    7,
    QMetaType::Bool, QMetaType::UInt,    7,
    QMetaType::Bool, QMetaType::UInt,    7,
    QMetaType::QVariantMap, QMetaType::UInt,    7,

       0        // eod
};

void PointerScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PointerScriptingInterface *_t = static_cast<PointerScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { uint _r = _t->createPointer((*reinterpret_cast< const PickQuery::PickType(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->enablePointer((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->disablePointer((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->removePointer((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->editRenderState((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 5: _t->setRenderState((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: { QVariantMap _r = _t->getPrevPickResult((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setPrecisionPicking((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->setLength((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 9: _t->setIgnoreItems((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QScriptValue(*)>(_a[2]))); break;
        case 10: _t->setIncludeItems((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QScriptValue(*)>(_a[2]))); break;
        case 11: _t->setLockEndUUID((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QUuid(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const glm::mat4(*)>(_a[4]))); break;
        case 12: _t->setLockEndUUID((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QUuid(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 13: { bool _r = _t->isLeftHand((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->isRightHand((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->isMouse((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { QVariantMap _r = _t->getPointerProperties((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PickQuery::PickType >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PointerScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PointerScriptingInterface.data,
      qt_meta_data_PointerScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PointerScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PointerScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PointerScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int PointerScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
