/****************************************************************************
** Meta object code from reading C++ file 'LogDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ui/LogDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogDialog_t {
    QByteArrayData data[16];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogDialog_t qt_meta_stringdata_LogDialog = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LogDialog"
QT_MOC_LITERAL(1, 10, 13), // "appendLogLine"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "logLine"
QT_MOC_LITERAL(4, 33, 18), // "handleRevealButton"
QT_MOC_LITERAL(5, 52, 28), // "handleExtraDebuggingCheckbox"
QT_MOC_LITERAL(6, 81, 19), // "handleDebugPrintBox"
QT_MOC_LITERAL(7, 101, 18), // "handleInfoPrintBox"
QT_MOC_LITERAL(8, 120, 22), // "handleCriticalPrintBox"
QT_MOC_LITERAL(9, 143, 21), // "handleWarningPrintBox"
QT_MOC_LITERAL(10, 165, 22), // "handleSuppressPrintBox"
QT_MOC_LITERAL(11, 188, 19), // "handleFatalPrintBox"
QT_MOC_LITERAL(12, 208, 21), // "handleUnknownPrintBox"
QT_MOC_LITERAL(13, 230, 27), // "handleFilterDropdownChanged"
QT_MOC_LITERAL(14, 258, 19), // "handleAllLogsButton"
QT_MOC_LITERAL(15, 278, 12) // "printLogFile"

    },
    "LogDialog\0appendLogLine\0\0logLine\0"
    "handleRevealButton\0handleExtraDebuggingCheckbox\0"
    "handleDebugPrintBox\0handleInfoPrintBox\0"
    "handleCriticalPrintBox\0handleWarningPrintBox\0"
    "handleSuppressPrintBox\0handleFatalPrintBox\0"
    "handleUnknownPrintBox\0handleFilterDropdownChanged\0"
    "handleAllLogsButton\0printLogFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x0a /* Public */,
       4,    0,   82,    2, 0x08 /* Private */,
       5,    1,   83,    2, 0x08 /* Private */,
       6,    1,   86,    2, 0x08 /* Private */,
       7,    1,   89,    2, 0x08 /* Private */,
       8,    1,   92,    2, 0x08 /* Private */,
       9,    1,   95,    2, 0x08 /* Private */,
      10,    1,   98,    2, 0x08 /* Private */,
      11,    1,  101,    2, 0x08 /* Private */,
      12,    1,  104,    2, 0x08 /* Private */,
      13,    1,  107,    2, 0x08 /* Private */,
      14,    0,  110,    2, 0x08 /* Private */,
      15,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LogDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogDialog *_t = static_cast<LogDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->appendLogLine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->handleRevealButton(); break;
        case 2: _t->handleExtraDebuggingCheckbox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->handleDebugPrintBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->handleInfoPrintBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->handleCriticalPrintBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->handleWarningPrintBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->handleSuppressPrintBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->handleFatalPrintBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->handleUnknownPrintBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->handleFilterDropdownChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->handleAllLogsButton(); break;
        case 12: _t->printLogFile(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LogDialog::staticMetaObject = {
    { &BaseLogDialog::staticMetaObject, qt_meta_stringdata_LogDialog.data,
      qt_meta_data_LogDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LogDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogDialog.stringdata0))
        return static_cast<void*>(this);
    return BaseLogDialog::qt_metacast(_clname);
}

int LogDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseLogDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
