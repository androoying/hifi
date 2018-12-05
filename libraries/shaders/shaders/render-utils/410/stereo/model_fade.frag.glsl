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
} _327;

layout(std140) uniform fadeParametersBuffer
{
    FadeParameters fadeParameters[5];
} _435;

layout(std140) uniform fadeObjectParametersBuffer
{
    FadeObjectParams fadeObjectParams;
} _710;

uniform sampler2D albedoMap;
uniform sampler2D roughnessMap;
uniform sampler2D metallicMap;
uniform sampler2D emissiveMap;
uniform sampler2D occlusionMap;
uniform sampler2D scatteringMap;
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
    vec3 _1103 = (_positionWS.xyz * _435.fadeParameters[_710.fadeObjectParams.category]._noiseInvSizeAndLevel.xyz) + _710.fadeObjectParams.noiseOffset.xyz;
    vec3 _1105 = floor(_1103);
    vec3 _1107 = fract(_1103);
    vec3 _1115 = (_1107 * _1107) * (vec3(3.0) - (_1107 * 2.0));
    vec3 _1119 = _1105 + vec3(0.0, 1.0, 0.0);
    vec3 _1122 = _1105 + vec3(1.0, 0.0, 0.0);
    vec3 _1125 = _1105 + vec3(1.0, 1.0, 0.0);
    vec3 _1128 = _1105 + vec3(0.0, 0.0, 1.0);
    vec3 _1131 = _1105 + vec3(0.0, 1.0, 1.0);
    vec3 _1134 = _1105 + vec3(1.0, 0.0, 1.0);
    vec3 _1137 = _1105 + vec3(1.0);
    vec4 _1154 = mix(vec4(pow(textureLod(fadeMaskMap, (_1105.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1105.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1119.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1119.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1122.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1122.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1125.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1125.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(pow(textureLod(fadeMaskMap, (_1128.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1128.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1131.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1131.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1134.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1134.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1137.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1137.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(_1115.z));
    vec2 _1162 = mix(_1154.xy, _1154.zw, vec2(_1115.x));
    float _1017 = ((((mix(_1162.x, _1162.y, _1115.y) - 0.5) * _435.fadeParameters[_710.fadeObjectParams.category]._noiseInvSizeAndLevel.w) + ((length((_positionWS.xyz - _710.fadeObjectParams.baseOffset.xyz) * _710.fadeObjectParams.baseInvSize.xyz) - 0.5) * _435.fadeParameters[_710.fadeObjectParams.category]._baseLevel)) + 0.5) - _710.fadeObjectParams.threshold;
    float _1685;
    if (_435.fadeParameters[_710.fadeObjectParams.category]._isInverted != 0)
    {
        _1685 = -_1017;
    }
    else
    {
        _1685 = _1017;
    }
    if (_1685 < 0.0)
    {
        discard;
    }
    float _981 = _1685 * _435.fadeParameters[_710.fadeObjectParams.category]._edgeWidthInvWidth.y;
    float _984 = 1.0 - clamp(_981, 0.0, 1.0);
    vec4 _1000 = mix(_435.fadeParameters[_710.fadeObjectParams.category]._innerEdgeColor, _435.fadeParameters[_710.fadeObjectParams.category]._outerEdgeColor, vec4(_984 * _984));
    int _1354 = floatBitsToInt(_327._mat._keySpare3.x);
    vec4 _1686;
    if ((_1354 & 1216) != 0)
    {
        _1686 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _1686 = vec4(1.0);
    }
    bool _761 = (_1354 & 4096) != 0;
    float _1687;
    if (_761)
    {
        _1687 = texture(roughnessMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _1687 = 1.0;
    }
    bool _775 = (_1354 & 2048) != 0;
    float _1688;
    if (_775)
    {
        _1688 = texture(metallicMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _1688 = 0.0;
    }
    bool _789 = (_1354 & 512) != 0;
    vec3 _1689;
    if (_789)
    {
        _1689 = texture(emissiveMap, _texCoord01.xy, -1.0).xyz;
    }
    else
    {
        _1689 = vec3(0.0);
    }
    bool _804 = (_1354 & 65536) != 0;
    float _1690;
    if (_804)
    {
        _1690 = max((texture(scatteringMap, _texCoord01.xy, -1.0).x - 0.100000001490116119384765625) * 1.111111164093017578125, 0.0);
    }
    else
    {
        _1690 = 0.0;
    }
    float _1691;
    if ((_1354 & 16384) != 0)
    {
        _1691 = texture(occlusionMap, _texCoord01.zw).x;
    }
    else
    {
        _1691 = 1.0;
    }
    float _1693;
    if ((_1354 & 192) != 0)
    {
        float _1692;
        if ((_1354 & 64) != 0)
        {
            _1692 = step(0.5, _1686.w);
        }
        else
        {
            _1692 = _1686.w;
        }
        _1693 = _1692;
    }
    else
    {
        _1693 = 1.0;
    }
    if (_1693 < 1.0)
    {
        discard;
    }
    bvec3 _868 = bvec3((_1354 & 4) != 0);
    vec3 _869 = vec3(_868.x ? _327._mat._albedoRoughness.xyz.x : vec3(1.0).x, _868.y ? _327._mat._albedoRoughness.xyz.y : vec3(1.0).y, _868.z ? _327._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _1696;
    if ((_1354 & 1024) != 0)
    {
        _1696 = _869 * _1686.xyz;
    }
    else
    {
        _1696 = _869;
    }
    vec3 _884 = _1696 * _color.xyz;
    float _894 = _761 ? _1687 : _327._mat._albedoRoughness.w;
    float _904 = _775 ? _1688 : _327._mat._metallicScatteringSpare2.x;
    bvec3 _914 = bvec3(_789);
    vec3 _915 = vec3(_914.x ? _1689.x : _327._mat._emissiveOpacity.xyz.x, _914.y ? _1689.y : _327._mat._emissiveOpacity.xyz.y, _914.z ? _1689.z : _327._mat._emissiveOpacity.xyz.z);
    float _927 = _804 ? _1690 : _327._mat._metallicScatteringSpare2.y;
    vec3 _931 = normalize(_normalWS);
    vec3 _934 = _915 + ((_1000.xyz * step(_981, 1.0)) * _1000.w);
    if (_1693 != 1.0)
    {
        discard;
    }
    bool _1418 = _927 > 0.0;
    float _1698;
    if (_1418)
    {
        _1698 = mix(0.4000000059604644775390625, 0.5, _904);
    }
    else
    {
        _1698 = mix(0.0, 0.100000001490116119384765625, _904);
    }
    _fragColor0 = vec4(_884, _1698);
    float _1486 = _931.z;
    vec2 _1490 = _931.xy * (1.0 / ((abs(_931.x) + abs(_931.y)) + abs(_1486)));
    vec2 _1699;
    if (_1486 <= 0.0)
    {
        _1699 = (vec2(1.0) - abs(_1490.yx)) * vec2((_1490.x >= 0.0) ? 1.0 : (-1.0), (_1490.y >= 0.0) ? 1.0 : (-1.0));
    }
    else
    {
        _1699 = _1490;
    }
    vec2 _1527 = round((clamp(_1699, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _1532 = _1527.y;
    float _1534 = floor(_1532 * 0.00390625);
    float _1537 = _1527.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_1537, (fract(_1537) * 256.0) + _1534, _1532 - (_1534 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(_894, 0.0, 1.0));
    vec3 _1700;
    if (_1418)
    {
        _1700 = vec3(_927);
    }
    else
    {
        _1700 = _934;
    }
    _fragColor2 = vec4(_1700, _1691);
    _fragColor3 = vec4(_934 * _256.lightingModel._UnlitEmissiveLightmapBackground.y, 1.0);
}

