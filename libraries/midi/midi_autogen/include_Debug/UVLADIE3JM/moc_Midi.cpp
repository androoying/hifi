/****************************************************************************
** Meta object code from reading C++ file 'Midi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Midi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Midi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Midi_t {
    QByteArrayData data[34];
    char stringdata0[435];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Midi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Midi_t qt_meta_stringdata_Midi = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Midi"
QT_MOC_LITERAL(1, 5, 8), // "midiNote"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 9), // "eventData"
QT_MOC_LITERAL(4, 25, 11), // "midiMessage"
QT_MOC_LITERAL(5, 37, 9), // "midiReset"
QT_MOC_LITERAL(6, 47, 12), // "sendRawDword"
QT_MOC_LITERAL(7, 60, 6), // "device"
QT_MOC_LITERAL(8, 67, 3), // "raw"
QT_MOC_LITERAL(9, 71, 15), // "sendMidiMessage"
QT_MOC_LITERAL(10, 87, 7), // "channel"
QT_MOC_LITERAL(11, 95, 4), // "type"
QT_MOC_LITERAL(12, 100, 4), // "note"
QT_MOC_LITERAL(13, 105, 8), // "velocity"
QT_MOC_LITERAL(14, 114, 12), // "playMidiNote"
QT_MOC_LITERAL(15, 127, 6), // "status"
QT_MOC_LITERAL(16, 134, 11), // "allNotesOff"
QT_MOC_LITERAL(17, 146, 12), // "resetDevices"
QT_MOC_LITERAL(18, 159, 15), // "listMidiDevices"
QT_MOC_LITERAL(19, 175, 6), // "output"
QT_MOC_LITERAL(20, 182, 15), // "blockMidiDevice"
QT_MOC_LITERAL(21, 198, 4), // "name"
QT_MOC_LITERAL(22, 203, 17), // "unblockMidiDevice"
QT_MOC_LITERAL(23, 221, 14), // "thruModeEnable"
QT_MOC_LITERAL(24, 236, 6), // "enable"
QT_MOC_LITERAL(25, 243, 15), // "broadcastEnable"
QT_MOC_LITERAL(26, 259, 17), // "typeNoteOffEnable"
QT_MOC_LITERAL(27, 277, 16), // "typeNoteOnEnable"
QT_MOC_LITERAL(28, 294, 25), // "typePolyKeyPressureEnable"
QT_MOC_LITERAL(29, 320, 23), // "typeControlChangeEnable"
QT_MOC_LITERAL(30, 344, 23), // "typeProgramChangeEnable"
QT_MOC_LITERAL(31, 368, 22), // "typeChanPressureEnable"
QT_MOC_LITERAL(32, 391, 19), // "typePitchBendEnable"
QT_MOC_LITERAL(33, 411, 23) // "typeSystemMessageEnable"

    },
    "Midi\0midiNote\0\0eventData\0midiMessage\0"
    "midiReset\0sendRawDword\0device\0raw\0"
    "sendMidiMessage\0channel\0type\0note\0"
    "velocity\0playMidiNote\0status\0allNotesOff\0"
    "resetDevices\0listMidiDevices\0output\0"
    "blockMidiDevice\0name\0unblockMidiDevice\0"
    "thruModeEnable\0enable\0broadcastEnable\0"
    "typeNoteOffEnable\0typeNoteOnEnable\0"
    "typePolyKeyPressureEnable\0"
    "typeControlChangeEnable\0typeProgramChangeEnable\0"
    "typeChanPressureEnable\0typePitchBendEnable\0"
    "typeSystemMessageEnable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Midi[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       4,    1,  122,    2, 0x06 /* Public */,
       5,    0,  125,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,  126,    2, 0x0a /* Public */,
       9,    5,  131,    2, 0x0a /* Public */,
      14,    3,  142,    2, 0x0a /* Public */,
      16,    0,  149,    2, 0x0a /* Public */,
      17,    0,  150,    2, 0x0a /* Public */,
      18,    1,  151,    2, 0x0a /* Public */,
      20,    2,  154,    2, 0x0a /* Public */,
      22,    2,  159,    2, 0x0a /* Public */,
      23,    1,  164,    2, 0x0a /* Public */,
      25,    1,  167,    2, 0x0a /* Public */,
      26,    1,  170,    2, 0x0a /* Public */,
      27,    1,  173,    2, 0x0a /* Public */,
      28,    1,  176,    2, 0x0a /* Public */,
      29,    1,  179,    2, 0x0a /* Public */,
      30,    1,  182,    2, 0x0a /* Public */,
      31,    1,  185,    2, 0x0a /* Public */,
      32,    1,  188,    2, 0x0a /* Public */,
      33,    1,  191,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariantMap,    3,
    QMetaType::Void, QMetaType::QVariantMap,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    7,   10,   11,   12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   15,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QStringList, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   21,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   21,   19,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   24,

       0        // eod
};

void Midi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Midi *_t = static_cast<Midi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->midiNote((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 1: _t->midiMessage((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 2: _t->midiReset(); break;
        case 3: _t->sendRawDword((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->sendMidiMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 5: _t->playMidiNote((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->allNotesOff(); break;
        case 7: _t->resetDevices(); break;
        case 8: { QStringList _r = _t->listMidiDevices((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->blockMidiDevice((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->unblockMidiDevice((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->thruModeEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->broadcastEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->typeNoteOffEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->typeNoteOnEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->typePolyKeyPressureEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->typeControlChangeEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->typeProgramChangeEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->typeChanPressureEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->typePitchBendEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->typeSystemMessageEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Midi::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Midi::midiNote)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Midi::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Midi::midiMessage)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Midi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Midi::midiReset)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Midi::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Midi.data,
      qt_meta_data_Midi,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Midi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Midi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Midi.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int Midi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void Midi::midiNote(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Midi::midiMessage(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Midi::midiReset()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
