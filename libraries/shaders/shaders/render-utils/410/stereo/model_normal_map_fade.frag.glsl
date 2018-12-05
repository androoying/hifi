#version 410

struct LightingModel
{
    vec4 _UnlitEmissiveLightmapBackground;
    vec4 _ScatteringDiffuseSpecularAlbedo;
    vec4 _AmbientDirectionalPointSpot;
    vec4 _ShowContourObscuranceWireframe;
    vec4 _HazeBloomSkinningBlendshape;
};

struct Material
{
    vec4 _emissiveOpacity;
    vec4 _albedoRoughness;
    vec4 _metallicScatteringSpare2;
    vec4 _keySpare3;
};

struct TexMapArray
{
    mat4 _texcoordTransforms0;
    mat4 _texcoordTransforms1;
    vec4 _lightmapParams;
};

struct FadeParameters
{
    vec4 _noiseInvSizeAndLevel;
    vec4 _innerEdgeColor;
    vec4 _outerEdgeColor;
    vec2 _edgeWidthInvWidth;
    float _baseLevel;
    int _isInverted;
};

struct FadeObjectParams
{
    vec4 noiseOffset;
    vec4 baseOffset;
    vec4 baseInvSize;
    int category;
    float threshold;
};

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _259;

layout(std140) uniform materialBuffer
{
    Material _mat;
    TexMapArray _texMapArray;
} _330;

layout(std140) uniform fadeParametersBuffer
{
    FadeParameters fadeParameters[5];
} _466;

layout(std140) uniform fadeObjectParametersBuffer
{
    FadeObjectParams fadeObjectParams;
} _740;

uniform sampler2D albedoMap;
uniform sampler2D roughnessMap;
uniform sampler2D normalMap;
uniform sampler2D metallicMap;
uniform sampler2D emissiveMap;
uniform sampler2D occlusionMap;
uniform sampler2D scatteringMap;
uniform sampler2D fadeMaskMap;

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 2) out vec4 _fragColor2;
layout(location = 3) out vec4 _fragColor3;
layout(location = 2) in vec4 _positionWS;
layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 3) in vec3 _normalWS;
layout(location = 4) in vec3 _tangentWS;
layout(location = 7) in vec4 _positionES;

void main()
{
    vec3 _1182 = (_positionWS.xyz * _466.fadeParameters[_740.fadeObjectParams.category]._noiseInvSizeAndLevel.xyz) + _740.fadeObjectParams.noiseOffset.xyz;
    vec3 _1184 = floor(_1182);
    vec3 _1186 = fract(_1182);
    vec3 _1194 = (_1186 * _1186) * (vec3(3.0) - (_1186 * 2.0));
    vec3 _1198 = _1184 + vec3(0.0, 1.0, 0.0);
    vec3 _1201 = _1184 + vec3(1.0, 0.0, 0.0);
    vec3 _1204 = _1184 + vec3(1.0, 1.0, 0.0);
    vec3 _1207 = _1184 + vec3(0.0, 0.0, 1.0);
    vec3 _1210 = _1184 + vec3(0.0, 1.0, 1.0);
    vec3 _1213 = _1184 + vec3(1.0, 0.0, 1.0);
    vec3 _1216 = _1184 + vec3(1.0);
    vec4 _1233 = mix(vec4(pow(textureLod(fadeMaskMap, (_1184.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1184.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1198.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1198.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1201.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1201.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1204.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1204.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(pow(textureLod(fadeMaskMap, (_1207.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1207.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1210.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1210.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1213.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1213.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1216.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1216.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(_1194.z));
    vec2 _1241 = mix(_1233.xy, _1233.zw, vec2(_1194.x));
    float _1096 = ((((mix(_1241.x, _1241.y, _1194.y) - 0.5) * _466.fadeParameters[_740.fadeObjectParams.category]._noiseInvSizeAndLevel.w) + ((length((_positionWS.xyz - _740.fadeObjectParams.baseOffset.xyz) * _740.fadeObjectParams.baseInvSize.xyz) - 0.5) * _466.fadeParameters[_740.fadeObjectParams.category]._baseLevel)) + 0.5) - _740.fadeObjectParams.threshold;
    float _1795;
    if (_466.fadeParameters[_740.fadeObjectParams.category]._isInverted != 0)
    {
        _1795 = -_1096;
    }
    else
    {
        _1795 = _1096;
    }
    if (_1795 < 0.0)
    {
        discard;
    }
    float _1060 = _1795 * _466.fadeParameters[_740.fadeObjectParams.category]._edgeWidthInvWidth.y;
    float _1063 = 1.0 - clamp(_1060, 0.0, 1.0);
    vec4 _1079 = mix(_466.fadeParameters[_740.fadeObjectParams.category]._innerEdgeColor, _466.fadeParameters[_740.fadeObjectParams.category]._outerEdgeColor, vec4(_1063 * _1063));
    int _1433 = floatBitsToInt(_330._mat._keySpare3.x);
    vec4 _1796;
    if ((_1433 & 1216) != 0)
    {
        _1796 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _1796 = vec4(1.0);
    }
    bool _791 = (_1433 & 4096) != 0;
    float _1797;
    if (_791)
    {
        _1797 = texture(roughnessMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _1797 = 1.0;
    }
    vec3 _1798;
    if ((_1433 & 8192) != 0)
    {
        vec2 _1451 = (texture(normalMap, _texCoord01.xy, -1.0).xy - vec2(0.5)) * 2.0;
        vec2 _1454 = _1451 * _1451;
        _1798 = vec3(_1451.x, sqrt((1.0 - _1454.x) - _1454.y), _1451.y);
    }
    else
    {
        _1798 = vec3(0.0, 1.0, 0.0);
    }
    bool _819 = (_1433 & 2048) != 0;
    float _1799;
    if (_819)
    {
        _1799 = texture(metallicMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _1799 = 0.0;
    }
    bool _833 = (_1433 & 512) != 0;
    vec3 _1800;
    if (_833)
    {
        _1800 = texture(emissiveMap, _texCoord01.xy, -1.0).xyz;
    }
    else
    {
        _1800 = vec3(0.0);
    }
    bool _848 = (_1433 & 65536) != 0;
    float _1801;
    if (_848)
    {
        _1801 = max((texture(scatteringMap, _texCoord01.xy, -1.0).x - 0.100000001490116119384765625) * 1.111111164093017578125, 0.0);
    }
    else
    {
        _1801 = 0.0;
    }
    float _1802;
    if ((_1433 & 16384) != 0)
    {
        _1802 = texture(occlusionMap, _texCoord01.zw).x;
    }
    else
    {
        _1802 = 1.0;
    }
    float _1804;
    if ((_1433 & 192) != 0)
    {
        float _1803;
        if ((_1433 & 64) != 0)
        {
            _1803 = step(0.5, _1796.w);
        }
        else
        {
            _1803 = _1796.w;
        }
        _1804 = _1803;
    }
    else
    {
        _1804 = 1.0;
    }
    bvec3 _907 = bvec3((_1433 & 4) != 0);
    vec3 _908 = vec3(_907.x ? _330._mat._albedoRoughness.xyz.x : vec3(1.0).x, _907.y ? _330._mat._albedoRoughness.xyz.y : vec3(1.0).y, _907.z ? _330._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _1807;
    if ((_1433 & 1024) != 0)
    {
        _1807 = _908 * _1796.xyz;
    }
    else
    {
        _1807 = _908;
    }
    vec3 _923 = _1807 * _color.xyz;
    float _933 = _791 ? _1797 : _330._mat._albedoRoughness.w;
    float _943 = _819 ? _1799 : _330._mat._metallicScatteringSpare2.x;
    bvec3 _953 = bvec3(_833);
    vec3 _954 = vec3(_953.x ? _1800.x : _330._mat._emissiveOpacity.xyz.x, _953.y ? _1800.y : _330._mat._emissiveOpacity.xyz.y, _953.z ? _1800.z : _330._mat._emissiveOpacity.xyz.z);
    float _966 = _848 ? _1801 : _330._mat._metallicScatteringSpare2.y;
    vec3 _971 = normalize(_normalWS);
    vec3 _975 = normalize(_tangentWS);
    vec3 _990 = mix(_1798, vec3(0.0, 1.0, 0.0), vec3(smoothstep(30.0, 100.0, (-_positionES).z)));
    vec3 _1011 = normalize(((cross(_971, _975) * _990.x) + (_971 * _990.y)) + (_975 * _990.z));
    vec3 _1014 = _954 + ((_1079.xyz * step(_1060, 1.0)) * _1079.w);
    if (_1804 != 1.0)
    {
        discard;
    }
    bool _1521 = _966 > 0.0;
    float _1809;
    if (_1521)
    {
        _1809 = mix(0.4000000059604644775390625, 0.5, _943);
    }
    else
    {
        _1809 = mix(0.0, 0.100000001490116119384765625, _943);
    }
    _fragColor0 = vec4(_923, _1809);
    float _1589 = _1011.z;
    vec2 _1593 = _1011.xy * (1.0 / ((abs(_1011.x) + abs(_1011.y)) + abs(_1589)));
    vec2 _1810;
    if (_1589 <= 0.0)
    {
        _1810 = (vec2(1.0) - abs(_1593.yx)) * vec2((_1593.x >= 0.0) ? 1.0 : (-1.0), (_1593.y >= 0.0) ? 1.0 : (-1.0));
    }
    else
    {
        _1810 = _1593;
    }
    vec2 _1630 = round((clamp(_1810, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _1635 = _1630.y;
    float _1637 = floor(_1635 * 0.00390625);
    float _1640 = _1630.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_1640, (fract(_1640) * 256.0) + _1637, _1635 - (_1637 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(_933, 0.0, 1.0));
    vec3 _1811;
    if (_1521)
    {
        _1811 = vec3(_966);
    }
    else
    {
        _1811 = _1014;
    }
    _fragColor2 = vec4(_1811, _1802);
    _fragColor3 = vec4(_1014 * _259.lightingModel._UnlitEmissiveLightmapBackground.y, 1.0);
}

