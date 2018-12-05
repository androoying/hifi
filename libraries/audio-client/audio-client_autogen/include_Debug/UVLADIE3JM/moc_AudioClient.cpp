/****************************************************************************
** Meta object code from reading C++ file 'AudioClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AudioClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioClient_t {
    QByteArrayData data[115];
    char stringdata0[1769];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioClient_t qt_meta_stringdata_AudioClient = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AudioClient"
QT_MOC_LITERAL(1, 12, 18), // "inputVolumeChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 6), // "volume"
QT_MOC_LITERAL(4, 39, 11), // "muteToggled"
QT_MOC_LITERAL(5, 51, 5), // "muted"
QT_MOC_LITERAL(6, 57, 21), // "noiseReductionChanged"
QT_MOC_LITERAL(7, 79, 21), // "noiseReductionEnabled"
QT_MOC_LITERAL(8, 101, 12), // "mutedByMixer"
QT_MOC_LITERAL(9, 114, 13), // "inputReceived"
QT_MOC_LITERAL(10, 128, 12), // "inputSamples"
QT_MOC_LITERAL(11, 141, 20), // "inputLoudnessChanged"
QT_MOC_LITERAL(12, 162, 8), // "loudness"
QT_MOC_LITERAL(13, 171, 20), // "outputBytesToNetwork"
QT_MOC_LITERAL(14, 192, 8), // "numBytes"
QT_MOC_LITERAL(15, 201, 21), // "inputBytesFromNetwork"
QT_MOC_LITERAL(16, 223, 15), // "noiseGateOpened"
QT_MOC_LITERAL(17, 239, 15), // "noiseGateClosed"
QT_MOC_LITERAL(18, 255, 12), // "changeDevice"
QT_MOC_LITERAL(19, 268, 16), // "QAudioDeviceInfo"
QT_MOC_LITERAL(20, 285, 16), // "outputDeviceInfo"
QT_MOC_LITERAL(21, 302, 13), // "deviceChanged"
QT_MOC_LITERAL(22, 316, 12), // "QAudio::Mode"
QT_MOC_LITERAL(23, 329, 4), // "mode"
QT_MOC_LITERAL(24, 334, 6), // "device"
QT_MOC_LITERAL(25, 341, 14), // "devicesChanged"
QT_MOC_LITERAL(26, 356, 23), // "QList<QAudioDeviceInfo>"
QT_MOC_LITERAL(27, 380, 7), // "devices"
QT_MOC_LITERAL(28, 388, 20), // "peakValueListChanged"
QT_MOC_LITERAL(29, 409, 12), // "QList<float>"
QT_MOC_LITERAL(30, 422, 13), // "peakValueList"
QT_MOC_LITERAL(31, 436, 19), // "receivedFirstPacket"
QT_MOC_LITERAL(32, 456, 12), // "disconnected"
QT_MOC_LITERAL(33, 469, 13), // "audioFinished"
QT_MOC_LITERAL(34, 483, 24), // "muteEnvironmentRequested"
QT_MOC_LITERAL(35, 508, 9), // "glm::vec3"
QT_MOC_LITERAL(36, 518, 8), // "position"
QT_MOC_LITERAL(37, 527, 6), // "radius"
QT_MOC_LITERAL(38, 534, 20), // "outputBufferReceived"
QT_MOC_LITERAL(39, 555, 13), // "_outputBuffer"
QT_MOC_LITERAL(40, 569, 5), // "start"
QT_MOC_LITERAL(41, 575, 4), // "stop"
QT_MOC_LITERAL(42, 580, 32), // "handleAudioEnvironmentDataPacket"
QT_MOC_LITERAL(43, 613, 31), // "QSharedPointer<ReceivedMessage>"
QT_MOC_LITERAL(44, 645, 7), // "message"
QT_MOC_LITERAL(45, 653, 21), // "handleAudioDataPacket"
QT_MOC_LITERAL(46, 675, 21), // "handleNoisyMutePacket"
QT_MOC_LITERAL(47, 697, 27), // "handleMuteEnvironmentPacket"
QT_MOC_LITERAL(48, 725, 25), // "handleSelectedAudioFormat"
QT_MOC_LITERAL(49, 751, 25), // "handleMismatchAudioFormat"
QT_MOC_LITERAL(50, 777, 17), // "SharedNodePointer"
QT_MOC_LITERAL(51, 795, 4), // "node"
QT_MOC_LITERAL(52, 800, 12), // "currentCodec"
QT_MOC_LITERAL(53, 813, 13), // "recievedCodec"
QT_MOC_LITERAL(54, 827, 30), // "sendDownstreamAudioStatsPacket"
QT_MOC_LITERAL(55, 858, 19), // "handleMicAudioInput"
QT_MOC_LITERAL(56, 878, 22), // "audioInputStateChanged"
QT_MOC_LITERAL(57, 901, 13), // "QAudio::State"
QT_MOC_LITERAL(58, 915, 5), // "state"
QT_MOC_LITERAL(59, 921, 17), // "checkInputTimeout"
QT_MOC_LITERAL(60, 939, 21), // "handleDummyAudioInput"
QT_MOC_LITERAL(61, 961, 24), // "handleRecordedAudioInput"
QT_MOC_LITERAL(62, 986, 5), // "audio"
QT_MOC_LITERAL(63, 992, 5), // "reset"
QT_MOC_LITERAL(64, 998, 16), // "audioMixerKilled"
QT_MOC_LITERAL(65, 1015, 8), // "setMuted"
QT_MOC_LITERAL(66, 1024, 10), // "emitSignal"
QT_MOC_LITERAL(67, 1035, 7), // "isMuted"
QT_MOC_LITERAL(68, 1043, 16), // "setIsStereoInput"
QT_MOC_LITERAL(69, 1060, 6), // "stereo"
QT_MOC_LITERAL(70, 1067, 13), // "isStereoInput"
QT_MOC_LITERAL(71, 1081, 17), // "setNoiseReduction"
QT_MOC_LITERAL(72, 1099, 18), // "isNoiseGateEnabled"
QT_MOC_LITERAL(73, 1118, 23), // "isNoiseReductionEnabled"
QT_MOC_LITERAL(74, 1142, 12), // "getLocalEcho"
QT_MOC_LITERAL(75, 1155, 12), // "setLocalEcho"
QT_MOC_LITERAL(76, 1168, 9), // "localEcho"
QT_MOC_LITERAL(77, 1178, 15), // "toggleLocalEcho"
QT_MOC_LITERAL(78, 1194, 13), // "getServerEcho"
QT_MOC_LITERAL(79, 1208, 13), // "setServerEcho"
QT_MOC_LITERAL(80, 1222, 10), // "serverEcho"
QT_MOC_LITERAL(81, 1233, 16), // "toggleServerEcho"
QT_MOC_LITERAL(82, 1250, 22), // "processReceivedSamples"
QT_MOC_LITERAL(83, 1273, 11), // "inputBuffer"
QT_MOC_LITERAL(84, 1285, 11), // "QByteArray&"
QT_MOC_LITERAL(85, 1297, 12), // "outputBuffer"
QT_MOC_LITERAL(86, 1310, 25), // "sendMuteEnvironmentPacket"
QT_MOC_LITERAL(87, 1336, 19), // "setOutputBufferSize"
QT_MOC_LITERAL(88, 1356, 9), // "numFrames"
QT_MOC_LITERAL(89, 1366, 7), // "persist"
QT_MOC_LITERAL(90, 1374, 23), // "shouldLoopbackInjectors"
QT_MOC_LITERAL(91, 1398, 17), // "switchAudioDevice"
QT_MOC_LITERAL(92, 1416, 10), // "deviceInfo"
QT_MOC_LITERAL(93, 1427, 10), // "deviceName"
QT_MOC_LITERAL(94, 1438, 19), // "setHeadsetPluggedIn"
QT_MOC_LITERAL(95, 1458, 9), // "pluggedIn"
QT_MOC_LITERAL(96, 1468, 14), // "getInputVolume"
QT_MOC_LITERAL(97, 1483, 14), // "setInputVolume"
QT_MOC_LITERAL(98, 1498, 9), // "setReverb"
QT_MOC_LITERAL(99, 1508, 6), // "reverb"
QT_MOC_LITERAL(100, 1515, 16), // "setReverbOptions"
QT_MOC_LITERAL(101, 1532, 25), // "const AudioEffectOptions*"
QT_MOC_LITERAL(102, 1558, 7), // "options"
QT_MOC_LITERAL(103, 1566, 12), // "outputNotify"
QT_MOC_LITERAL(104, 1579, 12), // "loadSettings"
QT_MOC_LITERAL(105, 1592, 12), // "saveSettings"
QT_MOC_LITERAL(106, 1605, 22), // "getSelectedAudioFormat"
QT_MOC_LITERAL(107, 1628, 16), // "getNoiseGateOpen"
QT_MOC_LITERAL(108, 1645, 19), // "getSilentInboundPPS"
QT_MOC_LITERAL(109, 1665, 18), // "getAudioInboundPPS"
QT_MOC_LITERAL(110, 1684, 20), // "getSilentOutboundPPS"
QT_MOC_LITERAL(111, 1705, 19), // "getAudioOutboundPPS"
QT_MOC_LITERAL(112, 1725, 30), // "setAvatarBoundingBoxParameters"
QT_MOC_LITERAL(113, 1756, 6), // "corner"
QT_MOC_LITERAL(114, 1763, 5) // "scale"

    },
    "AudioClient\0inputVolumeChanged\0\0volume\0"
    "muteToggled\0muted\0noiseReductionChanged\0"
    "noiseReductionEnabled\0mutedByMixer\0"
    "inputReceived\0inputSamples\0"
    "inputLoudnessChanged\0loudness\0"
    "outputBytesToNetwork\0numBytes\0"
    "inputBytesFromNetwork\0noiseGateOpened\0"
    "noiseGateClosed\0changeDevice\0"
    "QAudioDeviceInfo\0outputDeviceInfo\0"
    "deviceChanged\0QAudio::Mode\0mode\0device\0"
    "devicesChanged\0QList<QAudioDeviceInfo>\0"
    "devices\0peakValueListChanged\0QList<float>\0"
    "peakValueList\0receivedFirstPacket\0"
    "disconnected\0audioFinished\0"
    "muteEnvironmentRequested\0glm::vec3\0"
    "position\0radius\0outputBufferReceived\0"
    "_outputBuffer\0start\0stop\0"
    "handleAudioEnvironmentDataPacket\0"
    "QSharedPointer<ReceivedMessage>\0message\0"
    "handleAudioDataPacket\0handleNoisyMutePacket\0"
    "handleMuteEnvironmentPacket\0"
    "handleSelectedAudioFormat\0"
    "handleMismatchAudioFormat\0SharedNodePointer\0"
    "node\0currentCodec\0recievedCodec\0"
    "sendDownstreamAudioStatsPacket\0"
    "handleMicAudioInput\0audioInputStateChanged\0"
    "QAudio::State\0state\0checkInputTimeout\0"
    "handleDummyAudioInput\0handleRecordedAudioInput\0"
    "audio\0reset\0audioMixerKilled\0setMuted\0"
    "emitSignal\0isMuted\0setIsStereoInput\0"
    "stereo\0isStereoInput\0setNoiseReduction\0"
    "isNoiseGateEnabled\0isNoiseReductionEnabled\0"
    "getLocalEcho\0setLocalEcho\0localEcho\0"
    "toggleLocalEcho\0getServerEcho\0"
    "setServerEcho\0serverEcho\0toggleServerEcho\0"
    "processReceivedSamples\0inputBuffer\0"
    "QByteArray&\0outputBuffer\0"
    "sendMuteEnvironmentPacket\0setOutputBufferSize\0"
    "numFrames\0persist\0shouldLoopbackInjectors\0"
    "switchAudioDevice\0deviceInfo\0deviceName\0"
    "setHeadsetPluggedIn\0pluggedIn\0"
    "getInputVolume\0setInputVolume\0setReverb\0"
    "reverb\0setReverbOptions\0"
    "const AudioEffectOptions*\0options\0"
    "outputNotify\0loadSettings\0saveSettings\0"
    "getSelectedAudioFormat\0getNoiseGateOpen\0"
    "getSilentInboundPPS\0getAudioInboundPPS\0"
    "getSilentOutboundPPS\0getAudioOutboundPPS\0"
    "setAvatarBoundingBoxParameters\0corner\0"
    "scale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      73,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  379,    2, 0x06 /* Public */,
       4,    1,  382,    2, 0x06 /* Public */,
       6,    1,  385,    2, 0x06 /* Public */,
       8,    0,  388,    2, 0x06 /* Public */,
       9,    1,  389,    2, 0x06 /* Public */,
      11,    1,  392,    2, 0x06 /* Public */,
      13,    1,  395,    2, 0x06 /* Public */,
      15,    1,  398,    2, 0x06 /* Public */,
      16,    0,  401,    2, 0x06 /* Public */,
      17,    0,  402,    2, 0x06 /* Public */,
      18,    1,  403,    2, 0x06 /* Public */,
      21,    2,  406,    2, 0x06 /* Public */,
      25,    2,  411,    2, 0x06 /* Public */,
      28,    1,  416,    2, 0x06 /* Public */,
      31,    0,  419,    2, 0x06 /* Public */,
      32,    0,  420,    2, 0x06 /* Public */,
      33,    0,  421,    2, 0x06 /* Public */,
      34,    2,  422,    2, 0x06 /* Public */,
      38,    1,  427,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      40,    0,  430,    2, 0x0a /* Public */,
      41,    0,  431,    2, 0x0a /* Public */,
      42,    1,  432,    2, 0x0a /* Public */,
      45,    1,  435,    2, 0x0a /* Public */,
      46,    1,  438,    2, 0x0a /* Public */,
      47,    1,  441,    2, 0x0a /* Public */,
      48,    1,  444,    2, 0x0a /* Public */,
      49,    3,  447,    2, 0x0a /* Public */,
      54,    0,  454,    2, 0x0a /* Public */,
      55,    0,  455,    2, 0x0a /* Public */,
      56,    1,  456,    2, 0x0a /* Public */,
      59,    0,  459,    2, 0x0a /* Public */,
      60,    0,  460,    2, 0x0a /* Public */,
      61,    1,  461,    2, 0x0a /* Public */,
      63,    0,  464,    2, 0x0a /* Public */,
      64,    0,  465,    2, 0x0a /* Public */,
      65,    2,  466,    2, 0x0a /* Public */,
      65,    1,  471,    2, 0x2a /* Public | MethodCloned */,
      67,    0,  474,    2, 0x0a /* Public */,
      68,    1,  475,    2, 0x0a /* Public */,
      70,    0,  478,    2, 0x0a /* Public */,
      71,    2,  479,    2, 0x0a /* Public */,
      71,    1,  484,    2, 0x2a /* Public | MethodCloned */,
      73,    0,  487,    2, 0x0a /* Public */,
      74,    0,  488,    2, 0x0a /* Public */,
      75,    1,  489,    2, 0x0a /* Public */,
      77,    0,  492,    2, 0x0a /* Public */,
      78,    0,  493,    2, 0x0a /* Public */,
      79,    1,  494,    2, 0x0a /* Public */,
      81,    0,  497,    2, 0x0a /* Public */,
      82,    2,  498,    2, 0x0a /* Public */,
      86,    0,  503,    2, 0x0a /* Public */,
      87,    2,  504,    2, 0x0a /* Public */,
      87,    1,  509,    2, 0x2a /* Public | MethodCloned */,
      90,    0,  512,    2, 0x0a /* Public */,
      91,    2,  513,    2, 0x0a /* Public */,
      91,    1,  518,    2, 0x2a /* Public | MethodCloned */,
      91,    2,  521,    2, 0x0a /* Public */,
      94,    1,  526,    2, 0x0a /* Public */,
      96,    0,  529,    2, 0x0a /* Public */,
      97,    2,  530,    2, 0x0a /* Public */,
      97,    1,  535,    2, 0x2a /* Public | MethodCloned */,
      98,    1,  538,    2, 0x0a /* Public */,
     100,    1,  541,    2, 0x0a /* Public */,
     103,    0,  544,    2, 0x0a /* Public */,
     104,    0,  545,    2, 0x0a /* Public */,
     105,    0,  546,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
     106,    0,  547,    2, 0x02 /* Public */,
     107,    0,  548,    2, 0x02 /* Public */,
     108,    0,  549,    2, 0x02 /* Public */,
     109,    0,  550,    2, 0x02 /* Public */,
     110,    0,  551,    2, 0x02 /* Public */,
     111,    0,  552,    2, 0x02 /* Public */,
     112,    2,  553,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   10,
    QMetaType::Void, QMetaType::Float,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22, 0x80000000 | 19,   23,   24,
    QMetaType::Void, 0x80000000 | 22, 0x80000000 | 26,   23,   27,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 35, QMetaType::Float,   36,   37,
    QMetaType::Void, QMetaType::QByteArray,   39,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Void, 0x80000000 | 50, QMetaType::QString, QMetaType::QString,   51,   52,   53,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 57,   58,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   62,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    5,   66,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Bool,   69,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   72,   66,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   76,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 84,   83,   85,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int, QMetaType::Bool,   88,   89,
    QMetaType::Int, QMetaType::Int,   88,
    QMetaType::Bool,
    QMetaType::Bool, 0x80000000 | 22, 0x80000000 | 19,   23,   92,
    QMetaType::Bool, 0x80000000 | 22,   23,
    QMetaType::Bool, 0x80000000 | 22, QMetaType::QString,   23,   93,
    QMetaType::Void, QMetaType::Bool,   95,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float, QMetaType::Bool,    3,   66,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Bool,   99,
    QMetaType::Void, 0x80000000 | 101,  102,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Void, 0x80000000 | 35, 0x80000000 | 35,  113,  114,

       0        // eod
};

void AudioClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AudioClient *_t = static_cast<AudioClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->inputVolumeChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->muteToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->noiseReductionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->mutedByMixer(); break;
        case 4: _t->inputReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 5: _t->inputLoudnessChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->outputBytesToNetwork((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->inputBytesFromNetwork((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->noiseGateOpened(); break;
        case 9: _t->noiseGateClosed(); break;
        case 10: _t->changeDevice((*reinterpret_cast< const QAudioDeviceInfo(*)>(_a[1]))); break;
        case 11: _t->deviceChanged((*reinterpret_cast< QAudio::Mode(*)>(_a[1])),(*reinterpret_cast< const QAudioDeviceInfo(*)>(_a[2]))); break;
        case 12: _t->devicesChanged((*reinterpret_cast< QAudio::Mode(*)>(_a[1])),(*reinterpret_cast< const QList<QAudioDeviceInfo>(*)>(_a[2]))); break;
        case 13: _t->peakValueListChanged((*reinterpret_cast< const QList<float>(*)>(_a[1]))); break;
        case 14: _t->receivedFirstPacket(); break;
        case 15: _t->disconnected(); break;
        case 16: _t->audioFinished(); break;
        case 17: _t->muteEnvironmentRequested((*reinterpret_cast< glm::vec3(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 18: _t->outputBufferReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 19: _t->start(); break;
        case 20: _t->stop(); break;
        case 21: _t->handleAudioEnvironmentDataPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 22: _t->handleAudioDataPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 23: _t->handleNoisyMutePacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 24: _t->handleMuteEnvironmentPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 25: _t->handleSelectedAudioFormat((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 26: _t->handleMismatchAudioFormat((*reinterpret_cast< SharedNodePointer(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 27: _t->sendDownstreamAudioStatsPacket(); break;
        case 28: _t->handleMicAudioInput(); break;
        case 29: _t->audioInputStateChanged((*reinterpret_cast< QAudio::State(*)>(_a[1]))); break;
        case 30: _t->checkInputTimeout(); break;
        case 31: _t->handleDummyAudioInput(); break;
        case 32: _t->handleRecordedAudioInput((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 33: _t->reset(); break;
        case 34: _t->audioMixerKilled(); break;
        case 35: _t->setMuted((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 36: _t->setMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: { bool _r = _t->isMuted();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 38: { bool _r = _t->setIsStereoInput((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 39: { bool _r = _t->isStereoInput();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 40: _t->setNoiseReduction((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 41: _t->setNoiseReduction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: { bool _r = _t->isNoiseReductionEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 43: { bool _r = _t->getLocalEcho();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 44: _t->setLocalEcho((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->toggleLocalEcho(); break;
        case 46: { bool _r = _t->getServerEcho();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 47: _t->setServerEcho((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->toggleServerEcho(); break;
        case 49: _t->processReceivedSamples((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 50: _t->sendMuteEnvironmentPacket(); break;
        case 51: { int _r = _t->setOutputBufferSize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 52: { int _r = _t->setOutputBufferSize((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 53: { bool _r = _t->shouldLoopbackInjectors();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 54: { bool _r = _t->switchAudioDevice((*reinterpret_cast< QAudio::Mode(*)>(_a[1])),(*reinterpret_cast< const QAudioDeviceInfo(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 55: { bool _r = _t->switchAudioDevice((*reinterpret_cast< QAudio::Mode(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 56: { bool _r = _t->switchAudioDevice((*reinterpret_cast< QAudio::Mode(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 57: _t->setHeadsetPluggedIn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 58: { float _r = _t->getInputVolume();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 59: _t->setInputVolume((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 60: _t->setInputVolume((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 61: _t->setReverb((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 62: _t->setReverbOptions((*reinterpret_cast< const AudioEffectOptions*(*)>(_a[1]))); break;
        case 63: _t->outputNotify(); break;
        case 64: _t->loadSettings(); break;
        case 65: _t->saveSettings(); break;
        case 66: { QString _r = _t->getSelectedAudioFormat();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 67: { bool _r = _t->getNoiseGateOpen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 68: { float _r = _t->getSilentInboundPPS();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 69: { float _r = _t->getAudioInboundPPS();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 70: { float _r = _t->getSilentOutboundPPS();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 71: { float _r = _t->getAudioOutboundPPS();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 72: _t->setAvatarBoundingBoxParameters((*reinterpret_cast< glm::vec3(*)>(_a[1])),(*reinterpret_cast< glm::vec3(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioDeviceInfo >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudio::Mode >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioDeviceInfo >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudio::Mode >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QAudioDeviceInfo> >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<float> >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudio::State >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudio::Mode >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioDeviceInfo >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudio::Mode >(); break;
            }
            break;
        case 56:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudio::Mode >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AudioClient::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioClient::inputVolumeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AudioClient::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioClient::muteToggled)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AudioClient::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioClient::noiseReductionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AudioClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioClient::mutedByMixer)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AudioClient::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioClient::inputReceived)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AudioClient::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioClient::inputLoudnessChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AudioClient::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioClient::outputBytesToNetwork)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AudioClient::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioClient::inputBytesFromNetwork)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AudioClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioClient::noiseGateOpened)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (AudioClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioClient::noiseGateClosed)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (AudioClient::*)(const QAudioDeviceInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioClient::changeDevice)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (AudioClient::*)(QAudio::Mode , const QAudioDeviceInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioClient::deviceChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (AudioClient::*)(QAudio::Mode , const QList<QAudioDeviceInfo> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioClient::devicesChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (AudioClient::*)(const QList<float> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioClient::peakValueListChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (AudioClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioClient::receivedFirstPacket)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (AudioClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioClient::disconnected)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (AudioClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioClient::audioFinished)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (AudioClient::*)(glm::vec3 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioClient::muteEnvironmentRequested)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (AudioClient::*)(const QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioClient::outputBufferReceived)) {
                *result = 18;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AudioClient::staticMetaObject = {
    { &AbstractAudioInterface::staticMetaObject, qt_meta_stringdata_AudioClient.data,
      qt_meta_data_AudioClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AudioClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioClient.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return AbstractAudioInterface::qt_metacast(_clname);
}

int AudioClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractAudioInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 73)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 73;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 73)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 73;
    }
    return _id;
}

// SIGNAL 0
void AudioClient::inputVolumeChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AudioClient::muteToggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AudioClient::noiseReductionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AudioClient::mutedByMixer()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AudioClient::inputReceived(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AudioClient::inputLoudnessChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AudioClient::outputBytesToNetwork(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void AudioClient::inputBytesFromNetwork(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void AudioClient::noiseGateOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void AudioClient::noiseGateClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void AudioClient::changeDevice(const QAudioDeviceInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void AudioClient::deviceChanged(QAudio::Mode _t1, const QAudioDeviceInfo & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void AudioClient::devicesChanged(QAudio::Mode _t1, const QList<QAudioDeviceInfo> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void AudioClient::peakValueListChanged(const QList<float> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void AudioClient::receivedFirstPacket()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void AudioClient::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void AudioClient::audioFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void AudioClient::muteEnvironmentRequested(glm::vec3 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void AudioClient::outputBufferReceived(const QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
