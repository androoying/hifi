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

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _218;

layout(std140) uniform materialBuffer
{
    Material _mat;
    TexMapArray _texMapArray;
} _289;

uniform sampler2D albedoMap;
uniform sampler2D roughnessMap;
uniform sampler2D normalMap;
uniform sampler2D metallicMap;
uniform sampler2D emissiveMap;
uniform sampler2D occlusionMap;
uniform sampler2D scatteringMap;

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 2) out vec4 _fragColor2;
layout(location = 3) out vec4 _fragColor3;
layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 3) in vec3 _normalWS;
layout(location = 4) in vec3 _tangentWS;
layout(location = 7) in vec4 _positionES;

void main()
{
    int _715 = floatBitsToInt(_289._mat._keySpare3.x);
    vec4 _1026;
    if ((_715 & 1216) != 0)
    {
        _1026 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _1026 = vec4(1.0);
    }
    bool _448 = (_715 & 4096) != 0;
    float _1027;
    if (_448)
    {
        _1027 = texture(roughnessMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _1027 = 1.0;
    }
    vec3 _1028;
    if ((_715 & 8192) != 0)
    {
        vec2 _733 = (texture(normalMap, _texCoord01.xy, -1.0).xy - vec2(0.5)) * 2.0;
        vec2 _736 = _733 * _733;
        _1028 = vec3(_733.x, sqrt((1.0 - _736.x) - _736.y), _733.y);
    }
    else
    {
        _1028 = vec3(0.0, 1.0, 0.0);
    }
    bool _477 = (_715 & 2048) != 0;
    float _1029;
    if (_477)
    {
        _1029 = texture(metallicMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _1029 = 0.0;
    }
    bool _491 = (_715 & 512) != 0;
    vec3 _1030;
    if (_491)
    {
        _1030 = texture(emissiveMap, _texCoord01.xy, -1.0).xyz;
    }
    else
    {
        _1030 = vec3(0.0);
    }
    bool _506 = (_715 & 65536) != 0;
    float _1031;
    if (_506)
    {
        _1031 = max((texture(scatteringMap, _texCoord01.xy, -1.0).x - 0.100000001490116119384765625) * 1.111111164093017578125, 0.0);
    }
    else
    {
        _1031 = 0.0;
    }
    float _1032;
    if ((_715 & 16384) != 0)
    {
        _1032 = texture(occlusionMap, _texCoord01.zw).x;
    }
    else
    {
        _1032 = 1.0;
    }
    float _1034;
    if ((_715 & 192) != 0)
    {
        float _1033;
        if ((_715 & 64) != 0)
        {
            _1033 = step(0.5, _1026.w);
        }
        else
        {
            _1033 = _1026.w;
        }
        _1034 = _1033;
    }
    else
    {
        _1034 = 1.0;
    }
    bvec3 _567 = bvec3((_715 & 4) != 0);
    vec3 _568 = vec3(_567.x ? _289._mat._albedoRoughness.xyz.x : vec3(1.0).x, _567.y ? _289._mat._albedoRoughness.xyz.y : vec3(1.0).y, _567.z ? _289._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _1037;
    if ((_715 & 1024) != 0)
    {
        _1037 = _568 * _1026.xyz;
    }
    else
    {
        _1037 = _568;
    }
    vec3 _583 = _1037 * _color.xyz;
    float _593 = _448 ? _1027 : _289._mat._albedoRoughness.w;
    float _603 = _477 ? _1029 : _289._mat._metallicScatteringSpare2.x;
    bvec3 _613 = bvec3(_491);
    vec3 _614 = vec3(_613.x ? _1030.x : _289._mat._emissiveOpacity.xyz.x, _613.y ? _1030.y : _289._mat._emissiveOpacity.xyz.y, _613.z ? _1030.z : _289._mat._emissiveOpacity.xyz.z);
    float _626 = _506 ? _1031 : _289._mat._metallicScatteringSpare2.y;
    vec3 _631 = normalize(_normalWS);
    vec3 _635 = normalize(_tangentWS);
    vec3 _650 = mix(_1028, vec3(0.0, 1.0, 0.0), vec3(smoothstep(30.0, 100.0, (-_positionES).z)));
    vec3 _671 = normalize(((cross(_631, _635) * _650.x) + (_631 * _650.y)) + (_635 * _650.z));
    if (_1034 != 1.0)
    {
        discard;
    }
    bool _803 = _626 > 0.0;
    float _1039;
    if (_803)
    {
        _1039 = mix(0.4000000059604644775390625, 0.5, _603);
    }
    else
    {
        _1039 = mix(0.0, 0.100000001490116119384765625, _603);
    }
    _fragColor0 = vec4(_583, _1039);
    float _871 = _671.z;
    vec2 _875 = _671.xy * (1.0 / ((abs(_671.x) + abs(_671.y)) + abs(_871)));
    vec2 _1040;
    if (_871 <= 0.0)
    {
        _1040 = (vec2(1.0) - abs(_875.yx)) * vec2((_875.x >= 0.0) ? 1.0 : (-1.0), (_875.y >= 0.0) ? 1.0 : (-1.0));
    }
    else
    {
        _1040 = _875;
    }
    vec2 _912 = round((clamp(_1040, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _917 = _912.y;
    float _919 = floor(_917 * 0.00390625);
    float _922 = _912.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_922, (fract(_922) * 256.0) + _919, _917 - (_919 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(_593, 0.0, 1.0));
    vec3 _1041;
    if (_803)
    {
        _1041 = vec3(_626);
    }
    else
    {
        _1041 = _614;
    }
    _fragColor2 = vec4(_1041, _1032);
    _fragColor3 = vec4(_614 * _218.lightingModel._UnlitEmissiveLightmapBackground.y, 1.0);
}

