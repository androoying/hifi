#version 410

out float gl_ClipDistance[1];

const vec2 _405[4] = vec2[](vec2(-1.0, 0.0), vec2(-1.0, 1.0), vec2(0.0), vec2(0.0, 1.0));
const vec4 _680[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

struct _TransformCamera
{
    mat4 _view;
    mat4 _viewInverse;
    mat4 _projectionViewUntranslated;
    mat4 _projection;
    mat4 _projectionInverse;
    vec4 _viewport;
    vec4 _stereoInfo;
};

struct Radii
{
    float start;
    float middle;
    float finish;
    float spread;
};

struct Colors
{
    vec4 start;
    vec4 middle;
    vec4 finish;
    vec4 spread;
};

struct Spin
{
    float start;
    float middle;
    float finish;
    float spread;
};

struct ParticleUniforms
{
    Radii radius;
    Colors color;
    Spin spin;
    float lifespan;
    int rotateWithEntity;
    vec2 spare;
};

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera[2];
} _cameraBlock;

layout(std140) uniform particleBuffer
{
    ParticleUniforms particle;
} _388;

uniform samplerBuffer transformObjectBuffer;

layout(location = 8) flat out int _stereoSide;
uniform int SPIRV_Cross_BaseInstance;
layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 2) in vec2 inColor;
layout(location = 1) out vec2 varTexcoord;
layout(location = 0) out vec4 varColor;
layout(location = 0) in vec3 inPosition;

float _1839;

void main()
{
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _745 = 8 * _drawCallInfo.x;
    int _374 = gl_VertexID - ((gl_VertexID / 4) * 4);
    float _392 = inColor.x / _388.particle.lifespan;
    varTexcoord = _405[_374];
    bool _861 = _392 <= 0.5;
    bool _865 = _861 && (_388.particle.color.start.x == _388.particle.color.middle.x);
    bool _875;
    if (!_865)
    {
        _875 = (_392 >= 0.5) && (_388.particle.color.middle.x == _388.particle.color.finish.x);
    }
    else
    {
        _875 = _865;
    }
    float _1987 = _875 ? _388.particle.color.middle.x : _1839;
    float _1836;
    if (!(_875 ? true : false))
    {
        bool _888 = (_388.particle.color.middle.x >= _388.particle.color.start.x) && (_388.particle.color.middle.x >= _388.particle.color.finish.x);
        bool _899;
        if (!_888)
        {
            _899 = (_388.particle.color.middle.x <= _388.particle.color.start.x) && (_388.particle.color.middle.x <= _388.particle.color.finish.x);
        }
        else
        {
            _899 = _888;
        }
        float _1833;
        if (_899)
        {
            _1833 = 0.0;
        }
        else
        {
            float _906 = (_388.particle.color.finish.x - _388.particle.color.start.x) * 0.5;
            float _909 = _388.particle.color.middle.x - _388.particle.color.start.x;
            float _912 = _388.particle.color.finish.x - _388.particle.color.middle.x;
            float _914 = abs(_906);
            float _1834;
            if (_914 > abs(_909))
            {
                _1834 = _909;
            }
            else
            {
                _1834 = (_914 > abs(_912)) ? _912 : _906;
            }
            _1833 = _1834;
        }
        float _931 = step(0.5, _392);
        float _936 = 1.0 - _931;
        float _960 = (2.0 * _392) - _931;
        float _970 = 1.0 - _960;
        _1836 = (((_970 * _970) * ((_936 * _388.particle.color.start.x) + (_931 * _388.particle.color.middle.x))) + (((2.0 * _970) * _960) * (_388.particle.color.middle.x + (((2.0 * _931) - 1.0) * _1833)))) + ((_960 * _960) * ((_936 * _388.particle.color.middle.x) + (_931 * _388.particle.color.finish.x)));
    }
    else
    {
        _1836 = _1987;
    }
    bool _1011 = _861 && (_388.particle.color.start.y == _388.particle.color.middle.y);
    bool _1021;
    if (!_1011)
    {
        _1021 = (_392 >= 0.5) && (_388.particle.color.middle.y == _388.particle.color.finish.y);
    }
    else
    {
        _1021 = _1011;
    }
    float _1990 = _1021 ? _388.particle.color.middle.y : _1839;
    float _1845;
    if (!(_1021 ? true : false))
    {
        bool _1034 = (_388.particle.color.middle.y >= _388.particle.color.start.y) && (_388.particle.color.middle.y >= _388.particle.color.finish.y);
        bool _1045;
        if (!_1034)
        {
            _1045 = (_388.particle.color.middle.y <= _388.particle.color.start.y) && (_388.particle.color.middle.y <= _388.particle.color.finish.y);
        }
        else
        {
            _1045 = _1034;
        }
        float _1842;
        if (_1045)
        {
            _1842 = 0.0;
        }
        else
        {
            float _1052 = (_388.particle.color.finish.y - _388.particle.color.start.y) * 0.5;
            float _1055 = _388.particle.color.middle.y - _388.particle.color.start.y;
            float _1058 = _388.particle.color.finish.y - _388.particle.color.middle.y;
            float _1060 = abs(_1052);
            float _1843;
            if (_1060 > abs(_1055))
            {
                _1843 = _1055;
            }
            else
            {
                _1843 = (_1060 > abs(_1058)) ? _1058 : _1052;
            }
            _1842 = _1843;
        }
        float _1077 = step(0.5, _392);
        float _1082 = 1.0 - _1077;
        float _1106 = (2.0 * _392) - _1077;
        float _1116 = 1.0 - _1106;
        _1845 = (((_1116 * _1116) * ((_1082 * _388.particle.color.start.y) + (_1077 * _388.particle.color.middle.y))) + (((2.0 * _1116) * _1106) * (_388.particle.color.middle.y + (((2.0 * _1077) - 1.0) * _1842)))) + ((_1106 * _1106) * ((_1082 * _388.particle.color.middle.y) + (_1077 * _388.particle.color.finish.y)));
    }
    else
    {
        _1845 = _1990;
    }
    bool _1157 = _861 && (_388.particle.color.start.z == _388.particle.color.middle.z);
    bool _1167;
    if (!_1157)
    {
        _1167 = (_392 >= 0.5) && (_388.particle.color.middle.z == _388.particle.color.finish.z);
    }
    else
    {
        _1167 = _1157;
    }
    float _1993 = _1167 ? _388.particle.color.middle.z : _1839;
    float _1860;
    if (!(_1167 ? true : false))
    {
        bool _1180 = (_388.particle.color.middle.z >= _388.particle.color.start.z) && (_388.particle.color.middle.z >= _388.particle.color.finish.z);
        bool _1191;
        if (!_1180)
        {
            _1191 = (_388.particle.color.middle.z <= _388.particle.color.start.z) && (_388.particle.color.middle.z <= _388.particle.color.finish.z);
        }
        else
        {
            _1191 = _1180;
        }
        float _1857;
        if (_1191)
        {
            _1857 = 0.0;
        }
        else
        {
            float _1198 = (_388.particle.color.finish.z - _388.particle.color.start.z) * 0.5;
            float _1201 = _388.particle.color.middle.z - _388.particle.color.start.z;
            float _1204 = _388.particle.color.finish.z - _388.particle.color.middle.z;
            float _1206 = abs(_1198);
            float _1858;
            if (_1206 > abs(_1201))
            {
                _1858 = _1201;
            }
            else
            {
                _1858 = (_1206 > abs(_1204)) ? _1204 : _1198;
            }
            _1857 = _1858;
        }
        float _1223 = step(0.5, _392);
        float _1228 = 1.0 - _1223;
        float _1252 = (2.0 * _392) - _1223;
        float _1262 = 1.0 - _1252;
        _1860 = (((_1262 * _1262) * ((_1228 * _388.particle.color.start.z) + (_1223 * _388.particle.color.middle.z))) + (((2.0 * _1262) * _1252) * (_388.particle.color.middle.z + (((2.0 * _1223) - 1.0) * _1857)))) + ((_1252 * _1252) * ((_1228 * _388.particle.color.middle.z) + (_1223 * _388.particle.color.finish.z)));
    }
    else
    {
        _1860 = _1993;
    }
    bool _1303 = _861 && (_388.particle.color.start.w == _388.particle.color.middle.w);
    bool _1313;
    if (!_1303)
    {
        _1313 = (_392 >= 0.5) && (_388.particle.color.middle.w == _388.particle.color.finish.w);
    }
    else
    {
        _1313 = _1303;
    }
    float _1996 = _1313 ? _388.particle.color.middle.w : _1839;
    float _1882;
    if (!(_1313 ? true : false))
    {
        bool _1326 = (_388.particle.color.middle.w >= _388.particle.color.start.w) && (_388.particle.color.middle.w >= _388.particle.color.finish.w);
        bool _1337;
        if (!_1326)
        {
            _1337 = (_388.particle.color.middle.w <= _388.particle.color.start.w) && (_388.particle.color.middle.w <= _388.particle.color.finish.w);
        }
        else
        {
            _1337 = _1326;
        }
        float _1879;
        if (_1337)
        {
            _1879 = 0.0;
        }
        else
        {
            float _1344 = (_388.particle.color.finish.w - _388.particle.color.start.w) * 0.5;
            float _1347 = _388.particle.color.middle.w - _388.particle.color.start.w;
            float _1350 = _388.particle.color.finish.w - _388.particle.color.middle.w;
            float _1352 = abs(_1344);
            float _1880;
            if (_1352 > abs(_1347))
            {
                _1880 = _1347;
            }
            else
            {
                _1880 = (_1352 > abs(_1350)) ? _1350 : _1344;
            }
            _1879 = _1880;
        }
        float _1369 = step(0.5, _392);
        float _1374 = 1.0 - _1369;
        float _1398 = (2.0 * _392) - _1369;
        float _1408 = 1.0 - _1398;
        _1882 = (((_1408 * _1408) * ((_1374 * _388.particle.color.start.w) + (_1369 * _388.particle.color.middle.w))) + (((2.0 * _1408) * _1398) * (_388.particle.color.middle.w + (((2.0 * _1369) - 1.0) * _1879)))) + ((_1398 * _1398) * ((_1374 * _388.particle.color.middle.w) + (_1369 * _388.particle.color.finish.w)));
    }
    else
    {
        _1882 = _1996;
    }
    varColor = vec4(_1836, _1845, _1860, _1882);
    vec3 _456 = clamp(varColor.xyz + (((vec3(fract(sin(inColor.y) * 43758.546875), fract(sin(inColor.y * 2.0) * 43758.546875), fract(sin(inColor.y * 3.0) * 43758.546875)) * 2.0) - vec3(1.0)) * _388.particle.color.spread.xyz), vec3(0.0), vec3(1.0));
    varColor = vec4(_456.x, _456.y, _456.z, varColor.w);
    varColor.w = clamp(varColor.w + (((2.0 * fract(sin(inColor.y * 4.0) * 43758.546875)) - 1.0) * _388.particle.color.spread.w), 0.0, 1.0);
    bool _1469 = _861 && (_388.particle.spin.start == _388.particle.spin.middle);
    bool _1479;
    if (!_1469)
    {
        _1479 = (_392 >= 0.5) && (_388.particle.spin.middle == _388.particle.spin.finish);
    }
    else
    {
        _1479 = _1469;
    }
    float _1999 = _1479 ? _388.particle.spin.middle : _1839;
    float _1911;
    if (!(_1479 ? true : false))
    {
        bool _1492 = (_388.particle.spin.middle >= _388.particle.spin.start) && (_388.particle.spin.middle >= _388.particle.spin.finish);
        bool _1503;
        if (!_1492)
        {
            _1503 = (_388.particle.spin.middle <= _388.particle.spin.start) && (_388.particle.spin.middle <= _388.particle.spin.finish);
        }
        else
        {
            _1503 = _1492;
        }
        float _1908;
        if (_1503)
        {
            _1908 = 0.0;
        }
        else
        {
            float _1510 = (_388.particle.spin.finish - _388.particle.spin.start) * 0.5;
            float _1513 = _388.particle.spin.middle - _388.particle.spin.start;
            float _1516 = _388.particle.spin.finish - _388.particle.spin.middle;
            float _1518 = abs(_1510);
            float _1909;
            if (_1518 > abs(_1513))
            {
                _1909 = _1513;
            }
            else
            {
                _1909 = (_1518 > abs(_1516)) ? _1516 : _1510;
            }
            _1908 = _1909;
        }
        float _1535 = step(0.5, _392);
        float _1540 = 1.0 - _1535;
        float _1564 = (2.0 * _392) - _1535;
        float _1574 = 1.0 - _1564;
        _1911 = (((_1574 * _1574) * ((_1540 * _388.particle.spin.start) + (_1535 * _388.particle.spin.middle))) + (((2.0 * _1574) * _1564) * (_388.particle.spin.middle + (((2.0 * _1535) - 1.0) * _1908)))) + ((_1564 * _1564) * ((_1540 * _388.particle.spin.middle) + (_1535 * _388.particle.spin.finish)));
    }
    else
    {
        _1911 = _1999;
    }
    float _503 = _1911 + (((2.0 * fract(sin(inColor.y * 5.0) * 43758.546875)) - 1.0) * _388.particle.spin.spread);
    bool _1620 = _861 && (_388.particle.radius.start == _388.particle.radius.middle);
    bool _1630;
    if (!_1620)
    {
        _1630 = (_392 >= 0.5) && (_388.particle.radius.middle == _388.particle.radius.finish);
    }
    else
    {
        _1630 = _1620;
    }
    float _2002 = _1630 ? _388.particle.radius.middle : _1839;
    float _1947;
    if (!(_1630 ? true : false))
    {
        bool _1643 = (_388.particle.radius.middle >= _388.particle.radius.start) && (_388.particle.radius.middle >= _388.particle.radius.finish);
        bool _1654;
        if (!_1643)
        {
            _1654 = (_388.particle.radius.middle <= _388.particle.radius.start) && (_388.particle.radius.middle <= _388.particle.radius.finish);
        }
        else
        {
            _1654 = _1643;
        }
        float _1944;
        if (_1654)
        {
            _1944 = 0.0;
        }
        else
        {
            float _1661 = (_388.particle.radius.finish - _388.particle.radius.start) * 0.5;
            float _1664 = _388.particle.radius.middle - _388.particle.radius.start;
            float _1667 = _388.particle.radius.finish - _388.particle.radius.middle;
            float _1669 = abs(_1661);
            float _1945;
            if (_1669 > abs(_1664))
            {
                _1945 = _1664;
            }
            else
            {
                _1945 = (_1669 > abs(_1667)) ? _1667 : _1661;
            }
            _1944 = _1945;
        }
        float _1686 = step(0.5, _392);
        float _1691 = 1.0 - _1686;
        float _1715 = (2.0 * _392) - _1686;
        float _1725 = 1.0 - _1715;
        _1947 = (((_1725 * _1725) * ((_1691 * _388.particle.radius.start) + (_1686 * _388.particle.radius.middle))) + (((2.0 * _1725) * _1715) * (_388.particle.radius.middle + (((2.0 * _1686) - 1.0) * _1944)))) + ((_1715 * _1715) * ((_1691 * _388.particle.radius.middle) + (_1686 * _388.particle.radius.finish)));
    }
    else
    {
        _1947 = _2002;
    }
    vec3 _601 = normalize(cross(vec3(0.0, 0.0, -1.0), normalize(mat3(_cameraBlock._camera[_stereoSide]._view[0].xyz, _cameraBlock._camera[_stereoSide]._view[1].xyz, _cameraBlock._camera[_stereoSide]._view[2].xyz) * mix(vec3(0.0, 1.0, 0.0), normalize(vec3(texelFetch(transformObjectBuffer, _745 + 4).y, texelFetch(transformObjectBuffer, _745 + 5).y, texelFetch(transformObjectBuffer, _745 + 6).y)), vec3(float(_388.particle.rotateWithEntity))))));
    vec3 _605 = cross(_601, vec3(0.0, 0.0, -1.0));
    vec3 _610 = -_601;
    vec3 UNIT_QUAD[4] = vec3[](normalize(_610 + _605), normalize(_610 - _605), normalize(_601 + _605), normalize(_601 - _605));
    float _630 = cos(_503);
    float _633 = sin(_503);
    gl_Position = _cameraBlock._camera[_stereoSide]._projection * vec4(((_cameraBlock._camera[_stereoSide]._view * vec4(inPosition, 1.0)) + (mat4(vec4(_630, -_633, 0.0, 0.0), vec4(_633, _630, 0.0, 0.0), vec4(0.0, 0.0, 1.0, 0.0), vec4(0.0, 0.0, 0.0, 1.0)) * (vec4(UNIT_QUAD[_374], 0.0) * max(_1947 + (((2.0 * fract(sin(inColor.y * 6.0) * 43758.546875)) - 1.0) * _388.particle.radius.spread), 0.0)))).xyz, 1.0);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _687 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _680[_687]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_687] * gl_Position.w);
}

