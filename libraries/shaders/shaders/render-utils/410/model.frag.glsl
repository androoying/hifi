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
} _286;

uniform sampler2D albedoMap;
uniform sampler2D roughnessMap;
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

void main()
{
    int _634 = floatBitsToInt(_286._mat._keySpare3.x);
    vec4 _914;
    if ((_634 & 1216) != 0)
    {
        _914 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _914 = vec4(1.0);
    }
    bool _417 = (_634 & 4096) != 0;
    float _915;
    if (_417)
    {
        _915 = texture(roughnessMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _915 = 1.0;
    }
    bool _431 = (_634 & 2048) != 0;
    float _916;
    if (_431)
    {
        _916 = texture(metallicMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _916 = 0.0;
    }
    bool _445 = (_634 & 512) != 0;
    vec3 _917;
    if (_445)
    {
        _917 = texture(emissiveMap, _texCoord01.xy, -1.0).xyz;
    }
    else
    {
        _917 = vec3(0.0);
    }
    bool _460 = (_634 & 65536) != 0;
    float _918;
    if (_460)
    {
        _918 = max((texture(scatteringMap, _texCoord01.xy, -1.0).x - 0.100000001490116119384765625) * 1.111111164093017578125, 0.0);
    }
    else
    {
        _918 = 0.0;
    }
    float _919;
    if ((_634 & 16384) != 0)
    {
        _919 = texture(occlusionMap, _texCoord01.zw).x;
    }
    else
    {
        _919 = 1.0;
    }
    float _921;
    if ((_634 & 192) != 0)
    {
        float _920;
        if ((_634 & 64) != 0)
        {
            _920 = step(0.5, _914.w);
        }
        else
        {
            _920 = _914.w;
        }
        _921 = _920;
    }
    else
    {
        _921 = 1.0;
    }
    if (_921 < 1.0)
    {
        discard;
    }
    bvec3 _526 = bvec3((_634 & 4) != 0);
    vec3 _527 = vec3(_526.x ? _286._mat._albedoRoughness.xyz.x : vec3(1.0).x, _526.y ? _286._mat._albedoRoughness.xyz.y : vec3(1.0).y, _526.z ? _286._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _924;
    if ((_634 & 1024) != 0)
    {
        _924 = _527 * _914.xyz;
    }
    else
    {
        _924 = _527;
    }
    vec3 _542 = _924 * _color.xyz;
    float _552 = _417 ? _915 : _286._mat._albedoRoughness.w;
    float _562 = _431 ? _916 : _286._mat._metallicScatteringSpare2.x;
    bvec3 _572 = bvec3(_445);
    vec3 _573 = vec3(_572.x ? _917.x : _286._mat._emissiveOpacity.xyz.x, _572.y ? _917.y : _286._mat._emissiveOpacity.xyz.y, _572.z ? _917.z : _286._mat._emissiveOpacity.xyz.z);
    float _585 = _460 ? _918 : _286._mat._metallicScatteringSpare2.y;
    vec3 _589 = normalize(_normalWS);
    if (_921 != 1.0)
    {
        discard;
    }
    bool _698 = _585 > 0.0;
    float _926;
    if (_698)
    {
        _926 = mix(0.4000000059604644775390625, 0.5, _562);
    }
    else
    {
        _926 = mix(0.0, 0.100000001490116119384765625, _562);
    }
    _fragColor0 = vec4(_542, _926);
    float _766 = _589.z;
    vec2 _770 = _589.xy * (1.0 / ((abs(_589.x) + abs(_589.y)) + abs(_766)));
    vec2 _927;
    if (_766 <= 0.0)
    {
        _927 = (vec2(1.0) - abs(_770.yx)) * vec2((_770.x >= 0.0) ? 1.0 : (-1.0), (_770.y >= 0.0) ? 1.0 : (-1.0));
    }
    else
    {
        _927 = _770;
    }
    vec2 _807 = round((clamp(_927, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _812 = _807.y;
    float _814 = floor(_812 * 0.00390625);
    float _817 = _807.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_817, (fract(_817) * 256.0) + _814, _812 - (_814 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(_552, 0.0, 1.0));
    vec3 _928;
    if (_698)
    {
        _928 = vec3(_585);
    }
    else
    {
        _928 = _573;
    }
    _fragColor2 = vec4(_928, _919);
    _fragColor3 = vec4(_573 * _215.lightingModel._UnlitEmissiveLightmapBackground.y, 1.0);
}

