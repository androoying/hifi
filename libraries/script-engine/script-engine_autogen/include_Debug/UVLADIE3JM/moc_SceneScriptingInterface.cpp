/****************************************************************************
** Meta object code from reading C++ file 'SceneScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/SceneScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SceneScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SceneScripting__Location_t {
    QByteArrayData data[4];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SceneScripting__Location_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SceneScripting__Location_t qt_meta_stringdata_SceneScripting__Location = {
    {
QT_MOC_LITERAL(0, 0, 24), // "SceneScripting::Location"
QT_MOC_LITERAL(1, 25, 9), // "longitude"
QT_MOC_LITERAL(2, 35, 8), // "latitude"
QT_MOC_LITERAL(3, 44, 8) // "altitude"

    },
    "SceneScripting::Location\0longitude\0"
    "latitude\0altitude"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SceneScripting__Location[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Float, 0x00095103,
       2, QMetaType::Float, 0x00095103,
       3, QMetaType::Float, 0x00095103,

       0        // eod
};

void SceneScripting::Location::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        Location *_t = static_cast<Location *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getLongitude(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getLatitude(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getAltitude(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Location *_t = static_cast<Location *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLongitude(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setLatitude(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setAltitude(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SceneScripting::Location::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SceneScripting__Location.data,
      qt_meta_data_SceneScripting__Location,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SceneScripting::Location::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SceneScripting::Location::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SceneScripting__Location.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SceneScripting::Location::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_SceneScripting__Time_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SceneScripting__Time_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SceneScripting__Time_t qt_meta_stringdata_SceneScripting__Time = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SceneScripting::Time"
QT_MOC_LITERAL(1, 21, 4), // "hour"
QT_MOC_LITERAL(2, 26, 3) // "day"

    },
    "SceneScripting::Time\0hour\0day"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SceneScripting__Time[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Float, 0x00095103,
       2, QMetaType::Int, 0x00095103,

       0        // eod
};

void SceneScripting::Time::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        Time *_t = static_cast<Time *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getHour(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getDay(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Time *_t = static_cast<Time *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHour(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setDay(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SceneScripting::Time::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SceneScripting__Time.data,
      qt_meta_data_SceneScripting__Time,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SceneScripting::Time::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SceneScripting::Time::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SceneScripting__Time.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SceneScripting::Time::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_SceneScripting__KeyLight_t {
    QByteArrayData data[6];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SceneScripting__KeyLight_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SceneScripting__KeyLight_t qt_meta_stringdata_SceneScripting__KeyLight = {
    {
QT_MOC_LITERAL(0, 0, 24), // "SceneScripting::KeyLight"
QT_MOC_LITERAL(1, 25, 5), // "color"
QT_MOC_LITERAL(2, 31, 9), // "glm::vec3"
QT_MOC_LITERAL(3, 41, 9), // "intensity"
QT_MOC_LITERAL(4, 51, 16), // "ambientIntensity"
QT_MOC_LITERAL(5, 68, 9) // "direction"

    },
    "SceneScripting::KeyLight\0color\0glm::vec3\0"
    "intensity\0ambientIntensity\0direction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SceneScripting__KeyLight[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510b,
       3, QMetaType::Float, 0x00095103,
       4, QMetaType::Float, 0x00095103,
       5, 0x80000000 | 2, 0x0009510b,

       0        // eod
};

void SceneScripting::KeyLight::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        KeyLight *_t = static_cast<KeyLight *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< glm::vec3*>(_v) = _t->getColor(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getIntensity(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getAmbientIntensity(); break;
        case 3: *reinterpret_cast< glm::vec3*>(_v) = _t->getDirection(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        KeyLight *_t = static_cast<KeyLight *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColor(*reinterpret_cast< glm::vec3*>(_v)); break;
        case 1: _t->setIntensity(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setAmbientIntensity(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setDirection(*reinterpret_cast< glm::vec3*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject SceneScripting::KeyLight::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SceneScripting__KeyLight.data,
      qt_meta_data_SceneScripting__KeyLight,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SceneScripting::KeyLight::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SceneScripting::KeyLight::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SceneScripting__KeyLight.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SceneScripting::KeyLight::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_SceneScripting__Stage_t {
    QByteArrayData data[17];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SceneScripting__Stage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SceneScripting__Stage_t qt_meta_stringdata_SceneScripting__Stage = {
    {
QT_MOC_LITERAL(0, 0, 21), // "SceneScripting::Stage"
QT_MOC_LITERAL(1, 22, 14), // "setOrientation"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 9), // "glm::quat"
QT_MOC_LITERAL(4, 48, 11), // "orientation"
QT_MOC_LITERAL(5, 60, 11), // "setLocation"
QT_MOC_LITERAL(6, 72, 9), // "longitude"
QT_MOC_LITERAL(7, 82, 8), // "latitude"
QT_MOC_LITERAL(8, 91, 8), // "altitude"
QT_MOC_LITERAL(9, 100, 8), // "location"
QT_MOC_LITERAL(10, 109, 9), // "Location*"
QT_MOC_LITERAL(11, 119, 4), // "time"
QT_MOC_LITERAL(12, 124, 5), // "Time*"
QT_MOC_LITERAL(13, 130, 8), // "keyLight"
QT_MOC_LITERAL(14, 139, 9), // "KeyLight*"
QT_MOC_LITERAL(15, 149, 8), // "sunModel"
QT_MOC_LITERAL(16, 158, 14) // "backgroundMode"

    },
    "SceneScripting::Stage\0setOrientation\0"
    "\0glm::quat\0orientation\0setLocation\0"
    "longitude\0latitude\0altitude\0location\0"
    "Location*\0time\0Time*\0keyLight\0KeyLight*\0"
    "sunModel\0backgroundMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SceneScripting__Stage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       5,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x02 /* Public */,
       5,    3,   27,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    6,    7,    8,

 // properties: name, type, flags
       9, 0x80000000 | 10, 0x00095009,
      11, 0x80000000 | 12, 0x00095009,
      13, 0x80000000 | 14, 0x00095009,
      15, QMetaType::Bool, 0x00095003,
      16, QMetaType::QString, 0x00095103,

       0        // eod
};

void SceneScripting::Stage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Stage *_t = static_cast<Stage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setOrientation((*reinterpret_cast< const glm::quat(*)>(_a[1]))); break;
        case 1: _t->setLocation((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KeyLight* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Location* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Time* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Stage *_t = static_cast<Stage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Location**>(_v) = _t->getLocation(); break;
        case 1: *reinterpret_cast< Time**>(_v) = _t->getTime(); break;
        case 2: *reinterpret_cast< KeyLight**>(_v) = _t->getKeyLight(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isSunModelEnabled(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getBackgroundMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Stage *_t = static_cast<Stage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setSunModelEnable(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setBackgroundMode(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject SceneScripting::Stage::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SceneScripting__Stage.data,
      qt_meta_data_SceneScripting__Stage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SceneScripting::Stage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SceneScripting::Stage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SceneScripting__Stage.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SceneScripting::Stage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_SceneScriptingInterface_t {
    QByteArrayData data[8];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SceneScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SceneScriptingInterface_t qt_meta_stringdata_SceneScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 23), // "SceneScriptingInterface"
QT_MOC_LITERAL(1, 24, 26), // "shouldRenderAvatarsChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 19), // "shouldRenderAvatars"
QT_MOC_LITERAL(4, 72, 27), // "shouldRenderEntitiesChanged"
QT_MOC_LITERAL(5, 100, 20), // "shouldRenderEntities"
QT_MOC_LITERAL(6, 121, 5), // "stage"
QT_MOC_LITERAL(7, 127, 22) // "SceneScripting::Stage*"

    },
    "SceneScriptingInterface\0"
    "shouldRenderAvatarsChanged\0\0"
    "shouldRenderAvatars\0shouldRenderEntitiesChanged\0"
    "shouldRenderEntities\0stage\0"
    "SceneScripting::Stage*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SceneScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00095103,
       5, QMetaType::Bool, 0x00095103,
       6, 0x80000000 | 7, 0x00095009,

       0        // eod
};

void SceneScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SceneScriptingInterface *_t = static_cast<SceneScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shouldRenderAvatarsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->shouldRenderEntitiesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SceneScriptingInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SceneScriptingInterface::shouldRenderAvatarsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SceneScriptingInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SceneScriptingInterface::shouldRenderEntitiesChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SceneScripting::Stage* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SceneScriptingInterface *_t = static_cast<SceneScriptingInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->shouldRenderAvatars(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->shouldRenderEntities(); break;
        case 2: *reinterpret_cast< SceneScripting::Stage**>(_v) = _t->getStage(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SceneScriptingInterface *_t = static_cast<SceneScriptingInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShouldRenderAvatars(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setShouldRenderEntities(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject SceneScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SceneScriptingInterface.data,
      qt_meta_data_SceneScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SceneScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SceneScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SceneScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int SceneScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SceneScriptingInterface::shouldRenderAvatarsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SceneScriptingInterface::shouldRenderEntitiesChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
