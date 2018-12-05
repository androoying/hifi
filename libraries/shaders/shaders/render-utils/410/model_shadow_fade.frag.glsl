#version 410

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

layout(std140) uniform fadeParametersBuffer
{
    FadeParameters fadeParameters[5];
} _59;

layout(std140) uniform fadeObjectParametersBuffer
{
    FadeObjectParams fadeObjectParams;
} _316;

uniform sampler2D fadeMaskMap;

layout(location = 2) in vec4 _positionWS;
layout(location = 0) out vec4 _fragColor;

void main()
{
    vec3 _445 = (_positionWS.xyz * _59.fadeParameters[_316.fadeObjectParams.category]._noiseInvSizeAndLevel.xyz) + _316.fadeObjectParams.noiseOffset.xyz;
    vec3 _447 = floor(_445);
    vec3 _449 = fract(_445);
    vec3 _457 = (_449 * _449) * (vec3(3.0) - (_449 * 2.0));
    vec3 _461 = _447 + vec3(0.0, 1.0, 0.0);
    vec3 _464 = _447 + vec3(1.0, 0.0, 0.0);
    vec3 _467 = _447 + vec3(1.0, 1.0, 0.0);
    vec3 _470 = _447 + vec3(0.0, 0.0, 1.0);
    vec3 _473 = _447 + vec3(0.0, 1.0, 1.0);
    vec3 _476 = _447 + vec3(1.0, 0.0, 1.0);
    vec3 _479 = _447 + vec3(1.0);
    vec4 _496 = mix(vec4(pow(textureLod(fadeMaskMap, (_447.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_447.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_461.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_461.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_464.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_464.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_467.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_467.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(pow(textureLod(fadeMaskMap, (_470.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_470.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_473.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_473.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_476.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_476.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_479.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_479.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(_457.z));
    vec2 _504 = mix(_496.xy, _496.zw, vec2(_457.x));
    float _359 = ((((mix(_504.x, _504.y, _457.y) - 0.5) * _59.fadeParameters[_316.fadeObjectParams.category]._noiseInvSizeAndLevel.w) + ((length((_positionWS.xyz - _316.fadeObjectParams.baseOffset.xyz) * _316.fadeObjectParams.baseInvSize.xyz) - 0.5) * _59.fadeParameters[_316.fadeObjectParams.category]._baseLevel)) + 0.5) - _316.fadeObjectParams.threshold;
    float _720;
    if (_59.fadeParameters[_316.fadeObjectParams.category]._isInverted != 0)
    {
        _720 = -_359;
    }
    else
    {
        _720 = _359;
    }
    if (_720 < 0.0)
    {
        discard;
    }
    _fragColor = vec4(1.0, 1.0, 1.0, 0.0);
}

