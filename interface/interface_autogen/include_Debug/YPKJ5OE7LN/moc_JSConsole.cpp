/****************************************************************************
** Meta object code from reading C++ file 'JSConsole.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ui/JSConsole.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JSConsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JSConsole_t {
    QByteArrayData data[17];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JSConsole_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JSConsole_t qt_meta_stringdata_JSConsole = {
    {
QT_MOC_LITERAL(0, 0, 9), // "JSConsole"
QT_MOC_LITERAL(1, 10, 14), // "executeCommand"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "command"
QT_MOC_LITERAL(4, 34, 14), // "scrollToBottom"
QT_MOC_LITERAL(5, 49, 15), // "resizeTextInput"
QT_MOC_LITERAL(6, 65, 11), // "handlePrint"
QT_MOC_LITERAL(7, 77, 7), // "message"
QT_MOC_LITERAL(8, 85, 10), // "scriptName"
QT_MOC_LITERAL(9, 96, 10), // "handleInfo"
QT_MOC_LITERAL(10, 107, 13), // "handleWarning"
QT_MOC_LITERAL(11, 121, 11), // "handleError"
QT_MOC_LITERAL(12, 133, 15), // "commandFinished"
QT_MOC_LITERAL(13, 149, 16), // "insertCompletion"
QT_MOC_LITERAL(14, 166, 11), // "QModelIndex"
QT_MOC_LITERAL(15, 178, 10), // "completion"
QT_MOC_LITERAL(16, 189, 21) // "highlightedCompletion"

    },
    "JSConsole\0executeCommand\0\0command\0"
    "scrollToBottom\0resizeTextInput\0"
    "handlePrint\0message\0scriptName\0"
    "handleInfo\0handleWarning\0handleError\0"
    "commandFinished\0insertCompletion\0"
    "QModelIndex\0completion\0highlightedCompletion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JSConsole[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       4,    0,   67,    2, 0x09 /* Protected */,
       5,    0,   68,    2, 0x09 /* Protected */,
       6,    2,   69,    2, 0x09 /* Protected */,
       9,    2,   74,    2, 0x09 /* Protected */,
      10,    2,   79,    2, 0x09 /* Protected */,
      11,    2,   84,    2, 0x09 /* Protected */,
      12,    0,   89,    2, 0x09 /* Protected */,
      13,    1,   90,    2, 0x08 /* Private */,
      16,    1,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void JSConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JSConsole *_t = static_cast<JSConsole *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->executeCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->scrollToBottom(); break;
        case 2: _t->resizeTextInput(); break;
        case 3: _t->handlePrint((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->handleInfo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->handleWarning((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->handleError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->commandFinished(); break;
        case 8: _t->insertCompletion((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->highlightedCompletion((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JSConsole::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_JSConsole.data,
      qt_meta_data_JSConsole,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *JSConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JSConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JSConsole.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int JSConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
