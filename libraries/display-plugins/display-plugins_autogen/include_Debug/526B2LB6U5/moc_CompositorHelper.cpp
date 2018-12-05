/****************************************************************************
** Meta object code from reading C++ file 'CompositorHelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/display-plugins/CompositorHelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CompositorHelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CompositorHelper_t {
    QByteArrayData data[7];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CompositorHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CompositorHelper_t qt_meta_stringdata_CompositorHelper = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CompositorHelper"
QT_MOC_LITERAL(1, 17, 24), // "allowMouseCaptureChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 12), // "alphaChanged"
QT_MOC_LITERAL(4, 56, 18), // "sendFakeMouseEvent"
QT_MOC_LITERAL(5, 75, 5), // "alpha"
QT_MOC_LITERAL(6, 81, 18) // "reticleOverDesktop"

    },
    "CompositorHelper\0allowMouseCaptureChanged\0"
    "\0alphaChanged\0sendFakeMouseEvent\0alpha\0"
    "reticleOverDesktop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CompositorHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   31,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::Float, 0x00495103,
       6, QMetaType::Bool, 0x00095103,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

void CompositorHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CompositorHelper *_t = static_cast<CompositorHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->allowMouseCaptureChanged(); break;
        case 1: _t->alphaChanged(); break;
        case 2: _t->sendFakeMouseEvent(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CompositorHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CompositorHelper::allowMouseCaptureChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CompositorHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CompositorHelper::alphaChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CompositorHelper *_t = static_cast<CompositorHelper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getAlpha(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getReticleOverDesktop(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CompositorHelper *_t = static_cast<CompositorHelper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAlpha(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setReticleOverDesktop(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CompositorHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CompositorHelper.data,
      qt_meta_data_CompositorHelper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CompositorHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CompositorHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CompositorHelper.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int CompositorHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void CompositorHelper::allowMouseCaptureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CompositorHelper::alphaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_ReticleInterface_t {
    QByteArrayData data[25];
    char stringdata0[320];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReticleInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReticleInterface_t qt_meta_stringdata_ReticleInterface = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ReticleInterface"
QT_MOC_LITERAL(1, 17, 15), // "isMouseCaptured"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 20), // "getAllowMouseCapture"
QT_MOC_LITERAL(4, 55, 20), // "setAllowMouseCapture"
QT_MOC_LITERAL(5, 76, 5), // "value"
QT_MOC_LITERAL(6, 82, 25), // "isPointingAtSystemOverlay"
QT_MOC_LITERAL(7, 108, 10), // "getVisible"
QT_MOC_LITERAL(8, 119, 10), // "setVisible"
QT_MOC_LITERAL(9, 130, 7), // "visible"
QT_MOC_LITERAL(10, 138, 8), // "getDepth"
QT_MOC_LITERAL(11, 147, 8), // "setDepth"
QT_MOC_LITERAL(12, 156, 5), // "depth"
QT_MOC_LITERAL(13, 162, 8), // "getScale"
QT_MOC_LITERAL(14, 171, 8), // "setScale"
QT_MOC_LITERAL(15, 180, 5), // "scale"
QT_MOC_LITERAL(16, 186, 11), // "getPosition"
QT_MOC_LITERAL(17, 198, 11), // "setPosition"
QT_MOC_LITERAL(18, 210, 8), // "position"
QT_MOC_LITERAL(19, 219, 18), // "getMaximumPosition"
QT_MOC_LITERAL(20, 238, 9), // "glm::vec2"
QT_MOC_LITERAL(21, 248, 15), // "maximumPosition"
QT_MOC_LITERAL(22, 264, 13), // "mouseCaptured"
QT_MOC_LITERAL(23, 278, 17), // "allowMouseCapture"
QT_MOC_LITERAL(24, 296, 23) // "pointingAtSystemOverlay"

    },
    "ReticleInterface\0isMouseCaptured\0\0"
    "getAllowMouseCapture\0setAllowMouseCapture\0"
    "value\0isPointingAtSystemOverlay\0"
    "getVisible\0setVisible\0visible\0getDepth\0"
    "setDepth\0depth\0getScale\0setScale\0scale\0"
    "getPosition\0setPosition\0position\0"
    "getMaximumPosition\0glm::vec2\0"
    "maximumPosition\0mouseCaptured\0"
    "allowMouseCapture\0pointingAtSystemOverlay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReticleInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       8,  102, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x02 /* Public */,
       3,    0,   80,    2, 0x02 /* Public */,
       4,    1,   81,    2, 0x02 /* Public */,
       6,    0,   84,    2, 0x02 /* Public */,
       7,    0,   85,    2, 0x02 /* Public */,
       8,    1,   86,    2, 0x02 /* Public */,
      10,    0,   89,    2, 0x02 /* Public */,
      11,    1,   90,    2, 0x02 /* Public */,
      13,    0,   93,    2, 0x02 /* Public */,
      14,    1,   94,    2, 0x02 /* Public */,
      16,    0,   97,    2, 0x02 /* Public */,
      17,    1,   98,    2, 0x02 /* Public */,
      19,    0,  101,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,   12,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,   15,
    QMetaType::QVariant,
    QMetaType::Void, QMetaType::QVariant,   18,
    0x80000000 | 20,

 // properties: name, type, flags
      18, QMetaType::QVariant, 0x00095103,
       9, QMetaType::Bool, 0x00095103,
      12, QMetaType::Float, 0x00095103,
      15, QMetaType::Float, 0x00095103,
      21, 0x80000000 | 20, 0x00095009,
      22, QMetaType::Bool, 0x00095001,
      23, QMetaType::Bool, 0x00095103,
      24, QMetaType::Bool, 0x00095001,

       0        // eod
};

void ReticleInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ReticleInterface *_t = static_cast<ReticleInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->isMouseCaptured();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->getAllowMouseCapture();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setAllowMouseCapture((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: { bool _r = _t->isPointingAtSystemOverlay();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->getVisible();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: { float _r = _t->getDepth();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setDepth((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: { float _r = _t->getScale();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->setScale((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: { QVariant _r = _t->getPosition();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->setPosition((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 12: { glm::vec2 _r = _t->getMaximumPosition();
            if (_a[0]) *reinterpret_cast< glm::vec2*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec2 >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ReticleInterface *_t = static_cast<ReticleInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->getPosition(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getVisible(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getDepth(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getScale(); break;
        case 4: *reinterpret_cast< glm::vec2*>(_v) = _t->getMaximumPosition(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isMouseCaptured(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getAllowMouseCapture(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isPointingAtSystemOverlay(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ReticleInterface *_t = static_cast<ReticleInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPosition(*reinterpret_cast< QVariant*>(_v)); break;
        case 1: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setDepth(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setScale(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setAllowMouseCapture(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ReticleInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ReticleInterface.data,
      qt_meta_data_ReticleInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ReticleInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReticleInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReticleInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ReticleInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
