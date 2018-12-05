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
    _TransformCamera _camera;
} _cameraBlock;

uniform samplerCube skyboxMap;
uniform sampler2D albedoMap;
uniform sampler2D roughnessMap;
uniform sampler2D metallicMap;
uniform sampler2D emissiveMap;
uniform sampler2D occlusionMap;

layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 7) in vec4 _positionES;
layout(location = 2) in vec4 _positionWS;
layout(location = 3) in vec3 _normalWS;
layout(location = 0) out vec4 _fragColor;

ivec3 _6698;
float _7449;
vec3 _7450;

void main()
{
    int _2941 = floatBitsToInt(_428._mat._keySpare3.x);
    vec4 _6667;
    if ((_2941 & 1216) != 0)
    {
        _6667 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _6667 = vec4(1.0);
    }
    bool _2622 = (_2941 & 4096) != 0;
    float _6668;
    if (_2622)
    {
        _6668 = texture(roughnessMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _6668 = 1.0;
    }
    bool _2636 = (_2941 & 2048) != 0;
    float _6669;
    if (_2636)
    {
        _6669 = texture(metallicMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _6669 = 0.0;
    }
    bool _2650 = (_2941 & 512) != 0;
    vec3 _6670;
    if (_2650)
    {
        _6670 = texture(emissiveMap, _texCoord01.xy, -1.0).xyz;
    }
    else
    {
        _6670 = vec3(0.0);
    }
    float _6671;
    if ((_2941 & 16384) != 0)
    {
        _6671 = texture(occlusionMap, _texCoord01.zw).x;
    }
    else
    {
        _6671 = 1.0;
    }
    float _6673;
    if ((_2941 & 192) != 0)
    {
        float _6672;
        if ((_2941 & 64) != 0)
        {
            _6672 = step(0.5, _6667.w);
        }
        else
        {
            _6672 = _6667.w;
        }
        _6673 = _6672;
    }
    else
    {
        _6673 = 1.0;
    }
    float _2707 = _6673 * (_428._mat._emissiveOpacity.w * _color.w);
    if (_2707 < 9.9999999747524270787835121154785e-07)
    {
        discard;
    }
    bvec3 _2722 = bvec3((_2941 & 4) != 0);
    vec3 _2723 = vec3(_2722.x ? _428._mat._albedoRoughness.xyz.x : vec3(1.0).x, _2722.y ? _428._mat._albedoRoughness.xyz.y : vec3(1.0).y, _2722.z ? _428._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _6676;
    if ((_2941 & 1024) != 0)
    {
        _6676 = _2723 * _6667.xyz;
    }
    else
    {
        _6676 = _2723;
    }
    vec3 _2737 = _6676 * _color.xyz;
    float _2747 = _2622 ? _6668 : _428._mat._albedoRoughness.w;
    float _2757 = _2636 ? _6669 : _428._mat._metallicScatteringSpare2.x;
    vec3 _2983 = mix(vec3(0.02999999932944774627685546875), _2737, vec3(_2757));
    bvec3 _2773 = bvec3(_2650);
    vec3 _2774 = vec3(_2773.x ? _6670.x : _428._mat._emissiveOpacity.xyz.x, _2773.y ? _6670.y : _428._mat._emissiveOpacity.xyz.y, _2773.z ? _6670.z : _428._mat._emissiveOpacity.xyz.z);
    vec3 _2789 = normalize(_normalWS);
    vec3 _2800 = normalize(_cameraBlock._camera._viewInverse[3].xyz - _positionWS.xyz);
    float _3016 = mix(0.00999999977648258209228515625, 1.0, _2747);
    float _3022 = _3016 * _3016;
    float _3028 = _3022 * _3022;
    float _3033 = clamp(dot(_2789, _2800), 0.0, 1.0);
    float _3054 = 1.0 - _3028;
    float _3058 = _3033 + sqrt(_3028 + ((_3033 * _3033) * _3054));
    vec4 _3063 = _1388.frustumGrid.worldToEyeMat * _positionWS;
    float _3080 = _3063.z;
    float _6677;
    if (_3080 > 0.0)
    {
        _6677 = -_3080;
    }
    else
    {
        _6677 = _3080;
    }
    float _3177 = _6677 * _1388.frustumGrid.eyeToGridProj[2].x;
    float _3188 = _6677 * _1388.frustumGrid.eyeToGridProj[2].y;
    float _3200 = -_6677;
    vec4 _3206 = vec4((_3063.x * _1388.frustumGrid.eyeToGridProj[0].x) + _3177, (_3063.y * _1388.frustumGrid.eyeToGridProj[1].y) + _3188, _7449, _3200) / vec4(_3200);
    vec3 _3238 = vec3(0.5 * (_3206.x + 1.0), 0.5 * (_3206.y + 1.0), log2(((_3200 - _1388.frustumGrid.rangeNear) / (_1388.frustumGrid.rangeFar - _1388.frustumGrid.rangeNear)) + 1.0)) * vec3(_1388.frustumGrid.dims);
    float _3108 = float(_1388.frustumGrid.dims.z);
    vec3 _6679;
    if (_3238.z >= _3108)
    {
        vec3 _6520 = _3238;
        _6520.z = _3108;
        _6679 = _6520;
    }
    else
    {
        _6679 = _3238;
    }
    vec3 _3117 = floor(_6679);
    ivec3 _3118 = ivec3(_3117);
    bool _3124 = _3080 > (-_1388.frustumGrid.frustumNear);
    bool _3134;
    if (!_3124)
    {
        _3134 = _3080 < (-_1388.frustumGrid.frustumFar);
    }
    else
    {
        _3134 = _3124;
    }
    ivec3 _6686;
    if (_3134)
    {
        _6686 = ivec3(_3118.xy, -2);
    }
    else
    {
        _6686 = _6698;
    }
    bool _7453 = _3134 ? true : false;
    ivec3 _6685;
    if (!_7453)
    {
        bool _3150 = _3080 > (-_1388.frustumGrid.rangeNear);
        ivec3 _6700;
        if (_3150)
        {
            _6700 = ivec3(_3118.xy, -1);
        }
        else
        {
            _6700 = _6686;
        }
        bvec3 _7455 = bvec3(_3150 ? true : _7453);
        _6685 = ivec3(_7455.x ? _6700.x : _3118.x, _7455.y ? _6700.y : _3118.y, _7455.z ? _6700.z : _3118.z);
    }
    else
    {
        _6685 = _6686;
    }
    int _3258 = _6685.x + ((_6685.y + (_6685.z * _1388.frustumGrid.dims.y)) * _1388.frustumGrid.dims.x);
    int _3272 = 255 & (_1509._clusterGridTable[_3258 / 4][_3258 % 4] >> 16);
    int _3277 = 65535 & _1509._clusterGridTable[_3258 / 4][_3258 % 4];
    int _2830 = _3272 + (255 & (_1509._clusterGridTable[_3258 / 4][_3258 % 4] >> 24));
    bool _3284 = _2830 > 0;
    bool _3290;
    if (_3284)
    {
        _3290 = all(greaterThanEqual(_6685, ivec3(0)));
    }
    else
    {
        _3290 = _3284;
    }
    bool _3299;
    if (_3290)
    {
        _3299 = all(lessThan(_6685.xy, _1388.frustumGrid.dims.xy));
    }
    else
    {
        _3299 = _3290;
    }
    bool _3307;
    if (_3299)
    {
        _3307 = _6685.z <= _1388.frustumGrid.dims.z;
    }
    else
    {
        _3307 = _3299;
    }
    vec4 _6736;
    if (_3307)
    {
        vec3 _6725;
        vec3 _6727;
        _6727 = vec3(0.0);
        _6725 = vec3(0.0);
        vec3 _7089;
        vec3 _7091;
        for (int _6722 = 0; _6722 < _3272; _6727 = _7091, _6725 = _7089, _6722++)
        {
            int _3639 = _3277 + _6722;
            int _3641 = _3639 >> 1;
            int _6960;
            if ((_3639 & 1) == 1)
            {
                _6960 = _1545._clusterGridContent[_3641 / 4][_3641 % 4] >> 16;
            }
            else
            {
                _6960 = _1545._clusterGridContent[_3641 / 4][_3641 % 4];
            }
            vec3 _3687 = (_1606.lightArray[_6960 & 65535].volume.positionRadius.xyz - _positionWS.xyz).xyz;
            if (!(dot(_3687, _3687) <= (_1606.lightArray[_6960 & 65535].volume.positionRadius.w * _1606.lightArray[_6960 & 65535].volume.positionRadius.w)))
            {
                _7091 = _6727;
                _7089 = _6725;
                continue;
            }
            float _3428 = length(_3687);
            vec3 _3441 = (_3687 / vec3(_3428)).xyz;
            float _3442 = dot(_2789, _3441);
            if (_3442 < 0.0)
            {
                _7091 = _6727;
                _7089 = _6725;
                continue;
            }
            vec3 _3714 = normalize(_2800 + _3441);
            vec3 _6547 = _7450;
            _6547.x = dot(_2789, _3714);
            vec3 _6549 = _6547;
            _6549.y = _3442;
            vec3 _6551 = _6549;
            _6551.z = dot(_3714, _3441);
            vec3 _3735 = clamp(_6551, vec3(0.0), vec3(1.0));
            float _3737 = _3735.x;
            float _3740 = _3735.y;
            float _3759 = (_3428 / _1606.lightArray[_6960 & 65535].irradiance.attenuation.x) + 1.0;
            vec3 _3463 = (_1606.lightArray[_6960 & 65535].irradiance.colorIntensity.xyz * _1606.lightArray[_6960 & 65535].irradiance.colorIntensity.w) * ((1.0 / (_3759 * _3759)) * min(1.0, max(0.0, -(_3428 - _1606.lightArray[_6960 & 65535].irradiance.attenuation.y))));
            float _4147 = 1.0 - _3735.z;
            float _4150 = _4147 * _4147;
            float _4155 = (_4147 * _4150) * _4150;
            vec3 _4162 = vec3(_4155) + (_2983 * (1.0 - _4155));
            float _4178 = ((_3737 * _3737) * (_3028 - 1.0)) + 1.0;
            float _4134 = ((1.0 - _2757) * _3740) * (1.0 - _4162.x);
            _7091 = _6727 + (vec4((_4162 * (_3028 / ((_4178 * _4178) * (_3058 * (_3740 + sqrt(_3028 + ((_3740 * _3740) * _3054))))))) * _3740, _4134).xyz * _3463);
            _7089 = _6725 + ((vec3(_4134) * mix(vec3(1.0), _2737, vec3(_724.lightingModel._ScatteringDiffuseSpecularAlbedo.w))) * _3463);
            continue;
        }
        vec3 _6724;
        vec3 _6726;
        _6726 = _6727;
        _6724 = _6725;
        vec3 _7090;
        vec3 _7092;
        for (int _6723 = _3272; _6723 < _2830; _6726 = _7092, _6724 = _7090, _6723++)
        {
            int _4219 = _3277 + _6723;
            int _4221 = _4219 >> 1;
            int _6802;
            if ((_4219 & 1) == 1)
            {
                _6802 = _1545._clusterGridContent[_4221 / 4][_4221 % 4] >> 16;
            }
            else
            {
                _6802 = _1545._clusterGridContent[_4221 / 4][_4221 % 4];
            }
            vec3 _4267 = (_1606.lightArray[_6802 & 65535].volume.positionRadius.xyz - _positionWS.xyz).xyz;
            if (!(dot(_4267, _4267) <= (_1606.lightArray[_6802 & 65535].volume.positionRadius.w * _1606.lightArray[_6802 & 65535].volume.positionRadius.w)))
            {
                _7092 = _6726;
                _7090 = _6724;
                continue;
            }
            float _3524 = length(_4267);
            vec3 _3537 = (_4267 / vec3(_3524)).xyz;
            float _3538 = dot(_2789, _3537);
            if (_3538 < 0.0)
            {
                _7092 = _6726;
                _7090 = _6724;
                continue;
            }
            float _4296 = max(-dot(_3537, _1606.lightArray[_6802 & 65535].volume.directionSpotCos.xyz), 0.0);
            if (!(_4296 >= _1606.lightArray[_6802 & 65535].volume.directionSpotCos.w))
            {
                _7092 = _6726;
                _7090 = _6724;
                continue;
            }
            vec3 _4315 = normalize(_2800 + _3537);
            vec3 _6586 = _7450;
            _6586.x = dot(_2789, _4315);
            vec3 _6588 = _6586;
            _6588.y = _3538;
            vec3 _6590 = _6588;
            _6590.z = dot(_4315, _3537);
            vec3 _4336 = clamp(_6590, vec3(0.0), vec3(1.0));
            float _4338 = _4336.x;
            float _4341 = _4336.y;
            float _4360 = (_3524 / _1606.lightArray[_6802 & 65535].irradiance.attenuation.x) + 1.0;
            vec3 _3573 = (_1606.lightArray[_6802 & 65535].irradiance.colorIntensity.xyz * _1606.lightArray[_6802 & 65535].irradiance.colorIntensity.w) * (((1.0 / (_4360 * _4360)) * min(1.0, max(0.0, -(_3524 - _1606.lightArray[_6802 & 65535].irradiance.attenuation.y)))) * pow(_4296, _1606.lightArray[_6802 & 65535].irradiance.attenuation.z));
            float _4757 = 1.0 - _4336.z;
            float _4760 = _4757 * _4757;
            float _4765 = (_4757 * _4760) * _4760;
            vec3 _4772 = vec3(_4765) + (_2983 * (1.0 - _4765));
            float _4788 = ((_4338 * _4338) * (_3028 - 1.0)) + 1.0;
            float _4744 = ((1.0 - _2757) * _4341) * (1.0 - _4772.x);
            _7092 = _6726 + (vec4((_4772 * (_3028 / ((_4788 * _4788) * (_3058 * (_4341 + sqrt(_3028 + ((_4341 * _4341) * _3054))))))) * _4341, _4744).xyz * _3573);
            _7090 = _6724 + ((vec3(_4744) * mix(vec3(1.0), _2737, vec3(_724.lightingModel._ScatteringDiffuseSpecularAlbedo.w))) * _3573);
            continue;
        }
        vec3 _3626 = (_6724 * _724.lightingModel._ScatteringDiffuseSpecularAlbedo.y).xyz + ((_6726 * _724.lightingModel._ScatteringDiffuseSpecularAlbedo.z) / vec3(_2707));
        _6736 = vec4(_3626.x, _3626.y, _3626.z, vec4(0.0).w);
    }
    else
    {
        _6736 = vec4(0.0);
    }
    vec4 _5032 = _1984.lightAmbient.transform * vec4(_2789, 0.0);
    vec3 _5112 = _2983 + ((max(vec3(1.0 - _3016), _2983) - _2983) * pow(1.0 - _3033, 5.0));
    float _5052 = 1.0 - _2757;
    vec4 _5122 = _1984.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875;
    float _5124 = _5032.x;
    float _5129 = _5032.y;
    vec4 _5137 = _1984.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625;
    float _5139 = _5032.z;
    vec4 _5147 = _1984.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375;
    vec4 _5151 = _1984.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625;
    vec3 _5065 = -reflect((_1984.lightAmbient.transform * vec4(_2800, 0.0)).xyz, _5032.xyz);
    vec3 _6747;
    if (_1984.lightAmbient._ambient.y > 0.0)
    {
        _6747 = textureLod(skyboxMap, _5065, max(max(_1984.lightAmbient._ambient.y - (12.0 / (1.0 + (11.0 * _3016))), 0.0), textureQueryLod(skyboxMap, _5065).x)).xyz;
    }
    else
    {
        float _5271 = _5065.x;
        float _5276 = _5065.y;
        float _5286 = _5065.z;
        _6747 = ((((((_5122 * ((_5271 * _5271) - (_5276 * _5276))) + ((_5137 * _5286) * _5286)) + _5147) - _5151) + (((((_1984.lightAmbient._ambientSphere.L2m2 * _5271) * _5276) + ((_1984.lightAmbient._ambientSphere.L21 * _5271) * _5286)) + ((_1984.lightAmbient._ambientSphere.L2m1 * _5276) * _5286)) * 0.85808598995208740234375)) + ((((_1984.lightAmbient._ambientSphere.L11 * _5271) + (_1984.lightAmbient._ambientSphere.L1m1 * _5276)) + (_1984.lightAmbient._ambientSphere.L10 * _5286)) * 1.02332794666290283203125)).xyz;
    }
    vec3 _5071 = _6747 * _5112;
    float _5074 = mix(1.0, _6671, _724.lightingModel._ShowContourObscuranceWireframe.y);
    vec3 _5082 = mix(vec3(1.0), _2737, vec3(_724.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
    float _5087 = (_5074 * _1984.lightAmbient._ambient.x) * _724.lightingModel._AmbientDirectionalPointSpot.x;
    vec3 _5379 = -_1961.light.volume.directionSpotCos.xyz;
    vec3 _5410 = normalize(_2800 + _5379);
    vec3 _6649 = _7450;
    _6649.x = dot(_2789, _5410);
    vec3 _6651 = _6649;
    _6651.y = dot(_2789, _5379);
    vec3 _6653 = _6651;
    _6653.z = dot(_5410, _5379);
    vec3 _5431 = clamp(_6653, vec3(0.0), vec3(1.0));
    float _5433 = _5431.x;
    float _5436 = _5431.y;
    float _5501 = 1.0 - _5431.z;
    float _5504 = _5501 * _5501;
    float _5509 = (_5501 * _5504) * _5504;
    vec3 _5516 = vec3(_5509) + (_2983 * (1.0 - _5509));
    float _5532 = ((_5433 * _5433) * (_3028 - 1.0)) + 1.0;
    float _5488 = (_5052 * _5436) * (1.0 - _5516.x);
    vec3 _5392 = ((_1961.light.irradiance.colorIntensity.xyz * _1961.light.irradiance.colorIntensity.w) * 1.0) * _724.lightingModel._AmbientDirectionalPointSpot.y;
    vec3 _4912 = ((_6736.xyz + (_2774 * _724.lightingModel._UnlitEmissiveLightmapBackground.y)) + ((((((vec3(1.0) - _5112) * _5052) * ((((((_5122 * ((_5124 * _5124) - (_5129 * _5129))) + ((_5137 * _5139) * _5139)) + _5147) - _5151) + (((((_1984.lightAmbient._ambientSphere.L2m2 * _5124) * _5129) + ((_1984.lightAmbient._ambientSphere.L21 * _5124) * _5139)) + ((_1984.lightAmbient._ambientSphere.L2m1 * _5129) * _5139)) * 0.85808598995208740234375)) + ((((_1984.lightAmbient._ambientSphere.L11 * _5124) + (_1984.lightAmbient._ambientSphere.L1m1 * _5129)) + (_1984.lightAmbient._ambientSphere.L10 * _5139)) * 1.02332794666290283203125)).xyz) * _5082) * (_5087 * _724.lightingModel._ScatteringDiffuseSpecularAlbedo.y)) + ((vec3(_5488) * _5082) * (_5392 * _724.lightingModel._ScatteringDiffuseSpecularAlbedo.y)))) + (((_5071 * (_5087 * _724.lightingModel._ScatteringDiffuseSpecularAlbedo.z)) + (vec4((_5516 * (_3028 / ((_5532 * _5532) * (_3058 * (_5436 + sqrt(_3028 + ((_5436 * _5436) * _3054))))))) * _5436, _5488).xyz * (_5392 * _724.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) / vec3(_2707));
    bool _4914 = _724.lightingModel._HazeBloomSkinningBlendshape.x > 0.0;
    bool _4921;
    if (_4914)
    {
        _4921 = (_2026.hazeParams.hazeMode & 1) == 1;
    }
    else
    {
        _4921 = _4914;
    }
    vec3 _6791;
    if (_4921)
    {
        float _5607 = length(_positionES.xyz);
        vec4 _5615 = vec4(_2026.hazeParams.hazeColor, 1.0);
        vec4 _6777;
        if ((_2026.hazeParams.hazeMode & 16) == 16)
        {
            _6777 = mix(_5615, vec4(_2026.hazeParams.hazeGlareColor, 1.0), vec4(min(1.0, pow(max(0.0, dot(normalize(_positionWS.xyz - _cameraBlock._camera._viewInverse[3].xyz), _5379)), _2026.hazeParams.hazeGlareBlend))));
        }
        else
        {
            _6777 = _5615;
        }
        vec4 _6780;
        if ((_2026.hazeParams.hazeMode & 8) == 8)
        {
            vec3 _5670 = (_2026.hazeParams.colorModulationFactor * exp((-_2026.hazeParams.hazeHeightFactor) * (_cameraBlock._camera._viewInverse[3].y - _2026.hazeParams.hazeBaseReference))) * _5607;
            float _5674 = _positionWS.y - _cameraBlock._camera._viewInverse[3].y;
            vec3 _6779;
            if (abs(_5674) > 0.00999999977648258209228515625)
            {
                float _5683 = _2026.hazeParams.hazeHeightFactor * _5674;
                _6779 = _5670 * ((1.0 - exp(-_5683)) / _5683);
            }
            else
            {
                _6779 = _5670;
            }
            _6780 = vec4(1.0, 1.0, 1.0, (vec3(1.0) - exp(-_6779)).x);
        }
        else
        {
            vec4 _6781;
            if ((_2026.hazeParams.hazeMode & 2) != 2)
            {
                _6781 = vec4(_6777.xyz, 1.0 - exp((-_5607) * _2026.hazeParams.hazeRangeFactor));
            }
            else
            {
                float _5735 = (_2026.hazeParams.hazeRangeFactor * exp((-_2026.hazeParams.hazeHeightFactor) * (_cameraBlock._camera._viewInverse[3].y - _2026.hazeParams.hazeBaseReference))) * _5607;
                float _5739 = _positionWS.y - _cameraBlock._camera._viewInverse[3].y;
                float _6774;
                if (abs(_5739) > 0.00999999977648258209228515625)
                {
                    float _5748 = _2026.hazeParams.hazeHeightFactor * _5739;
                    float _6775;
                    if (abs(_5748) > 1.0000000116860974230803549289703e-07)
                    {
                        _6775 = _5735 * ((1.0 - exp(-_5748)) / _5748);
                    }
                    else
                    {
                        _6775 = _5735;
                    }
                    _6774 = _6775;
                }
                else
                {
                    _6774 = _5735;
                }
                _6781 = vec4(_6777.xyz, 1.0 - exp(-_6774));
            }
            _6780 = _6781;
        }
        vec4 _6782;
        if (_5607 > 27000.0)
        {
            vec4 _6665 = _6780;
            _6665.w = _6780.w * _2026.hazeParams.backgroundBlend;
            _6782 = _6665;
        }
        else
        {
            _6782 = _6780;
        }
        _6791 = mix(_4912, _6782.xyz, vec3(_6782.w));
    }
    else
    {
        _6791 = _4912;
    }
    _fragColor = vec4(_6791, _2707);
}

