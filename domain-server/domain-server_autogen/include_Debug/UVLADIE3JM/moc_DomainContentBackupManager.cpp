/****************************************************************************
** Meta object code from reading C++ file 'DomainContentBackupManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/DomainContentBackupManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DomainContentBackupManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DomainContentBackupManager_t {
    QByteArrayData data[19];
    char stringdata0[324];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DomainContentBackupManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DomainContentBackupManager_t qt_meta_stringdata_DomainContentBackupManager = {
    {
QT_MOC_LITERAL(0, 0, 26), // "DomainContentBackupManager"
QT_MOC_LITERAL(1, 27, 13), // "loadCompleted"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 17), // "recoveryCompleted"
QT_MOC_LITERAL(4, 60, 22), // "getAllBackupsAndStatus"
QT_MOC_LITERAL(5, 83, 20), // "MiniPromise::Promise"
QT_MOC_LITERAL(6, 104, 7), // "promise"
QT_MOC_LITERAL(7, 112, 18), // "createManualBackup"
QT_MOC_LITERAL(8, 131, 4), // "name"
QT_MOC_LITERAL(9, 136, 17), // "recoverFromBackup"
QT_MOC_LITERAL(10, 154, 10), // "backupName"
QT_MOC_LITERAL(11, 165, 25), // "recoverFromUploadedBackup"
QT_MOC_LITERAL(12, 191, 14), // "uploadedBackup"
QT_MOC_LITERAL(13, 206, 23), // "recoverFromUploadedFile"
QT_MOC_LITERAL(14, 230, 16), // "uploadedFilename"
QT_MOC_LITERAL(15, 247, 12), // "deleteBackup"
QT_MOC_LITERAL(16, 260, 28), // "removeOldConsolidatedBackups"
QT_MOC_LITERAL(17, 289, 25), // "consolidateBackupInternal"
QT_MOC_LITERAL(18, 315, 8) // "fileName"

    },
    "DomainContentBackupManager\0loadCompleted\0"
    "\0recoveryCompleted\0getAllBackupsAndStatus\0"
    "MiniPromise::Promise\0promise\0"
    "createManualBackup\0name\0recoverFromBackup\0"
    "backupName\0recoverFromUploadedBackup\0"
    "uploadedBackup\0recoverFromUploadedFile\0"
    "uploadedFilename\0deleteBackup\0"
    "removeOldConsolidatedBackups\0"
    "consolidateBackupInternal\0fileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DomainContentBackupManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   66,    2, 0x0a /* Public */,
       7,    2,   69,    2, 0x0a /* Public */,
       9,    2,   74,    2, 0x0a /* Public */,
      11,    2,   79,    2, 0x0a /* Public */,
      13,    2,   84,    2, 0x0a /* Public */,
      15,    2,   89,    2, 0x0a /* Public */,
      16,    0,   94,    2, 0x08 /* Private */,
      17,    1,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    8,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,   10,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QByteArray,    6,   12,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,   14,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,

       0        // eod
};

void DomainContentBackupManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DomainContentBackupManager *_t = static_cast<DomainContentBackupManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadCompleted(); break;
        case 1: _t->recoveryCompleted(); break;
        case 2: _t->getAllBackupsAndStatus((*reinterpret_cast< MiniPromise::Promise(*)>(_a[1]))); break;
        case 3: _t->createManualBackup((*reinterpret_cast< MiniPromise::Promise(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->recoverFromBackup((*reinterpret_cast< MiniPromise::Promise(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->recoverFromUploadedBackup((*reinterpret_cast< MiniPromise::Promise(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 6: _t->recoverFromUploadedFile((*reinterpret_cast< MiniPromise::Promise(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->deleteBackup((*reinterpret_cast< MiniPromise::Promise(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->removeOldConsolidatedBackups(); break;
        case 9: _t->consolidateBackupInternal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MiniPromise::Promise >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MiniPromise::Promise >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MiniPromise::Promise >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MiniPromise::Promise >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MiniPromise::Promise >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MiniPromise::Promise >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DomainContentBackupManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DomainContentBackupManager::loadCompleted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DomainContentBackupManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DomainContentBackupManager::recoveryCompleted)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DomainContentBackupManager::staticMetaObject = {
    { &GenericThread::staticMetaObject, qt_meta_stringdata_DomainContentBackupManager.data,
      qt_meta_data_DomainContentBackupManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DomainContentBackupManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DomainContentBackupManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DomainContentBackupManager.stringdata0))
        return static_cast<void*>(this);
    return GenericThread::qt_metacast(_clname);
}

int DomainContentBackupManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GenericThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void DomainContentBackupManager::loadCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DomainContentBackupManager::recoveryCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
