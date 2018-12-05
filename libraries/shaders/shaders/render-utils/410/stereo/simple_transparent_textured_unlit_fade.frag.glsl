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

layout(std140) uniform fadeParametersBuffer
{
    FadeParameters fadeParameters[5];
} _126;

uniform sampler2D fadeMaskMap;
uniform sampler2D originalTexture;

layout(location = 9) in vec4 _fadeData1;
layout(location = 10) in vec4 _fadeData2;
layout(location = 11) in vec4 _fadeData3;
layout(location = 2) in vec4 _positionWS;
layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 0) out vec4 _fragColor0;

void main()
{
    int _415 = int(_fadeData1.w);
    vec3 _618 = (_positionWS.xyz * _126.fadeParameters[_415]._noiseInvSizeAndLevel.xyz) + _fadeData1.xyz;
    vec3 _620 = floor(_618);
    vec3 _622 = fract(_618);
    vec3 _630 = (_622 * _622) * (vec3(3.0) - (_622 * 2.0));
    vec3 _634 = _620 + vec3(0.0, 1.0, 0.0);
    vec3 _637 = _620 + vec3(1.0, 0.0, 0.0);
    vec3 _640 = _620 + vec3(1.0, 1.0, 0.0);
    vec3 _643 = _620 + vec3(0.0, 0.0, 1.0);
    vec3 _646 = _620 + vec3(0.0, 1.0, 1.0);
    vec3 _649 = _620 + vec3(1.0, 0.0, 1.0);
    vec3 _652 = _620 + vec3(1.0);
    vec4 _669 = mix(vec4(pow(textureLod(fadeMaskMap, (_620.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_620.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_634.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_634.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_637.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_637.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_640.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_640.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(pow(textureLod(fadeMaskMap, (_643.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_643.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_646.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_646.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_649.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_649.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_652.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_652.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(_630.z));
    vec2 _677 = mix(_669.xy, _669.zw, vec2(_630.x));
    float _532 = ((((mix(_677.x, _677.y, _630.y) - 0.5) * _126.fadeParameters[_415]._noiseInvSizeAndLevel.w) + ((length((_positionWS.xyz - _fadeData2.xyz) * _fadeData3.xyz) - 0.5) * _126.fadeParameters[_415]._baseLevel)) + 0.5) - _fadeData2.w;
    float _976;
    if (_126.fadeParameters[_415]._isInverted != 0)
    {
        _976 = -_532;
    }
    else
    {
        _976 = _532;
    }
    if (_976 < 0.0)
    {
        discard;
    }
    float _496 = _976 * _126.fadeParameters[_415]._edgeWidthInvWidth.y;
    float _499 = 1.0 - clamp(_496, 0.0, 1.0);
    vec4 _515 = mix(_126.fadeParameters[_415]._innerEdgeColor, _126.fadeParameters[_415]._outerEdgeColor, vec4(_499 * _499));
    vec4 _444 = texture(originalTexture, _texCoord01.xy);
    vec4 _980;
    float _981;
    if (_color.w <= 0.0)
    {
        float _869 = _444.x;
        float _977;
        if (_869 <= 0.040449999272823333740234375)
        {
            _977 = _869 * 0.077399380505084991455078125;
        }
        else
        {
            _977 = pow((_869 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        float _872 = _444.y;
        float _978;
        if (_872 <= 0.040449999272823333740234375)
        {
            _978 = _872 * 0.077399380505084991455078125;
        }
        else
        {
            _978 = pow((_872 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        float _875 = _444.z;
        float _979;
        if (_875 <= 0.040449999272823333740234375)
        {
            _979 = _875 * 0.077399380505084991455078125;
        }
        else
        {
            _979 = pow((_875 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        _981 = -_color.w;
        _980 = vec4(_977, _978, _979, _444.w);
    }
    else
    {
        _981 = _color.w;
        _980 = _444;
    }
    _fragColor0 = vec4((_color.xyz * _980.xyz) + ((_515.xyz * step(_496, 1.0)) * _515.w), _981 * _980.w);
}

