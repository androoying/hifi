/****************************************************************************
** Meta object code from reading C++ file 'AnimStats.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ui/AnimStats.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AnimStats.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AnimStats_t {
    QByteArrayData data[21];
    char stringdata0[329];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnimStats_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnimStats_t qt_meta_stringdata_AnimStats = {
    {
QT_MOC_LITERAL(0, 0, 9), // "AnimStats"
QT_MOC_LITERAL(1, 10, 22), // "animAlphaValuesChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 15), // "animVarsChanged"
QT_MOC_LITERAL(4, 50, 24), // "animStateMachinesChanged"
QT_MOC_LITERAL(5, 75, 19), // "positionTextChanged"
QT_MOC_LITERAL(6, 95, 19), // "rotationTextChanged"
QT_MOC_LITERAL(7, 115, 19), // "velocityTextChanged"
QT_MOC_LITERAL(8, 135, 19), // "recenterTextChanged"
QT_MOC_LITERAL(9, 155, 18), // "sittingTextChanged"
QT_MOC_LITERAL(10, 174, 18), // "walkingTextChanged"
QT_MOC_LITERAL(11, 193, 16), // "forceUpdateStats"
QT_MOC_LITERAL(12, 210, 15), // "animAlphaValues"
QT_MOC_LITERAL(13, 226, 8), // "animVars"
QT_MOC_LITERAL(14, 235, 17), // "animStateMachines"
QT_MOC_LITERAL(15, 253, 12), // "positionText"
QT_MOC_LITERAL(16, 266, 12), // "rotationText"
QT_MOC_LITERAL(17, 279, 12), // "velocityText"
QT_MOC_LITERAL(18, 292, 12), // "recenterText"
QT_MOC_LITERAL(19, 305, 11), // "sittingText"
QT_MOC_LITERAL(20, 317, 11) // "walkingText"

    },
    "AnimStats\0animAlphaValuesChanged\0\0"
    "animVarsChanged\0animStateMachinesChanged\0"
    "positionTextChanged\0rotationTextChanged\0"
    "velocityTextChanged\0recenterTextChanged\0"
    "sittingTextChanged\0walkingTextChanged\0"
    "forceUpdateStats\0animAlphaValues\0"
    "animVars\0animStateMachines\0positionText\0"
    "rotationText\0velocityText\0recenterText\0"
    "sittingText\0walkingText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnimStats[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       9,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    0,   69,    2, 0x06 /* Public */,
       8,    0,   70,    2, 0x06 /* Public */,
       9,    0,   71,    2, 0x06 /* Public */,
      10,    0,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::QStringList, 0x00495001,
      13, QMetaType::QStringList, 0x00495001,
      14, QMetaType::QStringList, 0x00495001,
      15, QMetaType::QString, 0x00495001,
      16, QMetaType::QString, 0x00495001,
      17, QMetaType::QString, 0x00495001,
      18, QMetaType::QString, 0x00495001,
      19, QMetaType::QString, 0x00495001,
      20, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,

       0        // eod
};

void AnimStats::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AnimStats *_t = static_cast<AnimStats *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->animAlphaValuesChanged(); break;
        case 1: _t->animVarsChanged(); break;
        case 2: _t->animStateMachinesChanged(); break;
        case 3: _t->positionTextChanged(); break;
        case 4: _t->rotationTextChanged(); break;
        case 5: _t->velocityTextChanged(); break;
        case 6: _t->recenterTextChanged(); break;
        case 7: _t->sittingTextChanged(); break;
        case 8: _t->walkingTextChanged(); break;
        case 9: _t->forceUpdateStats(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AnimStats::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimStats::animAlphaValuesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AnimStats::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimStats::animVarsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AnimStats::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimStats::animStateMachinesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AnimStats::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimStats::positionTextChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AnimStats::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimStats::rotationTextChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AnimStats::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimStats::velocityTextChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AnimStats::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimStats::recenterTextChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AnimStats::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimStats::sittingTextChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AnimStats::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimStats::walkingTextChanged)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AnimStats *_t = static_cast<AnimStats *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->animAlphaValues(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->animVars(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->animStateMachines(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->positionText(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->rotationText(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->velocityText(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->recenterText(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->sittingText(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->walkingText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AnimStats::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_AnimStats.data,
      qt_meta_data_AnimStats,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AnimStats::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnimStats::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AnimStats.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int AnimStats::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AnimStats::animAlphaValuesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AnimStats::animVarsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AnimStats::animStateMachinesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AnimStats::positionTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AnimStats::rotationTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void AnimStats::velocityTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void AnimStats::recenterTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void AnimStats::sittingTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void AnimStats::walkingTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
