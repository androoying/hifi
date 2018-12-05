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

struct FrustumGrid
{
    float frustumNear;
    float rangeNear;
    float rangeFar;
    float frustumFar;
    ivec3 dims;
    float spare;
    mat4 eyeToGridProj;
    mat4 worldToEyeMat;
    mat4 eyeToWorldMat;
};

struct LightVolume
{
    vec4 positionRadius;
    vec4 directionSpotCos;
};

struct LightIrradiance
{
    vec4 colorIntensity;
    vec4 attenuation;
};

struct Light
{
    LightVolume volume;
    LightIrradiance irradiance;
};

struct SphericalHarmonics
{
    vec4 L00;
    vec4 L1m1;
    vec4 L10;
    vec4 L11;
    vec4 L2m2;
    vec4 L2m1;
    vec4 L20;
    vec4 L21;
    vec4 L22;
};

struct LightAmbient
{
    vec4 _ambient;
    SphericalHarmonics _ambientSphere;
    mat4 transform;
};

struct HazeParams
{
    vec3 hazeColor;
    float hazeGlareBlend;
    vec3 hazeGlareColor;
    float hazeBaseReference;
    vec3 colorModulationFactor;
    int hazeMode;
    mat4 transform;
    float backgroundBlend;
    float hazeRangeFactor;
    float hazeHeightFactor;
    float hazeKeyLightRangeFactor;
    float hazeKeyLightAltitudeFactor;
};

struct _TransformCamera
{
    mat4 _view;
    mat4 _viewInverse;
    mat4 _projectionViewUntranslated;
    mat4 _projection;
    mat4 _projectionInverse;
    vec4 _viewport;
    vec4 _stereoInfo;
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
} _472;

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _768;

layout(std140) uniform frustumGridBuffer
{
    FrustumGrid frustumGrid;
} _1432;

layout(std140) uniform clusterGridBuffer
{
    ivec4 _clusterGridTable[4096];
} _1553;

layout(std140) uniform clusterContentBuffer
{
    ivec4 _clusterGridContent[4096];
} _1589;

layout(std140) uniform lightBuffer
{
    Light lightArray[256];
} _1650;

layout(std140) uniform keyLightBuffer
{
    Light light;
} _2005;

layout(std140) uniform lightAmbientBuffer
{
    LightAmbient lightAmbient;
} _2028;

layout(std140) uniform hazeBuffer
{
    HazeParams hazeParams;
} _2070;

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera;
} _cameraBlock;

layout(std140) uniform fadeParametersBuffer
{
    FadeParameters fadeParameters[5];
} _2671;

layout(std140) uniform fadeObjectParametersBuffer
{
    FadeObjectParams fadeObjectParams;
} _2939;

uniform samplerCube skyboxMap;
uniform sampler2D albedoMap;
uniform sampler2D roughnessMap;
uniform sampler2D normalMap;
uniform sampler2D metallicMap;
uniform sampler2D emissiveMap;
uniform sampler2D occlusionMap;
uniform sampler2D fadeMaskMap;

layout(location = 2) in vec4 _positionWS;
layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 7) in vec4 _positionES;
layout(location = 3) in vec3 _normalWS;
layout(location = 4) in vec3 _tangentWS;
layout(location = 0) out vec4 _fragColor;

ivec3 _7578;
float _8348;
vec3 _8349;

void main()
{
    vec3 _3486 = (_positionWS.xyz * _2671.fadeParameters[_2939.fadeObjectParams.category]._noiseInvSizeAndLevel.xyz) + _2939.fadeObjectParams.noiseOffset.xyz;
    vec3 _3488 = floor(_3486);
    vec3 _3490 = fract(_3486);
    vec3 _3498 = (_3490 * _3490) * (vec3(3.0) - (_3490 * 2.0));
    vec3 _3502 = _3488 + vec3(0.0, 1.0, 0.0);
    vec3 _3505 = _3488 + vec3(1.0, 0.0, 0.0);
    vec3 _3508 = _3488 + vec3(1.0, 1.0, 0.0);
    vec3 _3511 = _3488 + vec3(0.0, 0.0, 1.0);
    vec3 _3514 = _3488 + vec3(0.0, 1.0, 1.0);
    vec3 _3517 = _3488 + vec3(1.0, 0.0, 1.0);
    vec3 _3520 = _3488 + vec3(1.0);
    vec4 _3537 = mix(vec4(pow(textureLod(fadeMaskMap, (_3488.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3488.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3502.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3502.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3505.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3505.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3508.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3508.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(pow(textureLod(fadeMaskMap, (_3511.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3511.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3514.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3514.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3517.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3517.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3520.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3520.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(_3498.z));
    vec2 _3545 = mix(_3537.xy, _3537.zw, vec2(_3498.x));
    float _3400 = ((((mix(_3545.x, _3545.y, _3498.y) - 0.5) * _2671.fadeParameters[_2939.fadeObjectParams.category]._noiseInvSizeAndLevel.w) + ((length((_positionWS.xyz - _2939.fadeObjectParams.baseOffset.xyz) * _2939.fadeObjectParams.baseInvSize.xyz) - 0.5) * _2671.fadeParameters[_2939.fadeObjectParams.category]._baseLevel)) + 0.5) - _2939.fadeObjectParams.threshold;
    float _7543;
    if (_2671.fadeParameters[_2939.fadeObjectParams.category]._isInverted != 0)
    {
        _7543 = -_3400;
    }
    else
    {
        _7543 = _3400;
    }
    if (_7543 < 0.0)
    {
        discard;
    }
    float _3364 = _7543 * _2671.fadeParameters[_2939.fadeObjectParams.category]._edgeWidthInvWidth.y;
    float _3367 = 1.0 - clamp(_3364, 0.0, 1.0);
    vec4 _3383 = mix(_2671.fadeParameters[_2939.fadeObjectParams.category]._innerEdgeColor, _2671.fadeParameters[_2939.fadeObjectParams.category]._outerEdgeColor, vec4(_3367 * _3367));
    int _3737 = floatBitsToInt(_472._mat._keySpare3.x);
    vec4 _7544;
    if ((_3737 & 1216) != 0)
    {
        _7544 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _7544 = vec4(1.0);
    }
    bool _2990 = (_3737 & 4096) != 0;
    float _7545;
    if (_2990)
    {
        _7545 = texture(roughnessMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _7545 = 1.0;
    }
    vec3 _7546;
    if ((_3737 & 8192) != 0)
    {
        vec2 _3755 = (texture(normalMap, _texCoord01.xy, -1.0).xy - vec2(0.5)) * 2.0;
        vec2 _3758 = _3755 * _3755;
        _7546 = vec3(_3755.x, sqrt((1.0 - _3758.x) - _3758.y), _3755.y);
    }
    else
    {
        _7546 = vec3(0.0, 1.0, 0.0);
    }
    bool _3018 = (_3737 & 2048) != 0;
    float _7547;
    if (_3018)
    {
        _7547 = texture(metallicMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _7547 = 0.0;
    }
    bool _3032 = (_3737 & 512) != 0;
    vec3 _7548;
    if (_3032)
    {
        _7548 = texture(emissiveMap, _texCoord01.xy, -1.0).xyz;
    }
    else
    {
        _7548 = vec3(0.0);
    }
    float _7549;
    if ((_3737 & 16384) != 0)
    {
        _7549 = texture(occlusionMap, _texCoord01.zw).x;
    }
    else
    {
        _7549 = 1.0;
    }
    float _7551;
    if ((_3737 & 192) != 0)
    {
        float _7550;
        if ((_3737 & 64) != 0)
        {
            _7550 = step(0.5, _7544.w);
        }
        else
        {
            _7550 = _7544.w;
        }
        _7551 = _7550;
    }
    else
    {
        _7551 = 1.0;
    }
    float _3089 = _7551 * (_472._mat._emissiveOpacity.w * _color.w);
    if (_3089 < 9.9999999747524270787835121154785e-07)
    {
        discard;
    }
    bvec3 _3104 = bvec3((_3737 & 4) != 0);
    vec3 _3105 = vec3(_3104.x ? _472._mat._albedoRoughness.xyz.x : vec3(1.0).x, _3104.y ? _472._mat._albedoRoughness.xyz.y : vec3(1.0).y, _3104.z ? _472._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _7554;
    if ((_3737 & 1024) != 0)
    {
        _7554 = _3105 * _7544.xyz;
    }
    else
    {
        _7554 = _3105;
    }
    vec3 _3119 = _7554 * _color.xyz;
    float _3129 = _2990 ? _7545 : _472._mat._albedoRoughness.w;
    float _3139 = _3018 ? _7547 : _472._mat._metallicScatteringSpare2.x;
    vec3 _3803 = mix(vec3(0.02999999932944774627685546875), _3119, vec3(_3139));
    bvec3 _3155 = bvec3(_3032);
    vec3 _3156 = vec3(_3155.x ? _7548.x : _472._mat._emissiveOpacity.xyz.x, _3155.y ? _7548.y : _472._mat._emissiveOpacity.xyz.y, _3155.z ? _7548.z : _472._mat._emissiveOpacity.xyz.z);
    vec3 _3170 = normalize(_normalWS);
    vec3 _3174 = normalize(_tangentWS);
    vec3 _3188 = mix(_7546, vec3(0.0, 1.0, 0.0), vec3(smoothstep(30.0, 100.0, (-_positionES).z)));
    vec3 _3218 = normalize(_cameraBlock._camera._viewInverse[3].xyz - _positionWS.xyz);
    vec3 _3221 = normalize(((cross(_3170, _3174) * _3188.x) + (_3170 * _3188.y)) + (_3174 * _3188.z));
    float _3836 = mix(0.00999999977648258209228515625, 1.0, _3129);
    float _3842 = _3836 * _3836;
    float _3848 = _3842 * _3842;
    float _3853 = clamp(dot(_3221, _3218), 0.0, 1.0);
    float _3874 = 1.0 - _3848;
    float _3878 = _3853 + sqrt(_3848 + ((_3853 * _3853) * _3874));
    vec4 _3883 = _1432.frustumGrid.worldToEyeMat * _positionWS;
    float _3900 = _3883.z;
    float _7555;
    if (_3900 > 0.0)
    {
        _7555 = -_3900;
    }
    else
    {
        _7555 = _3900;
    }
    float _3997 = _7555 * _1432.frustumGrid.eyeToGridProj[2].x;
    float _4008 = _7555 * _1432.frustumGrid.eyeToGridProj[2].y;
    float _4020 = -_7555;
    vec4 _4026 = vec4((_3883.x * _1432.frustumGrid.eyeToGridProj[0].x) + _3997, (_3883.y * _1432.frustumGrid.eyeToGridProj[1].y) + _4008, _8348, _4020) / vec4(_4020);
    vec3 _4058 = vec3(0.5 * (_4026.x + 1.0), 0.5 * (_4026.y + 1.0), log2(((_4020 - _1432.frustumGrid.rangeNear) / (_1432.frustumGrid.rangeFar - _1432.frustumGrid.rangeNear)) + 1.0)) * vec3(_1432.frustumGrid.dims);
    float _3928 = float(_1432.frustumGrid.dims.z);
    vec3 _7557;
    if (_4058.z >= _3928)
    {
        vec3 _7396 = _4058;
        _7396.z = _3928;
        _7557 = _7396;
    }
    else
    {
        _7557 = _4058;
    }
    vec3 _3937 = floor(_7557);
    ivec3 _3938 = ivec3(_3937);
    bool _3944 = _3900 > (-_1432.frustumGrid.frustumNear);
    bool _3954;
    if (!_3944)
    {
        _3954 = _3900 < (-_1432.frustumGrid.frustumFar);
    }
    else
    {
        _3954 = _3944;
    }
    ivec3 _7564;
    if (_3954)
    {
        _7564 = ivec3(_3938.xy, -2);
    }
    else
    {
        _7564 = _7578;
    }
    bool _8352 = _3954 ? true : false;
    ivec3 _7563;
    if (!_8352)
    {
        bool _3970 = _3900 > (-_1432.frustumGrid.rangeNear);
        ivec3 _7580;
        if (_3970)
        {
            _7580 = ivec3(_3938.xy, -1);
        }
        else
        {
            _7580 = _7564;
        }
        bvec3 _8354 = bvec3(_3970 ? true : _8352);
        _7563 = ivec3(_8354.x ? _7580.x : _3938.x, _8354.y ? _7580.y : _3938.y, _8354.z ? _7580.z : _3938.z);
    }
    else
    {
        _7563 = _7564;
    }
    int _4078 = _7563.x + ((_7563.y + (_7563.z * _1432.frustumGrid.dims.y)) * _1432.frustumGrid.dims.x);
    int _4092 = 255 & (_1553._clusterGridTable[_4078 / 4][_4078 % 4] >> 16);
    int _4097 = 65535 & _1553._clusterGridTable[_4078 / 4][_4078 % 4];
    int _3249 = _4092 + (255 & (_1553._clusterGridTable[_4078 / 4][_4078 % 4] >> 24));
    bool _4104 = _3249 > 0;
    bool _4110;
    if (_4104)
    {
        _4110 = all(greaterThanEqual(_7563, ivec3(0)));
    }
    else
    {
        _4110 = _4104;
    }
    bool _4119;
    if (_4110)
    {
        _4119 = all(lessThan(_7563.xy, _1432.frustumGrid.dims.xy));
    }
    else
    {
        _4119 = _4110;
    }
    bool _4127;
    if (_4119)
    {
        _4127 = _7563.z <= _1432.frustumGrid.dims.z;
    }
    else
    {
        _4127 = _4119;
    }
    vec4 _7616;
    if (_4127)
    {
        vec3 _7605;
        vec3 _7607;
        _7607 = vec3(0.0);
        _7605 = vec3(0.0);
        vec3 _7987;
        vec3 _7989;
        for (int _7602 = 0; _7602 < _4092; _7607 = _7989, _7605 = _7987, _7602++)
        {
            int _4459 = _4097 + _7602;
            int _4461 = _4459 >> 1;
            int _7850;
            if ((_4459 & 1) == 1)
            {
                _7850 = _1589._clusterGridContent[_4461 / 4][_4461 % 4] >> 16;
            }
            else
            {
                _7850 = _1589._clusterGridContent[_4461 / 4][_4461 % 4];
            }
            vec3 _4507 = (_1650.lightArray[_7850 & 65535].volume.positionRadius.xyz - _positionWS.xyz).xyz;
            if (!(dot(_4507, _4507) <= (_1650.lightArray[_7850 & 65535].volume.positionRadius.w * _1650.lightArray[_7850 & 65535].volume.positionRadius.w)))
            {
                _7989 = _7607;
                _7987 = _7605;
                continue;
            }
            float _4248 = length(_4507);
            vec3 _4261 = (_4507 / vec3(_4248)).xyz;
            float _4262 = dot(_3221, _4261);
            if (_4262 < 0.0)
            {
                _7989 = _7607;
                _7987 = _7605;
                continue;
            }
            vec3 _4534 = normalize(_3218 + _4261);
            vec3 _7423 = _8349;
            _7423.x = dot(_3221, _4534);
            vec3 _7425 = _7423;
            _7425.y = _4262;
            vec3 _7427 = _7425;
            _7427.z = dot(_4534, _4261);
            vec3 _4555 = clamp(_7427, vec3(0.0), vec3(1.0));
            float _4557 = _4555.x;
            float _4560 = _4555.y;
            float _4579 = (_4248 / _1650.lightArray[_7850 & 65535].irradiance.attenuation.x) + 1.0;
            vec3 _4283 = (_1650.lightArray[_7850 & 65535].irradiance.colorIntensity.xyz * _1650.lightArray[_7850 & 65535].irradiance.colorIntensity.w) * ((1.0 / (_4579 * _4579)) * min(1.0, max(0.0, -(_4248 - _1650.lightArray[_7850 & 65535].irradiance.attenuation.y))));
            float _4967 = 1.0 - _4555.z;
            float _4970 = _4967 * _4967;
            float _4975 = (_4967 * _4970) * _4970;
            vec3 _4982 = vec3(_4975) + (_3803 * (1.0 - _4975));
            float _4998 = ((_4557 * _4557) * (_3848 - 1.0)) + 1.0;
            float _4954 = ((1.0 - _3139) * _4560) * (1.0 - _4982.x);
            _7989 = _7607 + (vec4((_4982 * (_3848 / ((_4998 * _4998) * (_3878 * (_4560 + sqrt(_3848 + ((_4560 * _4560) * _3874))))))) * _4560, _4954).xyz * _4283);
            _7987 = _7605 + ((vec3(_4954) * mix(vec3(1.0), _3119, vec3(_768.lightingModel._ScatteringDiffuseSpecularAlbedo.w))) * _4283);
            continue;
        }
        vec3 _7604;
        vec3 _7606;
        _7606 = _7607;
        _7604 = _7605;
        vec3 _7988;
        vec3 _7990;
        for (int _7603 = _4092; _7603 < _3249; _7606 = _7990, _7604 = _7988, _7603++)
        {
            int _5039 = _4097 + _7603;
            int _5041 = _5039 >> 1;
            int _7684;
            if ((_5039 & 1) == 1)
            {
                _7684 = _1589._clusterGridContent[_5041 / 4][_5041 % 4] >> 16;
            }
            else
            {
                _7684 = _1589._clusterGridContent[_5041 / 4][_5041 % 4];
            }
            vec3 _5087 = (_1650.lightArray[_7684 & 65535].volume.positionRadius.xyz - _positionWS.xyz).xyz;
            if (!(dot(_5087, _5087) <= (_1650.lightArray[_7684 & 65535].volume.positionRadius.w * _1650.lightArray[_7684 & 65535].volume.positionRadius.w)))
            {
                _7990 = _7606;
                _7988 = _7604;
                continue;
            }
            float _4344 = length(_5087);
            vec3 _4357 = (_5087 / vec3(_4344)).xyz;
            float _4358 = dot(_3221, _4357);
            if (_4358 < 0.0)
            {
                _7990 = _7606;
                _7988 = _7604;
                continue;
            }
            float _5116 = max(-dot(_4357, _1650.lightArray[_7684 & 65535].volume.directionSpotCos.xyz), 0.0);
            if (!(_5116 >= _1650.lightArray[_7684 & 65535].volume.directionSpotCos.w))
            {
                _7990 = _7606;
                _7988 = _7604;
                continue;
            }
            vec3 _5135 = normalize(_3218 + _4357);
            vec3 _7462 = _8349;
            _7462.x = dot(_3221, _5135);
            vec3 _7464 = _7462;
            _7464.y = _4358;
            vec3 _7466 = _7464;
            _7466.z = dot(_5135, _4357);
            vec3 _5156 = clamp(_7466, vec3(0.0), vec3(1.0));
            float _5158 = _5156.x;
            float _5161 = _5156.y;
            float _5180 = (_4344 / _1650.lightArray[_7684 & 65535].irradiance.attenuation.x) + 1.0;
            vec3 _4393 = (_1650.lightArray[_7684 & 65535].irradiance.colorIntensity.xyz * _1650.lightArray[_7684 & 65535].irradiance.colorIntensity.w) * (((1.0 / (_5180 * _5180)) * min(1.0, max(0.0, -(_4344 - _1650.lightArray[_7684 & 65535].irradiance.attenuation.y)))) * pow(_5116, _1650.lightArray[_7684 & 65535].irradiance.attenuation.z));
            float _5577 = 1.0 - _5156.z;
            float _5580 = _5577 * _5577;
            float _5585 = (_5577 * _5580) * _5580;
            vec3 _5592 = vec3(_5585) + (_3803 * (1.0 - _5585));
            float _5608 = ((_5158 * _5158) * (_3848 - 1.0)) + 1.0;
            float _5564 = ((1.0 - _3139) * _5161) * (1.0 - _5592.x);
            _7990 = _7606 + (vec4((_5592 * (_3848 / ((_5608 * _5608) * (_3878 * (_5161 + sqrt(_3848 + ((_5161 * _5161) * _3874))))))) * _5161, _5564).xyz * _4393);
            _7988 = _7604 + ((vec3(_5564) * mix(vec3(1.0), _3119, vec3(_768.lightingModel._ScatteringDiffuseSpecularAlbedo.w))) * _4393);
            continue;
        }
        vec3 _4446 = (_7604 * _768.lightingModel._ScatteringDiffuseSpecularAlbedo.y).xyz + ((_7606 * _768.lightingModel._ScatteringDiffuseSpecularAlbedo.z) / vec3(_3089));
        _7616 = vec4(_4446.x, _4446.y, _4446.z, vec4(0.0).w);
    }
    else
    {
        _7616 = vec4(0.0);
    }
    vec4 _5852 = _2028.lightAmbient.transform * vec4(_3221, 0.0);
    vec3 _5932 = _3803 + ((max(vec3(1.0 - _3836), _3803) - _3803) * pow(1.0 - _3853, 5.0));
    float _5872 = 1.0 - _3139;
    vec4 _5942 = _2028.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875;
    float _5944 = _5852.x;
    float _5949 = _5852.y;
    vec4 _5957 = _2028.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625;
    float _5959 = _5852.z;
    vec4 _5967 = _2028.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375;
    vec4 _5971 = _2028.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625;
    vec3 _5885 = -reflect((_2028.lightAmbient.transform * vec4(_3218, 0.0)).xyz, _5852.xyz);
    vec3 _7627;
    if (_2028.lightAmbient._ambient.y > 0.0)
    {
        _7627 = textureLod(skyboxMap, _5885, max(max(_2028.lightAmbient._ambient.y - (12.0 / (1.0 + (11.0 * _3836))), 0.0), textureQueryLod(skyboxMap, _5885).x)).xyz;
    }
    else
    {
        float _6091 = _5885.x;
        float _6096 = _5885.y;
        float _6106 = _5885.z;
        _7627 = ((((((_5942 * ((_6091 * _6091) - (_6096 * _6096))) + ((_5957 * _6106) * _6106)) + _5967) - _5971) + (((((_2028.lightAmbient._ambientSphere.L2m2 * _6091) * _6096) + ((_2028.lightAmbient._ambientSphere.L21 * _6091) * _6106)) + ((_2028.lightAmbient._ambientSphere.L2m1 * _6096) * _6106)) * 0.85808598995208740234375)) + ((((_2028.lightAmbient._ambientSphere.L11 * _6091) + (_2028.lightAmbient._ambientSphere.L1m1 * _6096)) + (_2028.lightAmbient._ambientSphere.L10 * _6106)) * 1.02332794666290283203125)).xyz;
    }
    vec3 _5891 = _7627 * _5932;
    float _5894 = mix(1.0, _7549, _768.lightingModel._ShowContourObscuranceWireframe.y);
    vec3 _5902 = mix(vec3(1.0), _3119, vec3(_768.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
    float _5907 = (_5894 * _2028.lightAmbient._ambient.x) * _768.lightingModel._AmbientDirectionalPointSpot.x;
    vec3 _6199 = -_2005.light.volume.directionSpotCos.xyz;
    vec3 _6230 = normalize(_3218 + _6199);
    vec3 _7525 = _8349;
    _7525.x = dot(_3221, _6230);
    vec3 _7527 = _7525;
    _7527.y = dot(_3221, _6199);
    vec3 _7529 = _7527;
    _7529.z = dot(_6230, _6199);
    vec3 _6251 = clamp(_7529, vec3(0.0), vec3(1.0));
    float _6253 = _6251.x;
    float _6256 = _6251.y;
    float _6321 = 1.0 - _6251.z;
    float _6324 = _6321 * _6321;
    float _6329 = (_6321 * _6324) * _6324;
    vec3 _6336 = vec3(_6329) + (_3803 * (1.0 - _6329));
    float _6352 = ((_6253 * _6253) * (_3848 - 1.0)) + 1.0;
    float _6308 = (_5872 * _6256) * (1.0 - _6336.x);
    vec3 _6212 = ((_2005.light.irradiance.colorIntensity.xyz * _2005.light.irradiance.colorIntensity.w) * 1.0) * _768.lightingModel._AmbientDirectionalPointSpot.y;
    vec3 _5732 = ((_7616.xyz + ((_3156 + ((_3383.xyz * step(_3364, 1.0)) * _3383.w)) * _768.lightingModel._UnlitEmissiveLightmapBackground.y)) + ((((((vec3(1.0) - _5932) * _5872) * ((((((_5942 * ((_5944 * _5944) - (_5949 * _5949))) + ((_5957 * _5959) * _5959)) + _5967) - _5971) + (((((_2028.lightAmbient._ambientSphere.L2m2 * _5944) * _5949) + ((_2028.lightAmbient._ambientSphere.L21 * _5944) * _5959)) + ((_2028.lightAmbient._ambientSphere.L2m1 * _5949) * _5959)) * 0.85808598995208740234375)) + ((((_2028.lightAmbient._ambientSphere.L11 * _5944) + (_2028.lightAmbient._ambientSphere.L1m1 * _5949)) + (_2028.lightAmbient._ambientSphere.L10 * _5959)) * 1.02332794666290283203125)).xyz) * _5902) * (_5907 * _768.lightingModel._ScatteringDiffuseSpecularAlbedo.y)) + ((vec3(_6308) * _5902) * (_6212 * _768.lightingModel._ScatteringDiffuseSpecularAlbedo.y)))) + (((_5891 * (_5907 * _768.lightingModel._ScatteringDiffuseSpecularAlbedo.z)) + (vec4((_6336 * (_3848 / ((_6352 * _6352) * (_3878 * (_6256 + sqrt(_3848 + ((_6256 * _6256) * _3874))))))) * _6256, _6308).xyz * (_6212 * _768.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) / vec3(_3089));
    bool _5734 = _768.lightingModel._HazeBloomSkinningBlendshape.x > 0.0;
    bool _5741;
    if (_5734)
    {
        _5741 = (_2070.hazeParams.hazeMode & 1) == 1;
    }
    else
    {
        _5741 = _5734;
    }
    vec3 _7673;
    if (_5741)
    {
        float _6427 = length(_positionES.xyz);
        vec4 _6435 = vec4(_2070.hazeParams.hazeColor, 1.0);
        vec4 _7659;
        if ((_2070.hazeParams.hazeMode & 16) == 16)
        {
            _7659 = mix(_6435, vec4(_2070.hazeParams.hazeGlareColor, 1.0), vec4(min(1.0, pow(max(0.0, dot(normalize(_positionWS.xyz - _cameraBlock._camera._viewInverse[3].xyz), _6199)), _2070.hazeParams.hazeGlareBlend))));
        }
        else
        {
            _7659 = _6435;
        }
        vec4 _7662;
        if ((_2070.hazeParams.hazeMode & 8) == 8)
        {
            vec3 _6490 = (_2070.hazeParams.colorModulationFactor * exp((-_2070.hazeParams.hazeHeightFactor) * (_cameraBlock._camera._viewInverse[3].y - _2070.hazeParams.hazeBaseReference))) * _6427;
            float _6494 = _positionWS.y - _cameraBlock._camera._viewInverse[3].y;
            vec3 _7661;
            if (abs(_6494) > 0.00999999977648258209228515625)
            {
                float _6503 = _2070.hazeParams.hazeHeightFactor * _6494;
                _7661 = _6490 * ((1.0 - exp(-_6503)) / _6503);
            }
            else
            {
                _7661 = _6490;
            }
            _7662 = vec4(1.0, 1.0, 1.0, (vec3(1.0) - exp(-_7661)).x);
        }
        else
        {
            vec4 _7663;
            if ((_2070.hazeParams.hazeMode & 2) != 2)
            {
                _7663 = vec4(_7659.xyz, 1.0 - exp((-_6427) * _2070.hazeParams.hazeRangeFactor));
            }
            else
            {
                float _6555 = (_2070.hazeParams.hazeRangeFactor * exp((-_2070.hazeParams.hazeHeightFactor) * (_cameraBlock._camera._viewInverse[3].y - _2070.hazeParams.hazeBaseReference))) * _6427;
                float _6559 = _positionWS.y - _cameraBlock._camera._viewInverse[3].y;
                float _7656;
                if (abs(_6559) > 0.00999999977648258209228515625)
                {
                    float _6568 = _2070.hazeParams.hazeHeightFactor * _6559;
                    float _7657;
                    if (abs(_6568) > 1.0000000116860974230803549289703e-07)
                    {
                        _7657 = _6555 * ((1.0 - exp(-_6568)) / _6568);
                    }
                    else
                    {
                        _7657 = _6555;
                    }
                    _7656 = _7657;
                }
                else
                {
                    _7656 = _6555;
                }
                _7663 = vec4(_7659.xyz, 1.0 - exp(-_7656));
            }
            _7662 = _7663;
        }
        vec4 _7664;
        if (_6427 > 27000.0)
        {
            vec4 _7541 = _7662;
            _7541.w = _7662.w * _2070.hazeParams.backgroundBlend;
            _7664 = _7541;
        }
        else
        {
            _7664 = _7662;
        }
        _7673 = mix(_5732, _7664.xyz, vec3(_7664.w));
    }
    else
    {
        _7673 = _5732;
    }
    _fragColor = vec4(_7673, _3089);
}

