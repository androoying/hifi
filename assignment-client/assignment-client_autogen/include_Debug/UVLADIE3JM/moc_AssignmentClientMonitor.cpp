/****************************************************************************
** Meta object code from reading C++ file 'AssignmentClientMonitor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AssignmentClientMonitor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssignmentClientMonitor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssignmentClientMonitor_t {
    QByteArrayData data[17];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssignmentClientMonitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssignmentClientMonitor_t qt_meta_stringdata_AssignmentClientMonitor = {
    {
QT_MOC_LITERAL(0, 0, 23), // "AssignmentClientMonitor"
QT_MOC_LITERAL(1, 24, 11), // "checkSpares"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 20), // "childProcessFinished"
QT_MOC_LITERAL(4, 58, 3), // "pid"
QT_MOC_LITERAL(5, 62, 8), // "exitCode"
QT_MOC_LITERAL(6, 71, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(7, 92, 10), // "exitStatus"
QT_MOC_LITERAL(8, 103, 23), // "handleChildStatusPacket"
QT_MOC_LITERAL(9, 127, 31), // "QSharedPointer<ReceivedMessage>"
QT_MOC_LITERAL(10, 159, 7), // "message"
QT_MOC_LITERAL(11, 167, 17), // "handleHTTPRequest"
QT_MOC_LITERAL(12, 185, 15), // "HTTPConnection*"
QT_MOC_LITERAL(13, 201, 10), // "connection"
QT_MOC_LITERAL(14, 212, 3), // "url"
QT_MOC_LITERAL(15, 216, 14), // "skipSubHandler"
QT_MOC_LITERAL(16, 231, 11) // "aboutToQuit"

    },
    "AssignmentClientMonitor\0checkSpares\0"
    "\0childProcessFinished\0pid\0exitCode\0"
    "QProcess::ExitStatus\0exitStatus\0"
    "handleChildStatusPacket\0"
    "QSharedPointer<ReceivedMessage>\0message\0"
    "handleHTTPRequest\0HTTPConnection*\0"
    "connection\0url\0skipSubHandler\0aboutToQuit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssignmentClientMonitor[] = {

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
       1,    0,   44,    2, 0x08 /* Private */,
       3,    3,   45,    2, 0x08 /* Private */,
       8,    1,   52,    2, 0x08 /* Private */,
      11,    3,   55,    2, 0x08 /* Private */,
      11,    2,   62,    2, 0x28 /* Private | MethodCloned */,
      16,    0,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, 0x80000000 | 6,    4,    5,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Bool, 0x80000000 | 12, QMetaType::QUrl, QMetaType::Bool,   13,   14,   15,
    QMetaType::Bool, 0x80000000 | 12, QMetaType::QUrl,   13,   14,
    QMetaType::Void,

       0        // eod
};

void AssignmentClientMonitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AssignmentClientMonitor *_t = static_cast<AssignmentClientMonitor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkSpares(); break;
        case 1: _t->childProcessFinished((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[3]))); break;
        case 2: _t->handleChildStatusPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 3: { bool _r = _t->handleHTTPRequest((*reinterpret_cast< HTTPConnection*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->handleHTTPRequest((*reinterpret_cast< HTTPConnection*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->aboutToQuit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HTTPConnection* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HTTPConnection* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssignmentClientMonitor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AssignmentClientMonitor.data,
      qt_meta_data_AssignmentClientMonitor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AssignmentClientMonitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssignmentClientMonitor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssignmentClientMonitor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "HTTPRequestHandler"))
        return static_cast< HTTPRequestHandler*>(this);
    return QObject::qt_metacast(_clname);
}

int AssignmentClientMonitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
