/****************************************************************************
** Meta object code from reading C++ file 'Web3DOverlay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ui/overlays/Web3DOverlay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Web3DOverlay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Web3DOverlay_t {
    QByteArrayData data[18];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Web3DOverlay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Web3DOverlay_t qt_meta_stringdata_Web3DOverlay = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Web3DOverlay"
QT_MOC_LITERAL(1, 13, 19), // "scriptEventReceived"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "message"
QT_MOC_LITERAL(4, 42, 16), // "webEventReceived"
QT_MOC_LITERAL(5, 59, 16), // "resizeWebSurface"
QT_MOC_LITERAL(6, 76, 17), // "requestWebSurface"
QT_MOC_LITERAL(7, 94, 17), // "releaseWebSurface"
QT_MOC_LITERAL(8, 112, 15), // "emitScriptEvent"
QT_MOC_LITERAL(9, 128, 13), // "scriptMessage"
QT_MOC_LITERAL(10, 142, 17), // "hoverEnterOverlay"
QT_MOC_LITERAL(11, 160, 12), // "PointerEvent"
QT_MOC_LITERAL(12, 173, 5), // "event"
QT_MOC_LITERAL(13, 179, 17), // "hoverLeaveOverlay"
QT_MOC_LITERAL(14, 197, 18), // "handlePointerEvent"
QT_MOC_LITERAL(15, 216, 20), // "deviceIdByTouchPoint"
QT_MOC_LITERAL(16, 237, 1), // "x"
QT_MOC_LITERAL(17, 239, 1) // "y"

    },
    "Web3DOverlay\0scriptEventReceived\0\0"
    "message\0webEventReceived\0resizeWebSurface\0"
    "requestWebSurface\0releaseWebSurface\0"
    "emitScriptEvent\0scriptMessage\0"
    "hoverEnterOverlay\0PointerEvent\0event\0"
    "hoverLeaveOverlay\0handlePointerEvent\0"
    "deviceIdByTouchPoint\0x\0y"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Web3DOverlay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       5,    0,   70,    2, 0x06 /* Public */,
       6,    0,   71,    2, 0x06 /* Public */,
       7,    0,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   73,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    1,   76,    2, 0x02 /* Public */,
      13,    1,   79,    2, 0x02 /* Public */,
      14,    1,   82,    2, 0x02 /* Public */,
      15,    2,   85,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    9,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::UInt, QMetaType::QReal, QMetaType::QReal,   16,   17,

       0        // eod
};

void Web3DOverlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Web3DOverlay *_t = static_cast<Web3DOverlay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scriptEventReceived((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 1: _t->webEventReceived((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 2: _t->resizeWebSurface(); break;
        case 3: _t->requestWebSurface(); break;
        case 4: _t->releaseWebSurface(); break;
        case 5: _t->emitScriptEvent((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 6: _t->hoverEnterOverlay((*reinterpret_cast< const PointerEvent(*)>(_a[1]))); break;
        case 7: _t->hoverLeaveOverlay((*reinterpret_cast< const PointerEvent(*)>(_a[1]))); break;
        case 8: _t->handlePointerEvent((*reinterpret_cast< const PointerEvent(*)>(_a[1]))); break;
        case 9: { uint _r = _t->deviceIdByTouchPoint((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Web3DOverlay::*)(const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Web3DOverlay::scriptEventReceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Web3DOverlay::*)(const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Web3DOverlay::webEventReceived)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Web3DOverlay::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Web3DOverlay::resizeWebSurface)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Web3DOverlay::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Web3DOverlay::requestWebSurface)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Web3DOverlay::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Web3DOverlay::releaseWebSurface)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Web3DOverlay::staticMetaObject = {
    { &Billboard3DOverlay::staticMetaObject, qt_meta_stringdata_Web3DOverlay.data,
      qt_meta_data_Web3DOverlay,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Web3DOverlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Web3DOverlay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Web3DOverlay.stringdata0))
        return static_cast<void*>(this);
    return Billboard3DOverlay::qt_metacast(_clname);
}

int Web3DOverlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Billboard3DOverlay::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Web3DOverlay::scriptEventReceived(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Web3DOverlay::webEventReceived(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Web3DOverlay::resizeWebSurface()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Web3DOverlay::requestWebSurface()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Web3DOverlay::releaseWebSurface()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
