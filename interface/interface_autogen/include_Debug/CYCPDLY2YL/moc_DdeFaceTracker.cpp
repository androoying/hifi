/****************************************************************************
** Meta object code from reading C++ file 'DdeFaceTracker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/devices/DdeFaceTracker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DdeFaceTracker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DdeFaceTracker_t {
    QByteArrayData data[16];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DdeFaceTracker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DdeFaceTracker_t qt_meta_stringdata_DdeFaceTracker = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DdeFaceTracker"
QT_MOC_LITERAL(1, 15, 10), // "setEnabled"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 7), // "enabled"
QT_MOC_LITERAL(4, 35, 9), // "calibrate"
QT_MOC_LITERAL(5, 45, 15), // "processFinished"
QT_MOC_LITERAL(6, 61, 8), // "exitCode"
QT_MOC_LITERAL(7, 70, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(8, 91, 10), // "exitStatus"
QT_MOC_LITERAL(9, 102, 19), // "socketErrorOccurred"
QT_MOC_LITERAL(10, 122, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(11, 151, 11), // "socketError"
QT_MOC_LITERAL(12, 163, 20), // "readPendingDatagrams"
QT_MOC_LITERAL(13, 184, 18), // "socketStateChanged"
QT_MOC_LITERAL(14, 203, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(15, 232, 11) // "socketState"

    },
    "DdeFaceTracker\0setEnabled\0\0enabled\0"
    "calibrate\0processFinished\0exitCode\0"
    "QProcess::ExitStatus\0exitStatus\0"
    "socketErrorOccurred\0QAbstractSocket::SocketError\0"
    "socketError\0readPendingDatagrams\0"
    "socketStateChanged\0QAbstractSocket::SocketState\0"
    "socketState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DdeFaceTracker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    0,   47,    2, 0x0a /* Public */,
       5,    2,   48,    2, 0x08 /* Private */,
       9,    1,   53,    2, 0x08 /* Private */,
      12,    0,   56,    2, 0x08 /* Private */,
      13,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void DdeFaceTracker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DdeFaceTracker *_t = static_cast<DdeFaceTracker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->calibrate(); break;
        case 2: _t->processFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 3: _t->socketErrorOccurred((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 4: _t->readPendingDatagrams(); break;
        case 5: _t->socketStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DdeFaceTracker::staticMetaObject = {
    { &FaceTracker::staticMetaObject, qt_meta_stringdata_DdeFaceTracker.data,
      qt_meta_data_DdeFaceTracker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DdeFaceTracker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DdeFaceTracker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DdeFaceTracker.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return FaceTracker::qt_metacast(_clname);
}

int DdeFaceTracker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FaceTracker::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
