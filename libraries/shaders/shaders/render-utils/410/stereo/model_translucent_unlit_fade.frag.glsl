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

layout(std140) uniform materialBuffer
{
    Material _mat;
    TexMapArray _texMapArray;
} _84;

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _126;

layout(std140) uniform fadeParametersBuffer
{
    FadeParameters fadeParameters[5];
} _147;

layout(std140) uniform fadeObjectParametersBuffer
{
    FadeObjectParams fadeObjectParams;
} _428;

uniform sampler2D albedoMap;
uniform sampler2D fadeMaskMap;

layout(location = 2) in vec4 _positionWS;
layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 0) out vec4 _fragColor;

void main()
{
    vec3 _706 = (_positionWS.xyz * _147.fadeParameters[_428.fadeObjectParams.category]._noiseInvSizeAndLevel.xyz) + _428.fadeObjectParams.noiseOffset.xyz;
    vec3 _708 = floor(_706);
    vec3 _710 = fract(_706);
    vec3 _718 = (_710 * _710) * (vec3(3.0) - (_710 * 2.0));
    vec3 _722 = _708 + vec3(0.0, 1.0, 0.0);
    vec3 _725 = _708 + vec3(1.0, 0.0, 0.0);
    vec3 _728 = _708 + vec3(1.0, 1.0, 0.0);
    vec3 _731 = _708 + vec3(0.0, 0.0, 1.0);
    vec3 _734 = _708 + vec3(0.0, 1.0, 1.0);
    vec3 _737 = _708 + vec3(1.0, 0.0, 1.0);
    vec3 _740 = _708 + vec3(1.0);
    vec4 _757 = mix(vec4(pow(textureLod(fadeMaskMap, (_708.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_708.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_722.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_722.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_725.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_725.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_728.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_728.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(pow(textureLod(fadeMaskMap, (_731.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_731.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_734.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_734.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_737.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_737.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_740.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_740.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(_718.z));
    vec2 _765 = mix(_757.xy, _757.zw, vec2(_718.x));
    float _620 = ((((mix(_765.x, _765.y, _718.y) - 0.5) * _147.fadeParameters[_428.fadeObjectParams.category]._noiseInvSizeAndLevel.w) + ((length((_positionWS.xyz - _428.fadeObjectParams.baseOffset.xyz) * _428.fadeObjectParams.baseInvSize.xyz) - 0.5) * _147.fadeParameters[_428.fadeObjectParams.category]._baseLevel)) + 0.5) - _428.fadeObjectParams.threshold;
    float _1062;
    if (_147.fadeParameters[_428.fadeObjectParams.category]._isInverted != 0)
    {
        _1062 = -_620;
    }
    else
    {
        _1062 = _620;
    }
    if (_1062 < 0.0)
    {
        discard;
    }
    float _584 = _1062 * _147.fadeParameters[_428.fadeObjectParams.category]._edgeWidthInvWidth.y;
    float _587 = 1.0 - clamp(_584, 0.0, 1.0);
    vec4 _603 = mix(_147.fadeParameters[_428.fadeObjectParams.category]._innerEdgeColor, _147.fadeParameters[_428.fadeObjectParams.category]._outerEdgeColor, vec4(_587 * _587));
    int _957 = floatBitsToInt(_84._mat._keySpare3.x);
    vec4 _1063;
    if ((_957 & 1216) != 0)
    {
        _1063 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _1063 = vec4(1.0);
    }
    float _1065;
    if ((_957 & 192) != 0)
    {
        float _1064;
        if ((_957 & 64) != 0)
        {
            _1064 = step(0.5, _1063.w);
        }
        else
        {
            _1064 = _1063.w;
        }
        _1065 = _1064;
    }
    else
    {
        _1065 = 1.0;
    }
    float _508 = _1065 * (_84._mat._emissiveOpacity.w * _color.w);
    if (_508 < 9.9999999747524270787835121154785e-07)
    {
        discard;
    }
    bvec3 _524 = bvec3((_957 & 4) != 0);
    vec3 _525 = vec3(_524.x ? _84._mat._albedoRoughness.xyz.x : vec3(1.0).x, _524.y ? _84._mat._albedoRoughness.xyz.y : vec3(1.0).y, _524.z ? _84._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _1068;
    if ((_957 & 1024) != 0)
    {
        _1068 = _525 * _1063.xyz;
    }
    else
    {
        _1068 = _525;
    }
    _fragColor = vec4(((_1068 * _color.xyz) + ((_603.xyz * step(_584, 1.0)) * _603.w)) * _126.lightingModel._UnlitEmissiveLightmapBackground.x, _508);
}

