/****************************************************************************
** Meta object code from reading C++ file 'HMDScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/scripting/HMDScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HMDScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HMDScriptingInterface_t {
    QByteArrayData data[52];
    char stringdata0[884];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HMDScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HMDScriptingInterface_t qt_meta_stringdata_HMDScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 21), // "HMDScriptingInterface"
QT_MOC_LITERAL(1, 22, 32), // "shouldShowHandControllersChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 17), // "showTabletChanged"
QT_MOC_LITERAL(4, 74, 10), // "showTablet"
QT_MOC_LITERAL(5, 85, 24), // "miniTabletEnabledChanged"
QT_MOC_LITERAL(6, 110, 7), // "enabled"
QT_MOC_LITERAL(7, 118, 28), // "calculateRayUICollisionPoint"
QT_MOC_LITERAL(8, 147, 9), // "glm::vec3"
QT_MOC_LITERAL(9, 157, 8), // "position"
QT_MOC_LITERAL(10, 166, 9), // "direction"
QT_MOC_LITERAL(11, 176, 21), // "overlayFromWorldPoint"
QT_MOC_LITERAL(12, 198, 9), // "glm::vec2"
QT_MOC_LITERAL(13, 208, 21), // "worldPointFromOverlay"
QT_MOC_LITERAL(14, 230, 7), // "overlay"
QT_MOC_LITERAL(15, 238, 18), // "sphericalToOverlay"
QT_MOC_LITERAL(16, 257, 12), // "sphericalPos"
QT_MOC_LITERAL(17, 270, 18), // "overlayToSpherical"
QT_MOC_LITERAL(18, 289, 10), // "overlayPos"
QT_MOC_LITERAL(19, 300, 8), // "centerUI"
QT_MOC_LITERAL(20, 309, 19), // "preferredAudioInput"
QT_MOC_LITERAL(21, 329, 20), // "preferredAudioOutput"
QT_MOC_LITERAL(22, 350, 14), // "isHMDAvailable"
QT_MOC_LITERAL(23, 365, 4), // "name"
QT_MOC_LITERAL(24, 370, 25), // "isHeadControllerAvailable"
QT_MOC_LITERAL(25, 396, 25), // "isHandControllerAvailable"
QT_MOC_LITERAL(26, 422, 34), // "isSubdeviceContainingNameAvai..."
QT_MOC_LITERAL(27, 457, 26), // "requestShowHandControllers"
QT_MOC_LITERAL(28, 484, 26), // "requestHideHandControllers"
QT_MOC_LITERAL(29, 511, 25), // "shouldShowHandControllers"
QT_MOC_LITERAL(30, 537, 20), // "activateHMDHandMouse"
QT_MOC_LITERAL(31, 558, 22), // "deactivateHMDHandMouse"
QT_MOC_LITERAL(32, 581, 16), // "suppressKeyboard"
QT_MOC_LITERAL(33, 598, 18), // "unsuppressKeyboard"
QT_MOC_LITERAL(34, 617, 17), // "isKeyboardVisible"
QT_MOC_LITERAL(35, 635, 11), // "closeTablet"
QT_MOC_LITERAL(36, 647, 10), // "openTablet"
QT_MOC_LITERAL(37, 658, 14), // "contextualMode"
QT_MOC_LITERAL(38, 673, 11), // "orientation"
QT_MOC_LITERAL(39, 685, 9), // "glm::quat"
QT_MOC_LITERAL(40, 695, 20), // "tabletContextualMode"
QT_MOC_LITERAL(41, 716, 8), // "tabletID"
QT_MOC_LITERAL(42, 725, 12), // "homeButtonID"
QT_MOC_LITERAL(43, 738, 14), // "tabletScreenID"
QT_MOC_LITERAL(44, 753, 21), // "homeButtonHighlightID"
QT_MOC_LITERAL(45, 775, 12), // "miniTabletID"
QT_MOC_LITERAL(46, 788, 18), // "miniTabletScreenID"
QT_MOC_LITERAL(47, 807, 14), // "miniTabletHand"
QT_MOC_LITERAL(48, 822, 17), // "miniTabletEnabled"
QT_MOC_LITERAL(49, 840, 8), // "playArea"
QT_MOC_LITERAL(50, 849, 15), // "sensorPositions"
QT_MOC_LITERAL(51, 865, 18) // "QVector<glm::vec3>"

    },
    "HMDScriptingInterface\0"
    "shouldShowHandControllersChanged\0\0"
    "showTabletChanged\0showTablet\0"
    "miniTabletEnabledChanged\0enabled\0"
    "calculateRayUICollisionPoint\0glm::vec3\0"
    "position\0direction\0overlayFromWorldPoint\0"
    "glm::vec2\0worldPointFromOverlay\0overlay\0"
    "sphericalToOverlay\0sphericalPos\0"
    "overlayToSpherical\0overlayPos\0centerUI\0"
    "preferredAudioInput\0preferredAudioOutput\0"
    "isHMDAvailable\0name\0isHeadControllerAvailable\0"
    "isHandControllerAvailable\0"
    "isSubdeviceContainingNameAvailable\0"
    "requestShowHandControllers\0"
    "requestHideHandControllers\0"
    "shouldShowHandControllers\0"
    "activateHMDHandMouse\0deactivateHMDHandMouse\0"
    "suppressKeyboard\0unsuppressKeyboard\0"
    "isKeyboardVisible\0closeTablet\0openTablet\0"
    "contextualMode\0orientation\0glm::quat\0"
    "tabletContextualMode\0tabletID\0"
    "homeButtonID\0tabletScreenID\0"
    "homeButtonHighlightID\0miniTabletID\0"
    "miniTabletScreenID\0miniTabletHand\0"
    "miniTabletEnabled\0playArea\0sensorPositions\0"
    "QVector<glm::vec3>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HMDScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
      14,  214, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  159,    2, 0x06 /* Public */,
       3,    1,  160,    2, 0x06 /* Public */,
       5,    1,  163,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    2,  166,    2, 0x02 /* Public */,
      11,    1,  171,    2, 0x02 /* Public */,
      13,    1,  174,    2, 0x02 /* Public */,
      15,    1,  177,    2, 0x02 /* Public */,
      17,    1,  180,    2, 0x02 /* Public */,
      19,    0,  183,    2, 0x02 /* Public */,
      20,    0,  184,    2, 0x02 /* Public */,
      21,    0,  185,    2, 0x02 /* Public */,
      22,    1,  186,    2, 0x02 /* Public */,
      22,    0,  189,    2, 0x22 /* Public | MethodCloned */,
      24,    1,  190,    2, 0x02 /* Public */,
      24,    0,  193,    2, 0x22 /* Public | MethodCloned */,
      25,    1,  194,    2, 0x02 /* Public */,
      25,    0,  197,    2, 0x22 /* Public | MethodCloned */,
      26,    1,  198,    2, 0x02 /* Public */,
      27,    0,  201,    2, 0x02 /* Public */,
      28,    0,  202,    2, 0x02 /* Public */,
      29,    0,  203,    2, 0x02 /* Public */,
      30,    0,  204,    2, 0x02 /* Public */,
      31,    0,  205,    2, 0x02 /* Public */,
      32,    0,  206,    2, 0x02 /* Public */,
      33,    0,  207,    2, 0x02 /* Public */,
      34,    0,  208,    2, 0x02 /* Public */,
      35,    0,  209,    2, 0x02 /* Public */,
      36,    1,  210,    2, 0x02 /* Public */,
      36,    0,  213,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Bool, QMetaType::Bool,    6,

 // methods: parameters
    0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 8,    9,   10,
    0x80000000 | 12, 0x80000000 | 8,    9,
    0x80000000 | 8, 0x80000000 | 12,   14,
    0x80000000 | 12, 0x80000000 | 12,   16,
    0x80000000 | 12, 0x80000000 | 12,   18,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString,   23,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString,   23,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString,   23,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void,

 // properties: name, type, flags
       9, 0x80000000 | 8, 0x00095009,
      38, 0x80000000 | 39, 0x00095009,
       4, QMetaType::Bool, 0x00095001,
      40, QMetaType::Bool, 0x00095001,
      41, QMetaType::QUuid, 0x00095003,
      42, QMetaType::QUuid, 0x00095003,
      43, QMetaType::QUuid, 0x00095003,
      44, QMetaType::QUuid, 0x00095003,
      45, QMetaType::QUuid, 0x00095003,
      46, QMetaType::QUuid, 0x00095003,
      47, QMetaType::Int, 0x00095003,
      48, QMetaType::Bool, 0x00095103,
      49, QMetaType::QVariant, 0x00095001,
      50, 0x80000000 | 51, 0x00095009,

       0        // eod
};

void HMDScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HMDScriptingInterface *_t = static_cast<HMDScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->shouldShowHandControllersChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->showTabletChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: { bool _r = _t->miniTabletEnabledChanged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { glm::vec3 _r = _t->calculateRayUICollisionPoint((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 4: { glm::vec2 _r = _t->overlayFromWorldPoint((*reinterpret_cast< const glm::vec3(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec2*>(_a[0]) = std::move(_r); }  break;
        case 5: { glm::vec3 _r = _t->worldPointFromOverlay((*reinterpret_cast< const glm::vec2(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 6: { glm::vec2 _r = _t->sphericalToOverlay((*reinterpret_cast< const glm::vec2(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec2*>(_a[0]) = std::move(_r); }  break;
        case 7: { glm::vec2 _r = _t->overlayToSpherical((*reinterpret_cast< const glm::vec2(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec2*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->centerUI(); break;
        case 9: { QString _r = _t->preferredAudioInput();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->preferredAudioOutput();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->isHMDAvailable((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->isHMDAvailable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->isHeadControllerAvailable((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->isHeadControllerAvailable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->isHandControllerAvailable((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->isHandControllerAvailable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->isSubdeviceContainingNameAvailable((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->requestShowHandControllers(); break;
        case 19: _t->requestHideHandControllers(); break;
        case 20: { bool _r = _t->shouldShowHandControllers();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->activateHMDHandMouse(); break;
        case 22: _t->deactivateHMDHandMouse(); break;
        case 23: { bool _r = _t->suppressKeyboard();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: _t->unsuppressKeyboard(); break;
        case 25: { bool _r = _t->isKeyboardVisible();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: _t->closeTablet(); break;
        case 27: _t->openTablet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->openTablet(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = bool (HMDScriptingInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HMDScriptingInterface::shouldShowHandControllersChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HMDScriptingInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HMDScriptingInterface::showTabletChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = bool (HMDScriptingInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HMDScriptingInterface::miniTabletEnabledChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        HMDScriptingInterface *_t = static_cast<HMDScriptingInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< glm::vec3*>(_v) = _t->getPosition(); break;
        case 1: *reinterpret_cast< glm::quat*>(_v) = _t->getOrientation(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getShouldShowTablet(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getTabletContextualMode(); break;
        case 4: *reinterpret_cast< QUuid*>(_v) = _t->getCurrentTabletFrameID(); break;
        case 5: *reinterpret_cast< QUuid*>(_v) = _t->getCurrentHomeButtonID(); break;
        case 6: *reinterpret_cast< QUuid*>(_v) = _t->getCurrentTabletScreenID(); break;
        case 7: *reinterpret_cast< QUuid*>(_v) = _t->getCurrentHomeButtonHighlightID(); break;
        case 8: *reinterpret_cast< QUuid*>(_v) = _t->getCurrentMiniTabletID(); break;
        case 9: *reinterpret_cast< QUuid*>(_v) = _t->getCurrentMiniTabletScreenID(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->getCurrentMiniTabletHand(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getMiniTabletEnabled(); break;
        case 12: *reinterpret_cast< QVariant*>(_v) = _t->getPlayAreaRect(); break;
        case 13: *reinterpret_cast< QVector<glm::vec3>*>(_v) = _t->getSensorPositions(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        HMDScriptingInterface *_t = static_cast<HMDScriptingInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setCurrentTabletFrameID(*reinterpret_cast< QUuid*>(_v)); break;
        case 5: _t->setCurrentHomeButtonID(*reinterpret_cast< QUuid*>(_v)); break;
        case 6: _t->setCurrentTabletScreenID(*reinterpret_cast< QUuid*>(_v)); break;
        case 7: _t->setCurrentHomeButtonHighlightID(*reinterpret_cast< QUuid*>(_v)); break;
        case 8: _t->setCurrentMiniTabletID(*reinterpret_cast< QUuid*>(_v)); break;
        case 9: _t->setCurrentMiniTabletScreenID(*reinterpret_cast< QUuid*>(_v)); break;
        case 10: _t->setCurrentMiniTabletHand(*reinterpret_cast< int*>(_v)); break;
        case 11: _t->setMiniTabletEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject HMDScriptingInterface::staticMetaObject = {
    { &AbstractHMDScriptingInterface::staticMetaObject, qt_meta_stringdata_HMDScriptingInterface.data,
      qt_meta_data_HMDScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *HMDScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HMDScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HMDScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return AbstractHMDScriptingInterface::qt_metacast(_clname);
}

int HMDScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractHMDScriptingInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 29;
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

// SIGNAL 0
bool HMDScriptingInterface::shouldShowHandControllersChanged()
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
void HMDScriptingInterface::showTabletChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
bool HMDScriptingInterface::miniTabletEnabledChanged(bool _t1)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
