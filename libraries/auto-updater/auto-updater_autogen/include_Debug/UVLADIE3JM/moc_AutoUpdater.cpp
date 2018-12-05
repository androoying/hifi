/****************************************************************************
** Meta object code from reading C++ file 'AutoUpdater.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AutoUpdater.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutoUpdater.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AutoUpdater_t {
    QByteArrayData data[7];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoUpdater_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoUpdater_t qt_meta_stringdata_AutoUpdater = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AutoUpdater"
QT_MOC_LITERAL(1, 12, 23), // "latestVersionDataParsed"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 21), // "newVersionIsAvailable"
QT_MOC_LITERAL(4, 59, 22), // "newVersionIsDownloaded"
QT_MOC_LITERAL(5, 82, 22), // "parseLatestVersionData"
QT_MOC_LITERAL(6, 105, 21) // "checkVersionAndNotify"

    },
    "AutoUpdater\0latestVersionDataParsed\0"
    "\0newVersionIsAvailable\0newVersionIsDownloaded\0"
    "parseLatestVersionData\0checkVersionAndNotify"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoUpdater[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AutoUpdater::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AutoUpdater *_t = static_cast<AutoUpdater *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->latestVersionDataParsed(); break;
        case 1: _t->newVersionIsAvailable(); break;
        case 2: _t->newVersionIsDownloaded(); break;
        case 3: _t->parseLatestVersionData(); break;
        case 4: _t->checkVersionAndNotify(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AutoUpdater::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutoUpdater::latestVersionDataParsed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AutoUpdater::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutoUpdater::newVersionIsAvailable)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AutoUpdater::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutoUpdater::newVersionIsDownloaded)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AutoUpdater::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AutoUpdater.data,
      qt_meta_data_AutoUpdater,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AutoUpdater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoUpdater::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutoUpdater.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int AutoUpdater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AutoUpdater::latestVersionDataParsed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AutoUpdater::newVersionIsAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AutoUpdater::newVersionIsDownloaded()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
