/****************************************************************************
** Meta object code from reading C++ file 'TabletScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ui/TabletScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TabletScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TabletScriptingInterface_t {
    QByteArrayData data[19];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TabletScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TabletScriptingInterface_t qt_meta_stringdata_TabletScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 24), // "TabletScriptingInterface"
QT_MOC_LITERAL(1, 25, 18), // "tabletNotification"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 9), // "getTablet"
QT_MOC_LITERAL(4, 55, 12), // "TabletProxy*"
QT_MOC_LITERAL(5, 68, 8), // "tabletId"
QT_MOC_LITERAL(6, 77, 9), // "playSound"
QT_MOC_LITERAL(7, 87, 17), // "TabletAudioEvents"
QT_MOC_LITERAL(8, 105, 6), // "aEvent"
QT_MOC_LITERAL(9, 112, 11), // "ButtonClick"
QT_MOC_LITERAL(10, 124, 11), // "ButtonHover"
QT_MOC_LITERAL(11, 136, 10), // "TabletOpen"
QT_MOC_LITERAL(12, 147, 13), // "TabletHandsIn"
QT_MOC_LITERAL(13, 161, 14), // "TabletHandsOut"
QT_MOC_LITERAL(14, 176, 4), // "Last"
QT_MOC_LITERAL(15, 181, 15), // "TabletConstants"
QT_MOC_LITERAL(16, 197, 20), // "ButtonsColumnsOnPage"
QT_MOC_LITERAL(17, 218, 17), // "ButtonsRowsOnPage"
QT_MOC_LITERAL(18, 236, 13) // "ButtonsOnPage"

    },
    "TabletScriptingInterface\0tabletNotification\0"
    "\0getTablet\0TabletProxy*\0tabletId\0"
    "playSound\0TabletAudioEvents\0aEvent\0"
    "ButtonClick\0ButtonHover\0TabletOpen\0"
    "TabletHandsIn\0TabletHandsOut\0Last\0"
    "TabletConstants\0ButtonsColumnsOnPage\0"
    "ButtonsRowsOnPage\0ButtonsOnPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TabletScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       2,   36, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x02 /* Public */,
       6,    1,   33,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // enums: name, flags, count, data
       7, 0x0,    6,   44,
      15, 0x0,    3,   56,

 // enum data: key, value
       9, uint(TabletScriptingInterface::ButtonClick),
      10, uint(TabletScriptingInterface::ButtonHover),
      11, uint(TabletScriptingInterface::TabletOpen),
      12, uint(TabletScriptingInterface::TabletHandsIn),
      13, uint(TabletScriptingInterface::TabletHandsOut),
      14, uint(TabletScriptingInterface::Last),
      16, uint(TabletScriptingInterface::ButtonsColumnsOnPage),
      17, uint(TabletScriptingInterface::ButtonsRowsOnPage),
      18, uint(TabletScriptingInterface::ButtonsOnPage),

       0        // eod
};

void TabletScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TabletScriptingInterface *_t = static_cast<TabletScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tabletNotification(); break;
        case 1: { TabletProxy* _r = _t->getTablet((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< TabletProxy**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->playSound((*reinterpret_cast< TabletAudioEvents(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TabletScriptingInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabletScriptingInterface::tabletNotification)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TabletScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TabletScriptingInterface.data,
      qt_meta_data_TabletScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TabletScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TabletScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TabletScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int TabletScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void TabletScriptingInterface::tabletNotification()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_TabletButtonListModel_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TabletButtonListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TabletButtonListModel_t qt_meta_stringdata_TabletButtonListModel = {
    {
QT_MOC_LITERAL(0, 0, 21) // "TabletButtonListModel"

    },
    "TabletButtonListModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TabletButtonListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TabletButtonListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TabletButtonListModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_TabletButtonListModel.data,
      qt_meta_data_TabletButtonListModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TabletButtonListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TabletButtonListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TabletButtonListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int TabletButtonListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TabletButtonsProxyModel_t {
    QByteArrayData data[7];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TabletButtonsProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TabletButtonsProxyModel_t qt_meta_stringdata_TabletButtonsProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 23), // "TabletButtonsProxyModel"
QT_MOC_LITERAL(1, 24, 16), // "pageIndexChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 9), // "pageIndex"
QT_MOC_LITERAL(4, 52, 12), // "setPageIndex"
QT_MOC_LITERAL(5, 65, 11), // "buttonIndex"
QT_MOC_LITERAL(6, 77, 4) // "uuid"

    },
    "TabletButtonsProxyModel\0pageIndexChanged\0"
    "\0pageIndex\0setPageIndex\0buttonIndex\0"
    "uuid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TabletButtonsProxyModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   35,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // methods: parameters
    QMetaType::Int, QMetaType::QString,    6,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void TabletButtonsProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TabletButtonsProxyModel *_t = static_cast<TabletButtonsProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pageIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setPageIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: { int _r = _t->buttonIndex((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TabletButtonsProxyModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabletButtonsProxyModel::pageIndexChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TabletButtonsProxyModel *_t = static_cast<TabletButtonsProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->pageIndex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TabletButtonsProxyModel *_t = static_cast<TabletButtonsProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPageIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TabletButtonsProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_TabletButtonsProxyModel.data,
      qt_meta_data_TabletButtonsProxyModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TabletButtonsProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TabletButtonsProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TabletButtonsProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int TabletButtonsProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TabletButtonsProxyModel::pageIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_TabletProxy_t {
    QByteArrayData data[47];
    char stringdata0[611];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TabletProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TabletProxy_t qt_meta_stringdata_TabletProxy = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TabletProxy"
QT_MOC_LITERAL(1, 12, 16), // "webEventReceived"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 3), // "msg"
QT_MOC_LITERAL(4, 34, 7), // "fromQml"
QT_MOC_LITERAL(5, 42, 13), // "screenChanged"
QT_MOC_LITERAL(6, 56, 4), // "type"
QT_MOC_LITERAL(7, 61, 3), // "url"
QT_MOC_LITERAL(8, 65, 18), // "tabletShownChanged"
QT_MOC_LITERAL(9, 84, 18), // "toolbarModeChanged"
QT_MOC_LITERAL(10, 103, 19), // "desktopWindowClosed"
QT_MOC_LITERAL(11, 123, 12), // "emitWebEvent"
QT_MOC_LITERAL(12, 136, 13), // "onTabletShown"
QT_MOC_LITERAL(13, 150, 14), // "gotoMenuScreen"
QT_MOC_LITERAL(14, 165, 7), // "submenu"
QT_MOC_LITERAL(15, 173, 13), // "initialScreen"
QT_MOC_LITERAL(16, 187, 14), // "gotoHomeScreen"
QT_MOC_LITERAL(17, 202, 13), // "gotoWebScreen"
QT_MOC_LITERAL(18, 216, 21), // "injectedJavaScriptUrl"
QT_MOC_LITERAL(19, 238, 13), // "loadOtherBase"
QT_MOC_LITERAL(20, 252, 13), // "loadQMLSource"
QT_MOC_LITERAL(21, 266, 4), // "path"
QT_MOC_LITERAL(22, 271, 9), // "resizable"
QT_MOC_LITERAL(23, 281, 13), // "pushOntoStack"
QT_MOC_LITERAL(24, 295, 12), // "popFromStack"
QT_MOC_LITERAL(25, 308, 12), // "loadQMLOnTop"
QT_MOC_LITERAL(26, 321, 18), // "loadWebScreenOnTop"
QT_MOC_LITERAL(27, 340, 19), // "returnToPreviousApp"
QT_MOC_LITERAL(28, 360, 19), // "isMessageDialogOpen"
QT_MOC_LITERAL(29, 380, 11), // "closeDialog"
QT_MOC_LITERAL(30, 392, 9), // "addButton"
QT_MOC_LITERAL(31, 402, 18), // "TabletButtonProxy*"
QT_MOC_LITERAL(32, 421, 10), // "properties"
QT_MOC_LITERAL(33, 432, 12), // "removeButton"
QT_MOC_LITERAL(34, 445, 17), // "tabletButtonProxy"
QT_MOC_LITERAL(35, 463, 15), // "emitScriptEvent"
QT_MOC_LITERAL(36, 479, 9), // "sendToQml"
QT_MOC_LITERAL(37, 489, 12), // "onHomeScreen"
QT_MOC_LITERAL(38, 502, 12), // "setLandscape"
QT_MOC_LITERAL(39, 515, 9), // "landscape"
QT_MOC_LITERAL(40, 525, 12), // "getLandscape"
QT_MOC_LITERAL(41, 538, 12), // "isPathLoaded"
QT_MOC_LITERAL(42, 551, 4), // "name"
QT_MOC_LITERAL(43, 556, 11), // "toolbarMode"
QT_MOC_LITERAL(44, 568, 11), // "tabletShown"
QT_MOC_LITERAL(45, 580, 7), // "buttons"
QT_MOC_LITERAL(46, 588, 22) // "TabletButtonListModel*"

    },
    "TabletProxy\0webEventReceived\0\0msg\0"
    "fromQml\0screenChanged\0type\0url\0"
    "tabletShownChanged\0toolbarModeChanged\0"
    "desktopWindowClosed\0emitWebEvent\0"
    "onTabletShown\0gotoMenuScreen\0submenu\0"
    "initialScreen\0gotoHomeScreen\0gotoWebScreen\0"
    "injectedJavaScriptUrl\0loadOtherBase\0"
    "loadQMLSource\0path\0resizable\0pushOntoStack\0"
    "popFromStack\0loadQMLOnTop\0loadWebScreenOnTop\0"
    "returnToPreviousApp\0isMessageDialogOpen\0"
    "closeDialog\0addButton\0TabletButtonProxy*\0"
    "properties\0removeButton\0tabletButtonProxy\0"
    "emitScriptEvent\0sendToQml\0onHomeScreen\0"
    "setLandscape\0landscape\0getLandscape\0"
    "isPathLoaded\0name\0toolbarMode\0tabletShown\0"
    "buttons\0TabletButtonListModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TabletProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       5,  266, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  179,    2, 0x06 /* Public */,
       4,    1,  182,    2, 0x06 /* Public */,
       5,    2,  185,    2, 0x06 /* Public */,
       8,    0,  190,    2, 0x06 /* Public */,
       9,    0,  191,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  192,    2, 0x09 /* Protected */,
      11,    1,  193,    2, 0x09 /* Protected */,
      12,    0,  196,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      13,    1,  197,    2, 0x02 /* Public */,
      13,    0,  200,    2, 0x22 /* Public | MethodCloned */,
      15,    1,  201,    2, 0x02 /* Public */,
      16,    0,  204,    2, 0x02 /* Public */,
      17,    1,  205,    2, 0x02 /* Public */,
      17,    3,  208,    2, 0x02 /* Public */,
      17,    2,  215,    2, 0x22 /* Public | MethodCloned */,
      20,    2,  220,    2, 0x02 /* Public */,
      20,    1,  225,    2, 0x22 /* Public | MethodCloned */,
      23,    1,  228,    2, 0x02 /* Public */,
      24,    0,  231,    2, 0x02 /* Public */,
      25,    1,  232,    2, 0x02 /* Public */,
      26,    1,  235,    2, 0x02 /* Public */,
      26,    2,  238,    2, 0x02 /* Public */,
      27,    0,  243,    2, 0x02 /* Public */,
      28,    0,  244,    2, 0x02 /* Public */,
      29,    0,  245,    2, 0x02 /* Public */,
      30,    1,  246,    2, 0x02 /* Public */,
      33,    1,  249,    2, 0x02 /* Public */,
      35,    1,  252,    2, 0x02 /* Public */,
      36,    1,  255,    2, 0x02 /* Public */,
      37,    0,  258,    2, 0x02 /* Public */,
      38,    1,  259,    2, 0x02 /* Public */,
      40,    0,  262,    2, 0x02 /* Public */,
      41,    1,  263,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant, QMetaType::QVariant,    6,    7,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    7,   18,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   18,
    QMetaType::Void, QMetaType::QVariant, QMetaType::Bool,   21,   22,
    QMetaType::Void, QMetaType::QVariant,   21,
    QMetaType::Bool, QMetaType::QVariant,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,   21,
    QMetaType::Void, QMetaType::QVariant,    7,
    QMetaType::Void, QMetaType::QVariant, QMetaType::QString,    7,   18,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    0x80000000 | 31, QMetaType::QVariant,   32,
    QMetaType::Void, 0x80000000 | 31,   34,
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QVariant,   21,

 // properties: name, type, flags
      42, QMetaType::QString, 0x00095001,
      43, QMetaType::Bool, 0x00495103,
      39, QMetaType::Bool, 0x00095103,
      44, QMetaType::Bool, 0x00495003,
      45, 0x80000000 | 46, 0x00095409,

 // properties: notify_signal_id
       0,
       4,
       0,
       3,
       0,

       0        // eod
};

void TabletProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TabletProxy *_t = static_cast<TabletProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->webEventReceived((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 1: _t->fromQml((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 2: _t->screenChanged((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 3: _t->tabletShownChanged(); break;
        case 4: _t->toolbarModeChanged(); break;
        case 5: _t->desktopWindowClosed(); break;
        case 6: _t->emitWebEvent((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 7: _t->onTabletShown(); break;
        case 8: _t->gotoMenuScreen((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->gotoMenuScreen(); break;
        case 10: _t->initialScreen((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 11: _t->gotoHomeScreen(); break;
        case 12: _t->gotoWebScreen((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->gotoWebScreen((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 14: _t->gotoWebScreen((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: _t->loadQMLSource((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: _t->loadQMLSource((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 17: { bool _r = _t->pushOntoStack((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->popFromStack(); break;
        case 19: _t->loadQMLOnTop((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 20: _t->loadWebScreenOnTop((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 21: _t->loadWebScreenOnTop((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 22: _t->returnToPreviousApp(); break;
        case 23: { bool _r = _t->isMessageDialogOpen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: _t->closeDialog(); break;
        case 25: { TabletButtonProxy* _r = _t->addButton((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< TabletButtonProxy**>(_a[0]) = std::move(_r); }  break;
        case 26: _t->removeButton((*reinterpret_cast< TabletButtonProxy*(*)>(_a[1]))); break;
        case 27: _t->emitScriptEvent((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 28: _t->sendToQml((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 29: { bool _r = _t->onHomeScreen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->setLandscape((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: { bool _r = _t->getLandscape();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 32: { bool _r = _t->isPathLoaded((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TabletButtonProxy* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TabletProxy::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabletProxy::webEventReceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TabletProxy::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabletProxy::fromQml)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TabletProxy::*)(QVariant , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabletProxy::screenChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TabletProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabletProxy::tabletShownChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TabletProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabletProxy::toolbarModeChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TabletButtonListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TabletProxy *_t = static_cast<TabletProxy *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getName(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getToolbarMode(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getLandscape(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->_tabletShown; break;
        case 4: *reinterpret_cast< TabletButtonListModel**>(_v) = _t->getButtons(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TabletProxy *_t = static_cast<TabletProxy *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setToolbarMode(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setLandscape(*reinterpret_cast< bool*>(_v)); break;
        case 3:
            if (_t->_tabletShown != *reinterpret_cast< bool*>(_v)) {
                _t->_tabletShown = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->tabletShownChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TabletProxy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TabletProxy.data,
      qt_meta_data_TabletProxy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TabletProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TabletProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TabletProxy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TabletProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TabletProxy::webEventReceived(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TabletProxy::fromQml(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TabletProxy::screenChanged(QVariant _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TabletProxy::tabletShownChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TabletProxy::toolbarModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_TabletButtonProxy_t {
    QByteArrayData data[8];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TabletButtonProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TabletButtonProxy_t qt_meta_stringdata_TabletButtonProxy = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TabletButtonProxy"
QT_MOC_LITERAL(1, 18, 7), // "clicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 17), // "propertiesChanged"
QT_MOC_LITERAL(4, 45, 13), // "getProperties"
QT_MOC_LITERAL(5, 59, 14), // "editProperties"
QT_MOC_LITERAL(6, 74, 10), // "properties"
QT_MOC_LITERAL(7, 85, 4) // "uuid"

    },
    "TabletButtonProxy\0clicked\0\0propertiesChanged\0"
    "getProperties\0editProperties\0properties\0"
    "uuid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TabletButtonProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x02 /* Public */,
       5,    1,   37,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    6,

 // properties: name, type, flags
       7, QMetaType::QUuid, 0x00095001,
       6, QMetaType::QVariantMap, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void TabletButtonProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TabletButtonProxy *_t = static_cast<TabletButtonProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->propertiesChanged(); break;
        case 2: { QVariantMap _r = _t->getProperties();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->editProperties((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TabletButtonProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabletButtonProxy::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TabletButtonProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabletButtonProxy::propertiesChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TabletButtonProxy *_t = static_cast<TabletButtonProxy *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUuid*>(_v) = _t->getUuid(); break;
        case 1: *reinterpret_cast< QVariantMap*>(_v) = _t->getProperties(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TabletButtonProxy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TabletButtonProxy.data,
      qt_meta_data_TabletButtonProxy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TabletButtonProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TabletButtonProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TabletButtonProxy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TabletButtonProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TabletButtonProxy::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TabletButtonProxy::propertiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
