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
} _259;

layout(std140) uniform materialBuffer
{
    Material _mat;
    TexMapArray _texMapArray;
} _313;

layout(std140) uniform fadeParametersBuffer
{
    FadeParameters fadeParameters[5];
} _445;

layout(std140) uniform fadeObjectParametersBuffer
{
    FadeObjectParams fadeObjectParams;
} _719;

uniform sampler2D albedoMap;
uniform sampler2D roughnessMap;
uniform sampler2D normalMap;
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
layout(location = 4) in vec3 _tangentWS;
layout(location = 7) in vec4 _positionES;

void main()
{
    vec3 _1083 = (_positionWS.xyz * _445.fadeParameters[_719.fadeObjectParams.category]._noiseInvSizeAndLevel.xyz) + _719.fadeObjectParams.noiseOffset.xyz;
    vec3 _1085 = floor(_1083);
    vec3 _1087 = fract(_1083);
    vec3 _1095 = (_1087 * _1087) * (vec3(3.0) - (_1087 * 2.0));
    vec3 _1099 = _1085 + vec3(0.0, 1.0, 0.0);
    vec3 _1102 = _1085 + vec3(1.0, 0.0, 0.0);
    vec3 _1105 = _1085 + vec3(1.0, 1.0, 0.0);
    vec3 _1108 = _1085 + vec3(0.0, 0.0, 1.0);
    vec3 _1111 = _1085 + vec3(0.0, 1.0, 1.0);
    vec3 _1114 = _1085 + vec3(1.0, 0.0, 1.0);
    vec3 _1117 = _1085 + vec3(1.0);
    vec4 _1134 = mix(vec4(pow(textureLod(fadeMaskMap, (_1085.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1085.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1099.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1099.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1102.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1102.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1105.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1105.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(pow(textureLod(fadeMaskMap, (_1108.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1108.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1111.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1111.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1114.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1114.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1117.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1117.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(_1095.z));
    vec2 _1142 = mix(_1134.xy, _1134.zw, vec2(_1095.x));
    float _997 = ((((mix(_1142.x, _1142.y, _1095.y) - 0.5) * _445.fadeParameters[_719.fadeObjectParams.category]._noiseInvSizeAndLevel.w) + ((length((_positionWS.xyz - _719.fadeObjectParams.baseOffset.xyz) * _719.fadeObjectParams.baseInvSize.xyz) - 0.5) * _445.fadeParameters[_719.fadeObjectParams.category]._baseLevel)) + 0.5) - _719.fadeObjectParams.threshold;
    float _1690;
    if (_445.fadeParameters[_719.fadeObjectParams.category]._isInverted != 0)
    {
        _1690 = -_997;
    }
    else
    {
        _1690 = _997;
    }
    if (_1690 < 0.0)
    {
        discard;
    }
    float _961 = _1690 * _445.fadeParameters[_719.fadeObjectParams.category]._edgeWidthInvWidth.y;
    float _964 = 1.0 - clamp(_961, 0.0, 1.0);
    vec4 _980 = mix(_445.fadeParameters[_719.fadeObjectParams.category]._innerEdgeColor, _445.fadeParameters[_719.fadeObjectParams.category]._outerEdgeColor, vec4(_964 * _964));
    int _1334 = floatBitsToInt(_313._mat._keySpare3.x);
    vec4 _1691;
    if ((_1334 & 1216) != 0)
    {
        _1691 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _1691 = vec4(1.0);
    }
    bool _770 = (_1334 & 4096) != 0;
    float _1692;
    if (_770)
    {
        _1692 = texture(roughnessMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _1692 = 1.0;
    }
    vec3 _1693;
    if ((_1334 & 8192) != 0)
    {
        vec2 _1352 = (texture(normalMap, _texCoord01.xy, -1.0).xy - vec2(0.5)) * 2.0;
        vec2 _1355 = _1352 * _1352;
        _1693 = vec3(_1352.x, sqrt((1.0 - _1355.x) - _1355.y), _1352.y);
    }
    else
    {
        _1693 = vec3(0.0, 1.0, 0.0);
    }
    bool _798 = (_1334 & 2048) != 0;
    float _1694;
    if (_798)
    {
        _1694 = texture(metallicMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _1694 = 0.0;
    }
    vec4 _1385 = texture(emissiveMap, _texCoord01.zw);
    bvec3 _822 = bvec3((_1334 & 4) != 0);
    vec3 _823 = vec3(_822.x ? _313._mat._albedoRoughness.xyz.x : vec3(1.0).x, _822.y ? _313._mat._albedoRoughness.xyz.y : vec3(1.0).y, _822.z ? _313._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _1695;
    if ((_1334 & 1024) != 0)
    {
        _1695 = _823 * _1691.xyz;
    }
    else
    {
        _1695 = _823;
    }
    vec3 _838 = _1695 * _color.xyz;
    float _848 = _770 ? _1692 : _313._mat._albedoRoughness.w;
    float _858 = _798 ? _1694 : _313._mat._metallicScatteringSpare2.x;
    vec3 _863 = normalize(_normalWS);
    vec3 _867 = normalize(_tangentWS);
    vec3 _882 = mix(_1693, vec3(0.0, 1.0, 0.0), vec3(smoothstep(30.0, 100.0, (-_positionES).z)));
    vec3 _903 = normalize(((cross(_863, _867) * _882.x) + (_863 * _882.y)) + (_867 * _882.z));
    if (mix(_313._mat._emissiveOpacity.w, 1.0 - _313._mat._emissiveOpacity.w, step(_1691.w, 0.5)) != 1.0)
    {
        discard;
    }
    _fragColor0 = vec4(_838, mix(0.20000000298023223876953125, 0.300000011920928955078125, _858));
    float _1481 = _903.z;
    vec2 _1485 = _903.xy * (1.0 / ((abs(_903.x) + abs(_903.y)) + abs(_1481)));
    vec2 _1696;
    if (_1481 <= 0.0)
    {
        _1696 = (vec2(1.0) - abs(_1485.yx)) * vec2((_1485.x >= 0.0) ? 1.0 : (-1.0), (_1485.y >= 0.0) ? 1.0 : (-1.0));
    }
    else
    {
        _1696 = _1485;
    }
    vec2 _1522 = round((clamp(_1696, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _1527 = _1522.y;
    float _1529 = floor(_1527 * 0.00390625);
    float _1532 = _1522.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_1532, (fract(_1532) * 256.0) + _1529, _1527 - (_1529 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(_848, 0.0, 1.0));
    vec3 _1444 = ((vec3(_313._texMapArray._lightmapParams.x) + (_1385.xyz * _313._texMapArray._lightmapParams.y)) + ((_980.xyz * step(_961, 1.0)) * _980.w)) * _259.lightingModel._UnlitEmissiveLightmapBackground.z;
    _fragColor2 = vec4(_1444, 1.0);
    _fragColor3 = vec4(_1444 * _838, 1.0);
}

