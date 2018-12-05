/****************************************************************************
** Meta object code from reading C++ file 'AudioInjector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AudioInjector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioInjector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioInjector_t {
    QByteArrayData data[16];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioInjector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioInjector_t qt_meta_stringdata_AudioInjector = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AudioInjector"
QT_MOC_LITERAL(1, 14, 8), // "finished"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "restarting"
QT_MOC_LITERAL(4, 35, 7), // "restart"
QT_MOC_LITERAL(5, 43, 4), // "stop"
QT_MOC_LITERAL(6, 48, 24), // "triggerDeleteAfterFinish"
QT_MOC_LITERAL(7, 73, 10), // "getOptions"
QT_MOC_LITERAL(8, 84, 10), // "setOptions"
QT_MOC_LITERAL(9, 95, 20), // "AudioInjectorOptions"
QT_MOC_LITERAL(10, 116, 7), // "options"
QT_MOC_LITERAL(11, 124, 11), // "getLoudness"
QT_MOC_LITERAL(12, 136, 9), // "isPlaying"
QT_MOC_LITERAL(13, 146, 6), // "finish"
QT_MOC_LITERAL(14, 153, 20), // "finishLocalInjection"
QT_MOC_LITERAL(15, 174, 22) // "finishNetworkInjection"

    },
    "AudioInjector\0finished\0\0restarting\0"
    "restart\0stop\0triggerDeleteAfterFinish\0"
    "getOptions\0setOptions\0AudioInjectorOptions\0"
    "options\0getLoudness\0isPlaying\0finish\0"
    "finishLocalInjection\0finishNetworkInjection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioInjector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   76,    2, 0x0a /* Public */,
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    1,   80,    2, 0x0a /* Public */,
      11,    0,   83,    2, 0x0a /* Public */,
      12,    0,   84,    2, 0x0a /* Public */,
      13,    0,   85,    2, 0x0a /* Public */,
      14,    0,   86,    2, 0x0a /* Public */,
      15,    0,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Float,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AudioInjector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AudioInjector *_t = static_cast<AudioInjector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->restarting(); break;
        case 2: _t->restart(); break;
        case 3: _t->stop(); break;
        case 4: _t->triggerDeleteAfterFinish(); break;
        case 5: _t->getOptions(); break;
        case 6: _t->setOptions((*reinterpret_cast< const AudioInjectorOptions(*)>(_a[1]))); break;
        case 7: { float _r = _t->getLoudness();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->isPlaying();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->finish(); break;
        case 10: _t->finishLocalInjection(); break;
        case 11: _t->finishNetworkInjection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioInjectorOptions >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AudioInjector::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioInjector::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AudioInjector::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioInjector::restarting)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AudioInjector::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AudioInjector.data,
      qt_meta_data_AudioInjector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AudioInjector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioInjector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioInjector.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QEnableSharedFromThis<AudioInjector>"))
        return static_cast< QEnableSharedFromThis<AudioInjector>*>(this);
    return QObject::qt_metacast(_clname);
}

int AudioInjector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void AudioInjector::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AudioInjector::restarting()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
