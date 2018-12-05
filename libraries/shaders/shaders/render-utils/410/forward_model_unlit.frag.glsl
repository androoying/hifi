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
} _37;

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _74;

uniform sampler2D albedoMap;

layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 0) out vec4 _fragColor0;

void main()
{
    int _215 = floatBitsToInt(_37._mat._keySpare3.x);
    vec4 _256;
    if ((_215 & 1216) != 0)
    {
        _256 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _256 = vec4(1.0);
    }
    float _258;
    if ((_215 & 192) != 0)
    {
        float _257;
        if ((_215 & 64) != 0)
        {
            _257 = step(0.5, _256.w);
        }
        else
        {
            _257 = _256.w;
        }
        _258 = _257;
    }
    else
    {
        _258 = 1.0;
    }
    if (_258 < 1.0)
    {
        discard;
    }
    bvec3 _161 = bvec3((_215 & 4) != 0);
    vec3 _162 = vec3(_161.x ? _37._mat._albedoRoughness.xyz.x : vec3(1.0).x, _161.y ? _37._mat._albedoRoughness.xyz.y : vec3(1.0).y, _161.z ? _37._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _261;
    if ((_215 & 1024) != 0)
    {
        _261 = _162 * _256.xyz;
    }
    else
    {
        _261 = _162;
    }
    _fragColor0 = vec4((_261 * _color.xyz) * _74.lightingModel._UnlitEmissiveLightmapBackground.x, 1.0);
}

