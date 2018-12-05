/****************************************************************************
** Meta object code from reading C++ file 'AnimationCache.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AnimationCache.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AnimationCache.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AnimationCache_t {
    QByteArrayData data[5];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnimationCache_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnimationCache_t qt_meta_stringdata_AnimationCache = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AnimationCache"
QT_MOC_LITERAL(1, 15, 12), // "getAnimation"
QT_MOC_LITERAL(2, 28, 16), // "AnimationPointer"
QT_MOC_LITERAL(3, 45, 0), // ""
QT_MOC_LITERAL(4, 46, 3) // "url"

    },
    "AnimationCache\0getAnimation\0"
    "AnimationPointer\0\0url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnimationCache[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   24,    3, 0x02 /* Public */,
       1,    1,   27,    3, 0x02 /* Public */,

 // methods: parameters
    0x80000000 | 2, QMetaType::QString,    4,
    0x80000000 | 2, QMetaType::QUrl,    4,

       0        // eod
};

void AnimationCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AnimationCache *_t = static_cast<AnimationCache *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { AnimationPointer _r = _t->getAnimation((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< AnimationPointer*>(_a[0]) = std::move(_r); }  break;
        case 1: { AnimationPointer _r = _t->getAnimation((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< AnimationPointer*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AnimationCache::staticMetaObject = {
    { &ResourceCache::staticMetaObject, qt_meta_stringdata_AnimationCache.data,
      qt_meta_data_AnimationCache,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AnimationCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnimationCache::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AnimationCache.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return ResourceCache::qt_metacast(_clname);
}

int AnimationCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ResourceCache::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_Animation_t {
    QByteArrayData data[11];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Animation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Animation_t qt_meta_stringdata_Animation = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Animation"
QT_MOC_LITERAL(1, 10, 21), // "animationParseSuccess"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "HFMModel::Pointer"
QT_MOC_LITERAL(4, 51, 8), // "hfmModel"
QT_MOC_LITERAL(5, 60, 19), // "animationParseError"
QT_MOC_LITERAL(6, 80, 5), // "error"
QT_MOC_LITERAL(7, 86, 3), // "str"
QT_MOC_LITERAL(8, 90, 13), // "getJointNames"
QT_MOC_LITERAL(9, 104, 9), // "getFrames"
QT_MOC_LITERAL(10, 114, 26) // "QVector<HFMAnimationFrame>"

    },
    "Animation\0animationParseSuccess\0\0"
    "HFMModel::Pointer\0hfmModel\0"
    "animationParseError\0error\0str\0"
    "getJointNames\0getFrames\0"
    "QVector<HFMAnimationFrame>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Animation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x09 /* Protected */,
       5,    2,   37,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
       8,    0,   42,    2, 0x02 /* Public */,
       9,    0,   43,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    6,    7,

 // methods: parameters
    QMetaType::QStringList,
    0x80000000 | 10,

       0        // eod
};

void Animation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Animation *_t = static_cast<Animation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->animationParseSuccess((*reinterpret_cast< HFMModel::Pointer(*)>(_a[1]))); break;
        case 1: _t->animationParseError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: { QStringList _r = _t->getJointNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 3: { QVector<HFMAnimationFrame> _r = _t->getFrames();
            if (_a[0]) *reinterpret_cast< QVector<HFMAnimationFrame>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HFMModel::Pointer >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Animation::staticMetaObject = {
    { &Resource::staticMetaObject, qt_meta_stringdata_Animation.data,
      qt_meta_data_Animation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Animation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Animation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Animation.stringdata0))
        return static_cast<void*>(this);
    return Resource::qt_metacast(_clname);
}

int Animation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Resource::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_AnimationReader_t {
    QByteArrayData data[8];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnimationReader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnimationReader_t qt_meta_stringdata_AnimationReader = {
    {
QT_MOC_LITERAL(0, 0, 15), // "AnimationReader"
QT_MOC_LITERAL(1, 16, 9), // "onSuccess"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 17), // "HFMModel::Pointer"
QT_MOC_LITERAL(4, 45, 8), // "hfmModel"
QT_MOC_LITERAL(5, 54, 7), // "onError"
QT_MOC_LITERAL(6, 62, 5), // "error"
QT_MOC_LITERAL(7, 68, 3) // "str"

    },
    "AnimationReader\0onSuccess\0\0HFMModel::Pointer\0"
    "hfmModel\0onError\0error\0str"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnimationReader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    2,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    6,    7,

       0        // eod
};

void AnimationReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AnimationReader *_t = static_cast<AnimationReader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onSuccess((*reinterpret_cast< HFMModel::Pointer(*)>(_a[1]))); break;
        case 1: _t->onError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HFMModel::Pointer >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AnimationReader::*)(HFMModel::Pointer );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimationReader::onSuccess)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AnimationReader::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimationReader::onError)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AnimationReader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AnimationReader.data,
      qt_meta_data_AnimationReader,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AnimationReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnimationReader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AnimationReader.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(this);
    return QObject::qt_metacast(_clname);
}

int AnimationReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void AnimationReader::onSuccess(HFMModel::Pointer _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AnimationReader::onError(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
