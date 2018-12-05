/****************************************************************************
** Meta object code from reading C++ file 'Tooltip.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Tooltip.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Tooltip.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tooltip_t {
    QByteArrayData data[14];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tooltip_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tooltip_t qt_meta_stringdata_Tooltip = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Tooltip"
QT_MOC_LITERAL(1, 8, 12), // "titleChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 18), // "descriptionChanged"
QT_MOC_LITERAL(4, 41, 15), // "imageURLChanged"
QT_MOC_LITERAL(5, 57, 8), // "setTitle"
QT_MOC_LITERAL(6, 66, 5), // "title"
QT_MOC_LITERAL(7, 72, 14), // "setDescription"
QT_MOC_LITERAL(8, 87, 11), // "description"
QT_MOC_LITERAL(9, 99, 11), // "setImageURL"
QT_MOC_LITERAL(10, 111, 8), // "imageURL"
QT_MOC_LITERAL(11, 120, 17), // "handleAPIResponse"
QT_MOC_LITERAL(12, 138, 14), // "QNetworkReply*"
QT_MOC_LITERAL(13, 153, 12) // "requestReply"

    },
    "Tooltip\0titleChanged\0\0descriptionChanged\0"
    "imageURLChanged\0setTitle\0title\0"
    "setDescription\0description\0setImageURL\0"
    "imageURL\0handleAPIResponse\0QNetworkReply*\0"
    "requestReply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tooltip[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   52,    2, 0x0a /* Public */,
       7,    1,   55,    2, 0x0a /* Public */,
       9,    1,   58,    2, 0x0a /* Public */,
      11,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00495103,
       8, QMetaType::QString, 0x00495103,
      10, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void Tooltip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Tooltip *_t = static_cast<Tooltip *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->titleChanged(); break;
        case 1: _t->descriptionChanged(); break;
        case 2: _t->imageURLChanged(); break;
        case 3: _t->setTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setDescription((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setImageURL((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->handleAPIResponse((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Tooltip::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tooltip::titleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Tooltip::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tooltip::descriptionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Tooltip::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tooltip::imageURLChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Tooltip *_t = static_cast<Tooltip *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getTitle(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getDescription(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getImageURL(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Tooltip *_t = static_cast<Tooltip *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setImageURL(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Tooltip::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_Tooltip.data,
      qt_meta_data_Tooltip,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Tooltip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tooltip::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tooltip.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int Tooltip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
void Tooltip::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Tooltip::descriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Tooltip::imageURLChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
