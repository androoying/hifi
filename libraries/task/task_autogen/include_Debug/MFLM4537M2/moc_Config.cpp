/****************************************************************************
** Meta object code from reading C++ file 'Config.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/task/Config.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Config.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_task__JobConfig_t {
    QByteArrayData data[19];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_task__JobConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_task__JobConfig_t qt_meta_stringdata_task__JobConfig = {
    {
QT_MOC_LITERAL(0, 0, 15), // "task::JobConfig"
QT_MOC_LITERAL(1, 16, 6), // "loaded"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "newStats"
QT_MOC_LITERAL(4, 33, 12), // "dirtyEnabled"
QT_MOC_LITERAL(5, 46, 4), // "load"
QT_MOC_LITERAL(6, 51, 3), // "val"
QT_MOC_LITERAL(7, 55, 6), // "toJSON"
QT_MOC_LITERAL(8, 62, 3), // "map"
QT_MOC_LITERAL(9, 66, 9), // "getConfig"
QT_MOC_LITERAL(10, 76, 4), // "name"
QT_MOC_LITERAL(11, 81, 6), // "isTask"
QT_MOC_LITERAL(12, 88, 13), // "getSubConfigs"
QT_MOC_LITERAL(13, 102, 11), // "QObjectList"
QT_MOC_LITERAL(14, 114, 10), // "getNumSubs"
QT_MOC_LITERAL(15, 125, 12), // "getSubConfig"
QT_MOC_LITERAL(16, 138, 1), // "i"
QT_MOC_LITERAL(17, 140, 10), // "cpuRunTime"
QT_MOC_LITERAL(18, 151, 7) // "enabled"

    },
    "task::JobConfig\0loaded\0\0newStats\0"
    "dirtyEnabled\0load\0val\0toJSON\0map\0"
    "getConfig\0name\0isTask\0getSubConfigs\0"
    "QObjectList\0getNumSubs\0getSubConfig\0"
    "i\0cpuRunTime\0enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_task__JobConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       2,   88, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   72,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   75,    2, 0x02 /* Public */,
       5,    1,   76,    2, 0x02 /* Public */,
       9,    1,   79,    2, 0x02 /* Public */,
      11,    0,   82,    2, 0x02 /* Public */,
      12,    0,   83,    2, 0x02 /* Public */,
      14,    0,   84,    2, 0x02 /* Public */,
      15,    1,   85,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonObject,    6,

 // methods: parameters
    QMetaType::QString,
    QMetaType::Void, QMetaType::QVariantMap,    8,
    QMetaType::QObjectStar, QMetaType::QString,   10,
    QMetaType::Bool,
    0x80000000 | 13,
    QMetaType::Int,
    QMetaType::QObjectStar, QMetaType::Int,   16,

 // properties: name, type, flags
      17, QMetaType::Double, 0x00495001,
      18, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       1,
       2,

       0        // eod
};

void task::JobConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JobConfig *_t = static_cast<JobConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loaded(); break;
        case 1: _t->newStats(); break;
        case 2: _t->dirtyEnabled(); break;
        case 3: _t->load((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 4: { QString _r = _t->toJSON();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->load((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 6: { QObject* _r = _t->getConfig((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->isTask();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { QObjectList _r = _t->getSubConfigs();
            if (_a[0]) *reinterpret_cast< QObjectList*>(_a[0]) = std::move(_r); }  break;
        case 9: { int _r = _t->getNumSubs();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: { QObject* _r = _t->getSubConfig((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JobConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobConfig::loaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JobConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobConfig::newStats)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JobConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobConfig::dirtyEnabled)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        JobConfig *_t = static_cast<JobConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->getCPURunTime(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        JobConfig *_t = static_cast<JobConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject task::JobConfig::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_task__JobConfig.data,
      qt_meta_data_task__JobConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *task::JobConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *task::JobConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_task__JobConfig.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int task::JobConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void task::JobConfig::loaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void task::JobConfig::newStats()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void task::JobConfig::dirtyEnabled()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_task__TaskConfig_t {
    QByteArrayData data[11];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_task__TaskConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_task__TaskConfig_t qt_meta_stringdata_task__TaskConfig = {
    {
QT_MOC_LITERAL(0, 0, 16), // "task::TaskConfig"
QT_MOC_LITERAL(1, 17, 7), // "refresh"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 9), // "getConfig"
QT_MOC_LITERAL(4, 36, 4), // "name"
QT_MOC_LITERAL(5, 41, 6), // "isTask"
QT_MOC_LITERAL(6, 48, 13), // "getSubConfigs"
QT_MOC_LITERAL(7, 62, 11), // "QObjectList"
QT_MOC_LITERAL(8, 74, 10), // "getNumSubs"
QT_MOC_LITERAL(9, 85, 12), // "getSubConfig"
QT_MOC_LITERAL(10, 98, 1) // "i"

    },
    "task::TaskConfig\0refresh\0\0getConfig\0"
    "name\0isTask\0getSubConfigs\0QObjectList\0"
    "getNumSubs\0getSubConfig\0i"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_task__TaskConfig[] = {

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

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   45,    2, 0x02 /* Public */,
       5,    0,   48,    2, 0x02 /* Public */,
       6,    0,   49,    2, 0x02 /* Public */,
       8,    0,   50,    2, 0x02 /* Public */,
       9,    1,   51,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::QObjectStar, QMetaType::QString,    4,
    QMetaType::Bool,
    0x80000000 | 7,
    QMetaType::Int,
    QMetaType::QObjectStar, QMetaType::Int,   10,

       0        // eod
};

void task::TaskConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TaskConfig *_t = static_cast<TaskConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: { QObject* _r = _t->getConfig((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->isTask();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { QObjectList _r = _t->getSubConfigs();
            if (_a[0]) *reinterpret_cast< QObjectList*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->getNumSubs();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: { QObject* _r = _t->getSubConfig((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject task::TaskConfig::staticMetaObject = {
    { &JobConfig::staticMetaObject, qt_meta_stringdata_task__TaskConfig.data,
      qt_meta_data_task__TaskConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *task::TaskConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *task::TaskConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_task__TaskConfig.stringdata0))
        return static_cast<void*>(this);
    return JobConfig::qt_metacast(_clname);
}

int task::TaskConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = JobConfig::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
