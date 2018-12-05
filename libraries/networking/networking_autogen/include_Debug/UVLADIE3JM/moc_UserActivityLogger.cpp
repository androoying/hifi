/****************************************************************************
** Meta object code from reading C++ file 'UserActivityLogger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/UserActivityLogger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserActivityLogger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UserActivityLogger_t {
    QByteArrayData data[36];
    char stringdata0[484];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserActivityLogger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserActivityLogger_t qt_meta_stringdata_UserActivityLogger = {
    {
QT_MOC_LITERAL(0, 0, 18), // "UserActivityLogger"
QT_MOC_LITERAL(1, 19, 9), // "isEnabled"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 20), // "isDisabledSettingSet"
QT_MOC_LITERAL(4, 51, 7), // "disable"
QT_MOC_LITERAL(5, 59, 9), // "logAction"
QT_MOC_LITERAL(6, 69, 6), // "action"
QT_MOC_LITERAL(7, 76, 7), // "details"
QT_MOC_LITERAL(8, 84, 22), // "JSONCallbackParameters"
QT_MOC_LITERAL(9, 107, 6), // "params"
QT_MOC_LITERAL(10, 114, 6), // "launch"
QT_MOC_LITERAL(11, 121, 18), // "applicationVersion"
QT_MOC_LITERAL(12, 140, 22), // "previousSessionCrashed"
QT_MOC_LITERAL(13, 163, 22), // "previousSessionRuntime"
QT_MOC_LITERAL(14, 186, 21), // "insufficientGLVersion"
QT_MOC_LITERAL(15, 208, 6), // "glData"
QT_MOC_LITERAL(16, 215, 18), // "changedDisplayName"
QT_MOC_LITERAL(17, 234, 11), // "displayName"
QT_MOC_LITERAL(18, 246, 12), // "changedModel"
QT_MOC_LITERAL(19, 259, 11), // "typeOfModel"
QT_MOC_LITERAL(20, 271, 8), // "modelURL"
QT_MOC_LITERAL(21, 280, 13), // "changedDomain"
QT_MOC_LITERAL(22, 294, 9), // "domainURL"
QT_MOC_LITERAL(23, 304, 15), // "connectedDevice"
QT_MOC_LITERAL(24, 320, 12), // "typeOfDevice"
QT_MOC_LITERAL(25, 333, 10), // "deviceName"
QT_MOC_LITERAL(26, 344, 12), // "loadedScript"
QT_MOC_LITERAL(27, 357, 10), // "scriptName"
QT_MOC_LITERAL(28, 368, 6), // "wentTo"
QT_MOC_LITERAL(29, 375, 29), // "AddressManager::LookupTrigger"
QT_MOC_LITERAL(30, 405, 7), // "trigger"
QT_MOC_LITERAL(31, 413, 15), // "destinationType"
QT_MOC_LITERAL(32, 429, 15), // "destinationName"
QT_MOC_LITERAL(33, 445, 12), // "requestError"
QT_MOC_LITERAL(34, 458, 14), // "QNetworkReply*"
QT_MOC_LITERAL(35, 473, 10) // "errorReply"

    },
    "UserActivityLogger\0isEnabled\0\0"
    "isDisabledSettingSet\0disable\0logAction\0"
    "action\0details\0JSONCallbackParameters\0"
    "params\0launch\0applicationVersion\0"
    "previousSessionCrashed\0previousSessionRuntime\0"
    "insufficientGLVersion\0glData\0"
    "changedDisplayName\0displayName\0"
    "changedModel\0typeOfModel\0modelURL\0"
    "changedDomain\0domainURL\0connectedDevice\0"
    "typeOfDevice\0deviceName\0loadedScript\0"
    "scriptName\0wentTo\0AddressManager::LookupTrigger\0"
    "trigger\0destinationType\0destinationName\0"
    "requestError\0QNetworkReply*\0errorReply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserActivityLogger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x0a /* Public */,
       4,    1,   91,    2, 0x0a /* Public */,
       5,    3,   94,    2, 0x0a /* Public */,
       5,    2,  101,    2, 0x2a /* Public | MethodCloned */,
       5,    1,  106,    2, 0x2a /* Public | MethodCloned */,
      10,    3,  109,    2, 0x0a /* Public */,
      14,    1,  116,    2, 0x0a /* Public */,
      16,    1,  119,    2, 0x0a /* Public */,
      18,    2,  122,    2, 0x0a /* Public */,
      21,    1,  127,    2, 0x0a /* Public */,
      23,    2,  130,    2, 0x0a /* Public */,
      26,    1,  135,    2, 0x0a /* Public */,
      28,    3,  138,    2, 0x0a /* Public */,
      33,    1,  145,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonObject, 0x80000000 | 8,    6,    7,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonObject,    6,    7,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Int,   11,   12,   13,
    QMetaType::Void, QMetaType::QJsonObject,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   19,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   24,   25,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, 0x80000000 | 29, QMetaType::QString, QMetaType::QString,   30,   31,   32,
    QMetaType::Void, 0x80000000 | 34,   35,

       0        // eod
};

void UserActivityLogger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserActivityLogger *_t = static_cast<UserActivityLogger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->isEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->isDisabledSettingSet();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->disable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->logAction((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QJsonObject(*)>(_a[2])),(*reinterpret_cast< JSONCallbackParameters(*)>(_a[3]))); break;
        case 4: _t->logAction((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QJsonObject(*)>(_a[2]))); break;
        case 5: _t->logAction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->launch((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->insufficientGLVersion((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 8: _t->changedDisplayName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->changedModel((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->changedDomain((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->connectedDevice((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->loadedScript((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->wentTo((*reinterpret_cast< AddressManager::LookupTrigger(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 14: _t->requestError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UserActivityLogger::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UserActivityLogger.data,
      qt_meta_data_UserActivityLogger,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UserActivityLogger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserActivityLogger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserActivityLogger.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UserActivityLogger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
