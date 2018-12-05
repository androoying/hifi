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
} _215;

layout(std140) uniform materialBuffer
{
    Material _mat;
    TexMapArray _texMapArray;
} _269;

uniform sampler2D albedoMap;
uniform sampler2D roughnessMap;
uniform sampler2D metallicMap;
uniform sampler2D emissiveMap;

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 2) out vec4 _fragColor2;
layout(location = 3) out vec4 _fragColor3;
layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 3) in vec3 _normalWS;

void main()
{
    int _530 = floatBitsToInt(_269._mat._keySpare3.x);
    vec4 _804;
    if ((_530 & 1216) != 0)
    {
        _804 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _804 = vec4(1.0);
    }
    bool _396 = (_530 & 4096) != 0;
    float _805;
    if (_396)
    {
        _805 = texture(roughnessMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _805 = 1.0;
    }
    bool _410 = (_530 & 2048) != 0;
    float _806;
    if (_410)
    {
        _806 = texture(metallicMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _806 = 0.0;
    }
    vec4 _557 = texture(emissiveMap, _texCoord01.zw);
    bvec3 _436 = bvec3((_530 & 4) != 0);
    vec3 _437 = vec3(_436.x ? _269._mat._albedoRoughness.xyz.x : vec3(1.0).x, _436.y ? _269._mat._albedoRoughness.xyz.y : vec3(1.0).y, _436.z ? _269._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _807;
    if ((_530 & 1024) != 0)
    {
        _807 = _437 * _804.xyz;
    }
    else
    {
        _807 = _437;
    }
    vec3 _452 = _807 * _color.xyz;
    float _462 = _396 ? _805 : _269._mat._albedoRoughness.w;
    float _472 = _410 ? _806 : _269._mat._metallicScatteringSpare2.x;
    vec3 _476 = normalize(_normalWS);
    if (mix(_269._mat._emissiveOpacity.w, 1.0 - _269._mat._emissiveOpacity.w, step(_804.w, 0.5)) != 1.0)
    {
        discard;
    }
    _fragColor0 = vec4(_452, mix(0.20000000298023223876953125, 0.300000011920928955078125, _472));
    float _653 = _476.z;
    vec2 _657 = _476.xy * (1.0 / ((abs(_476.x) + abs(_476.y)) + abs(_653)));
    vec2 _808;
    if (_653 <= 0.0)
    {
        _808 = (vec2(1.0) - abs(_657.yx)) * vec2((_657.x >= 0.0) ? 1.0 : (-1.0), (_657.y >= 0.0) ? 1.0 : (-1.0));
    }
    else
    {
        _808 = _657;
    }
    vec2 _694 = round((clamp(_808, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _699 = _694.y;
    float _701 = floor(_699 * 0.00390625);
    float _704 = _694.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_704, (fract(_704) * 256.0) + _701, _699 - (_701 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(_462, 0.0, 1.0));
    vec3 _616 = (vec3(_269._texMapArray._lightmapParams.x) + (_557.xyz * _269._texMapArray._lightmapParams.y)) * _215.lightingModel._UnlitEmissiveLightmapBackground.z;
    _fragColor2 = vec4(_616, 1.0);
    _fragColor3 = vec4(_616 * _452, 1.0);
}

