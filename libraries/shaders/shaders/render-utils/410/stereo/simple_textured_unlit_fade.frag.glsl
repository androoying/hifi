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
} _306;

uniform sampler2D fadeMaskMap;
uniform sampler2D originalTexture;

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 3) out vec4 _fragColor3;
layout(location = 9) in vec4 _fadeData1;
layout(location = 10) in vec4 _fadeData2;
layout(location = 11) in vec4 _fadeData3;
layout(location = 2) in vec4 _positionWS;
layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 3) in vec3 _normalWS;
layout(location = 2) out vec4 _fragColor2;

void main()
{
    int _592 = int(_fadeData1.w);
    vec3 _833 = (_positionWS.xyz * _306.fadeParameters[_592]._noiseInvSizeAndLevel.xyz) + _fadeData1.xyz;
    vec3 _835 = floor(_833);
    vec3 _837 = fract(_833);
    vec3 _845 = (_837 * _837) * (vec3(3.0) - (_837 * 2.0));
    vec3 _849 = _835 + vec3(0.0, 1.0, 0.0);
    vec3 _852 = _835 + vec3(1.0, 0.0, 0.0);
    vec3 _855 = _835 + vec3(1.0, 1.0, 0.0);
    vec3 _858 = _835 + vec3(0.0, 0.0, 1.0);
    vec3 _861 = _835 + vec3(0.0, 1.0, 1.0);
    vec3 _864 = _835 + vec3(1.0, 0.0, 1.0);
    vec3 _867 = _835 + vec3(1.0);
    vec4 _884 = mix(vec4(pow(textureLod(fadeMaskMap, (_835.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_835.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_849.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_849.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_852.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_852.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_855.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_855.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(pow(textureLod(fadeMaskMap, (_858.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_858.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_861.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_861.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_864.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_864.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_867.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_867.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(_845.z));
    vec2 _892 = mix(_884.xy, _884.zw, vec2(_845.x));
    float _747 = ((((mix(_892.x, _892.y, _845.y) - 0.5) * _306.fadeParameters[_592]._noiseInvSizeAndLevel.w) + ((length((_positionWS.xyz - _fadeData2.xyz) * _fadeData3.xyz) - 0.5) * _306.fadeParameters[_592]._baseLevel)) + 0.5) - _fadeData2.w;
    float _1432;
    if (_306.fadeParameters[_592]._isInverted != 0)
    {
        _1432 = -_747;
    }
    else
    {
        _1432 = _747;
    }
    if (_1432 < 0.0)
    {
        discard;
    }
    float _711 = _1432 * _306.fadeParameters[_592]._edgeWidthInvWidth.y;
    float _714 = 1.0 - clamp(_711, 0.0, 1.0);
    vec4 _730 = mix(_306.fadeParameters[_592]._innerEdgeColor, _306.fadeParameters[_592]._outerEdgeColor, vec4(_714 * _714));
    vec3 _737 = (_730.xyz * step(_711, 1.0)) * _730.w;
    vec4 _621 = texture(originalTexture, _texCoord01.xy);
    float _1436;
    vec4 _1437;
    if (_color.w <= 0.0)
    {
        float _1084 = _621.x;
        float _1433;
        if (_1084 <= 0.040449999272823333740234375)
        {
            _1433 = _1084 * 0.077399380505084991455078125;
        }
        else
        {
            _1433 = pow((_1084 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        float _1087 = _621.y;
        float _1434;
        if (_1087 <= 0.040449999272823333740234375)
        {
            _1434 = _1087 * 0.077399380505084991455078125;
        }
        else
        {
            _1434 = pow((_1087 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        float _1090 = _621.z;
        float _1435;
        if (_1090 <= 0.040449999272823333740234375)
        {
            _1435 = _1090 * 0.077399380505084991455078125;
        }
        else
        {
            _1435 = pow((_1090 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        _1437 = vec4(_1433, _1434, _1435, _621.w);
        _1436 = -_color.w;
    }
    else
    {
        _1437 = _621;
        _1436 = _color.w;
    }
    float _640 = _1436 * _1437.w;
    if (_640 < 0.999000012874603271484375)
    {
        vec3 _648 = normalize(_normalWS);
        if (_640 <= 0.0)
        {
            discard;
        }
        _fragColor0 = vec4((_color.xyz * _1437.xyz) + _737, _640);
        float _1175 = _648.z;
        vec2 _1179 = _648.xy * (1.0 / ((abs(_648.x) + abs(_648.y)) + abs(_1175)));
        vec2 _1439;
        if (_1175 <= 0.0)
        {
            _1439 = (vec2(1.0) - abs(_1179.yx)) * vec2((_1179.x >= 0.0) ? 1.0 : (-1.0), (_1179.y >= 0.0) ? 1.0 : (-1.0));
        }
        else
        {
            _1439 = _1179;
        }
        vec2 _1216 = round((clamp(_1439, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
        float _1221 = _1216.y;
        float _1223 = floor(_1221 * 0.00390625);
        float _1226 = _1216.x * 0.0625;
        _fragColor1 = vec4(floor(vec3(_1226, (fract(_1226) * 256.0) + _1223, _1221 - (_1223 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(0.89999997615814208984375, 0.0, 1.0));
    }
    else
    {
        vec3 _668 = normalize(_normalWS);
        vec3 _675 = (_color.xyz * _1437.xyz) + _737;
        float _1251 = _675.x;
        _fragColor0 = vec4(_1251, _675.yz, 0.60000002384185791015625);
        float _1287 = _668.z;
        vec2 _1291 = _668.xy * (1.0 / ((abs(_668.x) + abs(_668.y)) + abs(_1287)));
        vec2 _1438;
        if (_1287 <= 0.0)
        {
            _1438 = (vec2(1.0) - abs(_1291.yx)) * vec2((_1291.x >= 0.0) ? 1.0 : (-1.0), (_1291.y >= 0.0) ? 1.0 : (-1.0));
        }
        else
        {
            _1438 = _1291;
        }
        vec2 _1328 = round((clamp(_1438, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
        float _1333 = _1328.y;
        float _1335 = floor(_1333 * 0.00390625);
        float _1338 = _1328.x * 0.0625;
        _fragColor1 = vec4(floor(vec3(_1338, (fract(_1338) * 256.0) + _1335, _1333 - (_1335 * 256.0))) * vec3(0.0039215688593685626983642578125), 1.0);
        _fragColor3 = vec4(_1251, _675.yz, 1.0);
    }
}

