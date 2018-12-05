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
} _104;

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _245;

layout(std140) uniform fadeParametersBuffer
{
    FadeParameters fadeParameters[5];
} _283;

layout(std140) uniform fadeObjectParametersBuffer
{
    FadeObjectParams fadeObjectParams;
} _569;

uniform sampler2D fadeMaskMap;
uniform sampler2D albedoMap;

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 3) out vec4 _fragColor3;
layout(location = 2) in vec4 _positionWS;
layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 3) in vec3 _normalWS;
layout(location = 2) out vec4 _fragColor2;

void main()
{
    vec3 _850 = (_positionWS.xyz * _283.fadeParameters[_569.fadeObjectParams.category]._noiseInvSizeAndLevel.xyz) + _569.fadeObjectParams.noiseOffset.xyz;
    vec3 _852 = floor(_850);
    vec3 _854 = fract(_850);
    vec3 _862 = (_854 * _854) * (vec3(3.0) - (_854 * 2.0));
    vec3 _866 = _852 + vec3(0.0, 1.0, 0.0);
    vec3 _869 = _852 + vec3(1.0, 0.0, 0.0);
    vec3 _872 = _852 + vec3(1.0, 1.0, 0.0);
    vec3 _875 = _852 + vec3(0.0, 0.0, 1.0);
    vec3 _878 = _852 + vec3(0.0, 1.0, 1.0);
    vec3 _881 = _852 + vec3(1.0, 0.0, 1.0);
    vec3 _884 = _852 + vec3(1.0);
    vec4 _901 = mix(vec4(pow(textureLod(fadeMaskMap, (_852.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_852.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_866.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_866.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_869.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_869.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_872.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_872.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(pow(textureLod(fadeMaskMap, (_875.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_875.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_878.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_878.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_881.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_881.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_884.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_884.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(_862.z));
    vec2 _909 = mix(_901.xy, _901.zw, vec2(_862.x));
    float _764 = ((((mix(_909.x, _909.y, _862.y) - 0.5) * _283.fadeParameters[_569.fadeObjectParams.category]._noiseInvSizeAndLevel.w) + ((length((_positionWS.xyz - _569.fadeObjectParams.baseOffset.xyz) * _569.fadeObjectParams.baseInvSize.xyz) - 0.5) * _283.fadeParameters[_569.fadeObjectParams.category]._baseLevel)) + 0.5) - _569.fadeObjectParams.threshold;
    float _1315;
    if (_283.fadeParameters[_569.fadeObjectParams.category]._isInverted != 0)
    {
        _1315 = -_764;
    }
    else
    {
        _1315 = _764;
    }
    if (_1315 < 0.0)
    {
        discard;
    }
    float _728 = _1315 * _283.fadeParameters[_569.fadeObjectParams.category]._edgeWidthInvWidth.y;
    float _731 = 1.0 - clamp(_728, 0.0, 1.0);
    vec4 _747 = mix(_283.fadeParameters[_569.fadeObjectParams.category]._innerEdgeColor, _283.fadeParameters[_569.fadeObjectParams.category]._outerEdgeColor, vec4(_731 * _731));
    int _1101 = floatBitsToInt(_104._mat._keySpare3.x);
    vec4 _1316;
    if ((_1101 & 1216) != 0)
    {
        _1316 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _1316 = vec4(1.0);
    }
    float _1318;
    if ((_1101 & 192) != 0)
    {
        float _1317;
        if ((_1101 & 64) != 0)
        {
            _1317 = step(0.5, _1316.w);
        }
        else
        {
            _1317 = _1316.w;
        }
        _1318 = _1317;
    }
    else
    {
        _1318 = 1.0;
    }
    if (_1318 < 1.0)
    {
        discard;
    }
    bvec3 _656 = bvec3((_1101 & 4) != 0);
    vec3 _657 = vec3(_656.x ? _104._mat._albedoRoughness.xyz.x : vec3(1.0).x, _656.y ? _104._mat._albedoRoughness.xyz.y : vec3(1.0).y, _656.z ? _104._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _1321;
    if ((_1101 & 1024) != 0)
    {
        _1321 = _657 * _1316.xyz;
    }
    else
    {
        _1321 = _657;
    }
    vec3 _672 = _1321 * _color.xyz;
    vec3 _679 = normalize(_normalWS);
    vec3 _682 = (_672 + ((_747.xyz * step(_728, 1.0)) * _747.w)) * _245.lightingModel._UnlitEmissiveLightmapBackground.x;
    if (_1318 != 1.0)
    {
        discard;
    }
    float _1121 = _682.x;
    _fragColor0 = vec4(_1121, _682.yz, 0.60000002384185791015625);
    float _1157 = _679.z;
    vec2 _1161 = _679.xy * (1.0 / ((abs(_679.x) + abs(_679.y)) + abs(_1157)));
    vec2 _1323;
    if (_1157 <= 0.0)
    {
        _1323 = (vec2(1.0) - abs(_1161.yx)) * vec2((_1161.x >= 0.0) ? 1.0 : (-1.0), (_1161.y >= 0.0) ? 1.0 : (-1.0));
    }
    else
    {
        _1323 = _1161;
    }
    vec2 _1198 = round((clamp(_1323, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _1203 = _1198.y;
    float _1205 = floor(_1203 * 0.00390625);
    float _1208 = _1198.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_1208, (fract(_1208) * 256.0) + _1205, _1203 - (_1205 * 256.0))) * vec3(0.0039215688593685626983642578125), 1.0);
    _fragColor3 = vec4(_1121, _682.yz, 1.0);
}

