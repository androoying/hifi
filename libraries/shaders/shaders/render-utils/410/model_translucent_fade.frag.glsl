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
} _469;

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _765;

layout(std140) uniform frustumGridBuffer
{
    FrustumGrid frustumGrid;
} _1429;

layout(std140) uniform clusterGridBuffer
{
    ivec4 _clusterGridTable[4096];
} _1550;

layout(std140) uniform clusterContentBuffer
{
    ivec4 _clusterGridContent[4096];
} _1586;

layout(std140) uniform lightBuffer
{
    Light lightArray[256];
} _1647;

layout(std140) uniform keyLightBuffer
{
    Light light;
} _2002;

layout(std140) uniform lightAmbientBuffer
{
    LightAmbient lightAmbient;
} _2025;

layout(std140) uniform hazeBuffer
{
    HazeParams hazeParams;
} _2067;

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera;
} _cameraBlock;

layout(std140) uniform fadeParametersBuffer
{
    FadeParameters fadeParameters[5];
} _2641;

layout(std140) uniform fadeObjectParametersBuffer
{
    FadeObjectParams fadeObjectParams;
} _2909;

uniform samplerCube skyboxMap;
uniform sampler2D albedoMap;
uniform sampler2D roughnessMap;
uniform sampler2D metallicMap;
uniform sampler2D emissiveMap;
uniform sampler2D occlusionMap;
uniform sampler2D fadeMaskMap;

layout(location = 2) in vec4 _positionWS;
layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 7) in vec4 _positionES;
layout(location = 3) in vec3 _normalWS;
layout(location = 0) out vec4 _fragColor;

ivec3 _7463;
float _8224;
vec3 _8225;

void main()
{
    vec3 _3404 = (_positionWS.xyz * _2641.fadeParameters[_2909.fadeObjectParams.category]._noiseInvSizeAndLevel.xyz) + _2909.fadeObjectParams.noiseOffset.xyz;
    vec3 _3406 = floor(_3404);
    vec3 _3408 = fract(_3404);
    vec3 _3416 = (_3408 * _3408) * (vec3(3.0) - (_3408 * 2.0));
    vec3 _3420 = _3406 + vec3(0.0, 1.0, 0.0);
    vec3 _3423 = _3406 + vec3(1.0, 0.0, 0.0);
    vec3 _3426 = _3406 + vec3(1.0, 1.0, 0.0);
    vec3 _3429 = _3406 + vec3(0.0, 0.0, 1.0);
    vec3 _3432 = _3406 + vec3(0.0, 1.0, 1.0);
    vec3 _3435 = _3406 + vec3(1.0, 0.0, 1.0);
    vec3 _3438 = _3406 + vec3(1.0);
    vec4 _3455 = mix(vec4(pow(textureLod(fadeMaskMap, (_3406.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3406.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3420.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3420.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3423.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3423.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3426.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3426.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(pow(textureLod(fadeMaskMap, (_3429.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3429.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3432.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3432.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3435.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3435.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3438.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3438.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(_3416.z));
    vec2 _3463 = mix(_3455.xy, _3455.zw, vec2(_3416.x));
    float _3318 = ((((mix(_3463.x, _3463.y, _3416.y) - 0.5) * _2641.fadeParameters[_2909.fadeObjectParams.category]._noiseInvSizeAndLevel.w) + ((length((_positionWS.xyz - _2909.fadeObjectParams.baseOffset.xyz) * _2909.fadeObjectParams.baseInvSize.xyz) - 0.5) * _2641.fadeParameters[_2909.fadeObjectParams.category]._baseLevel)) + 0.5) - _2909.fadeObjectParams.threshold;
    float _7430;
    if (_2641.fadeParameters[_2909.fadeObjectParams.category]._isInverted != 0)
    {
        _7430 = -_3318;
    }
    else
    {
        _7430 = _3318;
    }
    if (_7430 < 0.0)
    {
        discard;
    }
    float _3282 = _7430 * _2641.fadeParameters[_2909.fadeObjectParams.category]._edgeWidthInvWidth.y;
    float _3285 = 1.0 - clamp(_3282, 0.0, 1.0);
    vec4 _3301 = mix(_2641.fadeParameters[_2909.fadeObjectParams.category]._innerEdgeColor, _2641.fadeParameters[_2909.fadeObjectParams.category]._outerEdgeColor, vec4(_3285 * _3285));
    int _3655 = floatBitsToInt(_469._mat._keySpare3.x);
    vec4 _7431;
    if ((_3655 & 1216) != 0)
    {
        _7431 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _7431 = vec4(1.0);
    }
    bool _2960 = (_3655 & 4096) != 0;
    float _7432;
    if (_2960)
    {
        _7432 = texture(roughnessMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _7432 = 1.0;
    }
    bool _2974 = (_3655 & 2048) != 0;
    float _7433;
    if (_2974)
    {
        _7433 = texture(metallicMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _7433 = 0.0;
    }
    bool _2988 = (_3655 & 512) != 0;
    vec3 _7434;
    if (_2988)
    {
        _7434 = texture(emissiveMap, _texCoord01.xy, -1.0).xyz;
    }
    else
    {
        _7434 = vec3(0.0);
    }
    float _7435;
    if ((_3655 & 16384) != 0)
    {
        _7435 = texture(occlusionMap, _texCoord01.zw).x;
    }
    else
    {
        _7435 = 1.0;
    }
    float _7437;
    if ((_3655 & 192) != 0)
    {
        float _7436;
        if ((_3655 & 64) != 0)
        {
            _7436 = step(0.5, _7431.w);
        }
        else
        {
            _7436 = _7431.w;
        }
        _7437 = _7436;
    }
    else
    {
        _7437 = 1.0;
    }
    float _3045 = _7437 * (_469._mat._emissiveOpacity.w * _color.w);
    if (_3045 < 1.0)
    {
        discard;
    }
    bvec3 _3059 = bvec3((_3655 & 4) != 0);
    vec3 _3060 = vec3(_3059.x ? _469._mat._albedoRoughness.xyz.x : vec3(1.0).x, _3059.y ? _469._mat._albedoRoughness.xyz.y : vec3(1.0).y, _3059.z ? _469._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _7440;
    if ((_3655 & 1024) != 0)
    {
        _7440 = _3060 * _7431.xyz;
    }
    else
    {
        _7440 = _3060;
    }
    vec3 _3074 = _7440 * _color.xyz;
    float _3084 = _2960 ? _7432 : _469._mat._albedoRoughness.w;
    float _3094 = _2974 ? _7433 : _469._mat._metallicScatteringSpare2.x;
    vec3 _3697 = mix(vec3(0.02999999932944774627685546875), _3074, vec3(_3094));
    bvec3 _3110 = bvec3(_2988);
    vec3 _3111 = vec3(_3110.x ? _7434.x : _469._mat._emissiveOpacity.xyz.x, _3110.y ? _7434.y : _469._mat._emissiveOpacity.xyz.y, _3110.z ? _7434.z : _469._mat._emissiveOpacity.xyz.z);
    vec3 _3125 = normalize(_normalWS);
    vec3 _3136 = normalize(_cameraBlock._camera._viewInverse[3].xyz - _positionWS.xyz);
    float _3730 = mix(0.00999999977648258209228515625, 1.0, _3084);
    float _3736 = _3730 * _3730;
    float _3742 = _3736 * _3736;
    float _3747 = clamp(dot(_3125, _3136), 0.0, 1.0);
    float _3768 = 1.0 - _3742;
    float _3772 = _3747 + sqrt(_3742 + ((_3747 * _3747) * _3768));
    vec4 _3777 = _1429.frustumGrid.worldToEyeMat * _positionWS;
    float _3794 = _3777.z;
    float _7441;
    if (_3794 > 0.0)
    {
        _7441 = -_3794;
    }
    else
    {
        _7441 = _3794;
    }
    float _3891 = _7441 * _1429.frustumGrid.eyeToGridProj[2].x;
    float _3902 = _7441 * _1429.frustumGrid.eyeToGridProj[2].y;
    float _3914 = -_7441;
    vec4 _3920 = vec4((_3777.x * _1429.frustumGrid.eyeToGridProj[0].x) + _3891, (_3777.y * _1429.frustumGrid.eyeToGridProj[1].y) + _3902, _8224, _3914) / vec4(_3914);
    vec3 _3952 = vec3(0.5 * (_3920.x + 1.0), 0.5 * (_3920.y + 1.0), log2(((_3914 - _1429.frustumGrid.rangeNear) / (_1429.frustumGrid.rangeFar - _1429.frustumGrid.rangeNear)) + 1.0)) * vec3(_1429.frustumGrid.dims);
    float _3822 = float(_1429.frustumGrid.dims.z);
    vec3 _7443;
    if (_3952.z >= _3822)
    {
        vec3 _7283 = _3952;
        _7283.z = _3822;
        _7443 = _7283;
    }
    else
    {
        _7443 = _3952;
    }
    vec3 _3831 = floor(_7443);
    ivec3 _3832 = ivec3(_3831);
    bool _3838 = _3794 > (-_1429.frustumGrid.frustumNear);
    bool _3848;
    if (!_3838)
    {
        _3848 = _3794 < (-_1429.frustumGrid.frustumFar);
    }
    else
    {
        _3848 = _3838;
    }
    ivec3 _7450;
    if (_3848)
    {
        _7450 = ivec3(_3832.xy, -2);
    }
    else
    {
        _7450 = _7463;
    }
    bool _8228 = _3848 ? true : false;
    ivec3 _7449;
    if (!_8228)
    {
        bool _3864 = _3794 > (-_1429.frustumGrid.rangeNear);
        ivec3 _7465;
        if (_3864)
        {
            _7465 = ivec3(_3832.xy, -1);
        }
        else
        {
            _7465 = _7450;
        }
        bvec3 _8230 = bvec3(_3864 ? true : _8228);
        _7449 = ivec3(_8230.x ? _7465.x : _3832.x, _8230.y ? _7465.y : _3832.y, _8230.z ? _7465.z : _3832.z);
    }
    else
    {
        _7449 = _7450;
    }
    int _3972 = _7449.x + ((_7449.y + (_7449.z * _1429.frustumGrid.dims.y)) * _1429.frustumGrid.dims.x);
    int _3986 = 255 & (_1550._clusterGridTable[_3972 / 4][_3972 % 4] >> 16);
    int _3991 = 65535 & _1550._clusterGridTable[_3972 / 4][_3972 % 4];
    int _3166 = _3986 + (255 & (_1550._clusterGridTable[_3972 / 4][_3972 % 4] >> 24));
    bool _3998 = _3166 > 0;
    bool _4004;
    if (_3998)
    {
        _4004 = all(greaterThanEqual(_7449, ivec3(0)));
    }
    else
    {
        _4004 = _3998;
    }
    bool _4013;
    if (_4004)
    {
        _4013 = all(lessThan(_7449.xy, _1429.frustumGrid.dims.xy));
    }
    else
    {
        _4013 = _4004;
    }
    bool _4021;
    if (_4013)
    {
        _4021 = _7449.z <= _1429.frustumGrid.dims.z;
    }
    else
    {
        _4021 = _4013;
    }
    vec4 _7501;
    if (_4021)
    {
        vec3 _7490;
        vec3 _7492;
        _7492 = vec3(0.0);
        _7490 = vec3(0.0);
        vec3 _7863;
        vec3 _7865;
        for (int _7487 = 0; _7487 < _3986; _7492 = _7865, _7490 = _7863, _7487++)
        {
            int _4353 = _3991 + _7487;
            int _4355 = _4353 >> 1;
            int _7730;
            if ((_4353 & 1) == 1)
            {
                _7730 = _1586._clusterGridContent[_4355 / 4][_4355 % 4] >> 16;
            }
            else
            {
                _7730 = _1586._clusterGridContent[_4355 / 4][_4355 % 4];
            }
            vec3 _4401 = (_1647.lightArray[_7730 & 65535].volume.positionRadius.xyz - _positionWS.xyz).xyz;
            if (!(dot(_4401, _4401) <= (_1647.lightArray[_7730 & 65535].volume.positionRadius.w * _1647.lightArray[_7730 & 65535].volume.positionRadius.w)))
            {
                _7865 = _7492;
                _7863 = _7490;
                continue;
            }
            float _4142 = length(_4401);
            vec3 _4155 = (_4401 / vec3(_4142)).xyz;
            float _4156 = dot(_3125, _4155);
            if (_4156 < 0.0)
            {
                _7865 = _7492;
                _7863 = _7490;
                continue;
            }
            vec3 _4428 = normalize(_3136 + _4155);
            vec3 _7310 = _8225;
            _7310.x = dot(_3125, _4428);
            vec3 _7312 = _7310;
            _7312.y = _4156;
            vec3 _7314 = _7312;
            _7314.z = dot(_4428, _4155);
            vec3 _4449 = clamp(_7314, vec3(0.0), vec3(1.0));
            float _4451 = _4449.x;
            float _4454 = _4449.y;
            float _4473 = (_4142 / _1647.lightArray[_7730 & 65535].irradiance.attenuation.x) + 1.0;
            vec3 _4177 = (_1647.lightArray[_7730 & 65535].irradiance.colorIntensity.xyz * _1647.lightArray[_7730 & 65535].irradiance.colorIntensity.w) * ((1.0 / (_4473 * _4473)) * min(1.0, max(0.0, -(_4142 - _1647.lightArray[_7730 & 65535].irradiance.attenuation.y))));
            float _4861 = 1.0 - _4449.z;
            float _4864 = _4861 * _4861;
            float _4869 = (_4861 * _4864) * _4864;
            vec3 _4876 = vec3(_4869) + (_3697 * (1.0 - _4869));
            float _4892 = ((_4451 * _4451) * (_3742 - 1.0)) + 1.0;
            float _4848 = ((1.0 - _3094) * _4454) * (1.0 - _4876.x);
            _7865 = _7492 + (vec4((_4876 * (_3742 / ((_4892 * _4892) * (_3772 * (_4454 + sqrt(_3742 + ((_4454 * _4454) * _3768))))))) * _4454, _4848).xyz * _4177);
            _7863 = _7490 + ((vec3(_4848) * mix(vec3(1.0), _3074, vec3(_765.lightingModel._ScatteringDiffuseSpecularAlbedo.w))) * _4177);
            continue;
        }
        vec3 _7489;
        vec3 _7491;
        _7491 = _7492;
        _7489 = _7490;
        vec3 _7864;
        vec3 _7866;
        for (int _7488 = _3986; _7488 < _3166; _7491 = _7866, _7489 = _7864, _7488++)
        {
            int _4933 = _3991 + _7488;
            int _4935 = _4933 >> 1;
            int _7568;
            if ((_4933 & 1) == 1)
            {
                _7568 = _1586._clusterGridContent[_4935 / 4][_4935 % 4] >> 16;
            }
            else
            {
                _7568 = _1586._clusterGridContent[_4935 / 4][_4935 % 4];
            }
            vec3 _4981 = (_1647.lightArray[_7568 & 65535].volume.positionRadius.xyz - _positionWS.xyz).xyz;
            if (!(dot(_4981, _4981) <= (_1647.lightArray[_7568 & 65535].volume.positionRadius.w * _1647.lightArray[_7568 & 65535].volume.positionRadius.w)))
            {
                _7866 = _7491;
                _7864 = _7489;
                continue;
            }
            float _4238 = length(_4981);
            vec3 _4251 = (_4981 / vec3(_4238)).xyz;
            float _4252 = dot(_3125, _4251);
            if (_4252 < 0.0)
            {
                _7866 = _7491;
                _7864 = _7489;
                continue;
            }
            float _5010 = max(-dot(_4251, _1647.lightArray[_7568 & 65535].volume.directionSpotCos.xyz), 0.0);
            if (!(_5010 >= _1647.lightArray[_7568 & 65535].volume.directionSpotCos.w))
            {
                _7866 = _7491;
                _7864 = _7489;
                continue;
            }
            vec3 _5029 = normalize(_3136 + _4251);
            vec3 _7349 = _8225;
            _7349.x = dot(_3125, _5029);
            vec3 _7351 = _7349;
            _7351.y = _4252;
            vec3 _7353 = _7351;
            _7353.z = dot(_5029, _4251);
            vec3 _5050 = clamp(_7353, vec3(0.0), vec3(1.0));
            float _5052 = _5050.x;
            float _5055 = _5050.y;
            float _5074 = (_4238 / _1647.lightArray[_7568 & 65535].irradiance.attenuation.x) + 1.0;
            vec3 _4287 = (_1647.lightArray[_7568 & 65535].irradiance.colorIntensity.xyz * _1647.lightArray[_7568 & 65535].irradiance.colorIntensity.w) * (((1.0 / (_5074 * _5074)) * min(1.0, max(0.0, -(_4238 - _1647.lightArray[_7568 & 65535].irradiance.attenuation.y)))) * pow(_5010, _1647.lightArray[_7568 & 65535].irradiance.attenuation.z));
            float _5471 = 1.0 - _5050.z;
            float _5474 = _5471 * _5471;
            float _5479 = (_5471 * _5474) * _5474;
            vec3 _5486 = vec3(_5479) + (_3697 * (1.0 - _5479));
            float _5502 = ((_5052 * _5052) * (_3742 - 1.0)) + 1.0;
            float _5458 = ((1.0 - _3094) * _5055) * (1.0 - _5486.x);
            _7866 = _7491 + (vec4((_5486 * (_3742 / ((_5502 * _5502) * (_3772 * (_5055 + sqrt(_3742 + ((_5055 * _5055) * _3768))))))) * _5055, _5458).xyz * _4287);
            _7864 = _7489 + ((vec3(_5458) * mix(vec3(1.0), _3074, vec3(_765.lightingModel._ScatteringDiffuseSpecularAlbedo.w))) * _4287);
            continue;
        }
        vec3 _4340 = (_7489 * _765.lightingModel._ScatteringDiffuseSpecularAlbedo.y).xyz + ((_7491 * _765.lightingModel._ScatteringDiffuseSpecularAlbedo.z) / vec3(_3045));
        _7501 = vec4(_4340.x, _4340.y, _4340.z, vec4(0.0).w);
    }
    else
    {
        _7501 = vec4(0.0);
    }
    vec4 _5746 = _2025.lightAmbient.transform * vec4(_3125, 0.0);
    vec3 _5826 = _3697 + ((max(vec3(1.0 - _3730), _3697) - _3697) * pow(1.0 - _3747, 5.0));
    float _5766 = 1.0 - _3094;
    vec4 _5836 = _2025.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875;
    float _5838 = _5746.x;
    float _5843 = _5746.y;
    vec4 _5851 = _2025.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625;
    float _5853 = _5746.z;
    vec4 _5861 = _2025.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375;
    vec4 _5865 = _2025.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625;
    vec3 _5779 = -reflect((_2025.lightAmbient.transform * vec4(_3136, 0.0)).xyz, _5746.xyz);
    vec3 _7512;
    if (_2025.lightAmbient._ambient.y > 0.0)
    {
        _7512 = textureLod(skyboxMap, _5779, max(max(_2025.lightAmbient._ambient.y - (12.0 / (1.0 + (11.0 * _3730))), 0.0), textureQueryLod(skyboxMap, _5779).x)).xyz;
    }
    else
    {
        float _5985 = _5779.x;
        float _5990 = _5779.y;
        float _6000 = _5779.z;
        _7512 = ((((((_5836 * ((_5985 * _5985) - (_5990 * _5990))) + ((_5851 * _6000) * _6000)) + _5861) - _5865) + (((((_2025.lightAmbient._ambientSphere.L2m2 * _5985) * _5990) + ((_2025.lightAmbient._ambientSphere.L21 * _5985) * _6000)) + ((_2025.lightAmbient._ambientSphere.L2m1 * _5990) * _6000)) * 0.85808598995208740234375)) + ((((_2025.lightAmbient._ambientSphere.L11 * _5985) + (_2025.lightAmbient._ambientSphere.L1m1 * _5990)) + (_2025.lightAmbient._ambientSphere.L10 * _6000)) * 1.02332794666290283203125)).xyz;
    }
    vec3 _5785 = _7512 * _5826;
    float _5788 = mix(1.0, _7435, _765.lightingModel._ShowContourObscuranceWireframe.y);
    vec3 _5796 = mix(vec3(1.0), _3074, vec3(_765.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
    float _5801 = (_5788 * _2025.lightAmbient._ambient.x) * _765.lightingModel._AmbientDirectionalPointSpot.x;
    vec3 _6093 = -_2002.light.volume.directionSpotCos.xyz;
    vec3 _6124 = normalize(_3136 + _6093);
    vec3 _7412 = _8225;
    _7412.x = dot(_3125, _6124);
    vec3 _7414 = _7412;
    _7414.y = dot(_3125, _6093);
    vec3 _7416 = _7414;
    _7416.z = dot(_6124, _6093);
    vec3 _6145 = clamp(_7416, vec3(0.0), vec3(1.0));
    float _6147 = _6145.x;
    float _6150 = _6145.y;
    float _6215 = 1.0 - _6145.z;
    float _6218 = _6215 * _6215;
    float _6223 = (_6215 * _6218) * _6218;
    vec3 _6230 = vec3(_6223) + (_3697 * (1.0 - _6223));
    float _6246 = ((_6147 * _6147) * (_3742 - 1.0)) + 1.0;
    float _6202 = (_5766 * _6150) * (1.0 - _6230.x);
    vec3 _6106 = ((_2002.light.irradiance.colorIntensity.xyz * _2002.light.irradiance.colorIntensity.w) * 1.0) * _765.lightingModel._AmbientDirectionalPointSpot.y;
    vec3 _5626 = ((_7501.xyz + ((_3111 + ((_3301.xyz * step(_3282, 1.0)) * _3301.w)) * _765.lightingModel._UnlitEmissiveLightmapBackground.y)) + ((((((vec3(1.0) - _5826) * _5766) * ((((((_5836 * ((_5838 * _5838) - (_5843 * _5843))) + ((_5851 * _5853) * _5853)) + _5861) - _5865) + (((((_2025.lightAmbient._ambientSphere.L2m2 * _5838) * _5843) + ((_2025.lightAmbient._ambientSphere.L21 * _5838) * _5853)) + ((_2025.lightAmbient._ambientSphere.L2m1 * _5843) * _5853)) * 0.85808598995208740234375)) + ((((_2025.lightAmbient._ambientSphere.L11 * _5838) + (_2025.lightAmbient._ambientSphere.L1m1 * _5843)) + (_2025.lightAmbient._ambientSphere.L10 * _5853)) * 1.02332794666290283203125)).xyz) * _5796) * (_5801 * _765.lightingModel._ScatteringDiffuseSpecularAlbedo.y)) + ((vec3(_6202) * _5796) * (_6106 * _765.lightingModel._ScatteringDiffuseSpecularAlbedo.y)))) + (((_5785 * (_5801 * _765.lightingModel._ScatteringDiffuseSpecularAlbedo.z)) + (vec4((_6230 * (_3742 / ((_6246 * _6246) * (_3772 * (_6150 + sqrt(_3742 + ((_6150 * _6150) * _3768))))))) * _6150, _6202).xyz * (_6106 * _765.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) / vec3(_3045));
    bool _5628 = _765.lightingModel._HazeBloomSkinningBlendshape.x > 0.0;
    bool _5635;
    if (_5628)
    {
        _5635 = (_2067.hazeParams.hazeMode & 1) == 1;
    }
    else
    {
        _5635 = _5628;
    }
    vec3 _7557;
    if (_5635)
    {
        float _6321 = length(_positionES.xyz);
        vec4 _6329 = vec4(_2067.hazeParams.hazeColor, 1.0);
        vec4 _7543;
        if ((_2067.hazeParams.hazeMode & 16) == 16)
        {
            _7543 = mix(_6329, vec4(_2067.hazeParams.hazeGlareColor, 1.0), vec4(min(1.0, pow(max(0.0, dot(normalize(_positionWS.xyz - _cameraBlock._camera._viewInverse[3].xyz), _6093)), _2067.hazeParams.hazeGlareBlend))));
        }
        else
        {
            _7543 = _6329;
        }
        vec4 _7546;
        if ((_2067.hazeParams.hazeMode & 8) == 8)
        {
            vec3 _6384 = (_2067.hazeParams.colorModulationFactor * exp((-_2067.hazeParams.hazeHeightFactor) * (_cameraBlock._camera._viewInverse[3].y - _2067.hazeParams.hazeBaseReference))) * _6321;
            float _6388 = _positionWS.y - _cameraBlock._camera._viewInverse[3].y;
            vec3 _7545;
            if (abs(_6388) > 0.00999999977648258209228515625)
            {
                float _6397 = _2067.hazeParams.hazeHeightFactor * _6388;
                _7545 = _6384 * ((1.0 - exp(-_6397)) / _6397);
            }
            else
            {
                _7545 = _6384;
            }
            _7546 = vec4(1.0, 1.0, 1.0, (vec3(1.0) - exp(-_7545)).x);
        }
        else
        {
            vec4 _7547;
            if ((_2067.hazeParams.hazeMode & 2) != 2)
            {
                _7547 = vec4(_7543.xyz, 1.0 - exp((-_6321) * _2067.hazeParams.hazeRangeFactor));
            }
            else
            {
                float _6449 = (_2067.hazeParams.hazeRangeFactor * exp((-_2067.hazeParams.hazeHeightFactor) * (_cameraBlock._camera._viewInverse[3].y - _2067.hazeParams.hazeBaseReference))) * _6321;
                float _6453 = _positionWS.y - _cameraBlock._camera._viewInverse[3].y;
                float _7540;
                if (abs(_6453) > 0.00999999977648258209228515625)
                {
                    float _6462 = _2067.hazeParams.hazeHeightFactor * _6453;
                    float _7541;
                    if (abs(_6462) > 1.0000000116860974230803549289703e-07)
                    {
                        _7541 = _6449 * ((1.0 - exp(-_6462)) / _6462);
                    }
                    else
                    {
                        _7541 = _6449;
                    }
                    _7540 = _7541;
                }
                else
                {
                    _7540 = _6449;
                }
                _7547 = vec4(_7543.xyz, 1.0 - exp(-_7540));
            }
            _7546 = _7547;
        }
        vec4 _7548;
        if (_6321 > 27000.0)
        {
            vec4 _7428 = _7546;
            _7428.w = _7546.w * _2067.hazeParams.backgroundBlend;
            _7548 = _7428;
        }
        else
        {
            _7548 = _7546;
        }
        _7557 = mix(_5626, _7548.xyz, vec3(_7548.w));
    }
    else
    {
        _7557 = _5626;
    }
    _fragColor = vec4(_7557, _3045);
}

