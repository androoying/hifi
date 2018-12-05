/****************************************************************************
** Meta object code from reading C++ file 'LODManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/LODManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LODManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LODManager_t {
    QByteArrayData data[44];
    char stringdata0[627];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LODManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LODManager_t qt_meta_stringdata_LODManager = {
    {
QT_MOC_LITERAL(0, 0, 10), // "LODManager"
QT_MOC_LITERAL(1, 11, 12), // "LODIncreased"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "LODDecreased"
QT_MOC_LITERAL(4, 38, 14), // "autoLODChanged"
QT_MOC_LITERAL(5, 53, 22), // "lodQualityLevelChanged"
QT_MOC_LITERAL(6, 76, 25), // "worldDetailQualityChanged"
QT_MOC_LITERAL(7, 102, 21), // "setAutomaticLODAdjust"
QT_MOC_LITERAL(8, 124, 5), // "value"
QT_MOC_LITERAL(9, 130, 21), // "getAutomaticLODAdjust"
QT_MOC_LITERAL(10, 152, 22), // "setDesktopLODTargetFPS"
QT_MOC_LITERAL(11, 175, 22), // "getDesktopLODTargetFPS"
QT_MOC_LITERAL(12, 198, 18), // "setHMDLODTargetFPS"
QT_MOC_LITERAL(13, 217, 18), // "getHMDLODTargetFPS"
QT_MOC_LITERAL(14, 236, 18), // "getLODFeedbackText"
QT_MOC_LITERAL(15, 255, 18), // "setOctreeSizeScale"
QT_MOC_LITERAL(16, 274, 9), // "sizeScale"
QT_MOC_LITERAL(17, 284, 18), // "getOctreeSizeScale"
QT_MOC_LITERAL(18, 303, 22), // "setBoundaryLevelAdjust"
QT_MOC_LITERAL(19, 326, 19), // "boundaryLevelAdjust"
QT_MOC_LITERAL(20, 346, 22), // "getBoundaryLevelAdjust"
QT_MOC_LITERAL(21, 369, 15), // "getLODTargetFPS"
QT_MOC_LITERAL(22, 385, 18), // "worldDetailQuality"
QT_MOC_LITERAL(23, 404, 15), // "lodQualityLevel"
QT_MOC_LITERAL(24, 420, 18), // "automaticLODAdjust"
QT_MOC_LITERAL(25, 439, 11), // "presentTime"
QT_MOC_LITERAL(26, 451, 13), // "engineRunTime"
QT_MOC_LITERAL(27, 465, 9), // "batchTime"
QT_MOC_LITERAL(28, 475, 7), // "gpuTime"
QT_MOC_LITERAL(29, 483, 13), // "nowRenderTime"
QT_MOC_LITERAL(30, 497, 12), // "nowRenderFPS"
QT_MOC_LITERAL(31, 510, 11), // "smoothScale"
QT_MOC_LITERAL(32, 522, 16), // "smoothRenderTime"
QT_MOC_LITERAL(33, 539, 15), // "smoothRenderFPS"
QT_MOC_LITERAL(34, 555, 12), // "lodTargetFPS"
QT_MOC_LITERAL(35, 568, 11), // "lodAngleDeg"
QT_MOC_LITERAL(36, 580, 5), // "pidKp"
QT_MOC_LITERAL(37, 586, 5), // "pidKi"
QT_MOC_LITERAL(38, 592, 5), // "pidKd"
QT_MOC_LITERAL(39, 598, 5), // "pidKv"
QT_MOC_LITERAL(40, 604, 5), // "pidOp"
QT_MOC_LITERAL(41, 610, 5), // "pidOi"
QT_MOC_LITERAL(42, 616, 5), // "pidOd"
QT_MOC_LITERAL(43, 622, 4) // "pidO"

    },
    "LODManager\0LODIncreased\0\0LODDecreased\0"
    "autoLODChanged\0lodQualityLevelChanged\0"
    "worldDetailQualityChanged\0"
    "setAutomaticLODAdjust\0value\0"
    "getAutomaticLODAdjust\0setDesktopLODTargetFPS\0"
    "getDesktopLODTargetFPS\0setHMDLODTargetFPS\0"
    "getHMDLODTargetFPS\0getLODFeedbackText\0"
    "setOctreeSizeScale\0sizeScale\0"
    "getOctreeSizeScale\0setBoundaryLevelAdjust\0"
    "boundaryLevelAdjust\0getBoundaryLevelAdjust\0"
    "getLODTargetFPS\0worldDetailQuality\0"
    "lodQualityLevel\0automaticLODAdjust\0"
    "presentTime\0engineRunTime\0batchTime\0"
    "gpuTime\0nowRenderTime\0nowRenderFPS\0"
    "smoothScale\0smoothRenderTime\0"
    "smoothRenderFPS\0lodTargetFPS\0lodAngleDeg\0"
    "pidKp\0pidKi\0pidKd\0pidKv\0pidOp\0pidOi\0"
    "pidOd\0pidO"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LODManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
      22,  126, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,
       4,    0,  101,    2, 0x06 /* Public */,
       5,    0,  102,    2, 0x06 /* Public */,
       6,    0,  103,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    1,  104,    2, 0x02 /* Public */,
       9,    0,  107,    2, 0x02 /* Public */,
      10,    1,  108,    2, 0x02 /* Public */,
      11,    0,  111,    2, 0x02 /* Public */,
      12,    1,  112,    2, 0x02 /* Public */,
      13,    0,  115,    2, 0x02 /* Public */,
      14,    0,  116,    2, 0x02 /* Public */,
      15,    1,  117,    2, 0x02 /* Public */,
      17,    0,  120,    2, 0x02 /* Public */,
      18,    1,  121,    2, 0x02 /* Public */,
      20,    0,  124,    2, 0x02 /* Public */,
      21,    0,  125,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Float,    8,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    8,
    QMetaType::Float,
    QMetaType::QString,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Int,
    QMetaType::Float,

 // properties: name, type, flags
      22, QMetaType::Float, 0x00495103,
      23, QMetaType::Float, 0x00495003,
      24, QMetaType::Bool, 0x00495103,
      25, QMetaType::Float, 0x00095001,
      26, QMetaType::Float, 0x00095001,
      27, QMetaType::Float, 0x00095001,
      28, QMetaType::Float, 0x00095001,
      29, QMetaType::Float, 0x00095001,
      30, QMetaType::Float, 0x00095001,
      31, QMetaType::Float, 0x00095103,
      32, QMetaType::Float, 0x00095001,
      33, QMetaType::Float, 0x00095001,
      34, QMetaType::Float, 0x00095001,
      35, QMetaType::Float, 0x00095003,
      36, QMetaType::Float, 0x00095103,
      37, QMetaType::Float, 0x00095103,
      38, QMetaType::Float, 0x00095103,
      39, QMetaType::Float, 0x00095103,
      40, QMetaType::Float, 0x00095001,
      41, QMetaType::Float, 0x00095001,
      42, QMetaType::Float, 0x00095001,
      43, QMetaType::Float, 0x00095001,

 // properties: notify_signal_id
       4,
       3,
       2,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void LODManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LODManager *_t = static_cast<LODManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LODIncreased(); break;
        case 1: _t->LODDecreased(); break;
        case 2: _t->autoLODChanged(); break;
        case 3: _t->lodQualityLevelChanged(); break;
        case 4: _t->worldDetailQualityChanged(); break;
        case 5: _t->setAutomaticLODAdjust((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: { bool _r = _t->getAutomaticLODAdjust();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setDesktopLODTargetFPS((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: { float _r = _t->getDesktopLODTargetFPS();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->setHMDLODTargetFPS((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: { float _r = _t->getHMDLODTargetFPS();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 11: { QString _r = _t->getLODFeedbackText();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->setOctreeSizeScale((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 13: { float _r = _t->getOctreeSizeScale();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->setBoundaryLevelAdjust((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: { int _r = _t->getBoundaryLevelAdjust();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 16: { float _r = _t->getLODTargetFPS();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LODManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LODManager::LODIncreased)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LODManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LODManager::LODDecreased)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LODManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LODManager::autoLODChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LODManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LODManager::lodQualityLevelChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LODManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LODManager::worldDetailQualityChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        LODManager *_t = static_cast<LODManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getWorldDetailQuality(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getLODQualityLevel(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getAutomaticLODAdjust(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getPresentTime(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getEngineRunTime(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->getBatchTime(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->getGPUTime(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->getNowRenderTime(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->getNowRenderFPS(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->getSmoothScale(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->getSmoothRenderTime(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->getSmoothRenderFPS(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->getLODTargetFPS(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->getLODAngleDeg(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->getPidKp(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->getPidKi(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->getPidKd(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->getPidKv(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->getPidOp(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->getPidOi(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->getPidOd(); break;
        case 21: *reinterpret_cast< float*>(_v) = _t->getPidO(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        LODManager *_t = static_cast<LODManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWorldDetailQuality(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setLODQualityLevel(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setAutomaticLODAdjust(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setSmoothScale(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setLODAngleDeg(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setPidKp(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setPidKi(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setPidKd(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setPidKv(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject LODManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LODManager.data,
      qt_meta_data_LODManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LODManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LODManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LODManager.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int LODManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 22;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LODManager::LODIncreased()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LODManager::LODDecreased()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LODManager::autoLODChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LODManager::lodQualityLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void LODManager::worldDetailQualityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
