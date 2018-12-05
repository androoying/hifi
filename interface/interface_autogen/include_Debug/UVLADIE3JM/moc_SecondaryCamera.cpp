/****************************************************************************
** Meta object code from reading C++ file 'SecondaryCamera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/SecondaryCamera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SecondaryCamera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SecondaryCameraJobConfig_t {
    QByteArrayData data[23];
    char stringdata0[301];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SecondaryCameraJobConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SecondaryCameraJobConfig_t qt_meta_stringdata_SecondaryCameraJobConfig = {
    {
QT_MOC_LITERAL(0, 0, 24), // "SecondaryCameraJobConfig"
QT_MOC_LITERAL(1, 25, 5), // "dirty"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "getPosition"
QT_MOC_LITERAL(4, 44, 9), // "glm::vec3"
QT_MOC_LITERAL(5, 54, 11), // "setPosition"
QT_MOC_LITERAL(6, 66, 3), // "pos"
QT_MOC_LITERAL(7, 70, 14), // "getOrientation"
QT_MOC_LITERAL(8, 85, 9), // "glm::quat"
QT_MOC_LITERAL(9, 95, 14), // "setOrientation"
QT_MOC_LITERAL(10, 110, 6), // "orient"
QT_MOC_LITERAL(11, 117, 34), // "enableSecondaryCameraRenderCo..."
QT_MOC_LITERAL(12, 152, 7), // "enabled"
QT_MOC_LITERAL(13, 160, 24), // "resetSizeSpectatorCamera"
QT_MOC_LITERAL(14, 185, 5), // "width"
QT_MOC_LITERAL(15, 191, 6), // "height"
QT_MOC_LITERAL(16, 198, 16), // "attachedEntityId"
QT_MOC_LITERAL(17, 215, 8), // "position"
QT_MOC_LITERAL(18, 224, 11), // "orientation"
QT_MOC_LITERAL(19, 236, 4), // "vFoV"
QT_MOC_LITERAL(20, 241, 21), // "nearClipPlaneDistance"
QT_MOC_LITERAL(21, 263, 20), // "farClipPlaneDistance"
QT_MOC_LITERAL(22, 284, 16) // "mirrorProjection"

    },
    "SecondaryCameraJobConfig\0dirty\0\0"
    "getPosition\0glm::vec3\0setPosition\0pos\0"
    "getOrientation\0glm::quat\0setOrientation\0"
    "orient\0enableSecondaryCameraRenderConfigs\0"
    "enabled\0resetSizeSpectatorCamera\0width\0"
    "height\0attachedEntityId\0position\0"
    "orientation\0vFoV\0nearClipPlaneDistance\0"
    "farClipPlaneDistance\0mirrorProjection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SecondaryCameraJobConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       7,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x0a /* Public */,
       5,    1,   51,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       9,    1,   55,    2, 0x0a /* Public */,
      11,    1,   58,    2, 0x0a /* Public */,
      13,    2,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    6,
    0x80000000 | 8,
    QMetaType::Void, 0x80000000 | 8,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,

 // properties: name, type, flags
      16, QMetaType::QUuid, 0x00495003,
      17, 0x80000000 | 4, 0x0009510b,
      18, 0x80000000 | 8, 0x0009510b,
      19, QMetaType::Float, 0x00495003,
      20, QMetaType::Float, 0x00495003,
      21, QMetaType::Float, 0x00495003,
      22, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void SecondaryCameraJobConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SecondaryCameraJobConfig *_t = static_cast<SecondaryCameraJobConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        case 1: { glm::vec3 _r = _t->getPosition();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setPosition((*reinterpret_cast< glm::vec3(*)>(_a[1]))); break;
        case 3: { glm::quat _r = _t->getOrientation();
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setOrientation((*reinterpret_cast< glm::quat(*)>(_a[1]))); break;
        case 5: _t->enableSecondaryCameraRenderConfigs((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->resetSizeSpectatorCamera((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
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
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SecondaryCameraJobConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SecondaryCameraJobConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SecondaryCameraJobConfig *_t = static_cast<SecondaryCameraJobConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUuid*>(_v) = _t->attachedEntityId; break;
        case 1: *reinterpret_cast< glm::vec3*>(_v) = _t->getPosition(); break;
        case 2: *reinterpret_cast< glm::quat*>(_v) = _t->getOrientation(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->vFoV; break;
        case 4: *reinterpret_cast< float*>(_v) = _t->nearClipPlaneDistance; break;
        case 5: *reinterpret_cast< float*>(_v) = _t->farClipPlaneDistance; break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->mirrorProjection; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SecondaryCameraJobConfig *_t = static_cast<SecondaryCameraJobConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->attachedEntityId != *reinterpret_cast< QUuid*>(_v)) {
                _t->attachedEntityId = *reinterpret_cast< QUuid*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 1: _t->setPosition(*reinterpret_cast< glm::vec3*>(_v)); break;
        case 2: _t->setOrientation(*reinterpret_cast< glm::quat*>(_v)); break;
        case 3:
            if (_t->vFoV != *reinterpret_cast< float*>(_v)) {
                _t->vFoV = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 4:
            if (_t->nearClipPlaneDistance != *reinterpret_cast< float*>(_v)) {
                _t->nearClipPlaneDistance = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 5:
            if (_t->farClipPlaneDistance != *reinterpret_cast< float*>(_v)) {
                _t->farClipPlaneDistance = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 6:
            if (_t->mirrorProjection != *reinterpret_cast< bool*>(_v)) {
                _t->mirrorProjection = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject SecondaryCameraJobConfig::staticMetaObject = {
    { &render::Task::Config::staticMetaObject, qt_meta_stringdata_SecondaryCameraJobConfig.data,
      qt_meta_data_SecondaryCameraJobConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SecondaryCameraJobConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SecondaryCameraJobConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SecondaryCameraJobConfig.stringdata0))
        return static_cast<void*>(this);
    return render::Task::Config::qt_metacast(_clname);
}

int SecondaryCameraJobConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = render::Task::Config::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SecondaryCameraJobConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_SecondaryCameraRenderTaskConfig_t {
    QByteArrayData data[1];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SecondaryCameraRenderTaskConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SecondaryCameraRenderTaskConfig_t qt_meta_stringdata_SecondaryCameraRenderTaskConfig = {
    {
QT_MOC_LITERAL(0, 0, 31) // "SecondaryCameraRenderTaskConfig"

    },
    "SecondaryCameraRenderTaskConfig"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SecondaryCameraRenderTaskConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SecondaryCameraRenderTaskConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SecondaryCameraRenderTaskConfig::staticMetaObject = {
    { &render::Task::Config::staticMetaObject, qt_meta_stringdata_SecondaryCameraRenderTaskConfig.data,
      qt_meta_data_SecondaryCameraRenderTaskConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SecondaryCameraRenderTaskConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SecondaryCameraRenderTaskConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SecondaryCameraRenderTaskConfig.stringdata0))
        return static_cast<void*>(this);
    return render::Task::Config::qt_metacast(_clname);
}

int SecondaryCameraRenderTaskConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = render::Task::Config::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
