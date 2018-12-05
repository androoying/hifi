/****************************************************************************
** Meta object code from reading C++ file 'EntityTree.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/EntityTree.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntityTree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EntityTree_t {
    QByteArrayData data[23];
    char stringdata0[349];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EntityTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EntityTree_t qt_meta_stringdata_EntityTree = {
    {
QT_MOC_LITERAL(0, 0, 10), // "EntityTree"
QT_MOC_LITERAL(1, 11, 14), // "deletingEntity"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "EntityItemID"
QT_MOC_LITERAL(4, 40, 8), // "entityID"
QT_MOC_LITERAL(5, 49, 21), // "deletingEntityPointer"
QT_MOC_LITERAL(6, 71, 11), // "EntityItem*"
QT_MOC_LITERAL(7, 83, 12), // "addingEntity"
QT_MOC_LITERAL(8, 96, 20), // "editingEntityPointer"
QT_MOC_LITERAL(9, 117, 17), // "EntityItemPointer"
QT_MOC_LITERAL(10, 135, 20), // "entityScriptChanging"
QT_MOC_LITERAL(11, 156, 12), // "entityItemID"
QT_MOC_LITERAL(12, 169, 6), // "reload"
QT_MOC_LITERAL(13, 176, 26), // "entityServerScriptChanging"
QT_MOC_LITERAL(14, 203, 20), // "newCollisionSoundURL"
QT_MOC_LITERAL(15, 224, 3), // "url"
QT_MOC_LITERAL(16, 228, 16), // "clearingEntities"
QT_MOC_LITERAL(17, 245, 34), // "killChallengeOwnershipTimeout..."
QT_MOC_LITERAL(18, 280, 6), // "certID"
QT_MOC_LITERAL(19, 287, 13), // "getJointIndex"
QT_MOC_LITERAL(20, 301, 4), // "name"
QT_MOC_LITERAL(21, 306, 13), // "getJointNames"
QT_MOC_LITERAL(22, 320, 28) // "startChallengeOwnershipTimer"

    },
    "EntityTree\0deletingEntity\0\0EntityItemID\0"
    "entityID\0deletingEntityPointer\0"
    "EntityItem*\0addingEntity\0editingEntityPointer\0"
    "EntityItemPointer\0entityScriptChanging\0"
    "entityItemID\0reload\0entityServerScriptChanging\0"
    "newCollisionSoundURL\0url\0clearingEntities\0"
    "killChallengeOwnershipTimeoutTimer\0"
    "certID\0getJointIndex\0name\0getJointNames\0"
    "startChallengeOwnershipTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EntityTree[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       7,    1,   80,    2, 0x06 /* Public */,
       8,    1,   83,    2, 0x06 /* Public */,
      10,    2,   86,    2, 0x06 /* Public */,
      13,    2,   91,    2, 0x06 /* Public */,
      14,    2,   96,    2, 0x06 /* Public */,
      16,    0,  101,    2, 0x06 /* Public */,
      17,    1,  102,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      19,    2,  105,    2, 0x02 /* Public */,
      21,    1,  110,    2, 0x02 /* Public */,
      22,    1,  113,    2, 0x01 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 9,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,   11,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,   11,   12,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 3,   15,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,

 // methods: parameters
    QMetaType::Int, QMetaType::QUuid, QMetaType::QString,    4,   20,
    QMetaType::QStringList, QMetaType::QUuid,    4,
    QMetaType::Void, 0x80000000 | 3,   11,

       0        // eod
};

void EntityTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EntityTree *_t = static_cast<EntityTree *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deletingEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1]))); break;
        case 1: _t->deletingEntityPointer((*reinterpret_cast< EntityItem*(*)>(_a[1]))); break;
        case 2: _t->addingEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1]))); break;
        case 3: _t->editingEntityPointer((*reinterpret_cast< const EntityItemPointer(*)>(_a[1]))); break;
        case 4: _t->entityScriptChanging((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 5: _t->entityServerScriptChanging((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 6: _t->newCollisionSoundURL((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const EntityItemID(*)>(_a[2]))); break;
        case 7: _t->clearingEntities(); break;
        case 8: _t->killChallengeOwnershipTimeoutTimer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: { int _r = _t->getJointIndex((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: { QStringList _r = _t->getJointNames((*reinterpret_cast< const QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->startChallengeOwnershipTimer((*reinterpret_cast< const EntityItemID(*)>(_a[1]))); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItem* >(); break;
            }
            break;
        case 2:
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
            case 1:
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EntityTree::*)(const EntityItemID & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityTree::deletingEntity)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EntityTree::*)(EntityItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityTree::deletingEntityPointer)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EntityTree::*)(const EntityItemID & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityTree::addingEntity)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (EntityTree::*)(const EntityItemPointer & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityTree::editingEntityPointer)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (EntityTree::*)(const EntityItemID & , const bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityTree::entityScriptChanging)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (EntityTree::*)(const EntityItemID & , const bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityTree::entityServerScriptChanging)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (EntityTree::*)(const QUrl & , const EntityItemID & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityTree::newCollisionSoundURL)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (EntityTree::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityTree::clearingEntities)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (EntityTree::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityTree::killChallengeOwnershipTimeoutTimer)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EntityTree::staticMetaObject = {
    { &Octree::staticMetaObject, qt_meta_stringdata_EntityTree.data,
      qt_meta_data_EntityTree,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EntityTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EntityTree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EntityTree.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SpatialParentTree"))
        return static_cast< SpatialParentTree*>(this);
    return Octree::qt_metacast(_clname);
}

int EntityTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Octree::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void EntityTree::deletingEntity(const EntityItemID & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EntityTree::deletingEntityPointer(EntityItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EntityTree::addingEntity(const EntityItemID & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void EntityTree::editingEntityPointer(const EntityItemPointer & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void EntityTree::entityScriptChanging(const EntityItemID & _t1, const bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void EntityTree::entityServerScriptChanging(const EntityItemID & _t1, const bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void EntityTree::newCollisionSoundURL(const QUrl & _t1, const EntityItemID & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void EntityTree::clearingEntities()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void EntityTree::killChallengeOwnershipTimeoutTimer(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
