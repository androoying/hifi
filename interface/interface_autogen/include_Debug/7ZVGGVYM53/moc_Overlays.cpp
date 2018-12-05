/****************************************************************************
** Meta object code from reading C++ file 'Overlays.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ui/overlays/Overlays.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Overlays.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Overlays_t {
    QByteArrayData data[73];
    char stringdata0[1131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Overlays_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Overlays_t qt_meta_stringdata_Overlays = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Overlays"
QT_MOC_LITERAL(1, 9, 14), // "overlayDeleted"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9), // "OverlayID"
QT_MOC_LITERAL(4, 35, 2), // "id"
QT_MOC_LITERAL(5, 38, 19), // "mousePressOnOverlay"
QT_MOC_LITERAL(6, 58, 9), // "overlayID"
QT_MOC_LITERAL(7, 68, 12), // "PointerEvent"
QT_MOC_LITERAL(8, 81, 5), // "event"
QT_MOC_LITERAL(9, 87, 25), // "mouseDoublePressOnOverlay"
QT_MOC_LITERAL(10, 113, 21), // "mouseReleaseOnOverlay"
QT_MOC_LITERAL(11, 135, 18), // "mouseMoveOnOverlay"
QT_MOC_LITERAL(12, 154, 20), // "mousePressOffOverlay"
QT_MOC_LITERAL(13, 175, 26), // "mouseDoublePressOffOverlay"
QT_MOC_LITERAL(14, 202, 17), // "hoverEnterOverlay"
QT_MOC_LITERAL(15, 220, 16), // "hoverOverOverlay"
QT_MOC_LITERAL(16, 237, 17), // "hoverLeaveOverlay"
QT_MOC_LITERAL(17, 255, 10), // "addOverlay"
QT_MOC_LITERAL(18, 266, 4), // "type"
QT_MOC_LITERAL(19, 271, 10), // "properties"
QT_MOC_LITERAL(20, 282, 12), // "cloneOverlay"
QT_MOC_LITERAL(21, 295, 11), // "editOverlay"
QT_MOC_LITERAL(22, 307, 12), // "editOverlays"
QT_MOC_LITERAL(23, 320, 14), // "propertiesById"
QT_MOC_LITERAL(24, 335, 13), // "deleteOverlay"
QT_MOC_LITERAL(25, 349, 14), // "getOverlayType"
QT_MOC_LITERAL(26, 364, 9), // "overlayId"
QT_MOC_LITERAL(27, 374, 16), // "getOverlayObject"
QT_MOC_LITERAL(28, 391, 17), // "getOverlayAtPoint"
QT_MOC_LITERAL(29, 409, 9), // "glm::vec2"
QT_MOC_LITERAL(30, 419, 5), // "point"
QT_MOC_LITERAL(31, 425, 11), // "getProperty"
QT_MOC_LITERAL(32, 437, 21), // "OverlayPropertyResult"
QT_MOC_LITERAL(33, 459, 8), // "property"
QT_MOC_LITERAL(34, 468, 13), // "getProperties"
QT_MOC_LITERAL(35, 482, 21), // "getOverlaysProperties"
QT_MOC_LITERAL(36, 504, 18), // "overlaysProperties"
QT_MOC_LITERAL(37, 523, 19), // "findRayIntersection"
QT_MOC_LITERAL(38, 543, 30), // "RayToOverlayIntersectionResult"
QT_MOC_LITERAL(39, 574, 7), // "PickRay"
QT_MOC_LITERAL(40, 582, 3), // "ray"
QT_MOC_LITERAL(41, 586, 16), // "precisionPicking"
QT_MOC_LITERAL(42, 603, 12), // "QScriptValue"
QT_MOC_LITERAL(43, 616, 19), // "overlayIDsToInclude"
QT_MOC_LITERAL(44, 636, 19), // "overlayIDsToDiscard"
QT_MOC_LITERAL(45, 656, 11), // "visibleOnly"
QT_MOC_LITERAL(46, 668, 14), // "collidableOnly"
QT_MOC_LITERAL(47, 683, 12), // "findOverlays"
QT_MOC_LITERAL(48, 696, 14), // "QVector<QUuid>"
QT_MOC_LITERAL(49, 711, 9), // "glm::vec3"
QT_MOC_LITERAL(50, 721, 6), // "center"
QT_MOC_LITERAL(51, 728, 6), // "radius"
QT_MOC_LITERAL(52, 735, 8), // "isLoaded"
QT_MOC_LITERAL(53, 744, 8), // "textSize"
QT_MOC_LITERAL(54, 753, 4), // "text"
QT_MOC_LITERAL(55, 758, 5), // "width"
QT_MOC_LITERAL(56, 764, 6), // "height"
QT_MOC_LITERAL(57, 771, 14), // "isAddedOverlay"
QT_MOC_LITERAL(58, 786, 23), // "sendMousePressOnOverlay"
QT_MOC_LITERAL(59, 810, 25), // "sendMouseReleaseOnOverlay"
QT_MOC_LITERAL(60, 836, 22), // "sendMouseMoveOnOverlay"
QT_MOC_LITERAL(61, 859, 21), // "sendHoverEnterOverlay"
QT_MOC_LITERAL(62, 881, 20), // "sendHoverOverOverlay"
QT_MOC_LITERAL(63, 902, 21), // "sendHoverLeaveOverlay"
QT_MOC_LITERAL(64, 924, 23), // "getKeyboardFocusOverlay"
QT_MOC_LITERAL(65, 948, 23), // "setKeyboardFocusOverlay"
QT_MOC_LITERAL(66, 972, 22), // "mousePressPointerEvent"
QT_MOC_LITERAL(67, 995, 21), // "mouseMovePointerEvent"
QT_MOC_LITERAL(68, 1017, 24), // "mouseReleasePointerEvent"
QT_MOC_LITERAL(69, 1042, 22), // "hoverEnterPointerEvent"
QT_MOC_LITERAL(70, 1065, 21), // "hoverOverPointerEvent"
QT_MOC_LITERAL(71, 1087, 22), // "hoverLeavePointerEvent"
QT_MOC_LITERAL(72, 1110, 20) // "keyboardFocusOverlay"

    },
    "Overlays\0overlayDeleted\0\0OverlayID\0"
    "id\0mousePressOnOverlay\0overlayID\0"
    "PointerEvent\0event\0mouseDoublePressOnOverlay\0"
    "mouseReleaseOnOverlay\0mouseMoveOnOverlay\0"
    "mousePressOffOverlay\0mouseDoublePressOffOverlay\0"
    "hoverEnterOverlay\0hoverOverOverlay\0"
    "hoverLeaveOverlay\0addOverlay\0type\0"
    "properties\0cloneOverlay\0editOverlay\0"
    "editOverlays\0propertiesById\0deleteOverlay\0"
    "getOverlayType\0overlayId\0getOverlayObject\0"
    "getOverlayAtPoint\0glm::vec2\0point\0"
    "getProperty\0OverlayPropertyResult\0"
    "property\0getProperties\0getOverlaysProperties\0"
    "overlaysProperties\0findRayIntersection\0"
    "RayToOverlayIntersectionResult\0PickRay\0"
    "ray\0precisionPicking\0QScriptValue\0"
    "overlayIDsToInclude\0overlayIDsToDiscard\0"
    "visibleOnly\0collidableOnly\0findOverlays\0"
    "QVector<QUuid>\0glm::vec3\0center\0radius\0"
    "isLoaded\0textSize\0text\0width\0height\0"
    "isAddedOverlay\0sendMousePressOnOverlay\0"
    "sendMouseReleaseOnOverlay\0"
    "sendMouseMoveOnOverlay\0sendHoverEnterOverlay\0"
    "sendHoverOverOverlay\0sendHoverLeaveOverlay\0"
    "getKeyboardFocusOverlay\0setKeyboardFocusOverlay\0"
    "mousePressPointerEvent\0mouseMovePointerEvent\0"
    "mouseReleasePointerEvent\0"
    "hoverEnterPointerEvent\0hoverOverPointerEvent\0"
    "hoverLeavePointerEvent\0keyboardFocusOverlay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Overlays[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       1,  460, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  249,    2, 0x06 /* Public */,
       5,    2,  252,    2, 0x06 /* Public */,
       9,    2,  257,    2, 0x06 /* Public */,
      10,    2,  262,    2, 0x06 /* Public */,
      11,    2,  267,    2, 0x06 /* Public */,
      12,    0,  272,    2, 0x06 /* Public */,
      13,    0,  273,    2, 0x06 /* Public */,
      14,    2,  274,    2, 0x06 /* Public */,
      15,    2,  279,    2, 0x06 /* Public */,
      16,    2,  284,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    2,  289,    2, 0x0a /* Public */,
      20,    1,  294,    2, 0x0a /* Public */,
      21,    2,  297,    2, 0x0a /* Public */,
      22,    1,  302,    2, 0x0a /* Public */,
      24,    1,  305,    2, 0x0a /* Public */,
      25,    1,  308,    2, 0x0a /* Public */,
      27,    1,  311,    2, 0x0a /* Public */,
      28,    1,  314,    2, 0x0a /* Public */,
      31,    2,  317,    2, 0x0a /* Public */,
      34,    2,  322,    2, 0x0a /* Public */,
      35,    1,  327,    2, 0x0a /* Public */,
      37,    6,  330,    2, 0x0a /* Public */,
      37,    5,  343,    2, 0x2a /* Public | MethodCloned */,
      37,    4,  354,    2, 0x2a /* Public | MethodCloned */,
      37,    3,  363,    2, 0x2a /* Public | MethodCloned */,
      37,    2,  370,    2, 0x2a /* Public | MethodCloned */,
      37,    1,  375,    2, 0x2a /* Public | MethodCloned */,
      47,    2,  378,    2, 0x0a /* Public */,
      52,    1,  383,    2, 0x0a /* Public */,
      53,    2,  386,    2, 0x0a /* Public */,
      55,    0,  391,    2, 0x0a /* Public */,
      56,    0,  392,    2, 0x0a /* Public */,
      57,    1,  393,    2, 0x0a /* Public */,
      58,    2,  396,    2, 0x0a /* Public */,
      59,    2,  401,    2, 0x0a /* Public */,
      60,    2,  406,    2, 0x0a /* Public */,
      61,    2,  411,    2, 0x0a /* Public */,
      62,    2,  416,    2, 0x0a /* Public */,
      63,    2,  421,    2, 0x0a /* Public */,
      64,    0,  426,    2, 0x0a /* Public */,
      65,    1,  427,    2, 0x0a /* Public */,
      66,    2,  430,    2, 0x08 /* Private */,
      67,    2,  435,    2, 0x08 /* Private */,
      68,    2,  440,    2, 0x08 /* Private */,
      69,    2,  445,    2, 0x08 /* Private */,
      70,    2,  450,    2, 0x08 /* Private */,
      71,    2,  455,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    6,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    6,    8,

 // slots: parameters
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant,   18,   19,
    0x80000000 | 3, 0x80000000 | 3,    4,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QVariant,    4,   19,
    QMetaType::Bool, QMetaType::QVariant,   23,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::QString, 0x80000000 | 3,   26,
    QMetaType::QObjectStar, 0x80000000 | 3,    4,
    0x80000000 | 3, 0x80000000 | 29,   30,
    0x80000000 | 32, 0x80000000 | 3, QMetaType::QString,    4,   33,
    0x80000000 | 32, 0x80000000 | 3, QMetaType::QStringList,    4,   19,
    0x80000000 | 32, QMetaType::QVariant,   36,
    0x80000000 | 38, 0x80000000 | 39, QMetaType::Bool, 0x80000000 | 42, 0x80000000 | 42, QMetaType::Bool, QMetaType::Bool,   40,   41,   43,   44,   45,   46,
    0x80000000 | 38, 0x80000000 | 39, QMetaType::Bool, 0x80000000 | 42, 0x80000000 | 42, QMetaType::Bool,   40,   41,   43,   44,   45,
    0x80000000 | 38, 0x80000000 | 39, QMetaType::Bool, 0x80000000 | 42, 0x80000000 | 42,   40,   41,   43,   44,
    0x80000000 | 38, 0x80000000 | 39, QMetaType::Bool, 0x80000000 | 42,   40,   41,   43,
    0x80000000 | 38, 0x80000000 | 39, QMetaType::Bool,   40,   41,
    0x80000000 | 38, 0x80000000 | 39,   40,
    0x80000000 | 48, 0x80000000 | 49, QMetaType::Float,   50,   51,
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::QSizeF, 0x80000000 | 3, QMetaType::QString,    4,   54,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    6,    8,
    0x80000000 | 3,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    6,    8,

 // properties: name, type, flags
      72, 0x80000000 | 3, 0x0009510b,

       0        // eod
};

void Overlays::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Overlays *_t = static_cast<Overlays *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->overlayDeleted((*reinterpret_cast< OverlayID(*)>(_a[1]))); break;
        case 1: _t->mousePressOnOverlay((*reinterpret_cast< OverlayID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 2: _t->mouseDoublePressOnOverlay((*reinterpret_cast< OverlayID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 3: _t->mouseReleaseOnOverlay((*reinterpret_cast< OverlayID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 4: _t->mouseMoveOnOverlay((*reinterpret_cast< OverlayID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 5: _t->mousePressOffOverlay(); break;
        case 6: _t->mouseDoublePressOffOverlay(); break;
        case 7: _t->hoverEnterOverlay((*reinterpret_cast< OverlayID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 8: _t->hoverOverOverlay((*reinterpret_cast< OverlayID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 9: _t->hoverLeaveOverlay((*reinterpret_cast< OverlayID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 10: { OverlayID _r = _t->addOverlay((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< OverlayID*>(_a[0]) = std::move(_r); }  break;
        case 11: { OverlayID _r = _t->cloneOverlay((*reinterpret_cast< OverlayID(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< OverlayID*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->editOverlay((*reinterpret_cast< OverlayID(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->editOverlays((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->deleteOverlay((*reinterpret_cast< OverlayID(*)>(_a[1]))); break;
        case 15: { QString _r = _t->getOverlayType((*reinterpret_cast< OverlayID(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 16: { QObject* _r = _t->getOverlayObject((*reinterpret_cast< OverlayID(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 17: { OverlayID _r = _t->getOverlayAtPoint((*reinterpret_cast< const glm::vec2(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< OverlayID*>(_a[0]) = std::move(_r); }  break;
        case 18: { OverlayPropertyResult _r = _t->getProperty((*reinterpret_cast< OverlayID(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< OverlayPropertyResult*>(_a[0]) = std::move(_r); }  break;
        case 19: { OverlayPropertyResult _r = _t->getProperties((*reinterpret_cast< const OverlayID(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< OverlayPropertyResult*>(_a[0]) = std::move(_r); }  break;
        case 20: { OverlayPropertyResult _r = _t->getOverlaysProperties((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< OverlayPropertyResult*>(_a[0]) = std::move(_r); }  break;
        case 21: { RayToOverlayIntersectionResult _r = _t->findRayIntersection((*reinterpret_cast< const PickRay(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QScriptValue(*)>(_a[3])),(*reinterpret_cast< const QScriptValue(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< RayToOverlayIntersectionResult*>(_a[0]) = std::move(_r); }  break;
        case 22: { RayToOverlayIntersectionResult _r = _t->findRayIntersection((*reinterpret_cast< const PickRay(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QScriptValue(*)>(_a[3])),(*reinterpret_cast< const QScriptValue(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< RayToOverlayIntersectionResult*>(_a[0]) = std::move(_r); }  break;
        case 23: { RayToOverlayIntersectionResult _r = _t->findRayIntersection((*reinterpret_cast< const PickRay(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QScriptValue(*)>(_a[3])),(*reinterpret_cast< const QScriptValue(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< RayToOverlayIntersectionResult*>(_a[0]) = std::move(_r); }  break;
        case 24: { RayToOverlayIntersectionResult _r = _t->findRayIntersection((*reinterpret_cast< const PickRay(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QScriptValue(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< RayToOverlayIntersectionResult*>(_a[0]) = std::move(_r); }  break;
        case 25: { RayToOverlayIntersectionResult _r = _t->findRayIntersection((*reinterpret_cast< const PickRay(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< RayToOverlayIntersectionResult*>(_a[0]) = std::move(_r); }  break;
        case 26: { RayToOverlayIntersectionResult _r = _t->findRayIntersection((*reinterpret_cast< const PickRay(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< RayToOverlayIntersectionResult*>(_a[0]) = std::move(_r); }  break;
        case 27: { QVector<QUuid> _r = _t->findOverlays((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector<QUuid>*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->isLoaded((*reinterpret_cast< OverlayID(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { QSizeF _r = _t->textSize((*reinterpret_cast< OverlayID(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = std::move(_r); }  break;
        case 30: { float _r = _t->width();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 31: { float _r = _t->height();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 32: { bool _r = _t->isAddedOverlay((*reinterpret_cast< OverlayID(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: _t->sendMousePressOnOverlay((*reinterpret_cast< const OverlayID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 34: _t->sendMouseReleaseOnOverlay((*reinterpret_cast< const OverlayID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 35: _t->sendMouseMoveOnOverlay((*reinterpret_cast< const OverlayID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 36: _t->sendHoverEnterOverlay((*reinterpret_cast< const OverlayID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 37: _t->sendHoverOverOverlay((*reinterpret_cast< const OverlayID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 38: _t->sendHoverLeaveOverlay((*reinterpret_cast< const OverlayID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 39: { OverlayID _r = _t->getKeyboardFocusOverlay();
            if (_a[0]) *reinterpret_cast< OverlayID*>(_a[0]) = std::move(_r); }  break;
        case 40: _t->setKeyboardFocusOverlay((*reinterpret_cast< const OverlayID(*)>(_a[1]))); break;
        case 41: _t->mousePressPointerEvent((*reinterpret_cast< const OverlayID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 42: _t->mouseMovePointerEvent((*reinterpret_cast< const OverlayID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 43: _t->mouseReleasePointerEvent((*reinterpret_cast< const OverlayID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 44: _t->hoverEnterPointerEvent((*reinterpret_cast< const OverlayID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 45: _t->hoverOverPointerEvent((*reinterpret_cast< const OverlayID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 46: _t->hoverLeavePointerEvent((*reinterpret_cast< const OverlayID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec2 >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PickRay >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PickRay >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PickRay >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PickRay >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PickRay >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PickRay >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Overlays::*)(OverlayID );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Overlays::overlayDeleted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Overlays::*)(OverlayID , const PointerEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Overlays::mousePressOnOverlay)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Overlays::*)(OverlayID , const PointerEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Overlays::mouseDoublePressOnOverlay)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Overlays::*)(OverlayID , const PointerEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Overlays::mouseReleaseOnOverlay)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Overlays::*)(OverlayID , const PointerEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Overlays::mouseMoveOnOverlay)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Overlays::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Overlays::mousePressOffOverlay)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Overlays::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Overlays::mouseDoublePressOffOverlay)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Overlays::*)(OverlayID , const PointerEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Overlays::hoverEnterOverlay)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Overlays::*)(OverlayID , const PointerEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Overlays::hoverOverOverlay)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Overlays::*)(OverlayID , const PointerEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Overlays::hoverLeaveOverlay)) {
                *result = 9;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OverlayID >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Overlays *_t = static_cast<Overlays *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< OverlayID*>(_v) = _t->getKeyboardFocusOverlay(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Overlays *_t = static_cast<Overlays *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setKeyboardFocusOverlay(*reinterpret_cast< OverlayID*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Overlays::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Overlays.data,
      qt_meta_data_Overlays,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Overlays::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Overlays::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Overlays.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Overlays::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Overlays::overlayDeleted(OverlayID _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Overlays::mousePressOnOverlay(OverlayID _t1, const PointerEvent & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Overlays::mouseDoublePressOnOverlay(OverlayID _t1, const PointerEvent & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Overlays::mouseReleaseOnOverlay(OverlayID _t1, const PointerEvent & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Overlays::mouseMoveOnOverlay(OverlayID _t1, const PointerEvent & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Overlays::mousePressOffOverlay()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Overlays::mouseDoublePressOffOverlay()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Overlays::hoverEnterOverlay(OverlayID _t1, const PointerEvent & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Overlays::hoverOverOverlay(OverlayID _t1, const PointerEvent & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Overlays::hoverLeaveOverlay(OverlayID _t1, const PointerEvent & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
