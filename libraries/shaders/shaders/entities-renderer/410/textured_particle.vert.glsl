#version 410

const vec2 _398[4] = vec2[](vec2(-1.0, 0.0), vec2(-1.0, 1.0), vec2(0.0), vec2(0.0, 1.0));

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
    _TransformCamera _camera;
} _cameraBlock;

layout(std140) uniform particleBuffer
{
    ParticleUniforms particle;
} _381;

uniform samplerBuffer transformObjectBuffer;

layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 2) in vec2 inColor;
layout(location = 1) out vec2 varTexcoord;
layout(location = 0) out vec4 varColor;
layout(location = 0) in vec3 inPosition;

float _1796;

void main()
{
    int _702 = 8 * _drawCallInfo.x;
    int _367 = gl_VertexID - ((gl_VertexID / 4) * 4);
    float _385 = inColor.x / _381.particle.lifespan;
    varTexcoord = _398[_367];
    bool _818 = _385 <= 0.5;
    bool _822 = _818 && (_381.particle.color.start.x == _381.particle.color.middle.x);
    bool _832;
    if (!_822)
    {
        _832 = (_385 >= 0.5) && (_381.particle.color.middle.x == _381.particle.color.finish.x);
    }
    else
    {
        _832 = _822;
    }
    float _1944 = _832 ? _381.particle.color.middle.x : _1796;
    float _1793;
    if (!(_832 ? true : false))
    {
        bool _845 = (_381.particle.color.middle.x >= _381.particle.color.start.x) && (_381.particle.color.middle.x >= _381.particle.color.finish.x);
        bool _856;
        if (!_845)
        {
            _856 = (_381.particle.color.middle.x <= _381.particle.color.start.x) && (_381.particle.color.middle.x <= _381.particle.color.finish.x);
        }
        else
        {
            _856 = _845;
        }
        float _1790;
        if (_856)
        {
            _1790 = 0.0;
        }
        else
        {
            float _863 = (_381.particle.color.finish.x - _381.particle.color.start.x) * 0.5;
            float _866 = _381.particle.color.middle.x - _381.particle.color.start.x;
            float _869 = _381.particle.color.finish.x - _381.particle.color.middle.x;
            float _871 = abs(_863);
            float _1791;
            if (_871 > abs(_866))
            {
                _1791 = _866;
            }
            else
            {
                _1791 = (_871 > abs(_869)) ? _869 : _863;
            }
            _1790 = _1791;
        }
        float _888 = step(0.5, _385);
        float _893 = 1.0 - _888;
        float _917 = (2.0 * _385) - _888;
        float _927 = 1.0 - _917;
        _1793 = (((_927 * _927) * ((_893 * _381.particle.color.start.x) + (_888 * _381.particle.color.middle.x))) + (((2.0 * _927) * _917) * (_381.particle.color.middle.x + (((2.0 * _888) - 1.0) * _1790)))) + ((_917 * _917) * ((_893 * _381.particle.color.middle.x) + (_888 * _381.particle.color.finish.x)));
    }
    else
    {
        _1793 = _1944;
    }
    bool _968 = _818 && (_381.particle.color.start.y == _381.particle.color.middle.y);
    bool _978;
    if (!_968)
    {
        _978 = (_385 >= 0.5) && (_381.particle.color.middle.y == _381.particle.color.finish.y);
    }
    else
    {
        _978 = _968;
    }
    float _1947 = _978 ? _381.particle.color.middle.y : _1796;
    float _1802;
    if (!(_978 ? true : false))
    {
        bool _991 = (_381.particle.color.middle.y >= _381.particle.color.start.y) && (_381.particle.color.middle.y >= _381.particle.color.finish.y);
        bool _1002;
        if (!_991)
        {
            _1002 = (_381.particle.color.middle.y <= _381.particle.color.start.y) && (_381.particle.color.middle.y <= _381.particle.color.finish.y);
        }
        else
        {
            _1002 = _991;
        }
        float _1799;
        if (_1002)
        {
            _1799 = 0.0;
        }
        else
        {
            float _1009 = (_381.particle.color.finish.y - _381.particle.color.start.y) * 0.5;
            float _1012 = _381.particle.color.middle.y - _381.particle.color.start.y;
            float _1015 = _381.particle.color.finish.y - _381.particle.color.middle.y;
            float _1017 = abs(_1009);
            float _1800;
            if (_1017 > abs(_1012))
            {
                _1800 = _1012;
            }
            else
            {
                _1800 = (_1017 > abs(_1015)) ? _1015 : _1009;
            }
            _1799 = _1800;
        }
        float _1034 = step(0.5, _385);
        float _1039 = 1.0 - _1034;
        float _1063 = (2.0 * _385) - _1034;
        float _1073 = 1.0 - _1063;
        _1802 = (((_1073 * _1073) * ((_1039 * _381.particle.color.start.y) + (_1034 * _381.particle.color.middle.y))) + (((2.0 * _1073) * _1063) * (_381.particle.color.middle.y + (((2.0 * _1034) - 1.0) * _1799)))) + ((_1063 * _1063) * ((_1039 * _381.particle.color.middle.y) + (_1034 * _381.particle.color.finish.y)));
    }
    else
    {
        _1802 = _1947;
    }
    bool _1114 = _818 && (_381.particle.color.start.z == _381.particle.color.middle.z);
    bool _1124;
    if (!_1114)
    {
        _1124 = (_385 >= 0.5) && (_381.particle.color.middle.z == _381.particle.color.finish.z);
    }
    else
    {
        _1124 = _1114;
    }
    float _1950 = _1124 ? _381.particle.color.middle.z : _1796;
    float _1817;
    if (!(_1124 ? true : false))
    {
        bool _1137 = (_381.particle.color.middle.z >= _381.particle.color.start.z) && (_381.particle.color.middle.z >= _381.particle.color.finish.z);
        bool _1148;
        if (!_1137)
        {
            _1148 = (_381.particle.color.middle.z <= _381.particle.color.start.z) && (_381.particle.color.middle.z <= _381.particle.color.finish.z);
        }
        else
        {
            _1148 = _1137;
        }
        float _1814;
        if (_1148)
        {
            _1814 = 0.0;
        }
        else
        {
            float _1155 = (_381.particle.color.finish.z - _381.particle.color.start.z) * 0.5;
            float _1158 = _381.particle.color.middle.z - _381.particle.color.start.z;
            float _1161 = _381.particle.color.finish.z - _381.particle.color.middle.z;
            float _1163 = abs(_1155);
            float _1815;
            if (_1163 > abs(_1158))
            {
                _1815 = _1158;
            }
            else
            {
                _1815 = (_1163 > abs(_1161)) ? _1161 : _1155;
            }
            _1814 = _1815;
        }
        float _1180 = step(0.5, _385);
        float _1185 = 1.0 - _1180;
        float _1209 = (2.0 * _385) - _1180;
        float _1219 = 1.0 - _1209;
        _1817 = (((_1219 * _1219) * ((_1185 * _381.particle.color.start.z) + (_1180 * _381.particle.color.middle.z))) + (((2.0 * _1219) * _1209) * (_381.particle.color.middle.z + (((2.0 * _1180) - 1.0) * _1814)))) + ((_1209 * _1209) * ((_1185 * _381.particle.color.middle.z) + (_1180 * _381.particle.color.finish.z)));
    }
    else
    {
        _1817 = _1950;
    }
    bool _1260 = _818 && (_381.particle.color.start.w == _381.particle.color.middle.w);
    bool _1270;
    if (!_1260)
    {
        _1270 = (_385 >= 0.5) && (_381.particle.color.middle.w == _381.particle.color.finish.w);
    }
    else
    {
        _1270 = _1260;
    }
    float _1953 = _1270 ? _381.particle.color.middle.w : _1796;
    float _1839;
    if (!(_1270 ? true : false))
    {
        bool _1283 = (_381.particle.color.middle.w >= _381.particle.color.start.w) && (_381.particle.color.middle.w >= _381.particle.color.finish.w);
        bool _1294;
        if (!_1283)
        {
            _1294 = (_381.particle.color.middle.w <= _381.particle.color.start.w) && (_381.particle.color.middle.w <= _381.particle.color.finish.w);
        }
        else
        {
            _1294 = _1283;
        }
        float _1836;
        if (_1294)
        {
            _1836 = 0.0;
        }
        else
        {
            float _1301 = (_381.particle.color.finish.w - _381.particle.color.start.w) * 0.5;
            float _1304 = _381.particle.color.middle.w - _381.particle.color.start.w;
            float _1307 = _381.particle.color.finish.w - _381.particle.color.middle.w;
            float _1309 = abs(_1301);
            float _1837;
            if (_1309 > abs(_1304))
            {
                _1837 = _1304;
            }
            else
            {
                _1837 = (_1309 > abs(_1307)) ? _1307 : _1301;
            }
            _1836 = _1837;
        }
        float _1326 = step(0.5, _385);
        float _1331 = 1.0 - _1326;
        float _1355 = (2.0 * _385) - _1326;
        float _1365 = 1.0 - _1355;
        _1839 = (((_1365 * _1365) * ((_1331 * _381.particle.color.start.w) + (_1326 * _381.particle.color.middle.w))) + (((2.0 * _1365) * _1355) * (_381.particle.color.middle.w + (((2.0 * _1326) - 1.0) * _1836)))) + ((_1355 * _1355) * ((_1331 * _381.particle.color.middle.w) + (_1326 * _381.particle.color.finish.w)));
    }
    else
    {
        _1839 = _1953;
    }
    varColor = vec4(_1793, _1802, _1817, _1839);
    vec3 _449 = clamp(varColor.xyz + (((vec3(fract(sin(inColor.y) * 43758.546875), fract(sin(inColor.y * 2.0) * 43758.546875), fract(sin(inColor.y * 3.0) * 43758.546875)) * 2.0) - vec3(1.0)) * _381.particle.color.spread.xyz), vec3(0.0), vec3(1.0));
    varColor = vec4(_449.x, _449.y, _449.z, varColor.w);
    varColor.w = clamp(varColor.w + (((2.0 * fract(sin(inColor.y * 4.0) * 43758.546875)) - 1.0) * _381.particle.color.spread.w), 0.0, 1.0);
    bool _1426 = _818 && (_381.particle.spin.start == _381.particle.spin.middle);
    bool _1436;
    if (!_1426)
    {
        _1436 = (_385 >= 0.5) && (_381.particle.spin.middle == _381.particle.spin.finish);
    }
    else
    {
        _1436 = _1426;
    }
    float _1956 = _1436 ? _381.particle.spin.middle : _1796;
    float _1868;
    if (!(_1436 ? true : false))
    {
        bool _1449 = (_381.particle.spin.middle >= _381.particle.spin.start) && (_381.particle.spin.middle >= _381.particle.spin.finish);
        bool _1460;
        if (!_1449)
        {
            _1460 = (_381.particle.spin.middle <= _381.particle.spin.start) && (_381.particle.spin.middle <= _381.particle.spin.finish);
        }
        else
        {
            _1460 = _1449;
        }
        float _1865;
        if (_1460)
        {
            _1865 = 0.0;
        }
        else
        {
            float _1467 = (_381.particle.spin.finish - _381.particle.spin.start) * 0.5;
            float _1470 = _381.particle.spin.middle - _381.particle.spin.start;
            float _1473 = _381.particle.spin.finish - _381.particle.spin.middle;
            float _1475 = abs(_1467);
            float _1866;
            if (_1475 > abs(_1470))
            {
                _1866 = _1470;
            }
            else
            {
                _1866 = (_1475 > abs(_1473)) ? _1473 : _1467;
            }
            _1865 = _1866;
        }
        float _1492 = step(0.5, _385);
        float _1497 = 1.0 - _1492;
        float _1521 = (2.0 * _385) - _1492;
        float _1531 = 1.0 - _1521;
        _1868 = (((_1531 * _1531) * ((_1497 * _381.particle.spin.start) + (_1492 * _381.particle.spin.middle))) + (((2.0 * _1531) * _1521) * (_381.particle.spin.middle + (((2.0 * _1492) - 1.0) * _1865)))) + ((_1521 * _1521) * ((_1497 * _381.particle.spin.middle) + (_1492 * _381.particle.spin.finish)));
    }
    else
    {
        _1868 = _1956;
    }
    float _496 = _1868 + (((2.0 * fract(sin(inColor.y * 5.0) * 43758.546875)) - 1.0) * _381.particle.spin.spread);
    bool _1577 = _818 && (_381.particle.radius.start == _381.particle.radius.middle);
    bool _1587;
    if (!_1577)
    {
        _1587 = (_385 >= 0.5) && (_381.particle.radius.middle == _381.particle.radius.finish);
    }
    else
    {
        _1587 = _1577;
    }
    float _1959 = _1587 ? _381.particle.radius.middle : _1796;
    float _1904;
    if (!(_1587 ? true : false))
    {
        bool _1600 = (_381.particle.radius.middle >= _381.particle.radius.start) && (_381.particle.radius.middle >= _381.particle.radius.finish);
        bool _1611;
        if (!_1600)
        {
            _1611 = (_381.particle.radius.middle <= _381.particle.radius.start) && (_381.particle.radius.middle <= _381.particle.radius.finish);
        }
        else
        {
            _1611 = _1600;
        }
        float _1901;
        if (_1611)
        {
            _1901 = 0.0;
        }
        else
        {
            float _1618 = (_381.particle.radius.finish - _381.particle.radius.start) * 0.5;
            float _1621 = _381.particle.radius.middle - _381.particle.radius.start;
            float _1624 = _381.particle.radius.finish - _381.particle.radius.middle;
            float _1626 = abs(_1618);
            float _1902;
            if (_1626 > abs(_1621))
            {
                _1902 = _1621;
            }
            else
            {
                _1902 = (_1626 > abs(_1624)) ? _1624 : _1618;
            }
            _1901 = _1902;
        }
        float _1643 = step(0.5, _385);
        float _1648 = 1.0 - _1643;
        float _1672 = (2.0 * _385) - _1643;
        float _1682 = 1.0 - _1672;
        _1904 = (((_1682 * _1682) * ((_1648 * _381.particle.radius.start) + (_1643 * _381.particle.radius.middle))) + (((2.0 * _1682) * _1672) * (_381.particle.radius.middle + (((2.0 * _1643) - 1.0) * _1901)))) + ((_1672 * _1672) * ((_1648 * _381.particle.radius.middle) + (_1643 * _381.particle.radius.finish)));
    }
    else
    {
        _1904 = _1959;
    }
    vec3 _594 = normalize(cross(vec3(0.0, 0.0, -1.0), normalize(mat3(_cameraBlock._camera._view[0].xyz, _cameraBlock._camera._view[1].xyz, _cameraBlock._camera._view[2].xyz) * mix(vec3(0.0, 1.0, 0.0), normalize(vec3(texelFetch(transformObjectBuffer, _702 + 4).y, texelFetch(transformObjectBuffer, _702 + 5).y, texelFetch(transformObjectBuffer, _702 + 6).y)), vec3(float(_381.particle.rotateWithEntity))))));
    vec3 _598 = cross(_594, vec3(0.0, 0.0, -1.0));
    vec3 _603 = -_594;
    vec3 UNIT_QUAD[4] = vec3[](normalize(_603 + _598), normalize(_603 - _598), normalize(_594 + _598), normalize(_594 - _598));
    float _623 = cos(_496);
    float _626 = sin(_496);
    gl_Position = _cameraBlock._camera._projection * vec4(((_cameraBlock._camera._view * vec4(inPosition, 1.0)) + (mat4(vec4(_623, -_626, 0.0, 0.0), vec4(_626, _623, 0.0, 0.0), vec4(0.0, 0.0, 1.0, 0.0), vec4(0.0, 0.0, 0.0, 1.0)) * (vec4(UNIT_QUAD[_367], 0.0) * max(_1904 + (((2.0 * fract(sin(inColor.y * 6.0) * 43758.546875)) - 1.0) * _381.particle.radius.spread), 0.0)))).xyz, 1.0);
}

