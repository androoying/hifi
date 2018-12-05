/****************************************************************************
** Meta object code from reading C++ file 'AssignmentClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AssignmentClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssignmentClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssignmentClient_t {
    QByteArrayData data[12];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssignmentClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssignmentClient_t qt_meta_stringdata_AssignmentClient = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AssignmentClient"
QT_MOC_LITERAL(1, 17, 21), // "sendAssignmentRequest"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 19), // "assignmentCompleted"
QT_MOC_LITERAL(4, 60, 27), // "handleAuthenticationRequest"
QT_MOC_LITERAL(5, 88, 21), // "sendStatusPacketToACM"
QT_MOC_LITERAL(6, 110, 20), // "stopAssignmentClient"
QT_MOC_LITERAL(7, 131, 11), // "aboutToQuit"
QT_MOC_LITERAL(8, 143, 28), // "handleCreateAssignmentPacket"
QT_MOC_LITERAL(9, 172, 31), // "QSharedPointer<ReceivedMessage>"
QT_MOC_LITERAL(10, 204, 7), // "message"
QT_MOC_LITERAL(11, 212, 20) // "handleStopNodePacket"

    },
    "AssignmentClient\0sendAssignmentRequest\0"
    "\0assignmentCompleted\0handleAuthenticationRequest\0"
    "sendStatusPacketToACM\0stopAssignmentClient\0"
    "aboutToQuit\0handleCreateAssignmentPacket\0"
    "QSharedPointer<ReceivedMessage>\0message\0"
    "handleStopNodePacket"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssignmentClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    1,   60,    2, 0x08 /* Private */,
      11,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void AssignmentClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AssignmentClient *_t = static_cast<AssignmentClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendAssignmentRequest(); break;
        case 1: _t->assignmentCompleted(); break;
        case 2: _t->handleAuthenticationRequest(); break;
        case 3: _t->sendStatusPacketToACM(); break;
        case 4: _t->stopAssignmentClient(); break;
        case 5: _t->aboutToQuit(); break;
        case 6: _t->handleCreateAssignmentPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 7: _t->handleStopNodePacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssignmentClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AssignmentClient.data,
      qt_meta_data_AssignmentClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AssignmentClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssignmentClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssignmentClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AssignmentClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
