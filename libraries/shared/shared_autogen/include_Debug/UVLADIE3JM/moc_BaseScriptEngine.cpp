/****************************************************************************
** Meta object code from reading C++ file 'BaseScriptEngine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/BaseScriptEngine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BaseScriptEngine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BaseScriptEngine_t {
    QByteArrayData data[14];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BaseScriptEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BaseScriptEngine_t qt_meta_stringdata_BaseScriptEngine = {
    {
QT_MOC_LITERAL(0, 0, 16), // "BaseScriptEngine"
QT_MOC_LITERAL(1, 17, 18), // "unhandledException"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 12), // "QScriptValue"
QT_MOC_LITERAL(4, 50, 9), // "exception"
QT_MOC_LITERAL(5, 60, 10), // "lintScript"
QT_MOC_LITERAL(6, 71, 10), // "sourceCode"
QT_MOC_LITERAL(7, 82, 8), // "fileName"
QT_MOC_LITERAL(8, 91, 10), // "lineNumber"
QT_MOC_LITERAL(9, 102, 9), // "makeError"
QT_MOC_LITERAL(10, 112, 5), // "other"
QT_MOC_LITERAL(11, 118, 4), // "type"
QT_MOC_LITERAL(12, 123, 15), // "formatException"
QT_MOC_LITERAL(13, 139, 22) // "includeExtendedDetails"

    },
    "BaseScriptEngine\0unhandledException\0"
    "\0QScriptValue\0exception\0lintScript\0"
    "sourceCode\0fileName\0lineNumber\0makeError\0"
    "other\0type\0formatException\0"
    "includeExtendedDetails"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaseScriptEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    3,   52,    2, 0x02 /* Public */,
       5,    2,   59,    2, 0x22 /* Public | MethodCloned */,
       9,    2,   64,    2, 0x02 /* Public */,
       9,    1,   69,    2, 0x22 /* Public | MethodCloned */,
       9,    0,   72,    2, 0x22 /* Public | MethodCloned */,
      12,    2,   73,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // methods: parameters
    0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::Int,    6,    7,    8,
    0x80000000 | 3, QMetaType::QString, QMetaType::QString,    6,    7,
    0x80000000 | 3, 0x80000000 | 3, QMetaType::QString,   10,   11,
    0x80000000 | 3, 0x80000000 | 3,   10,
    0x80000000 | 3,
    QMetaType::QString, 0x80000000 | 3, QMetaType::Bool,    4,   13,

       0        // eod
};

void BaseScriptEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BaseScriptEngine *_t = static_cast<BaseScriptEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->unhandledException((*reinterpret_cast< const QScriptValue(*)>(_a[1]))); break;
        case 1: { QScriptValue _r = _t->lintScript((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 2: { QScriptValue _r = _t->lintScript((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 3: { QScriptValue _r = _t->makeError((*reinterpret_cast< const QScriptValue(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 4: { QScriptValue _r = _t->makeError((*reinterpret_cast< const QScriptValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 5: { QScriptValue _r = _t->makeError();
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->formatException((*reinterpret_cast< const QScriptValue(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BaseScriptEngine::*)(const QScriptValue & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseScriptEngine::unhandledException)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BaseScriptEngine::staticMetaObject = {
    { &QScriptEngine::staticMetaObject, qt_meta_stringdata_BaseScriptEngine.data,
      qt_meta_data_BaseScriptEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BaseScriptEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaseScriptEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BaseScriptEngine.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QEnableSharedFromThis<BaseScriptEngine>"))
        return static_cast< QEnableSharedFromThis<BaseScriptEngine>*>(this);
    return QScriptEngine::qt_metacast(_clname);
}

int BaseScriptEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScriptEngine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void BaseScriptEngine::unhandledException(const QScriptValue & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_Lambda_t {
    QByteArrayData data[5];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Lambda_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Lambda_t qt_meta_stringdata_Lambda = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Lambda"
QT_MOC_LITERAL(1, 7, 4), // "call"
QT_MOC_LITERAL(2, 12, 12), // "QScriptValue"
QT_MOC_LITERAL(3, 25, 0), // ""
QT_MOC_LITERAL(4, 26, 8) // "toString"

    },
    "Lambda\0call\0QScriptValue\0\0toString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Lambda[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    3, 0x0a /* Public */,
       4,    0,   25,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::QString,

       0        // eod
};

void Lambda::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Lambda *_t = static_cast<Lambda *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QScriptValue _r = _t->call();
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Lambda::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Lambda.data,
      qt_meta_data_Lambda,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Lambda::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lambda::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Lambda.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Lambda::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
