/****************************************************************************
** Meta object code from reading C++ file 'Snapshot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ui/Snapshot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Snapshot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Snapshot_t {
    QByteArrayData data[8];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Snapshot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Snapshot_t qt_meta_stringdata_Snapshot = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Snapshot"
QT_MOC_LITERAL(1, 9, 19), // "snapshotLocationSet"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "value"
QT_MOC_LITERAL(4, 36, 20), // "getSnapshotsLocation"
QT_MOC_LITERAL(5, 57, 20), // "setSnapshotsLocation"
QT_MOC_LITERAL(6, 78, 8), // "location"
QT_MOC_LITERAL(7, 87, 16) // "takeNextSnapshot"

    },
    "Snapshot\0snapshotLocationSet\0\0value\0"
    "getSnapshotsLocation\0setSnapshotsLocation\0"
    "location\0takeNextSnapshot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Snapshot[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x0a /* Public */,
       5,    1,   38,    2, 0x0a /* Public */,
       7,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

void Snapshot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Snapshot *_t = static_cast<Snapshot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->snapshotLocationSet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: { QString _r = _t->getSnapshotsLocation();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setSnapshotsLocation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->takeNextSnapshot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Snapshot::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Snapshot::snapshotLocationSet)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Snapshot::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Snapshot.data,
      qt_meta_data_Snapshot,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Snapshot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Snapshot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Snapshot.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int Snapshot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void Snapshot::snapshotLocationSet(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
