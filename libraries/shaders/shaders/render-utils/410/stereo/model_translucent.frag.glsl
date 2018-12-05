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

layout(std140) uniform materialBuffer
{
    Material _mat;
    TexMapArray _texMapArray;
} _428;

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _724;

layout(std140) uniform frustumGridBuffer
{
    FrustumGrid frustumGrid;
} _1388;

layout(std140) uniform clusterGridBuffer
{
    ivec4 _clusterGridTable[4096];
} _1509;

layout(std140) uniform clusterContentBuffer
{
    ivec4 _clusterGridContent[4096];
} _1545;

layout(std140) uniform lightBuffer
{
    Light lightArray[256];
} _1606;

layout(std140) uniform keyLightBuffer
{
    Light light;
} _1961;

layout(std140) uniform lightAmbientBuffer
{
    LightAmbient lightAmbient;
} _1984;

layout(std140) uniform hazeBuffer
{
    HazeParams hazeParams;
} _2026;

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera[2];
} _cameraBlock;

uniform samplerCube skyboxMap;
uniform sampler2D albedoMap;
uniform sampler2D roughnessMap;
uniform sampler2D metallicMap;
uniform sampler2D emissiveMap;
uniform sampler2D occlusionMap;

layout(location = 8) flat in int _stereoSide;
layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 7) in vec4 _positionES;
layout(location = 2) in vec4 _positionWS;
layout(location = 3) in vec3 _normalWS;
layout(location = 0) out vec4 _fragColor;

ivec3 _6703;
float _7454;
vec3 _7455;

void main()
{
    int _2945 = floatBitsToInt(_428._mat._keySpare3.x);
    vec4 _6672;
    if ((_2945 & 1216) != 0)
    {
        _6672 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _6672 = vec4(1.0);
    }
    bool _2626 = (_2945 & 4096) != 0;
    float _6673;
    if (_2626)
    {
        _6673 = texture(roughnessMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _6673 = 1.0;
    }
    bool _2640 = (_2945 & 2048) != 0;
    float _6674;
    if (_2640)
    {
        _6674 = texture(metallicMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _6674 = 0.0;
    }
    bool _2654 = (_2945 & 512) != 0;
    vec3 _6675;
    if (_2654)
    {
        _6675 = texture(emissiveMap, _texCoord01.xy, -1.0).xyz;
    }
    else
    {
        _6675 = vec3(0.0);
    }
    float _6676;
    if ((_2945 & 16384) != 0)
    {
        _6676 = texture(occlusionMap, _texCoord01.zw).x;
    }
    else
    {
        _6676 = 1.0;
    }
    float _6678;
    if ((_2945 & 192) != 0)
    {
        float _6677;
        if ((_2945 & 64) != 0)
        {
            _6677 = step(0.5, _6672.w);
        }
        else
        {
            _6677 = _6672.w;
        }
        _6678 = _6677;
    }
    else
    {
        _6678 = 1.0;
    }
    float _2711 = _6678 * (_428._mat._emissiveOpacity.w * _color.w);
    if (_2711 < 9.9999999747524270787835121154785e-07)
    {
        discard;
    }
    bvec3 _2726 = bvec3((_2945 & 4) != 0);
    vec3 _2727 = vec3(_2726.x ? _428._mat._albedoRoughness.xyz.x : vec3(1.0).x, _2726.y ? _428._mat._albedoRoughness.xyz.y : vec3(1.0).y, _2726.z ? _428._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _6681;
    if ((_2945 & 1024) != 0)
    {
        _6681 = _2727 * _6672.xyz;
    }
    else
    {
        _6681 = _2727;
    }
    vec3 _2741 = _6681 * _color.xyz;
    float _2751 = _2626 ? _6673 : _428._mat._albedoRoughness.w;
    float _2761 = _2640 ? _6674 : _428._mat._metallicScatteringSpare2.x;
    vec3 _2987 = mix(vec3(0.02999999932944774627685546875), _2741, vec3(_2761));
    bvec3 _2777 = bvec3(_2654);
    vec3 _2778 = vec3(_2777.x ? _6675.x : _428._mat._emissiveOpacity.xyz.x, _2777.y ? _6675.y : _428._mat._emissiveOpacity.xyz.y, _2777.z ? _6675.z : _428._mat._emissiveOpacity.xyz.z);
    vec3 _2793 = normalize(_normalWS);
    vec3 _2804 = normalize(_cameraBlock._camera[_stereoSide]._viewInverse[3].xyz - _positionWS.xyz);
    float _3021 = mix(0.00999999977648258209228515625, 1.0, _2751);
    float _3027 = _3021 * _3021;
    float _3033 = _3027 * _3027;
    float _3038 = clamp(dot(_2793, _2804), 0.0, 1.0);
    float _3059 = 1.0 - _3033;
    float _3063 = _3038 + sqrt(_3033 + ((_3038 * _3038) * _3059));
    vec4 _3068 = _1388.frustumGrid.worldToEyeMat * _positionWS;
    float _3085 = _3068.z;
    float _6682;
    if (_3085 > 0.0)
    {
        _6682 = -_3085;
    }
    else
    {
        _6682 = _3085;
    }
    float _3182 = _6682 * _1388.frustumGrid.eyeToGridProj[2].x;
    float _3193 = _6682 * _1388.frustumGrid.eyeToGridProj[2].y;
    float _3205 = -_6682;
    vec4 _3211 = vec4((_3068.x * _1388.frustumGrid.eyeToGridProj[0].x) + _3182, (_3068.y * _1388.frustumGrid.eyeToGridProj[1].y) + _3193, _7454, _3205) / vec4(_3205);
    vec3 _3243 = vec3(0.5 * (_3211.x + 1.0), 0.5 * (_3211.y + 1.0), log2(((_3205 - _1388.frustumGrid.rangeNear) / (_1388.frustumGrid.rangeFar - _1388.frustumGrid.rangeNear)) + 1.0)) * vec3(_1388.frustumGrid.dims);
    float _3113 = float(_1388.frustumGrid.dims.z);
    vec3 _6684;
    if (_3243.z >= _3113)
    {
        vec3 _6525 = _3243;
        _6525.z = _3113;
        _6684 = _6525;
    }
    else
    {
        _6684 = _3243;
    }
    vec3 _3122 = floor(_6684);
    ivec3 _3123 = ivec3(_3122);
    bool _3129 = _3085 > (-_1388.frustumGrid.frustumNear);
    bool _3139;
    if (!_3129)
    {
        _3139 = _3085 < (-_1388.frustumGrid.frustumFar);
    }
    else
    {
        _3139 = _3129;
    }
    ivec3 _6691;
    if (_3139)
    {
        _6691 = ivec3(_3123.xy, -2);
    }
    else
    {
        _6691 = _6703;
    }
    bool _7458 = _3139 ? true : false;
    ivec3 _6690;
    if (!_7458)
    {
        bool _3155 = _3085 > (-_1388.frustumGrid.rangeNear);
        ivec3 _6705;
        if (_3155)
        {
            _6705 = ivec3(_3123.xy, -1);
        }
        else
        {
            _6705 = _6691;
        }
        bvec3 _7460 = bvec3(_3155 ? true : _7458);
        _6690 = ivec3(_7460.x ? _6705.x : _3123.x, _7460.y ? _6705.y : _3123.y, _7460.z ? _6705.z : _3123.z);
    }
    else
    {
        _6690 = _6691;
    }
    int _3263 = _6690.x + ((_6690.y + (_6690.z * _1388.frustumGrid.dims.y)) * _1388.frustumGrid.dims.x);
    int _3277 = 255 & (_1509._clusterGridTable[_3263 / 4][_3263 % 4] >> 16);
    int _3282 = 65535 & _1509._clusterGridTable[_3263 / 4][_3263 % 4];
    int _2834 = _3277 + (255 & (_1509._clusterGridTable[_3263 / 4][_3263 % 4] >> 24));
    bool _3289 = _2834 > 0;
    bool _3295;
    if (_3289)
    {
        _3295 = all(greaterThanEqual(_6690, ivec3(0)));
    }
    else
    {
        _3295 = _3289;
    }
    bool _3304;
    if (_3295)
    {
        _3304 = all(lessThan(_6690.xy, _1388.frustumGrid.dims.xy));
    }
    else
    {
        _3304 = _3295;
    }
    bool _3312;
    if (_3304)
    {
        _3312 = _6690.z <= _1388.frustumGrid.dims.z;
    }
    else
    {
        _3312 = _3304;
    }
    vec4 _6741;
    if (_3312)
    {
        vec3 _6730;
        vec3 _6732;
        _6732 = vec3(0.0);
        _6730 = vec3(0.0);
        vec3 _7094;
        vec3 _7096;
        for (int _6727 = 0; _6727 < _3277; _6732 = _7096, _6730 = _7094, _6727++)
        {
            int _3644 = _3282 + _6727;
            int _3646 = _3644 >> 1;
            int _6965;
            if ((_3644 & 1) == 1)
            {
                _6965 = _1545._clusterGridContent[_3646 / 4][_3646 % 4] >> 16;
            }
            else
            {
                _6965 = _1545._clusterGridContent[_3646 / 4][_3646 % 4];
            }
            vec3 _3692 = (_1606.lightArray[_6965 & 65535].volume.positionRadius.xyz - _positionWS.xyz).xyz;
            if (!(dot(_3692, _3692) <= (_1606.lightArray[_6965 & 65535].volume.positionRadius.w * _1606.lightArray[_6965 & 65535].volume.positionRadius.w)))
            {
                _7096 = _6732;
                _7094 = _6730;
                continue;
            }
            float _3433 = length(_3692);
            vec3 _3446 = (_3692 / vec3(_3433)).xyz;
            float _3447 = dot(_2793, _3446);
            if (_3447 < 0.0)
            {
                _7096 = _6732;
                _7094 = _6730;
                continue;
            }
            vec3 _3719 = normalize(_2804 + _3446);
            vec3 _6552 = _7455;
            _6552.x = dot(_2793, _3719);
            vec3 _6554 = _6552;
            _6554.y = _3447;
            vec3 _6556 = _6554;
            _6556.z = dot(_3719, _3446);
            vec3 _3740 = clamp(_6556, vec3(0.0), vec3(1.0));
            float _3742 = _3740.x;
            float _3745 = _3740.y;
            float _3764 = (_3433 / _1606.lightArray[_6965 & 65535].irradiance.attenuation.x) + 1.0;
            vec3 _3468 = (_1606.lightArray[_6965 & 65535].irradiance.colorIntensity.xyz * _1606.lightArray[_6965 & 65535].irradiance.colorIntensity.w) * ((1.0 / (_3764 * _3764)) * min(1.0, max(0.0, -(_3433 - _1606.lightArray[_6965 & 65535].irradiance.attenuation.y))));
            float _4152 = 1.0 - _3740.z;
            float _4155 = _4152 * _4152;
            float _4160 = (_4152 * _4155) * _4155;
            vec3 _4167 = vec3(_4160) + (_2987 * (1.0 - _4160));
            float _4183 = ((_3742 * _3742) * (_3033 - 1.0)) + 1.0;
            float _4139 = ((1.0 - _2761) * _3745) * (1.0 - _4167.x);
            _7096 = _6732 + (vec4((_4167 * (_3033 / ((_4183 * _4183) * (_3063 * (_3745 + sqrt(_3033 + ((_3745 * _3745) * _3059))))))) * _3745, _4139).xyz * _3468);
            _7094 = _6730 + ((vec3(_4139) * mix(vec3(1.0), _2741, vec3(_724.lightingModel._ScatteringDiffuseSpecularAlbedo.w))) * _3468);
            continue;
        }
        vec3 _6729;
        vec3 _6731;
        _6731 = _6732;
        _6729 = _6730;
        vec3 _7095;
        vec3 _7097;
        for (int _6728 = _3277; _6728 < _2834; _6731 = _7097, _6729 = _7095, _6728++)
        {
            int _4224 = _3282 + _6728;
            int _4226 = _4224 >> 1;
            int _6807;
            if ((_4224 & 1) == 1)
            {
                _6807 = _1545._clusterGridContent[_4226 / 4][_4226 % 4] >> 16;
            }
            else
            {
                _6807 = _1545._clusterGridContent[_4226 / 4][_4226 % 4];
            }
            vec3 _4272 = (_1606.lightArray[_6807 & 65535].volume.positionRadius.xyz - _positionWS.xyz).xyz;
            if (!(dot(_4272, _4272) <= (_1606.lightArray[_6807 & 65535].volume.positionRadius.w * _1606.lightArray[_6807 & 65535].volume.positionRadius.w)))
            {
                _7097 = _6731;
                _7095 = _6729;
                continue;
            }
            float _3529 = length(_4272);
            vec3 _3542 = (_4272 / vec3(_3529)).xyz;
            float _3543 = dot(_2793, _3542);
            if (_3543 < 0.0)
            {
                _7097 = _6731;
                _7095 = _6729;
                continue;
            }
            float _4301 = max(-dot(_3542, _1606.lightArray[_6807 & 65535].volume.directionSpotCos.xyz), 0.0);
            if (!(_4301 >= _1606.lightArray[_6807 & 65535].volume.directionSpotCos.w))
            {
                _7097 = _6731;
                _7095 = _6729;
                continue;
            }
            vec3 _4320 = normalize(_2804 + _3542);
            vec3 _6591 = _7455;
            _6591.x = dot(_2793, _4320);
            vec3 _6593 = _6591;
            _6593.y = _3543;
            vec3 _6595 = _6593;
            _6595.z = dot(_4320, _3542);
            vec3 _4341 = clamp(_6595, vec3(0.0), vec3(1.0));
            float _4343 = _4341.x;
            float _4346 = _4341.y;
            float _4365 = (_3529 / _1606.lightArray[_6807 & 65535].irradiance.attenuation.x) + 1.0;
            vec3 _3578 = (_1606.lightArray[_6807 & 65535].irradiance.colorIntensity.xyz * _1606.lightArray[_6807 & 65535].irradiance.colorIntensity.w) * (((1.0 / (_4365 * _4365)) * min(1.0, max(0.0, -(_3529 - _1606.lightArray[_6807 & 65535].irradiance.attenuation.y)))) * pow(_4301, _1606.lightArray[_6807 & 65535].irradiance.attenuation.z));
            float _4762 = 1.0 - _4341.z;
            float _4765 = _4762 * _4762;
            float _4770 = (_4762 * _4765) * _4765;
            vec3 _4777 = vec3(_4770) + (_2987 * (1.0 - _4770));
            float _4793 = ((_4343 * _4343) * (_3033 - 1.0)) + 1.0;
            float _4749 = ((1.0 - _2761) * _4346) * (1.0 - _4777.x);
            _7097 = _6731 + (vec4((_4777 * (_3033 / ((_4793 * _4793) * (_3063 * (_4346 + sqrt(_3033 + ((_4346 * _4346) * _3059))))))) * _4346, _4749).xyz * _3578);
            _7095 = _6729 + ((vec3(_4749) * mix(vec3(1.0), _2741, vec3(_724.lightingModel._ScatteringDiffuseSpecularAlbedo.w))) * _3578);
            continue;
        }
        vec3 _3631 = (_6729 * _724.lightingModel._ScatteringDiffuseSpecularAlbedo.y).xyz + ((_6731 * _724.lightingModel._ScatteringDiffuseSpecularAlbedo.z) / vec3(_2711));
        _6741 = vec4(_3631.x, _3631.y, _3631.z, vec4(0.0).w);
    }
    else
    {
        _6741 = vec4(0.0);
    }
    vec4 _5037 = _1984.lightAmbient.transform * vec4(_2793, 0.0);
    vec3 _5117 = _2987 + ((max(vec3(1.0 - _3021), _2987) - _2987) * pow(1.0 - _3038, 5.0));
    float _5057 = 1.0 - _2761;
    vec4 _5127 = _1984.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875;
    float _5129 = _5037.x;
    float _5134 = _5037.y;
    vec4 _5142 = _1984.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625;
    float _5144 = _5037.z;
    vec4 _5152 = _1984.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375;
    vec4 _5156 = _1984.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625;
    vec3 _5070 = -reflect((_1984.lightAmbient.transform * vec4(_2804, 0.0)).xyz, _5037.xyz);
    vec3 _6752;
    if (_1984.lightAmbient._ambient.y > 0.0)
    {
        _6752 = textureLod(skyboxMap, _5070, max(max(_1984.lightAmbient._ambient.y - (12.0 / (1.0 + (11.0 * _3021))), 0.0), textureQueryLod(skyboxMap, _5070).x)).xyz;
    }
    else
    {
        float _5276 = _5070.x;
        float _5281 = _5070.y;
        float _5291 = _5070.z;
        _6752 = ((((((_5127 * ((_5276 * _5276) - (_5281 * _5281))) + ((_5142 * _5291) * _5291)) + _5152) - _5156) + (((((_1984.lightAmbient._ambientSphere.L2m2 * _5276) * _5281) + ((_1984.lightAmbient._ambientSphere.L21 * _5276) * _5291)) + ((_1984.lightAmbient._ambientSphere.L2m1 * _5281) * _5291)) * 0.85808598995208740234375)) + ((((_1984.lightAmbient._ambientSphere.L11 * _5276) + (_1984.lightAmbient._ambientSphere.L1m1 * _5281)) + (_1984.lightAmbient._ambientSphere.L10 * _5291)) * 1.02332794666290283203125)).xyz;
    }
    vec3 _5076 = _6752 * _5117;
    float _5079 = mix(1.0, _6676, _724.lightingModel._ShowContourObscuranceWireframe.y);
    vec3 _5087 = mix(vec3(1.0), _2741, vec3(_724.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
    float _5092 = (_5079 * _1984.lightAmbient._ambient.x) * _724.lightingModel._AmbientDirectionalPointSpot.x;
    vec3 _5384 = -_1961.light.volume.directionSpotCos.xyz;
    vec3 _5415 = normalize(_2804 + _5384);
    vec3 _6654 = _7455;
    _6654.x = dot(_2793, _5415);
    vec3 _6656 = _6654;
    _6656.y = dot(_2793, _5384);
    vec3 _6658 = _6656;
    _6658.z = dot(_5415, _5384);
    vec3 _5436 = clamp(_6658, vec3(0.0), vec3(1.0));
    float _5438 = _5436.x;
    float _5441 = _5436.y;
    float _5506 = 1.0 - _5436.z;
    float _5509 = _5506 * _5506;
    float _5514 = (_5506 * _5509) * _5509;
    vec3 _5521 = vec3(_5514) + (_2987 * (1.0 - _5514));
    float _5537 = ((_5438 * _5438) * (_3033 - 1.0)) + 1.0;
    float _5493 = (_5057 * _5441) * (1.0 - _5521.x);
    vec3 _5397 = ((_1961.light.irradiance.colorIntensity.xyz * _1961.light.irradiance.colorIntensity.w) * 1.0) * _724.lightingModel._AmbientDirectionalPointSpot.y;
    vec3 _4917 = ((_6741.xyz + (_2778 * _724.lightingModel._UnlitEmissiveLightmapBackground.y)) + ((((((vec3(1.0) - _5117) * _5057) * ((((((_5127 * ((_5129 * _5129) - (_5134 * _5134))) + ((_5142 * _5144) * _5144)) + _5152) - _5156) + (((((_1984.lightAmbient._ambientSphere.L2m2 * _5129) * _5134) + ((_1984.lightAmbient._ambientSphere.L21 * _5129) * _5144)) + ((_1984.lightAmbient._ambientSphere.L2m1 * _5134) * _5144)) * 0.85808598995208740234375)) + ((((_1984.lightAmbient._ambientSphere.L11 * _5129) + (_1984.lightAmbient._ambientSphere.L1m1 * _5134)) + (_1984.lightAmbient._ambientSphere.L10 * _5144)) * 1.02332794666290283203125)).xyz) * _5087) * (_5092 * _724.lightingModel._ScatteringDiffuseSpecularAlbedo.y)) + ((vec3(_5493) * _5087) * (_5397 * _724.lightingModel._ScatteringDiffuseSpecularAlbedo.y)))) + (((_5076 * (_5092 * _724.lightingModel._ScatteringDiffuseSpecularAlbedo.z)) + (vec4((_5521 * (_3033 / ((_5537 * _5537) * (_3063 * (_5441 + sqrt(_3033 + ((_5441 * _5441) * _3059))))))) * _5441, _5493).xyz * (_5397 * _724.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) / vec3(_2711));
    bool _4919 = _724.lightingModel._HazeBloomSkinningBlendshape.x > 0.0;
    bool _4926;
    if (_4919)
    {
        _4926 = (_2026.hazeParams.hazeMode & 1) == 1;
    }
    else
    {
        _4926 = _4919;
    }
    vec3 _6796;
    if (_4926)
    {
        float _5612 = length(_positionES.xyz);
        vec4 _5620 = vec4(_2026.hazeParams.hazeColor, 1.0);
        vec4 _6782;
        if ((_2026.hazeParams.hazeMode & 16) == 16)
        {
            _6782 = mix(_5620, vec4(_2026.hazeParams.hazeGlareColor, 1.0), vec4(min(1.0, pow(max(0.0, dot(normalize(_positionWS.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz), _5384)), _2026.hazeParams.hazeGlareBlend))));
        }
        else
        {
            _6782 = _5620;
        }
        vec4 _6785;
        if ((_2026.hazeParams.hazeMode & 8) == 8)
        {
            vec3 _5675 = (_2026.hazeParams.colorModulationFactor * exp((-_2026.hazeParams.hazeHeightFactor) * (_cameraBlock._camera[_stereoSide]._viewInverse[3].y - _2026.hazeParams.hazeBaseReference))) * _5612;
            float _5679 = _positionWS.y - _cameraBlock._camera[_stereoSide]._viewInverse[3].y;
            vec3 _6784;
            if (abs(_5679) > 0.00999999977648258209228515625)
            {
                float _5688 = _2026.hazeParams.hazeHeightFactor * _5679;
                _6784 = _5675 * ((1.0 - exp(-_5688)) / _5688);
            }
            else
            {
                _6784 = _5675;
            }
            _6785 = vec4(1.0, 1.0, 1.0, (vec3(1.0) - exp(-_6784)).x);
        }
        else
        {
            vec4 _6786;
            if ((_2026.hazeParams.hazeMode & 2) != 2)
            {
                _6786 = vec4(_6782.xyz, 1.0 - exp((-_5612) * _2026.hazeParams.hazeRangeFactor));
            }
            else
            {
                float _5740 = (_2026.hazeParams.hazeRangeFactor * exp((-_2026.hazeParams.hazeHeightFactor) * (_cameraBlock._camera[_stereoSide]._viewInverse[3].y - _2026.hazeParams.hazeBaseReference))) * _5612;
                float _5744 = _positionWS.y - _cameraBlock._camera[_stereoSide]._viewInverse[3].y;
                float _6779;
                if (abs(_5744) > 0.00999999977648258209228515625)
                {
                    float _5753 = _2026.hazeParams.hazeHeightFactor * _5744;
                    float _6780;
                    if (abs(_5753) > 1.0000000116860974230803549289703e-07)
                    {
                        _6780 = _5740 * ((1.0 - exp(-_5753)) / _5753);
                    }
                    else
                    {
                        _6780 = _5740;
                    }
                    _6779 = _6780;
                }
                else
                {
                    _6779 = _5740;
                }
                _6786 = vec4(_6782.xyz, 1.0 - exp(-_6779));
            }
            _6785 = _6786;
        }
        vec4 _6787;
        if (_5612 > 27000.0)
        {
            vec4 _6670 = _6785;
            _6670.w = _6785.w * _2026.hazeParams.backgroundBlend;
            _6787 = _6670;
        }
        else
        {
            _6787 = _6785;
        }
        _6796 = mix(_4917, _6787.xyz, vec3(_6787.w));
    }
    else
    {
        _6796 = _4917;
    }
    _fragColor = vec4(_6796, _2711);
}

