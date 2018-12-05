/****************************************************************************
** Meta object code from reading C++ file 'OctreeHeadlessViewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/octree/OctreeHeadlessViewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OctreeHeadlessViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OctreeHeadlessViewer_t {
    QByteArrayData data[24];
    char stringdata0[370];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OctreeHeadlessViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OctreeHeadlessViewer_t qt_meta_stringdata_OctreeHeadlessViewer = {
    {
QT_MOC_LITERAL(0, 0, 20), // "OctreeHeadlessViewer"
QT_MOC_LITERAL(1, 21, 11), // "queryOctree"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "setPosition"
QT_MOC_LITERAL(4, 46, 9), // "glm::vec3"
QT_MOC_LITERAL(5, 56, 8), // "position"
QT_MOC_LITERAL(6, 65, 14), // "setOrientation"
QT_MOC_LITERAL(7, 80, 9), // "glm::quat"
QT_MOC_LITERAL(8, 90, 11), // "orientation"
QT_MOC_LITERAL(9, 102, 15), // "setCenterRadius"
QT_MOC_LITERAL(10, 118, 6), // "radius"
QT_MOC_LITERAL(11, 125, 16), // "setKeyholeRadius"
QT_MOC_LITERAL(12, 142, 17), // "setVoxelSizeScale"
QT_MOC_LITERAL(13, 160, 9), // "sizeScale"
QT_MOC_LITERAL(14, 170, 22), // "setBoundaryLevelAdjust"
QT_MOC_LITERAL(15, 193, 19), // "boundaryLevelAdjust"
QT_MOC_LITERAL(16, 213, 22), // "setMaxPacketsPerSecond"
QT_MOC_LITERAL(17, 236, 19), // "maxPacketsPerSecond"
QT_MOC_LITERAL(18, 256, 11), // "getPosition"
QT_MOC_LITERAL(19, 268, 14), // "getOrientation"
QT_MOC_LITERAL(20, 283, 17), // "getVoxelSizeScale"
QT_MOC_LITERAL(21, 301, 22), // "getBoundaryLevelAdjust"
QT_MOC_LITERAL(22, 324, 22), // "getMaxPacketsPerSecond"
QT_MOC_LITERAL(23, 347, 22) // "getOctreeElementsCount"

    },
    "OctreeHeadlessViewer\0queryOctree\0\0"
    "setPosition\0glm::vec3\0position\0"
    "setOrientation\0glm::quat\0orientation\0"
    "setCenterRadius\0radius\0setKeyholeRadius\0"
    "setVoxelSizeScale\0sizeScale\0"
    "setBoundaryLevelAdjust\0boundaryLevelAdjust\0"
    "setMaxPacketsPerSecond\0maxPacketsPerSecond\0"
    "getPosition\0getOrientation\0getVoxelSizeScale\0"
    "getBoundaryLevelAdjust\0getMaxPacketsPerSecond\0"
    "getOctreeElementsCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OctreeHeadlessViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    1,   85,    2, 0x0a /* Public */,
       6,    1,   88,    2, 0x0a /* Public */,
       9,    1,   91,    2, 0x0a /* Public */,
      11,    1,   94,    2, 0x0a /* Public */,
      12,    1,   97,    2, 0x0a /* Public */,
      14,    1,  100,    2, 0x0a /* Public */,
      16,    1,  103,    2, 0x0a /* Public */,
      18,    0,  106,    2, 0x0a /* Public */,
      19,    0,  107,    2, 0x0a /* Public */,
      20,    0,  108,    2, 0x0a /* Public */,
      21,    0,  109,    2, 0x0a /* Public */,
      22,    0,  110,    2, 0x0a /* Public */,
      23,    0,  111,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void, QMetaType::Float,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Float,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::UInt,

       0        // eod
};

void OctreeHeadlessViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OctreeHeadlessViewer *_t = static_cast<OctreeHeadlessViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->queryOctree(); break;
        case 1: _t->setPosition((*reinterpret_cast< const glm::vec3(*)>(_a[1]))); break;
        case 2: _t->setOrientation((*reinterpret_cast< const glm::quat(*)>(_a[1]))); break;
        case 3: _t->setCenterRadius((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setKeyholeRadius((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setVoxelSizeScale((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->setBoundaryLevelAdjust((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setMaxPacketsPerSecond((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->getPosition(); break;
        case 9: _t->getOrientation(); break;
        case 10: { float _r = _t->getVoxelSizeScale();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 11: { int _r = _t->getBoundaryLevelAdjust();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 12: { int _r = _t->getMaxPacketsPerSecond();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 13: { uint _r = _t->getOctreeElementsCount();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OctreeHeadlessViewer::staticMetaObject = {
    { &OctreeProcessor::staticMetaObject, qt_meta_stringdata_OctreeHeadlessViewer.data,
      qt_meta_data_OctreeHeadlessViewer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OctreeHeadlessViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OctreeHeadlessViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OctreeHeadlessViewer.stringdata0))
        return static_cast<void*>(this);
    return OctreeProcessor::qt_metacast(_clname);
}

int OctreeHeadlessViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OctreeProcessor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
