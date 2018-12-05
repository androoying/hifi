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

struct PolyLineUniforms
{
    vec3 color;
};

layout(std140) uniform fadeParametersBuffer
{
    FadeParameters fadeParameters[5];
} _210;

layout(std140) uniform fadeObjectParametersBuffer
{
    FadeObjectParams fadeObjectParams;
} _496;

layout(std140) uniform polyLineBuffer
{
    PolyLineUniforms polyline;
} _554;

uniform sampler2D fadeMaskMap;
uniform sampler2D originalTexture;

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 3) in vec4 _worldPosition;
layout(location = 1) in vec2 varTexcoord;
layout(location = 2) in vec4 varColor;
layout(location = 0) in vec3 interpolatedNormal;
layout(location = 2) out vec4 _fragColor2;
layout(location = 3) out vec4 _fragColor3;

void main()
{
    vec3 _724 = (_worldPosition.xyz * _210.fadeParameters[_496.fadeObjectParams.category]._noiseInvSizeAndLevel.xyz) + _496.fadeObjectParams.noiseOffset.xyz;
    vec3 _726 = floor(_724);
    vec3 _728 = fract(_724);
    vec3 _736 = (_728 * _728) * (vec3(3.0) - (_728 * 2.0));
    vec3 _740 = _726 + vec3(0.0, 1.0, 0.0);
    vec3 _743 = _726 + vec3(1.0, 0.0, 0.0);
    vec3 _746 = _726 + vec3(1.0, 1.0, 0.0);
    vec3 _749 = _726 + vec3(0.0, 0.0, 1.0);
    vec3 _752 = _726 + vec3(0.0, 1.0, 1.0);
    vec3 _755 = _726 + vec3(1.0, 0.0, 1.0);
    vec3 _758 = _726 + vec3(1.0);
    vec4 _775 = mix(vec4(pow(textureLod(fadeMaskMap, (_726.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_726.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_740.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_740.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_743.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_743.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_746.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_746.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(pow(textureLod(fadeMaskMap, (_749.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_749.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_752.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_752.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_755.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_755.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_758.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_758.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(_736.z));
    vec2 _783 = mix(_775.xy, _775.zw, vec2(_736.x));
    float _638 = ((((mix(_783.x, _783.y, _736.y) - 0.5) * _210.fadeParameters[_496.fadeObjectParams.category]._noiseInvSizeAndLevel.w) + ((length((_worldPosition.xyz - _496.fadeObjectParams.baseOffset.xyz) * _496.fadeObjectParams.baseInvSize.xyz) - 0.5) * _210.fadeParameters[_496.fadeObjectParams.category]._baseLevel)) + 0.5) - _496.fadeObjectParams.threshold;
    float _1129;
    if (_210.fadeParameters[_496.fadeObjectParams.category]._isInverted != 0)
    {
        _1129 = -_638;
    }
    else
    {
        _1129 = _638;
    }
    if (_1129 < 0.0)
    {
        discard;
    }
    float _602 = _1129 * _210.fadeParameters[_496.fadeObjectParams.category]._edgeWidthInvWidth.y;
    float _605 = 1.0 - clamp(_602, 0.0, 1.0);
    vec4 _621 = mix(_210.fadeParameters[_496.fadeObjectParams.category]._innerEdgeColor, _210.fadeParameters[_496.fadeObjectParams.category]._outerEdgeColor, vec4(_605 * _605));
    vec4 _527 = texture(originalTexture, varTexcoord);
    vec3 _544 = interpolatedNormal * float(1 - (int(gl_FrontFacing) * 2));
    float _550 = _527.w * varColor.w;
    if (_550 <= 0.0)
    {
        discard;
    }
    _fragColor0 = vec4((_554.polyline.color * _527.xyz) + ((_621.xyz * step(_602, 1.0)) * _621.w), _550);
    float _999 = _544.z;
    vec2 _1003 = _544.xy * (1.0 / ((abs(_544.x) + abs(_544.y)) + abs(_999)));
    vec2 _1130;
    if (_999 <= 0.0)
    {
        _1130 = (vec2(1.0) - abs(_1003.yx)) * vec2((_1003.x >= 0.0) ? 1.0 : (-1.0), (_1003.y >= 0.0) ? 1.0 : (-1.0));
    }
    else
    {
        _1130 = _1003;
    }
    vec2 _1040 = round((clamp(_1130, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _1045 = _1040.y;
    float _1047 = floor(_1045 * 0.00390625);
    float _1050 = _1040.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_1050, (fract(_1050) * 256.0) + _1047, _1045 - (_1047 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(10.0, 0.0, 1.0));
}

