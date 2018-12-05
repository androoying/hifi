/****************************************************************************
** Meta object code from reading C++ file 'EntityTreeRenderer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/EntityTreeRenderer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntityTreeRenderer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EntityTreeRenderer_t {
    QByteArrayData data[31];
    char stringdata0[459];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EntityTreeRenderer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EntityTreeRenderer_t qt_meta_stringdata_EntityTreeRenderer = {
    {
QT_MOC_LITERAL(0, 0, 18), // "EntityTreeRenderer"
QT_MOC_LITERAL(1, 19, 11), // "enterEntity"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "EntityItemID"
QT_MOC_LITERAL(4, 45, 12), // "entityItemID"
QT_MOC_LITERAL(5, 58, 11), // "leaveEntity"
QT_MOC_LITERAL(6, 70, 19), // "collisionWithEntity"
QT_MOC_LITERAL(7, 90, 3), // "idA"
QT_MOC_LITERAL(8, 94, 3), // "idB"
QT_MOC_LITERAL(9, 98, 9), // "Collision"
QT_MOC_LITERAL(10, 108, 9), // "collision"
QT_MOC_LITERAL(11, 118, 12), // "addingEntity"
QT_MOC_LITERAL(12, 131, 8), // "entityID"
QT_MOC_LITERAL(13, 140, 14), // "deletingEntity"
QT_MOC_LITERAL(14, 155, 20), // "entityScriptChanging"
QT_MOC_LITERAL(15, 176, 6), // "reload"
QT_MOC_LITERAL(16, 183, 25), // "entityCollisionWithEntity"
QT_MOC_LITERAL(17, 209, 24), // "updateEntityRenderStatus"
QT_MOC_LITERAL(18, 234, 20), // "shouldRenderEntities"
QT_MOC_LITERAL(19, 255, 10), // "updateZone"
QT_MOC_LITERAL(20, 266, 2), // "id"
QT_MOC_LITERAL(21, 269, 21), // "setDisplayModelBounds"
QT_MOC_LITERAL(22, 291, 5), // "value"
QT_MOC_LITERAL(23, 297, 19), // "setPrecisionPicking"
QT_MOC_LITERAL(24, 317, 21), // "renderableForEntityId"
QT_MOC_LITERAL(25, 339, 21), // "EntityRendererPointer"
QT_MOC_LITERAL(26, 361, 23), // "renderableIdForEntityId"
QT_MOC_LITERAL(27, 385, 14), // "render::ItemID"
QT_MOC_LITERAL(28, 400, 17), // "handleSpaceUpdate"
QT_MOC_LITERAL(29, 418, 28), // "std::pair<int32_t,glm::vec4>"
QT_MOC_LITERAL(30, 447, 11) // "proxyUpdate"

    },
    "EntityTreeRenderer\0enterEntity\0\0"
    "EntityItemID\0entityItemID\0leaveEntity\0"
    "collisionWithEntity\0idA\0idB\0Collision\0"
    "collision\0addingEntity\0entityID\0"
    "deletingEntity\0entityScriptChanging\0"
    "reload\0entityCollisionWithEntity\0"
    "updateEntityRenderStatus\0shouldRenderEntities\0"
    "updateZone\0id\0setDisplayModelBounds\0"
    "value\0setPrecisionPicking\0"
    "renderableForEntityId\0EntityRendererPointer\0"
    "renderableIdForEntityId\0render::ItemID\0"
    "handleSpaceUpdate\0std::pair<int32_t,glm::vec4>\0"
    "proxyUpdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EntityTreeRenderer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       5,    1,   87,    2, 0x06 /* Public */,
       6,    3,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   97,    2, 0x0a /* Public */,
      13,    1,  100,    2, 0x0a /* Public */,
      14,    2,  103,    2, 0x0a /* Public */,
      16,    3,  108,    2, 0x0a /* Public */,
      17,    1,  115,    2, 0x0a /* Public */,
      19,    1,  118,    2, 0x0a /* Public */,
      21,    1,  121,    2, 0x0a /* Public */,
      23,    1,  124,    2, 0x0a /* Public */,
      24,    1,  127,    2, 0x0a /* Public */,
      26,    1,  130,    2, 0x0a /* Public */,
      28,    1,  133,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 9,    7,    8,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,   12,
    QMetaType::Void, 0x80000000 | 3,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,   12,   15,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 9,    7,    8,   10,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, 0x80000000 | 3,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Bool,   22,
    0x80000000 | 25, 0x80000000 | 3,   20,
    0x80000000 | 27, 0x80000000 | 3,   20,
    QMetaType::Void, 0x80000000 | 29,   30,

       0        // eod
};

void EntityTreeRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EntityTreeRenderer *_t = static_cast<EntityTreeRenderer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enterEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1]))); break;
        case 1: _t->leaveEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1]))); break;
        case 2: _t->collisionWithEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const EntityItemID(*)>(_a[2])),(*reinterpret_cast< const Collision(*)>(_a[3]))); break;
        case 3: _t->addingEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1]))); break;
        case 4: _t->deletingEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1]))); break;
        case 5: _t->entityScriptChanging((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 6: _t->entityCollisionWithEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const EntityItemID(*)>(_a[2])),(*reinterpret_cast< const Collision(*)>(_a[3]))); break;
        case 7: _t->updateEntityRenderStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->updateZone((*reinterpret_cast< const EntityItemID(*)>(_a[1]))); break;
        case 9: _t->setDisplayModelBounds((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setPrecisionPicking((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: { EntityRendererPointer _r = _t->renderableForEntityId((*reinterpret_cast< const EntityItemID(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< EntityRendererPointer*>(_a[0]) = std::move(_r); }  break;
        case 12: { render::ItemID _r = _t->renderableIdForEntityId((*reinterpret_cast< const EntityItemID(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< render::ItemID*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->handleSpaceUpdate((*reinterpret_cast< std::pair<int32_t,glm::vec4>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Collision >(); break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Collision >(); break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EntityTreeRenderer::*)(const EntityItemID & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityTreeRenderer::enterEntity)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EntityTreeRenderer::*)(const EntityItemID & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityTreeRenderer::leaveEntity)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EntityTreeRenderer::*)(const EntityItemID & , const EntityItemID & , const Collision & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityTreeRenderer::collisionWithEntity)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EntityTreeRenderer::staticMetaObject = {
    { &OctreeProcessor::staticMetaObject, qt_meta_stringdata_EntityTreeRenderer.data,
      qt_meta_data_EntityTreeRenderer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EntityTreeRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EntityTreeRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EntityTreeRenderer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return OctreeProcessor::qt_metacast(_clname);
}

int EntityTreeRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void EntityTreeRenderer::enterEntity(const EntityItemID & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EntityTreeRenderer::leaveEntity(const EntityItemID & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EntityTreeRenderer::collisionWithEntity(const EntityItemID & _t1, const EntityItemID & _t2, const Collision & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
