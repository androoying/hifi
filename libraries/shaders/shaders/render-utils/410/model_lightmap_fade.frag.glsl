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
} _256;

layout(std140) uniform materialBuffer
{
    Material _mat;
    TexMapArray _texMapArray;
} _310;

layout(std140) uniform fadeParametersBuffer
{
    FadeParameters fadeParameters[5];
} _414;

layout(std140) uniform fadeObjectParametersBuffer
{
    FadeObjectParams fadeObjectParams;
} _689;

uniform sampler2D albedoMap;
uniform sampler2D roughnessMap;
uniform sampler2D metallicMap;
uniform sampler2D emissiveMap;
uniform sampler2D fadeMaskMap;

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 2) out vec4 _fragColor2;
layout(location = 3) out vec4 _fragColor3;
layout(location = 2) in vec4 _positionWS;
layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 3) in vec3 _normalWS;

void main()
{
    vec3 _999 = (_positionWS.xyz * _414.fadeParameters[_689.fadeObjectParams.category]._noiseInvSizeAndLevel.xyz) + _689.fadeObjectParams.noiseOffset.xyz;
    vec3 _1001 = floor(_999);
    vec3 _1003 = fract(_999);
    vec3 _1011 = (_1003 * _1003) * (vec3(3.0) - (_1003 * 2.0));
    vec3 _1015 = _1001 + vec3(0.0, 1.0, 0.0);
    vec3 _1018 = _1001 + vec3(1.0, 0.0, 0.0);
    vec3 _1021 = _1001 + vec3(1.0, 1.0, 0.0);
    vec3 _1024 = _1001 + vec3(0.0, 0.0, 1.0);
    vec3 _1027 = _1001 + vec3(0.0, 1.0, 1.0);
    vec3 _1030 = _1001 + vec3(1.0, 0.0, 1.0);
    vec3 _1033 = _1001 + vec3(1.0);
    vec4 _1050 = mix(vec4(pow(textureLod(fadeMaskMap, (_1001.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1001.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1015.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1015.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1018.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1018.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1021.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1021.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(pow(textureLod(fadeMaskMap, (_1024.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1024.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1027.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1027.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1030.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1030.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1033.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1033.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(_1011.z));
    vec2 _1058 = mix(_1050.xy, _1050.zw, vec2(_1011.x));
    float _913 = ((((mix(_1058.x, _1058.y, _1011.y) - 0.5) * _414.fadeParameters[_689.fadeObjectParams.category]._noiseInvSizeAndLevel.w) + ((length((_positionWS.xyz - _689.fadeObjectParams.baseOffset.xyz) * _689.fadeObjectParams.baseInvSize.xyz) - 0.5) * _414.fadeParameters[_689.fadeObjectParams.category]._baseLevel)) + 0.5) - _689.fadeObjectParams.threshold;
    float _1575;
    if (_414.fadeParameters[_689.fadeObjectParams.category]._isInverted != 0)
    {
        _1575 = -_913;
    }
    else
    {
        _1575 = _913;
    }
    if (_1575 < 0.0)
    {
        discard;
    }
    float _877 = _1575 * _414.fadeParameters[_689.fadeObjectParams.category]._edgeWidthInvWidth.y;
    float _880 = 1.0 - clamp(_877, 0.0, 1.0);
    vec4 _896 = mix(_414.fadeParameters[_689.fadeObjectParams.category]._innerEdgeColor, _414.fadeParameters[_689.fadeObjectParams.category]._outerEdgeColor, vec4(_880 * _880));
    int _1250 = floatBitsToInt(_310._mat._keySpare3.x);
    vec4 _1576;
    if ((_1250 & 1216) != 0)
    {
        _1576 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _1576 = vec4(1.0);
    }
    bool _740 = (_1250 & 4096) != 0;
    float _1577;
    if (_740)
    {
        _1577 = texture(roughnessMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _1577 = 1.0;
    }
    bool _754 = (_1250 & 2048) != 0;
    float _1578;
    if (_754)
    {
        _1578 = texture(metallicMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _1578 = 0.0;
    }
    vec4 _1277 = texture(emissiveMap, _texCoord01.zw);
    bvec3 _778 = bvec3((_1250 & 4) != 0);
    vec3 _779 = vec3(_778.x ? _310._mat._albedoRoughness.xyz.x : vec3(1.0).x, _778.y ? _310._mat._albedoRoughness.xyz.y : vec3(1.0).y, _778.z ? _310._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _1579;
    if ((_1250 & 1024) != 0)
    {
        _1579 = _779 * _1576.xyz;
    }
    else
    {
        _1579 = _779;
    }
    vec3 _794 = _1579 * _color.xyz;
    float _804 = _740 ? _1577 : _310._mat._albedoRoughness.w;
    float _814 = _754 ? _1578 : _310._mat._metallicScatteringSpare2.x;
    vec3 _818 = normalize(_normalWS);
    if (mix(_310._mat._emissiveOpacity.w, 1.0 - _310._mat._emissiveOpacity.w, step(_1576.w, 0.5)) != 1.0)
    {
        discard;
    }
    _fragColor0 = vec4(_794, mix(0.20000000298023223876953125, 0.300000011920928955078125, _814));
    float _1373 = _818.z;
    vec2 _1377 = _818.xy * (1.0 / ((abs(_818.x) + abs(_818.y)) + abs(_1373)));
    vec2 _1580;
    if (_1373 <= 0.0)
    {
        _1580 = (vec2(1.0) - abs(_1377.yx)) * vec2((_1377.x >= 0.0) ? 1.0 : (-1.0), (_1377.y >= 0.0) ? 1.0 : (-1.0));
    }
    else
    {
        _1580 = _1377;
    }
    vec2 _1414 = round((clamp(_1580, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _1419 = _1414.y;
    float _1421 = floor(_1419 * 0.00390625);
    float _1424 = _1414.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_1424, (fract(_1424) * 256.0) + _1421, _1419 - (_1421 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(_804, 0.0, 1.0));
    vec3 _1336 = ((vec3(_310._texMapArray._lightmapParams.x) + (_1277.xyz * _310._texMapArray._lightmapParams.y)) + ((_896.xyz * step(_877, 1.0)) * _896.w)) * _256.lightingModel._UnlitEmissiveLightmapBackground.z;
    _fragColor2 = vec4(_1336, 1.0);
    _fragColor3 = vec4(_1336 * _794, 1.0);
}

