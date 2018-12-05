#version 410

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

struct PolyvoxParams
{
    vec4 voxelVolumeSize;
};

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _210;

layout(std140) uniform fadeParametersBuffer
{
    FadeParameters fadeParameters[5];
} _281;

layout(std140) uniform fadeObjectParametersBuffer
{
    FadeObjectParams fadeObjectParams;
} _564;

layout(std140) uniform polyvoxParamsBuffer
{
    PolyvoxParams params;
} _608;

uniform sampler2D fadeMaskMap;
uniform sampler2D xMap;
uniform sampler2D yMap;
uniform sampler2D zMap;

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 2) out vec4 _fragColor2;
layout(location = 3) out vec4 _fragColor3;
layout(location = 7) in vec4 _worldFadePosition;
layout(location = 2) in vec4 _worldPosition;
layout(location = 6) in vec3 _normal;
layout(location = 5) in vec4 _position;

void main()
{
    vec3 _870 = (_worldFadePosition.xyz * _281.fadeParameters[_564.fadeObjectParams.category]._noiseInvSizeAndLevel.xyz) + _564.fadeObjectParams.noiseOffset.xyz;
    vec3 _872 = floor(_870);
    vec3 _874 = fract(_870);
    vec3 _882 = (_874 * _874) * (vec3(3.0) - (_874 * 2.0));
    vec3 _886 = _872 + vec3(0.0, 1.0, 0.0);
    vec3 _889 = _872 + vec3(1.0, 0.0, 0.0);
    vec3 _892 = _872 + vec3(1.0, 1.0, 0.0);
    vec3 _895 = _872 + vec3(0.0, 0.0, 1.0);
    vec3 _898 = _872 + vec3(0.0, 1.0, 1.0);
    vec3 _901 = _872 + vec3(1.0, 0.0, 1.0);
    vec3 _904 = _872 + vec3(1.0);
    vec4 _921 = mix(vec4(pow(textureLod(fadeMaskMap, (_872.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_872.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_886.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_886.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_889.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_889.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_892.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_892.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(pow(textureLod(fadeMaskMap, (_895.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_895.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_898.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_898.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_901.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_901.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_904.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_904.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(_882.z));
    vec2 _929 = mix(_921.xy, _921.zw, vec2(_882.x));
    float _784 = ((((mix(_929.x, _929.y, _882.y) - 0.5) * _281.fadeParameters[_564.fadeObjectParams.category]._noiseInvSizeAndLevel.w) + ((length((_worldFadePosition.xyz - _564.fadeObjectParams.baseOffset.xyz) * _564.fadeObjectParams.baseInvSize.xyz) - 0.5) * _281.fadeParameters[_564.fadeObjectParams.category]._baseLevel)) + 0.5) - _564.fadeObjectParams.threshold;
    float _1320;
    if (_281.fadeParameters[_564.fadeObjectParams.category]._isInverted != 0)
    {
        _1320 = -_784;
    }
    else
    {
        _1320 = _784;
    }
    if (_1320 < 0.0)
    {
        discard;
    }
    float _748 = _1320 * _281.fadeParameters[_564.fadeObjectParams.category]._edgeWidthInvWidth.y;
    float _751 = 1.0 - clamp(_748, 0.0, 1.0);
    vec4 _767 = mix(_281.fadeParameters[_564.fadeObjectParams.category]._innerEdgeColor, _281.fadeParameters[_564.fadeObjectParams.category]._outerEdgeColor, vec4(_751 * _751));
    vec3 _774 = (_767.xyz * step(_748, 1.0)) * _767.w;
    vec3 _599 = normalize(cross(dFdy(_worldPosition.xyz), dFdx(_worldPosition.xyz)));
    float _625 = (_worldPosition.z - 0.5) / _608.params.voxelVolumeSize.z;
    float _630 = -((_worldPosition.x - 0.5) / _608.params.voxelVolumeSize.x);
    float _632 = -((_worldPosition.y - 0.5) / _608.params.voxelVolumeSize.y);
    _fragColor0 = vec4(((texture(xMap, vec2(_630, _632)).xyz * abs(_599.z)) + (texture(yMap, vec2(_630, _625)).xyz * abs(_599.y))) + (texture(zMap, vec2(_625, _632)).xyz * abs(_599.x)), 0.0);
    vec2 _1189 = _normal.xy * (1.0 / ((abs(_normal.x) + abs(_normal.y)) + abs(_normal.z)));
    vec2 _1322;
    if (_normal.z <= 0.0)
    {
        _1322 = (vec2(1.0) - abs(_1189.yx)) * vec2((_1189.x >= 0.0) ? 1.0 : (-1.0), (_1189.y >= 0.0) ? 1.0 : (-1.0));
    }
    else
    {
        _1322 = _1189;
    }
    vec2 _1226 = round((clamp(_1322, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _1231 = _1226.y;
    float _1233 = floor(_1231 * 0.00390625);
    float _1236 = _1226.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_1236, (fract(_1236) * 256.0) + _1233, _1231 - (_1233 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(0.89999997615814208984375, 0.0, 1.0));
    _fragColor2 = vec4(_774, 1.0);
    _fragColor3 = vec4(_774 * _210.lightingModel._UnlitEmissiveLightmapBackground.y, 1.0);
}

