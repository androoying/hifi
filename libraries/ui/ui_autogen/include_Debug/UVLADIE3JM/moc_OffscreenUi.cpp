/****************************************************************************
** Meta object code from reading C++ file 'OffscreenUi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/OffscreenUi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OffscreenUi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModalDialogListener_t {
    QByteArrayData data[5];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModalDialogListener_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModalDialogListener_t qt_meta_stringdata_ModalDialogListener = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ModalDialogListener"
QT_MOC_LITERAL(1, 20, 8), // "response"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "value"
QT_MOC_LITERAL(4, 36, 11) // "onDestroyed"

    },
    "ModalDialogListener\0response\0\0value\0"
    "onDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModalDialogListener[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ModalDialogListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModalDialogListener *_t = static_cast<ModalDialogListener *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->response((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 1: _t->onDestroyed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ModalDialogListener::*)(const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModalDialogListener::response)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ModalDialogListener::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ModalDialogListener.data,
      qt_meta_data_ModalDialogListener,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ModalDialogListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModalDialogListener::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModalDialogListener.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ModalDialogListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ModalDialogListener::response(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OffscreenUi_t {
    QByteArrayData data[48];
    char stringdata0[666];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OffscreenUi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OffscreenUi_t qt_meta_stringdata_OffscreenUi = {
    {
QT_MOC_LITERAL(0, 0, 11), // "OffscreenUi"
QT_MOC_LITERAL(1, 12, 11), // "showDesktop"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "desktopReady"
QT_MOC_LITERAL(4, 38, 17), // "removeModalDialog"
QT_MOC_LITERAL(5, 56, 5), // "modal"
QT_MOC_LITERAL(6, 62, 15), // "hoverBeginEvent"
QT_MOC_LITERAL(7, 78, 12), // "PointerEvent"
QT_MOC_LITERAL(8, 91, 5), // "event"
QT_MOC_LITERAL(9, 97, 13), // "hoverEndEvent"
QT_MOC_LITERAL(10, 111, 18), // "handlePointerEvent"
QT_MOC_LITERAL(11, 130, 22), // "isPointOnDesktopWindow"
QT_MOC_LITERAL(12, 153, 5), // "point"
QT_MOC_LITERAL(13, 159, 10), // "messageBox"
QT_MOC_LITERAL(14, 170, 27), // "QMessageBox::StandardButton"
QT_MOC_LITERAL(15, 198, 4), // "Icon"
QT_MOC_LITERAL(16, 203, 4), // "icon"
QT_MOC_LITERAL(17, 208, 5), // "title"
QT_MOC_LITERAL(18, 214, 4), // "text"
QT_MOC_LITERAL(19, 219, 28), // "QMessageBox::StandardButtons"
QT_MOC_LITERAL(20, 248, 7), // "buttons"
QT_MOC_LITERAL(21, 256, 13), // "defaultButton"
QT_MOC_LITERAL(22, 270, 15), // "asyncMessageBox"
QT_MOC_LITERAL(23, 286, 20), // "ModalDialogListener*"
QT_MOC_LITERAL(24, 307, 23), // "waitForMessageBoxResult"
QT_MOC_LITERAL(25, 331, 11), // "QQuickItem*"
QT_MOC_LITERAL(26, 343, 14), // "fileOpenDialog"
QT_MOC_LITERAL(27, 358, 7), // "caption"
QT_MOC_LITERAL(28, 366, 3), // "dir"
QT_MOC_LITERAL(29, 370, 6), // "filter"
QT_MOC_LITERAL(30, 377, 8), // "QString*"
QT_MOC_LITERAL(31, 386, 14), // "selectedFilter"
QT_MOC_LITERAL(32, 401, 20), // "QFileDialog::Options"
QT_MOC_LITERAL(33, 422, 7), // "options"
QT_MOC_LITERAL(34, 430, 19), // "fileOpenDialogAsync"
QT_MOC_LITERAL(35, 450, 14), // "fileSaveDialog"
QT_MOC_LITERAL(36, 465, 19), // "fileSaveDialogAsync"
QT_MOC_LITERAL(37, 485, 23), // "existingDirectoryDialog"
QT_MOC_LITERAL(38, 509, 28), // "existingDirectoryDialogAsync"
QT_MOC_LITERAL(39, 538, 15), // "assetOpenDialog"
QT_MOC_LITERAL(40, 554, 20), // "assetOpenDialogAsync"
QT_MOC_LITERAL(41, 575, 11), // "inputDialog"
QT_MOC_LITERAL(42, 587, 5), // "label"
QT_MOC_LITERAL(43, 593, 7), // "current"
QT_MOC_LITERAL(44, 601, 16), // "inputDialogAsync"
QT_MOC_LITERAL(45, 618, 17), // "customInputDialog"
QT_MOC_LITERAL(46, 636, 6), // "config"
QT_MOC_LITERAL(47, 643, 22) // "customInputDialogAsync"

    },
    "OffscreenUi\0showDesktop\0\0desktopReady\0"
    "removeModalDialog\0modal\0hoverBeginEvent\0"
    "PointerEvent\0event\0hoverEndEvent\0"
    "handlePointerEvent\0isPointOnDesktopWindow\0"
    "point\0messageBox\0QMessageBox::StandardButton\0"
    "Icon\0icon\0title\0text\0QMessageBox::StandardButtons\0"
    "buttons\0defaultButton\0asyncMessageBox\0"
    "ModalDialogListener*\0waitForMessageBoxResult\0"
    "QQuickItem*\0fileOpenDialog\0caption\0"
    "dir\0filter\0QString*\0selectedFilter\0"
    "QFileDialog::Options\0options\0"
    "fileOpenDialogAsync\0fileSaveDialog\0"
    "fileSaveDialogAsync\0existingDirectoryDialog\0"
    "existingDirectoryDialogAsync\0"
    "assetOpenDialog\0assetOpenDialogAsync\0"
    "inputDialog\0label\0current\0inputDialogAsync\0"
    "customInputDialog\0config\0"
    "customInputDialogAsync"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OffscreenUi[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      66,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  344,    2, 0x06 /* Public */,
       3,    0,  345,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,  346,    2, 0x0a /* Public */,
       6,    1,  349,    2, 0x08 /* Private */,
       9,    1,  352,    2, 0x08 /* Private */,
      10,    1,  355,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      11,    1,  358,    2, 0x02 /* Public */,
      13,    5,  361,    2, 0x02 /* Public */,
      22,    5,  372,    2, 0x02 /* Public */,
      24,    1,  383,    2, 0x02 /* Public */,
      26,    5,  386,    2, 0x02 /* Public */,
      26,    4,  397,    2, 0x22 /* Public | MethodCloned */,
      26,    3,  406,    2, 0x22 /* Public | MethodCloned */,
      26,    2,  413,    2, 0x22 /* Public | MethodCloned */,
      26,    1,  418,    2, 0x22 /* Public | MethodCloned */,
      26,    0,  421,    2, 0x22 /* Public | MethodCloned */,
      34,    5,  422,    2, 0x02 /* Public */,
      34,    4,  433,    2, 0x22 /* Public | MethodCloned */,
      34,    3,  442,    2, 0x22 /* Public | MethodCloned */,
      34,    2,  449,    2, 0x22 /* Public | MethodCloned */,
      34,    1,  454,    2, 0x22 /* Public | MethodCloned */,
      34,    0,  457,    2, 0x22 /* Public | MethodCloned */,
      35,    5,  458,    2, 0x02 /* Public */,
      35,    4,  469,    2, 0x22 /* Public | MethodCloned */,
      35,    3,  478,    2, 0x22 /* Public | MethodCloned */,
      35,    2,  485,    2, 0x22 /* Public | MethodCloned */,
      35,    1,  490,    2, 0x22 /* Public | MethodCloned */,
      35,    0,  493,    2, 0x22 /* Public | MethodCloned */,
      36,    5,  494,    2, 0x02 /* Public */,
      36,    4,  505,    2, 0x22 /* Public | MethodCloned */,
      36,    3,  514,    2, 0x22 /* Public | MethodCloned */,
      36,    2,  521,    2, 0x22 /* Public | MethodCloned */,
      36,    1,  526,    2, 0x22 /* Public | MethodCloned */,
      36,    0,  529,    2, 0x22 /* Public | MethodCloned */,
      37,    5,  530,    2, 0x02 /* Public */,
      37,    4,  541,    2, 0x22 /* Public | MethodCloned */,
      37,    3,  550,    2, 0x22 /* Public | MethodCloned */,
      37,    2,  557,    2, 0x22 /* Public | MethodCloned */,
      37,    1,  562,    2, 0x22 /* Public | MethodCloned */,
      37,    0,  565,    2, 0x22 /* Public | MethodCloned */,
      38,    5,  566,    2, 0x02 /* Public */,
      38,    4,  577,    2, 0x22 /* Public | MethodCloned */,
      38,    3,  586,    2, 0x22 /* Public | MethodCloned */,
      38,    2,  593,    2, 0x22 /* Public | MethodCloned */,
      38,    1,  598,    2, 0x22 /* Public | MethodCloned */,
      38,    0,  601,    2, 0x22 /* Public | MethodCloned */,
      39,    5,  602,    2, 0x02 /* Public */,
      39,    4,  613,    2, 0x22 /* Public | MethodCloned */,
      39,    3,  622,    2, 0x22 /* Public | MethodCloned */,
      39,    2,  629,    2, 0x22 /* Public | MethodCloned */,
      39,    1,  634,    2, 0x22 /* Public | MethodCloned */,
      39,    0,  637,    2, 0x22 /* Public | MethodCloned */,
      40,    5,  638,    2, 0x02 /* Public */,
      40,    4,  649,    2, 0x22 /* Public | MethodCloned */,
      40,    3,  658,    2, 0x22 /* Public | MethodCloned */,
      40,    2,  665,    2, 0x22 /* Public | MethodCloned */,
      40,    1,  670,    2, 0x22 /* Public | MethodCloned */,
      40,    0,  673,    2, 0x22 /* Public | MethodCloned */,
      41,    4,  674,    2, 0x02 /* Public */,
      41,    3,  683,    2, 0x22 /* Public | MethodCloned */,
      41,    2,  690,    2, 0x22 /* Public | MethodCloned */,
      44,    4,  695,    2, 0x02 /* Public */,
      44,    3,  704,    2, 0x22 /* Public | MethodCloned */,
      44,    2,  711,    2, 0x22 /* Public | MethodCloned */,
      45,    3,  716,    2, 0x02 /* Public */,
      47,    3,  723,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

 // methods: parameters
    QMetaType::Bool, QMetaType::QVariant,   12,
    0x80000000 | 14, 0x80000000 | 15, QMetaType::QString, QMetaType::QString, 0x80000000 | 19, 0x80000000 | 14,   16,   17,   18,   20,   21,
    0x80000000 | 23, 0x80000000 | 15, QMetaType::QString, QMetaType::QString, 0x80000000 | 19, 0x80000000 | 14,   16,   17,   18,   20,   21,
    QMetaType::Int, 0x80000000 | 25,   13,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 30, 0x80000000 | 32,   27,   28,   29,   31,   33,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 30,   27,   28,   29,   31,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   27,   28,   29,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   27,   28,
    QMetaType::QString, QMetaType::QString,   27,
    QMetaType::QString,
    0x80000000 | 23, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 30, 0x80000000 | 32,   27,   28,   29,   31,   33,
    0x80000000 | 23, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 30,   27,   28,   29,   31,
    0x80000000 | 23, QMetaType::QString, QMetaType::QString, QMetaType::QString,   27,   28,   29,
    0x80000000 | 23, QMetaType::QString, QMetaType::QString,   27,   28,
    0x80000000 | 23, QMetaType::QString,   27,
    0x80000000 | 23,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 30, 0x80000000 | 32,   27,   28,   29,   31,   33,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 30,   27,   28,   29,   31,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   27,   28,   29,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   27,   28,
    QMetaType::QString, QMetaType::QString,   27,
    QMetaType::QString,
    0x80000000 | 23, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 30, 0x80000000 | 32,   27,   28,   29,   31,   33,
    0x80000000 | 23, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 30,   27,   28,   29,   31,
    0x80000000 | 23, QMetaType::QString, QMetaType::QString, QMetaType::QString,   27,   28,   29,
    0x80000000 | 23, QMetaType::QString, QMetaType::QString,   27,   28,
    0x80000000 | 23, QMetaType::QString,   27,
    0x80000000 | 23,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 30, 0x80000000 | 32,   27,   28,   29,   31,   33,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 30,   27,   28,   29,   31,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   27,   28,   29,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   27,   28,
    QMetaType::QString, QMetaType::QString,   27,
    QMetaType::QString,
    0x80000000 | 23, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 30, 0x80000000 | 32,   27,   28,   29,   31,   33,
    0x80000000 | 23, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 30,   27,   28,   29,   31,
    0x80000000 | 23, QMetaType::QString, QMetaType::QString, QMetaType::QString,   27,   28,   29,
    0x80000000 | 23, QMetaType::QString, QMetaType::QString,   27,   28,
    0x80000000 | 23, QMetaType::QString,   27,
    0x80000000 | 23,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 30, 0x80000000 | 32,   27,   28,   29,   31,   33,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 30,   27,   28,   29,   31,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   27,   28,   29,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   27,   28,
    QMetaType::QString, QMetaType::QString,   27,
    QMetaType::QString,
    0x80000000 | 23, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 30, 0x80000000 | 32,   27,   28,   29,   31,   33,
    0x80000000 | 23, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 30,   27,   28,   29,   31,
    0x80000000 | 23, QMetaType::QString, QMetaType::QString, QMetaType::QString,   27,   28,   29,
    0x80000000 | 23, QMetaType::QString, QMetaType::QString,   27,   28,
    0x80000000 | 23, QMetaType::QString,   27,
    0x80000000 | 23,
    QMetaType::QVariant, 0x80000000 | 15, QMetaType::QString, QMetaType::QString, QMetaType::QVariant,   16,   17,   42,   43,
    QMetaType::QVariant, 0x80000000 | 15, QMetaType::QString, QMetaType::QString,   16,   17,   42,
    QMetaType::QVariant, 0x80000000 | 15, QMetaType::QString,   16,   17,
    0x80000000 | 23, 0x80000000 | 15, QMetaType::QString, QMetaType::QString, QMetaType::QVariant,   16,   17,   42,   43,
    0x80000000 | 23, 0x80000000 | 15, QMetaType::QString, QMetaType::QString,   16,   17,   42,
    0x80000000 | 23, 0x80000000 | 15, QMetaType::QString,   16,   17,
    QMetaType::QVariant, 0x80000000 | 15, QMetaType::QString, QMetaType::QVariantMap,   16,   17,   46,
    0x80000000 | 23, 0x80000000 | 15, QMetaType::QString, QMetaType::QVariantMap,   16,   17,   46,

       0        // eod
};

void OffscreenUi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OffscreenUi *_t = static_cast<OffscreenUi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showDesktop(); break;
        case 1: _t->desktopReady(); break;
        case 2: _t->removeModalDialog((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->hoverBeginEvent((*reinterpret_cast< const PointerEvent(*)>(_a[1]))); break;
        case 4: _t->hoverEndEvent((*reinterpret_cast< const PointerEvent(*)>(_a[1]))); break;
        case 5: _t->handlePointerEvent((*reinterpret_cast< const PointerEvent(*)>(_a[1]))); break;
        case 6: { bool _r = _t->isPointOnDesktopWindow((*reinterpret_cast< QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { QMessageBox::StandardButton _r = _t->messageBox((*reinterpret_cast< Icon(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QMessageBox::StandardButtons(*)>(_a[4])),(*reinterpret_cast< QMessageBox::StandardButton(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QMessageBox::StandardButton*>(_a[0]) = std::move(_r); }  break;
        case 8: { ModalDialogListener* _r = _t->asyncMessageBox((*reinterpret_cast< Icon(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QMessageBox::StandardButtons(*)>(_a[4])),(*reinterpret_cast< QMessageBox::StandardButton(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 9: { int _r = _t->waitForMessageBoxResult((*reinterpret_cast< QQuickItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->fileOpenDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< QFileDialog::Options(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: { QString _r = _t->fileOpenDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->fileOpenDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->fileOpenDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: { QString _r = _t->fileOpenDialog((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 15: { QString _r = _t->fileOpenDialog();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 16: { ModalDialogListener* _r = _t->fileOpenDialogAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< QFileDialog::Options(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 17: { ModalDialogListener* _r = _t->fileOpenDialogAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 18: { ModalDialogListener* _r = _t->fileOpenDialogAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 19: { ModalDialogListener* _r = _t->fileOpenDialogAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 20: { ModalDialogListener* _r = _t->fileOpenDialogAsync((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 21: { ModalDialogListener* _r = _t->fileOpenDialogAsync();
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 22: { QString _r = _t->fileSaveDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< QFileDialog::Options(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 23: { QString _r = _t->fileSaveDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 24: { QString _r = _t->fileSaveDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 25: { QString _r = _t->fileSaveDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 26: { QString _r = _t->fileSaveDialog((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 27: { QString _r = _t->fileSaveDialog();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 28: { ModalDialogListener* _r = _t->fileSaveDialogAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< QFileDialog::Options(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 29: { ModalDialogListener* _r = _t->fileSaveDialogAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 30: { ModalDialogListener* _r = _t->fileSaveDialogAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 31: { ModalDialogListener* _r = _t->fileSaveDialogAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 32: { ModalDialogListener* _r = _t->fileSaveDialogAsync((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 33: { ModalDialogListener* _r = _t->fileSaveDialogAsync();
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 34: { QString _r = _t->existingDirectoryDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< QFileDialog::Options(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 35: { QString _r = _t->existingDirectoryDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 36: { QString _r = _t->existingDirectoryDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 37: { QString _r = _t->existingDirectoryDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 38: { QString _r = _t->existingDirectoryDialog((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 39: { QString _r = _t->existingDirectoryDialog();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 40: { ModalDialogListener* _r = _t->existingDirectoryDialogAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< QFileDialog::Options(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 41: { ModalDialogListener* _r = _t->existingDirectoryDialogAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 42: { ModalDialogListener* _r = _t->existingDirectoryDialogAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 43: { ModalDialogListener* _r = _t->existingDirectoryDialogAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 44: { ModalDialogListener* _r = _t->existingDirectoryDialogAsync((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 45: { ModalDialogListener* _r = _t->existingDirectoryDialogAsync();
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 46: { QString _r = _t->assetOpenDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< QFileDialog::Options(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 47: { QString _r = _t->assetOpenDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 48: { QString _r = _t->assetOpenDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 49: { QString _r = _t->assetOpenDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 50: { QString _r = _t->assetOpenDialog((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 51: { QString _r = _t->assetOpenDialog();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 52: { ModalDialogListener* _r = _t->assetOpenDialogAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< QFileDialog::Options(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 53: { ModalDialogListener* _r = _t->assetOpenDialogAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 54: { ModalDialogListener* _r = _t->assetOpenDialogAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 55: { ModalDialogListener* _r = _t->assetOpenDialogAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 56: { ModalDialogListener* _r = _t->assetOpenDialogAsync((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 57: { ModalDialogListener* _r = _t->assetOpenDialogAsync();
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 58: { QVariant _r = _t->inputDialog((*reinterpret_cast< const Icon(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 59: { QVariant _r = _t->inputDialog((*reinterpret_cast< const Icon(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 60: { QVariant _r = _t->inputDialog((*reinterpret_cast< const Icon(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 61: { ModalDialogListener* _r = _t->inputDialogAsync((*reinterpret_cast< const Icon(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 62: { ModalDialogListener* _r = _t->inputDialogAsync((*reinterpret_cast< const Icon(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 63: { ModalDialogListener* _r = _t->inputDialogAsync((*reinterpret_cast< const Icon(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        case 64: { QVariant _r = _t->customInputDialog((*reinterpret_cast< const Icon(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariantMap(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 65: { ModalDialogListener* _r = _t->customInputDialogAsync((*reinterpret_cast< const Icon(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariantMap(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< ModalDialogListener**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OffscreenUi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OffscreenUi::showDesktop)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OffscreenUi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OffscreenUi::desktopReady)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OffscreenUi::staticMetaObject = {
    { &OffscreenQmlSurface::staticMetaObject, qt_meta_stringdata_OffscreenUi.data,
      qt_meta_data_OffscreenUi,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OffscreenUi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OffscreenUi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OffscreenUi.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return OffscreenQmlSurface::qt_metacast(_clname);
}

int OffscreenUi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OffscreenQmlSurface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 66)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 66;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 66)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 66;
    }
    return _id;
}

// SIGNAL 0
void OffscreenUi::showDesktop()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OffscreenUi::desktopReady()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
