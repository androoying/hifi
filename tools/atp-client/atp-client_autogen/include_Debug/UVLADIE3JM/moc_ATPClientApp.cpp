/****************************************************************************
** Meta object code from reading C++ file 'ATPClientApp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ATPClientApp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ATPClientApp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ATPClientApp_t {
    QByteArrayData data[14];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ATPClientApp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ATPClientApp_t qt_meta_stringdata_ATPClientApp = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ATPClientApp"
QT_MOC_LITERAL(1, 13, 23), // "domainConnectionRefused"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "reasonMessage"
QT_MOC_LITERAL(4, 52, 13), // "reasonCodeInt"
QT_MOC_LITERAL(5, 66, 9), // "extraInfo"
QT_MOC_LITERAL(6, 76, 13), // "domainChanged"
QT_MOC_LITERAL(7, 90, 9), // "domainURL"
QT_MOC_LITERAL(8, 100, 9), // "nodeAdded"
QT_MOC_LITERAL(9, 110, 17), // "SharedNodePointer"
QT_MOC_LITERAL(10, 128, 4), // "node"
QT_MOC_LITERAL(11, 133, 13), // "nodeActivated"
QT_MOC_LITERAL(12, 147, 10), // "nodeKilled"
QT_MOC_LITERAL(13, 158, 27) // "notifyPacketVersionMismatch"

    },
    "ATPClientApp\0domainConnectionRefused\0"
    "\0reasonMessage\0reasonCodeInt\0extraInfo\0"
    "domainChanged\0domainURL\0nodeAdded\0"
    "SharedNodePointer\0node\0nodeActivated\0"
    "nodeKilled\0notifyPacketVersionMismatch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ATPClientApp[] = {

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
       1,    3,   44,    2, 0x08 /* Private */,
       6,    1,   51,    2, 0x08 /* Private */,
       8,    1,   54,    2, 0x08 /* Private */,
      11,    1,   57,    2, 0x08 /* Private */,
      12,    1,   60,    2, 0x08 /* Private */,
      13,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QUrl,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

void ATPClientApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ATPClientApp *_t = static_cast<ATPClientApp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->domainConnectionRefused((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->domainChanged((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 2: _t->nodeAdded((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 3: _t->nodeActivated((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 4: _t->nodeKilled((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 5: _t->notifyPacketVersionMismatch(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ATPClientApp::staticMetaObject = {
    { &QCoreApplication::staticMetaObject, qt_meta_stringdata_ATPClientApp.data,
      qt_meta_data_ATPClientApp,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ATPClientApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ATPClientApp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ATPClientApp.stringdata0))
        return static_cast<void*>(this);
    return QCoreApplication::qt_metacast(_clname);
}

int ATPClientApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCoreApplication::qt_metacall(_c, _id, _a);
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
