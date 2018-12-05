/****************************************************************************
** Meta object code from reading C++ file 'Preferences.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Preferences.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Preferences.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Preferences_t {
    QByteArrayData data[4];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Preferences_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Preferences_t qt_meta_stringdata_Preferences = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Preferences"
QT_MOC_LITERAL(1, 12, 21), // "preferencesByCategory"
QT_MOC_LITERAL(2, 34, 10), // "categories"
QT_MOC_LITERAL(3, 45, 14) // "QList<QString>"

    },
    "Preferences\0preferencesByCategory\0"
    "categories\0QList<QString>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Preferences[] = {

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
       1, QMetaType::QVariantMap, 0x00095401,
       2, 0x80000000 | 3, 0x00095409,

       0        // eod
};

void Preferences::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Preferences *_t = static_cast<Preferences *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantMap*>(_v) = _t->getPreferencesByCategory(); break;
        case 1: *reinterpret_cast< QList<QString>*>(_v) = _t->getCategories(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject Preferences::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Preferences.data,
      qt_meta_data_Preferences,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Preferences::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Preferences::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Preferences.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int Preferences::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_Preference_t {
    QByteArrayData data[23];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Preference_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Preference_t qt_meta_stringdata_Preference = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Preference"
QT_MOC_LITERAL(1, 11, 14), // "enabledChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 21), // "onEnablerValueChanged"
QT_MOC_LITERAL(4, 49, 4), // "load"
QT_MOC_LITERAL(5, 54, 4), // "save"
QT_MOC_LITERAL(6, 59, 8), // "category"
QT_MOC_LITERAL(7, 68, 4), // "name"
QT_MOC_LITERAL(8, 73, 4), // "type"
QT_MOC_LITERAL(9, 78, 4), // "Type"
QT_MOC_LITERAL(10, 83, 7), // "enabled"
QT_MOC_LITERAL(11, 91, 7), // "Invalid"
QT_MOC_LITERAL(12, 99, 8), // "Editable"
QT_MOC_LITERAL(13, 108, 9), // "Browsable"
QT_MOC_LITERAL(14, 118, 6), // "Slider"
QT_MOC_LITERAL(15, 125, 7), // "Spinner"
QT_MOC_LITERAL(16, 133, 13), // "SpinnerSlider"
QT_MOC_LITERAL(17, 147, 8), // "Checkbox"
QT_MOC_LITERAL(18, 156, 6), // "Button"
QT_MOC_LITERAL(19, 163, 8), // "ComboBox"
QT_MOC_LITERAL(20, 172, 11), // "PrimaryHand"
QT_MOC_LITERAL(21, 184, 6), // "Avatar"
QT_MOC_LITERAL(22, 191, 12) // "RadioButtons"

    },
    "Preference\0enabledChanged\0\0"
    "onEnablerValueChanged\0load\0save\0"
    "category\0name\0type\0Type\0enabled\0Invalid\0"
    "Editable\0Browsable\0Slider\0Spinner\0"
    "SpinnerSlider\0Checkbox\0Button\0ComboBox\0"
    "PrimaryHand\0Avatar\0RadioButtons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Preference[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   38, // properties
       1,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x02 /* Public */,
       5,    0,   37,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00095401,
       7, QMetaType::QString, 0x00095401,
       8, 0x80000000 | 9, 0x00095409,
      10, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
       9, 0x0,   12,   58,

 // enum data: key, value
      11, uint(Preference::Invalid),
      12, uint(Preference::Editable),
      13, uint(Preference::Browsable),
      14, uint(Preference::Slider),
      15, uint(Preference::Spinner),
      16, uint(Preference::SpinnerSlider),
      17, uint(Preference::Checkbox),
      18, uint(Preference::Button),
      19, uint(Preference::ComboBox),
      20, uint(Preference::PrimaryHand),
      21, uint(Preference::Avatar),
      22, uint(Preference::RadioButtons),

       0        // eod
};

void Preference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Preference *_t = static_cast<Preference *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enabledChanged(); break;
        case 1: _t->onEnablerValueChanged(); break;
        case 2: _t->load(); break;
        case 3: _t->save(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Preference::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preference::enabledChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Preference *_t = static_cast<Preference *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getCategory(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getName(); break;
        case 2: *reinterpret_cast< Type*>(_v) = _t->getType(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Preference::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Preference.data,
      qt_meta_data_Preference,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Preference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Preference::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Preference.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Preference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void Preference::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ButtonPreference_t {
    QByteArrayData data[3];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ButtonPreference_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ButtonPreference_t qt_meta_stringdata_ButtonPreference = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ButtonPreference"
QT_MOC_LITERAL(1, 17, 7), // "trigger"
QT_MOC_LITERAL(2, 25, 0) // ""

    },
    "ButtonPreference\0trigger\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ButtonPreference[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void ButtonPreference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ButtonPreference *_t = static_cast<ButtonPreference *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->trigger(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ButtonPreference::staticMetaObject = {
    { &Preference::staticMetaObject, qt_meta_stringdata_ButtonPreference.data,
      qt_meta_data_ButtonPreference,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ButtonPreference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ButtonPreference::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ButtonPreference.stringdata0))
        return static_cast<void*>(this);
    return Preference::qt_metacast(_clname);
}

int ButtonPreference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Preference::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_BoolPreference_t {
    QByteArrayData data[4];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BoolPreference_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BoolPreference_t qt_meta_stringdata_BoolPreference = {
    {
QT_MOC_LITERAL(0, 0, 14), // "BoolPreference"
QT_MOC_LITERAL(1, 15, 12), // "valueChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5) // "value"

    },
    "BoolPreference\0valueChanged\0\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BoolPreference[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void BoolPreference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BoolPreference *_t = static_cast<BoolPreference *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BoolPreference::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BoolPreference::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        BoolPreference *_t = static_cast<BoolPreference *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getValue(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        BoolPreference *_t = static_cast<BoolPreference *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BoolPreference::staticMetaObject = {
    { &TypedPreference<bool>::staticMetaObject, qt_meta_stringdata_BoolPreference.data,
      qt_meta_data_BoolPreference,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BoolPreference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoolPreference::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BoolPreference.stringdata0))
        return static_cast<void*>(this);
    return TypedPreference<bool>::qt_metacast(_clname);
}

int BoolPreference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TypedPreference<bool>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
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
void BoolPreference::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_FloatPreference_t {
    QByteArrayData data[8];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FloatPreference_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FloatPreference_t qt_meta_stringdata_FloatPreference = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FloatPreference"
QT_MOC_LITERAL(1, 16, 12), // "valueChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "value"
QT_MOC_LITERAL(4, 36, 3), // "min"
QT_MOC_LITERAL(5, 40, 3), // "max"
QT_MOC_LITERAL(6, 44, 4), // "step"
QT_MOC_LITERAL(7, 49, 8) // "decimals"

    },
    "FloatPreference\0valueChanged\0\0value\0"
    "min\0max\0step\0decimals"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FloatPreference[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       5,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Float, 0x00495103,
       4, QMetaType::Float, 0x00095401,
       5, QMetaType::Float, 0x00095401,
       6, QMetaType::Float, 0x00095401,
       7, QMetaType::Float, 0x00095401,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void FloatPreference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FloatPreference *_t = static_cast<FloatPreference *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FloatPreference::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FloatPreference::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        FloatPreference *_t = static_cast<FloatPreference *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getValue(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getMin(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getMax(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getStep(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getDecimals(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        FloatPreference *_t = static_cast<FloatPreference *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FloatPreference::staticMetaObject = {
    { &TypedPreference<float>::staticMetaObject, qt_meta_stringdata_FloatPreference.data,
      qt_meta_data_FloatPreference,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FloatPreference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FloatPreference::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FloatPreference.stringdata0))
        return static_cast<void*>(this);
    return TypedPreference<float>::qt_metacast(_clname);
}

int FloatPreference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TypedPreference<float>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
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

// SIGNAL 0
void FloatPreference::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_IntPreference_t {
    QByteArrayData data[8];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IntPreference_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IntPreference_t qt_meta_stringdata_IntPreference = {
    {
QT_MOC_LITERAL(0, 0, 13), // "IntPreference"
QT_MOC_LITERAL(1, 14, 12), // "valueChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "value"
QT_MOC_LITERAL(4, 34, 3), // "min"
QT_MOC_LITERAL(5, 38, 3), // "max"
QT_MOC_LITERAL(6, 42, 4), // "step"
QT_MOC_LITERAL(7, 47, 8) // "decimals"

    },
    "IntPreference\0valueChanged\0\0value\0min\0"
    "max\0step\0decimals"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IntPreference[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       5,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Float, 0x00495103,
       4, QMetaType::Float, 0x00095401,
       5, QMetaType::Float, 0x00095401,
       6, QMetaType::Float, 0x00095401,
       7, QMetaType::Int, 0x00095401,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void IntPreference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IntPreference *_t = static_cast<IntPreference *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IntPreference::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IntPreference::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        IntPreference *_t = static_cast<IntPreference *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getValue(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getMin(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getMax(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getStep(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getDecimals(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        IntPreference *_t = static_cast<IntPreference *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IntPreference::staticMetaObject = {
    { &TypedPreference<int>::staticMetaObject, qt_meta_stringdata_IntPreference.data,
      qt_meta_data_IntPreference,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *IntPreference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IntPreference::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IntPreference.stringdata0))
        return static_cast<void*>(this);
    return TypedPreference<int>::qt_metacast(_clname);
}

int IntPreference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TypedPreference<int>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
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

// SIGNAL 0
void IntPreference::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_StringPreference_t {
    QByteArrayData data[4];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StringPreference_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StringPreference_t qt_meta_stringdata_StringPreference = {
    {
QT_MOC_LITERAL(0, 0, 16), // "StringPreference"
QT_MOC_LITERAL(1, 17, 12), // "valueChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5) // "value"

    },
    "StringPreference\0valueChanged\0\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StringPreference[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void StringPreference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StringPreference *_t = static_cast<StringPreference *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StringPreference::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StringPreference::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        StringPreference *_t = static_cast<StringPreference *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getValue(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        StringPreference *_t = static_cast<StringPreference *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StringPreference::staticMetaObject = {
    { &TypedPreference<QString>::staticMetaObject, qt_meta_stringdata_StringPreference.data,
      qt_meta_data_StringPreference,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *StringPreference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StringPreference::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StringPreference.stringdata0))
        return static_cast<void*>(this);
    return TypedPreference<QString>::qt_metacast(_clname);
}

int StringPreference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TypedPreference<QString>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
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
void StringPreference::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_SliderPreference_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SliderPreference_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SliderPreference_t qt_meta_stringdata_SliderPreference = {
    {
QT_MOC_LITERAL(0, 0, 16) // "SliderPreference"

    },
    "SliderPreference"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SliderPreference[] = {

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

void SliderPreference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SliderPreference::staticMetaObject = {
    { &FloatPreference::staticMetaObject, qt_meta_stringdata_SliderPreference.data,
      qt_meta_data_SliderPreference,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SliderPreference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SliderPreference::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SliderPreference.stringdata0))
        return static_cast<void*>(this);
    return FloatPreference::qt_metacast(_clname);
}

int SliderPreference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FloatPreference::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SpinnerPreference_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpinnerPreference_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpinnerPreference_t qt_meta_stringdata_SpinnerPreference = {
    {
QT_MOC_LITERAL(0, 0, 17) // "SpinnerPreference"

    },
    "SpinnerPreference"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpinnerPreference[] = {

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

void SpinnerPreference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SpinnerPreference::staticMetaObject = {
    { &FloatPreference::staticMetaObject, qt_meta_stringdata_SpinnerPreference.data,
      qt_meta_data_SpinnerPreference,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SpinnerPreference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpinnerPreference::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpinnerPreference.stringdata0))
        return static_cast<void*>(this);
    return FloatPreference::qt_metacast(_clname);
}

int SpinnerPreference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FloatPreference::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SpinnerSliderPreference_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpinnerSliderPreference_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpinnerSliderPreference_t qt_meta_stringdata_SpinnerSliderPreference = {
    {
QT_MOC_LITERAL(0, 0, 23) // "SpinnerSliderPreference"

    },
    "SpinnerSliderPreference"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpinnerSliderPreference[] = {

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

void SpinnerSliderPreference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SpinnerSliderPreference::staticMetaObject = {
    { &FloatPreference::staticMetaObject, qt_meta_stringdata_SpinnerSliderPreference.data,
      qt_meta_data_SpinnerSliderPreference,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SpinnerSliderPreference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpinnerSliderPreference::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpinnerSliderPreference.stringdata0))
        return static_cast<void*>(this);
    return FloatPreference::qt_metacast(_clname);
}

int SpinnerSliderPreference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FloatPreference::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IntSpinnerPreference_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IntSpinnerPreference_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IntSpinnerPreference_t qt_meta_stringdata_IntSpinnerPreference = {
    {
QT_MOC_LITERAL(0, 0, 20) // "IntSpinnerPreference"

    },
    "IntSpinnerPreference"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IntSpinnerPreference[] = {

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

void IntSpinnerPreference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IntSpinnerPreference::staticMetaObject = {
    { &IntPreference::staticMetaObject, qt_meta_stringdata_IntSpinnerPreference.data,
      qt_meta_data_IntSpinnerPreference,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *IntSpinnerPreference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IntSpinnerPreference::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IntSpinnerPreference.stringdata0))
        return static_cast<void*>(this);
    return IntPreference::qt_metacast(_clname);
}

int IntSpinnerPreference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IntPreference::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_EditPreference_t {
    QByteArrayData data[2];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditPreference_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditPreference_t qt_meta_stringdata_EditPreference = {
    {
QT_MOC_LITERAL(0, 0, 14), // "EditPreference"
QT_MOC_LITERAL(1, 15, 15) // "placeholderText"

    },
    "EditPreference\0placeholderText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditPreference[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,

       0        // eod
};

void EditPreference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        EditPreference *_t = static_cast<EditPreference *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getPlaceholderText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EditPreference::staticMetaObject = {
    { &StringPreference::staticMetaObject, qt_meta_stringdata_EditPreference.data,
      qt_meta_data_EditPreference,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EditPreference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditPreference::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditPreference.stringdata0))
        return static_cast<void*>(this);
    return StringPreference::qt_metacast(_clname);
}

int EditPreference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StringPreference::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_ComboBoxPreference_t {
    QByteArrayData data[2];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ComboBoxPreference_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ComboBoxPreference_t qt_meta_stringdata_ComboBoxPreference = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ComboBoxPreference"
QT_MOC_LITERAL(1, 19, 5) // "items"

    },
    "ComboBoxPreference\0items"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComboBoxPreference[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QStringList, 0x00095401,

       0        // eod
};

void ComboBoxPreference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        ComboBoxPreference *_t = static_cast<ComboBoxPreference *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->getItems(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ComboBoxPreference::staticMetaObject = {
    { &EditPreference::staticMetaObject, qt_meta_stringdata_ComboBoxPreference.data,
      qt_meta_data_ComboBoxPreference,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ComboBoxPreference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComboBoxPreference::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComboBoxPreference.stringdata0))
        return static_cast<void*>(this);
    return EditPreference::qt_metacast(_clname);
}

int ComboBoxPreference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EditPreference::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_BrowsePreference_t {
    QByteArrayData data[2];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BrowsePreference_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BrowsePreference_t qt_meta_stringdata_BrowsePreference = {
    {
QT_MOC_LITERAL(0, 0, 16), // "BrowsePreference"
QT_MOC_LITERAL(1, 17, 11) // "browseLabel"

    },
    "BrowsePreference\0browseLabel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BrowsePreference[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,

       0        // eod
};

void BrowsePreference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        BrowsePreference *_t = static_cast<BrowsePreference *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getBrowseLabel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BrowsePreference::staticMetaObject = {
    { &EditPreference::staticMetaObject, qt_meta_stringdata_BrowsePreference.data,
      qt_meta_data_BrowsePreference,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BrowsePreference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BrowsePreference::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BrowsePreference.stringdata0))
        return static_cast<void*>(this);
    return EditPreference::qt_metacast(_clname);
}

int BrowsePreference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EditPreference::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_AvatarPreference_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AvatarPreference_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AvatarPreference_t qt_meta_stringdata_AvatarPreference = {
    {
QT_MOC_LITERAL(0, 0, 16) // "AvatarPreference"

    },
    "AvatarPreference"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AvatarPreference[] = {

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

void AvatarPreference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AvatarPreference::staticMetaObject = {
    { &BrowsePreference::staticMetaObject, qt_meta_stringdata_AvatarPreference.data,
      qt_meta_data_AvatarPreference,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AvatarPreference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AvatarPreference::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AvatarPreference.stringdata0))
        return static_cast<void*>(this);
    return BrowsePreference::qt_metacast(_clname);
}

int AvatarPreference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BrowsePreference::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CheckPreference_t {
    QByteArrayData data[2];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CheckPreference_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CheckPreference_t qt_meta_stringdata_CheckPreference = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CheckPreference"
QT_MOC_LITERAL(1, 16, 8) // "indented"

    },
    "CheckPreference\0indented"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CheckPreference[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00095401,

       0        // eod
};

void CheckPreference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        CheckPreference *_t = static_cast<CheckPreference *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getIndented(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CheckPreference::staticMetaObject = {
    { &BoolPreference::staticMetaObject, qt_meta_stringdata_CheckPreference.data,
      qt_meta_data_CheckPreference,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CheckPreference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CheckPreference::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CheckPreference.stringdata0))
        return static_cast<void*>(this);
    return BoolPreference::qt_metacast(_clname);
}

int CheckPreference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BoolPreference::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_PrimaryHandPreference_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PrimaryHandPreference_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PrimaryHandPreference_t qt_meta_stringdata_PrimaryHandPreference = {
    {
QT_MOC_LITERAL(0, 0, 21) // "PrimaryHandPreference"

    },
    "PrimaryHandPreference"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrimaryHandPreference[] = {

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

void PrimaryHandPreference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PrimaryHandPreference::staticMetaObject = {
    { &StringPreference::staticMetaObject, qt_meta_stringdata_PrimaryHandPreference.data,
      qt_meta_data_PrimaryHandPreference,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PrimaryHandPreference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrimaryHandPreference::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PrimaryHandPreference.stringdata0))
        return static_cast<void*>(this);
    return StringPreference::qt_metacast(_clname);
}

int PrimaryHandPreference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StringPreference::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RadioButtonsPreference_t {
    QByteArrayData data[3];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RadioButtonsPreference_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RadioButtonsPreference_t qt_meta_stringdata_RadioButtonsPreference = {
    {
QT_MOC_LITERAL(0, 0, 22), // "RadioButtonsPreference"
QT_MOC_LITERAL(1, 23, 7), // "heading"
QT_MOC_LITERAL(2, 31, 5) // "items"

    },
    "RadioButtonsPreference\0heading\0items"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RadioButtonsPreference[] = {

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
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::QStringList, 0x00095401,

       0        // eod
};

void RadioButtonsPreference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        RadioButtonsPreference *_t = static_cast<RadioButtonsPreference *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getHeading(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->getItems(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RadioButtonsPreference::staticMetaObject = {
    { &IntPreference::staticMetaObject, qt_meta_stringdata_RadioButtonsPreference.data,
      qt_meta_data_RadioButtonsPreference,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RadioButtonsPreference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RadioButtonsPreference::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RadioButtonsPreference.stringdata0))
        return static_cast<void*>(this);
    return IntPreference::qt_metacast(_clname);
}

int RadioButtonsPreference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IntPreference::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
