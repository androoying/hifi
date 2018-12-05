#version 410

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

struct LightingModel
{
    vec4 _UnlitEmissiveLightmapBackground;
    vec4 _ScatteringDiffuseSpecularAlbedo;
    vec4 _AmbientDirectionalPointSpot;
    vec4 _ShowContourObscuranceWireframe;
    vec4 _HazeBloomSkinningBlendshape;
};

layout(std140) uniform materialBuffer
{
    Material _mat;
    TexMapArray _texMapArray;
} _41;

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _83;

uniform sampler2D albedoMap;

layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 0) out vec4 _fragColor;

void main()
{
    int _232 = floatBitsToInt(_41._mat._keySpare3.x);
    vec4 _286;
    if ((_232 & 1216) != 0)
    {
        _286 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _286 = vec4(1.0);
    }
    float _288;
    if ((_232 & 192) != 0)
    {
        float _287;
        if ((_232 & 64) != 0)
        {
            _287 = step(0.5, _286.w);
        }
        else
        {
            _287 = _286.w;
        }
        _288 = _287;
    }
    else
    {
        _288 = 1.0;
    }
    float _159 = _288 * (_41._mat._emissiveOpacity.w * _color.w);
    if (_159 < 9.9999999747524270787835121154785e-07)
    {
        discard;
    }
    bvec3 _178 = bvec3((_232 & 4) != 0);
    vec3 _179 = vec3(_178.x ? _41._mat._albedoRoughness.xyz.x : vec3(1.0).x, _178.y ? _41._mat._albedoRoughness.xyz.y : vec3(1.0).y, _178.z ? _41._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _291;
    if ((_232 & 1024) != 0)
    {
        _291 = _179 * _286.xyz;
    }
    else
    {
        _291 = _179;
    }
    _fragColor = vec4((_291 * _color.xyz) * _83.lightingModel._UnlitEmissiveLightmapBackground.x, _159);
}

