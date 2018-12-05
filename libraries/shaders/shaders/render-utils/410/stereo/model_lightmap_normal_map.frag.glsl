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
} _272;

uniform sampler2D albedoMap;
uniform sampler2D roughnessMap;
uniform sampler2D normalMap;
uniform sampler2D metallicMap;
uniform sampler2D emissiveMap;

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
    int _616 = floatBitsToInt(_272._mat._keySpare3.x);
    vec4 _921;
    if ((_616 & 1216) != 0)
    {
        _921 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _921 = vec4(1.0);
    }
    bool _427 = (_616 & 4096) != 0;
    float _922;
    if (_427)
    {
        _922 = texture(roughnessMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _922 = 1.0;
    }
    vec3 _923;
    if ((_616 & 8192) != 0)
    {
        vec2 _634 = (texture(normalMap, _texCoord01.xy, -1.0).xy - vec2(0.5)) * 2.0;
        vec2 _637 = _634 * _634;
        _923 = vec3(_634.x, sqrt((1.0 - _637.x) - _637.y), _634.y);
    }
    else
    {
        _923 = vec3(0.0, 1.0, 0.0);
    }
    bool _456 = (_616 & 2048) != 0;
    float _924;
    if (_456)
    {
        _924 = texture(metallicMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _924 = 0.0;
    }
    vec4 _667 = texture(emissiveMap, _texCoord01.zw);
    bvec3 _482 = bvec3((_616 & 4) != 0);
    vec3 _483 = vec3(_482.x ? _272._mat._albedoRoughness.xyz.x : vec3(1.0).x, _482.y ? _272._mat._albedoRoughness.xyz.y : vec3(1.0).y, _482.z ? _272._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _925;
    if ((_616 & 1024) != 0)
    {
        _925 = _483 * _921.xyz;
    }
    else
    {
        _925 = _483;
    }
    vec3 _498 = _925 * _color.xyz;
    float _508 = _427 ? _922 : _272._mat._albedoRoughness.w;
    float _518 = _456 ? _924 : _272._mat._metallicScatteringSpare2.x;
    vec3 _523 = normalize(_normalWS);
    vec3 _527 = normalize(_tangentWS);
    vec3 _542 = mix(_923, vec3(0.0, 1.0, 0.0), vec3(smoothstep(30.0, 100.0, (-_positionES).z)));
    vec3 _563 = normalize(((cross(_523, _527) * _542.x) + (_523 * _542.y)) + (_527 * _542.z));
    if (mix(_272._mat._emissiveOpacity.w, 1.0 - _272._mat._emissiveOpacity.w, step(_921.w, 0.5)) != 1.0)
    {
        discard;
    }
    _fragColor0 = vec4(_498, mix(0.20000000298023223876953125, 0.300000011920928955078125, _518));
    float _763 = _563.z;
    vec2 _767 = _563.xy * (1.0 / ((abs(_563.x) + abs(_563.y)) + abs(_763)));
    vec2 _926;
    if (_763 <= 0.0)
    {
        _926 = (vec2(1.0) - abs(_767.yx)) * vec2((_767.x >= 0.0) ? 1.0 : (-1.0), (_767.y >= 0.0) ? 1.0 : (-1.0));
    }
    else
    {
        _926 = _767;
    }
    vec2 _804 = round((clamp(_926, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _809 = _804.y;
    float _811 = floor(_809 * 0.00390625);
    float _814 = _804.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_814, (fract(_814) * 256.0) + _811, _809 - (_811 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(_508, 0.0, 1.0));
    vec3 _726 = (vec3(_272._texMapArray._lightmapParams.x) + (_667.xyz * _272._texMapArray._lightmapParams.y)) * _218.lightingModel._UnlitEmissiveLightmapBackground.z;
    _fragColor2 = vec4(_726, 1.0);
    _fragColor3 = vec4(_726 * _498, 1.0);
}

