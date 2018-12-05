/****************************************************************************
** Meta object code from reading C++ file 'SpaceClassifier.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/workload/SpaceClassifier.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SpaceClassifier.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_workload__PerformSpaceTransactionConfig_t {
    QByteArrayData data[3];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_workload__PerformSpaceTransactionConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_workload__PerformSpaceTransactionConfig_t qt_meta_stringdata_workload__PerformSpaceTransactionConfig = {
    {
QT_MOC_LITERAL(0, 0, 39), // "workload::PerformSpaceTransac..."
QT_MOC_LITERAL(1, 40, 5), // "dirty"
QT_MOC_LITERAL(2, 46, 0) // ""

    },
    "workload::PerformSpaceTransactionConfig\0"
    "dirty\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_workload__PerformSpaceTransactionConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void workload::PerformSpaceTransactionConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PerformSpaceTransactionConfig *_t = static_cast<PerformSpaceTransactionConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PerformSpaceTransactionConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PerformSpaceTransactionConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject workload::PerformSpaceTransactionConfig::staticMetaObject = {
    { &Job::Config::staticMetaObject, qt_meta_stringdata_workload__PerformSpaceTransactionConfig.data,
      qt_meta_data_workload__PerformSpaceTransactionConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *workload::PerformSpaceTransactionConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *workload::PerformSpaceTransactionConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_workload__PerformSpaceTransactionConfig.stringdata0))
        return static_cast<void*>(this);
    return Job::Config::qt_metacast(_clname);
}

int workload::PerformSpaceTransactionConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Job::Config::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void workload::PerformSpaceTransactionConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
