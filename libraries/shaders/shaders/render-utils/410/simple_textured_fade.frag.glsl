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

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _276;

layout(std140) uniform fadeParametersBuffer
{
    FadeParameters fadeParameters[5];
} _367;

uniform sampler2D fadeMaskMap;
uniform sampler2D originalTexture;

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 2) out vec4 _fragColor2;
layout(location = 3) out vec4 _fragColor3;
layout(location = 9) in vec4 _fadeData1;
layout(location = 10) in vec4 _fadeData2;
layout(location = 11) in vec4 _fadeData3;
layout(location = 2) in vec4 _positionWS;
layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 3) in vec3 _normalWS;

void main()
{
    int _650 = int(_fadeData1.w);
    vec3 _890 = (_positionWS.xyz * _367.fadeParameters[_650]._noiseInvSizeAndLevel.xyz) + _fadeData1.xyz;
    vec3 _892 = floor(_890);
    vec3 _894 = fract(_890);
    vec3 _902 = (_894 * _894) * (vec3(3.0) - (_894 * 2.0));
    vec3 _906 = _892 + vec3(0.0, 1.0, 0.0);
    vec3 _909 = _892 + vec3(1.0, 0.0, 0.0);
    vec3 _912 = _892 + vec3(1.0, 1.0, 0.0);
    vec3 _915 = _892 + vec3(0.0, 0.0, 1.0);
    vec3 _918 = _892 + vec3(0.0, 1.0, 1.0);
    vec3 _921 = _892 + vec3(1.0, 0.0, 1.0);
    vec3 _924 = _892 + vec3(1.0);
    vec4 _941 = mix(vec4(pow(textureLod(fadeMaskMap, (_892.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_892.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_906.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_906.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_909.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_909.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_912.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_912.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(pow(textureLod(fadeMaskMap, (_915.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_915.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_918.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_918.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_921.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_921.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_924.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_924.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(_902.z));
    vec2 _949 = mix(_941.xy, _941.zw, vec2(_902.x));
    float _804 = ((((mix(_949.x, _949.y, _902.y) - 0.5) * _367.fadeParameters[_650]._noiseInvSizeAndLevel.w) + ((length((_positionWS.xyz - _fadeData2.xyz) * _fadeData3.xyz) - 0.5) * _367.fadeParameters[_650]._baseLevel)) + 0.5) - _fadeData2.w;
    float _1528;
    if (_367.fadeParameters[_650]._isInverted != 0)
    {
        _1528 = -_804;
    }
    else
    {
        _1528 = _804;
    }
    if (_1528 < 0.0)
    {
        discard;
    }
    float _768 = _1528 * _367.fadeParameters[_650]._edgeWidthInvWidth.y;
    float _771 = 1.0 - clamp(_768, 0.0, 1.0);
    vec4 _787 = mix(_367.fadeParameters[_650]._innerEdgeColor, _367.fadeParameters[_650]._outerEdgeColor, vec4(_771 * _771));
    vec3 _794 = (_787.xyz * step(_768, 1.0)) * _787.w;
    vec4 _679 = texture(originalTexture, _texCoord01.xy);
    float _1532;
    vec4 _1533;
    if (_color.w <= 0.0)
    {
        float _1141 = _679.x;
        float _1529;
        if (_1141 <= 0.040449999272823333740234375)
        {
            _1529 = _1141 * 0.077399380505084991455078125;
        }
        else
        {
            _1529 = pow((_1141 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        float _1144 = _679.y;
        float _1530;
        if (_1144 <= 0.040449999272823333740234375)
        {
            _1530 = _1144 * 0.077399380505084991455078125;
        }
        else
        {
            _1530 = pow((_1144 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        float _1147 = _679.z;
        float _1531;
        if (_1147 <= 0.040449999272823333740234375)
        {
            _1531 = _1147 * 0.077399380505084991455078125;
        }
        else
        {
            _1531 = pow((_1147 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        _1533 = vec4(_1529, _1530, _1531, _679.w);
        _1532 = -_color.w;
    }
    else
    {
        _1533 = _679;
        _1532 = _color.w;
    }
    float _698 = _1532 * _1533.w;
    if (_698 < 0.999000012874603271484375)
    {
        vec3 _706 = normalize(_normalWS);
        if (_698 <= 0.0)
        {
            discard;
        }
        _fragColor0 = vec4((_color.xyz * _1533.xyz) + _794, _698);
        float _1232 = _706.z;
        vec2 _1236 = _706.xy * (1.0 / ((abs(_706.x) + abs(_706.y)) + abs(_1232)));
        vec2 _1537;
        if (_1232 <= 0.0)
        {
            _1537 = (vec2(1.0) - abs(_1236.yx)) * vec2((_1236.x >= 0.0) ? 1.0 : (-1.0), (_1236.y >= 0.0) ? 1.0 : (-1.0));
        }
        else
        {
            _1537 = _1236;
        }
        vec2 _1273 = round((clamp(_1537, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
        float _1278 = _1273.y;
        float _1280 = floor(_1278 * 0.00390625);
        float _1283 = _1273.x * 0.0625;
        _fragColor1 = vec4(floor(vec3(_1283, (fract(_1283) * 256.0) + _1280, _1278 - (_1280 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(0.89999997615814208984375, 0.0, 1.0));
    }
    else
    {
        vec3 _726 = normalize(_normalWS);
        _fragColor0 = vec4(_color.xyz * _1533.xyz, 0.0);
        float _1380 = _726.z;
        vec2 _1384 = _726.xy * (1.0 / ((abs(_726.x) + abs(_726.y)) + abs(_1380)));
        vec2 _1535;
        if (_1380 <= 0.0)
        {
            _1535 = (vec2(1.0) - abs(_1384.yx)) * vec2((_1384.x >= 0.0) ? 1.0 : (-1.0), (_1384.y >= 0.0) ? 1.0 : (-1.0));
        }
        else
        {
            _1535 = _1384;
        }
        vec2 _1421 = round((clamp(_1535, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
        float _1426 = _1421.y;
        float _1428 = floor(_1426 * 0.00390625);
        float _1431 = _1421.x * 0.0625;
        _fragColor1 = vec4(floor(vec3(_1431, (fract(_1431) * 256.0) + _1428, _1426 - (_1428 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(0.89999997615814208984375, 0.0, 1.0));
        _fragColor2 = vec4(_794, 1.0);
        _fragColor3 = vec4(_794 * _276.lightingModel._UnlitEmissiveLightmapBackground.y, 1.0);
    }
}

