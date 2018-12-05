/****************************************************************************
** Meta object code from reading C++ file 'ControllerScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/scripting/ControllerScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ControllerScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ControllerScriptingInterface_t {
    QByteArrayData data[33];
    char stringdata0[496];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ControllerScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ControllerScriptingInterface_t qt_meta_stringdata_ControllerScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 28), // "ControllerScriptingInterface"
QT_MOC_LITERAL(1, 29, 13), // "keyPressEvent"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 8), // "KeyEvent"
QT_MOC_LITERAL(4, 53, 5), // "event"
QT_MOC_LITERAL(5, 59, 15), // "keyReleaseEvent"
QT_MOC_LITERAL(6, 75, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(7, 90, 10), // "MouseEvent"
QT_MOC_LITERAL(8, 101, 15), // "mousePressEvent"
QT_MOC_LITERAL(9, 117, 21), // "mouseDoublePressEvent"
QT_MOC_LITERAL(10, 139, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(11, 157, 15), // "touchBeginEvent"
QT_MOC_LITERAL(12, 173, 10), // "TouchEvent"
QT_MOC_LITERAL(13, 184, 13), // "touchEndEvent"
QT_MOC_LITERAL(14, 198, 16), // "touchUpdateEvent"
QT_MOC_LITERAL(15, 215, 10), // "wheelEvent"
QT_MOC_LITERAL(16, 226, 10), // "WheelEvent"
QT_MOC_LITERAL(17, 237, 16), // "captureKeyEvents"
QT_MOC_LITERAL(18, 254, 16), // "releaseKeyEvents"
QT_MOC_LITERAL(19, 271, 15), // "captureJoystick"
QT_MOC_LITERAL(20, 287, 13), // "joystickIndex"
QT_MOC_LITERAL(21, 301, 15), // "releaseJoystick"
QT_MOC_LITERAL(22, 317, 24), // "captureEntityClickEvents"
QT_MOC_LITERAL(23, 342, 24), // "releaseEntityClickEvents"
QT_MOC_LITERAL(24, 367, 21), // "getViewportDimensions"
QT_MOC_LITERAL(25, 389, 9), // "glm::vec2"
QT_MOC_LITERAL(26, 399, 21), // "getRecommendedHUDRect"
QT_MOC_LITERAL(27, 421, 14), // "setVPadEnabled"
QT_MOC_LITERAL(28, 436, 6), // "enable"
QT_MOC_LITERAL(29, 443, 13), // "setVPadHidden"
QT_MOC_LITERAL(30, 457, 6), // "hidden"
QT_MOC_LITERAL(31, 464, 24), // "setVPadExtraBottomMargin"
QT_MOC_LITERAL(32, 489, 6) // "margin"

    },
    "ControllerScriptingInterface\0keyPressEvent\0"
    "\0KeyEvent\0event\0keyReleaseEvent\0"
    "mouseMoveEvent\0MouseEvent\0mousePressEvent\0"
    "mouseDoublePressEvent\0mouseReleaseEvent\0"
    "touchBeginEvent\0TouchEvent\0touchEndEvent\0"
    "touchUpdateEvent\0wheelEvent\0WheelEvent\0"
    "captureKeyEvents\0releaseKeyEvents\0"
    "captureJoystick\0joystickIndex\0"
    "releaseJoystick\0captureEntityClickEvents\0"
    "releaseEntityClickEvents\0getViewportDimensions\0"
    "glm::vec2\0getRecommendedHUDRect\0"
    "setVPadEnabled\0enable\0setVPadHidden\0"
    "hidden\0setVPadExtraBottomMargin\0margin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ControllerScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       5,    1,  122,    2, 0x06 /* Public */,
       6,    1,  125,    2, 0x06 /* Public */,
       8,    1,  128,    2, 0x06 /* Public */,
       9,    1,  131,    2, 0x06 /* Public */,
      10,    1,  134,    2, 0x06 /* Public */,
      11,    1,  137,    2, 0x06 /* Public */,
      13,    1,  140,    2, 0x06 /* Public */,
      14,    1,  143,    2, 0x06 /* Public */,
      15,    1,  146,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,  149,    2, 0x0a /* Public */,
      18,    1,  152,    2, 0x0a /* Public */,
      19,    1,  155,    2, 0x0a /* Public */,
      21,    1,  158,    2, 0x0a /* Public */,
      22,    0,  161,    2, 0x0a /* Public */,
      23,    0,  162,    2, 0x0a /* Public */,
      24,    0,  163,    2, 0x0a /* Public */,
      26,    0,  164,    2, 0x0a /* Public */,
      27,    1,  165,    2, 0x0a /* Public */,
      29,    1,  168,    2, 0x0a /* Public */,
      31,    1,  171,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    4,
    QMetaType::Void, 0x80000000 | 7,    4,
    QMetaType::Void, 0x80000000 | 7,    4,
    QMetaType::Void, 0x80000000 | 7,    4,
    QMetaType::Void, 0x80000000 | 12,    4,
    QMetaType::Void, 0x80000000 | 12,    4,
    QMetaType::Void, 0x80000000 | 12,    4,
    QMetaType::Void, 0x80000000 | 16,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 25,
    QMetaType::QVariant,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void, QMetaType::Int,   32,

       0        // eod
};

void ControllerScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ControllerScriptingInterface *_t = static_cast<ControllerScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->keyPressEvent((*reinterpret_cast< const KeyEvent(*)>(_a[1]))); break;
        case 1: _t->keyReleaseEvent((*reinterpret_cast< const KeyEvent(*)>(_a[1]))); break;
        case 2: _t->mouseMoveEvent((*reinterpret_cast< const MouseEvent(*)>(_a[1]))); break;
        case 3: _t->mousePressEvent((*reinterpret_cast< const MouseEvent(*)>(_a[1]))); break;
        case 4: _t->mouseDoublePressEvent((*reinterpret_cast< const MouseEvent(*)>(_a[1]))); break;
        case 5: _t->mouseReleaseEvent((*reinterpret_cast< const MouseEvent(*)>(_a[1]))); break;
        case 6: _t->touchBeginEvent((*reinterpret_cast< const TouchEvent(*)>(_a[1]))); break;
        case 7: _t->touchEndEvent((*reinterpret_cast< const TouchEvent(*)>(_a[1]))); break;
        case 8: _t->touchUpdateEvent((*reinterpret_cast< const TouchEvent(*)>(_a[1]))); break;
        case 9: _t->wheelEvent((*reinterpret_cast< const WheelEvent(*)>(_a[1]))); break;
        case 10: _t->captureKeyEvents((*reinterpret_cast< const KeyEvent(*)>(_a[1]))); break;
        case 11: _t->releaseKeyEvents((*reinterpret_cast< const KeyEvent(*)>(_a[1]))); break;
        case 12: _t->captureJoystick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->releaseJoystick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->captureEntityClickEvents(); break;
        case 15: _t->releaseEntityClickEvents(); break;
        case 16: { glm::vec2 _r = _t->getViewportDimensions();
            if (_a[0]) *reinterpret_cast< glm::vec2*>(_a[0]) = std::move(_r); }  break;
        case 17: { QVariant _r = _t->getRecommendedHUDRect();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->setVPadEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->setVPadHidden((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->setVPadExtraBottomMargin((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KeyEvent >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KeyEvent >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MouseEvent >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MouseEvent >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MouseEvent >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MouseEvent >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TouchEvent >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TouchEvent >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TouchEvent >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WheelEvent >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KeyEvent >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KeyEvent >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ControllerScriptingInterface::*)(const KeyEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerScriptingInterface::keyPressEvent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ControllerScriptingInterface::*)(const KeyEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerScriptingInterface::keyReleaseEvent)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ControllerScriptingInterface::*)(const MouseEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerScriptingInterface::mouseMoveEvent)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ControllerScriptingInterface::*)(const MouseEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerScriptingInterface::mousePressEvent)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ControllerScriptingInterface::*)(const MouseEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerScriptingInterface::mouseDoublePressEvent)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ControllerScriptingInterface::*)(const MouseEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerScriptingInterface::mouseReleaseEvent)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ControllerScriptingInterface::*)(const TouchEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerScriptingInterface::touchBeginEvent)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ControllerScriptingInterface::*)(const TouchEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerScriptingInterface::touchEndEvent)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ControllerScriptingInterface::*)(const TouchEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerScriptingInterface::touchUpdateEvent)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ControllerScriptingInterface::*)(const WheelEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerScriptingInterface::wheelEvent)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ControllerScriptingInterface::staticMetaObject = {
    { &controller::ScriptingInterface::staticMetaObject, qt_meta_stringdata_ControllerScriptingInterface.data,
      qt_meta_data_ControllerScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ControllerScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControllerScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ControllerScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    return controller::ScriptingInterface::qt_metacast(_clname);
}

int ControllerScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = controller::ScriptingInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void ControllerScriptingInterface::keyPressEvent(const KeyEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ControllerScriptingInterface::keyReleaseEvent(const KeyEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ControllerScriptingInterface::mouseMoveEvent(const MouseEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ControllerScriptingInterface::mousePressEvent(const MouseEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ControllerScriptingInterface::mouseDoublePressEvent(const MouseEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ControllerScriptingInterface::mouseReleaseEvent(const MouseEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ControllerScriptingInterface::touchBeginEvent(const TouchEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ControllerScriptingInterface::touchEndEvent(const TouchEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ControllerScriptingInterface::touchUpdateEvent(const TouchEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ControllerScriptingInterface::wheelEvent(const WheelEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
