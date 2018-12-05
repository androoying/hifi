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
} _431;

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _727;

layout(std140) uniform frustumGridBuffer
{
    FrustumGrid frustumGrid;
} _1391;

layout(std140) uniform clusterGridBuffer
{
    ivec4 _clusterGridTable[4096];
} _1512;

layout(std140) uniform clusterContentBuffer
{
    ivec4 _clusterGridContent[4096];
} _1548;

layout(std140) uniform lightBuffer
{
    Light lightArray[256];
} _1609;

layout(std140) uniform keyLightBuffer
{
    Light light;
} _1964;

layout(std140) uniform lightAmbientBuffer
{
    LightAmbient lightAmbient;
} _1987;

layout(std140) uniform hazeBuffer
{
    HazeParams hazeParams;
} _2029;

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera;
} _cameraBlock;

uniform samplerCube skyboxMap;
uniform sampler2D albedoMap;
uniform sampler2D roughnessMap;
uniform sampler2D normalMap;
uniform sampler2D metallicMap;
uniform sampler2D emissiveMap;
uniform sampler2D occlusionMap;

layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 7) in vec4 _positionES;
layout(location = 2) in vec4 _positionWS;
layout(location = 3) in vec3 _normalWS;
layout(location = 4) in vec3 _tangentWS;
layout(location = 0) out vec4 _fragColor;

ivec3 _6813;
float _7573;
vec3 _7574;

void main()
{
    int _3023 = floatBitsToInt(_431._mat._keySpare3.x);
    vec4 _6780;
    if ((_3023 & 1216) != 0)
    {
        _6780 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _6780 = vec4(1.0);
    }
    bool _2652 = (_3023 & 4096) != 0;
    float _6781;
    if (_2652)
    {
        _6781 = texture(roughnessMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _6781 = 1.0;
    }
    vec3 _6782;
    if ((_3023 & 8192) != 0)
    {
        vec2 _3041 = (texture(normalMap, _texCoord01.xy, -1.0).xy - vec2(0.5)) * 2.0;
        vec2 _3044 = _3041 * _3041;
        _6782 = vec3(_3041.x, sqrt((1.0 - _3044.x) - _3044.y), _3041.y);
    }
    else
    {
        _6782 = vec3(0.0, 1.0, 0.0);
    }
    bool _2681 = (_3023 & 2048) != 0;
    float _6783;
    if (_2681)
    {
        _6783 = texture(metallicMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _6783 = 0.0;
    }
    bool _2695 = (_3023 & 512) != 0;
    vec3 _6784;
    if (_2695)
    {
        _6784 = texture(emissiveMap, _texCoord01.xy, -1.0).xyz;
    }
    else
    {
        _6784 = vec3(0.0);
    }
    float _6785;
    if ((_3023 & 16384) != 0)
    {
        _6785 = texture(occlusionMap, _texCoord01.zw).x;
    }
    else
    {
        _6785 = 1.0;
    }
    float _6787;
    if ((_3023 & 192) != 0)
    {
        float _6786;
        if ((_3023 & 64) != 0)
        {
            _6786 = step(0.5, _6780.w);
        }
        else
        {
            _6786 = _6780.w;
        }
        _6787 = _6786;
    }
    else
    {
        _6787 = 1.0;
    }
    float _2752 = _6787 * (_431._mat._emissiveOpacity.w * _color.w);
    if (_2752 < 9.9999999747524270787835121154785e-07)
    {
        discard;
    }
    bvec3 _2767 = bvec3((_3023 & 4) != 0);
    vec3 _2768 = vec3(_2767.x ? _431._mat._albedoRoughness.xyz.x : vec3(1.0).x, _2767.y ? _431._mat._albedoRoughness.xyz.y : vec3(1.0).y, _2767.z ? _431._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _6790;
    if ((_3023 & 1024) != 0)
    {
        _6790 = _2768 * _6780.xyz;
    }
    else
    {
        _6790 = _2768;
    }
    vec3 _2782 = _6790 * _color.xyz;
    float _2792 = _2652 ? _6781 : _431._mat._albedoRoughness.w;
    float _2802 = _2681 ? _6783 : _431._mat._metallicScatteringSpare2.x;
    vec3 _3089 = mix(vec3(0.02999999932944774627685546875), _2782, vec3(_2802));
    bvec3 _2818 = bvec3(_2695);
    vec3 _2819 = vec3(_2818.x ? _6784.x : _431._mat._emissiveOpacity.xyz.x, _2818.y ? _6784.y : _431._mat._emissiveOpacity.xyz.y, _2818.z ? _6784.z : _431._mat._emissiveOpacity.xyz.z);
    vec3 _2834 = normalize(_normalWS);
    vec3 _2838 = normalize(_tangentWS);
    vec3 _2852 = mix(_6782, vec3(0.0, 1.0, 0.0), vec3(smoothstep(30.0, 100.0, (-_positionES).z)));
    vec3 _2882 = normalize(_cameraBlock._camera._viewInverse[3].xyz - _positionWS.xyz);
    vec3 _2885 = normalize(((cross(_2834, _2838) * _2852.x) + (_2834 * _2852.y)) + (_2838 * _2852.z));
    float _3122 = mix(0.00999999977648258209228515625, 1.0, _2792);
    float _3128 = _3122 * _3122;
    float _3134 = _3128 * _3128;
    float _3139 = clamp(dot(_2885, _2882), 0.0, 1.0);
    float _3160 = 1.0 - _3134;
    float _3164 = _3139 + sqrt(_3134 + ((_3139 * _3139) * _3160));
    vec4 _3169 = _1391.frustumGrid.worldToEyeMat * _positionWS;
    float _3186 = _3169.z;
    float _6791;
    if (_3186 > 0.0)
    {
        _6791 = -_3186;
    }
    else
    {
        _6791 = _3186;
    }
    float _3283 = _6791 * _1391.frustumGrid.eyeToGridProj[2].x;
    float _3294 = _6791 * _1391.frustumGrid.eyeToGridProj[2].y;
    float _3306 = -_6791;
    vec4 _3312 = vec4((_3169.x * _1391.frustumGrid.eyeToGridProj[0].x) + _3283, (_3169.y * _1391.frustumGrid.eyeToGridProj[1].y) + _3294, _7573, _3306) / vec4(_3306);
    vec3 _3344 = vec3(0.5 * (_3312.x + 1.0), 0.5 * (_3312.y + 1.0), log2(((_3306 - _1391.frustumGrid.rangeNear) / (_1391.frustumGrid.rangeFar - _1391.frustumGrid.rangeNear)) + 1.0)) * vec3(_1391.frustumGrid.dims);
    float _3214 = float(_1391.frustumGrid.dims.z);
    vec3 _6793;
    if (_3344.z >= _3214)
    {
        vec3 _6633 = _3344;
        _6633.z = _3214;
        _6793 = _6633;
    }
    else
    {
        _6793 = _3344;
    }
    vec3 _3223 = floor(_6793);
    ivec3 _3224 = ivec3(_3223);
    bool _3230 = _3186 > (-_1391.frustumGrid.frustumNear);
    bool _3240;
    if (!_3230)
    {
        _3240 = _3186 < (-_1391.frustumGrid.frustumFar);
    }
    else
    {
        _3240 = _3230;
    }
    ivec3 _6800;
    if (_3240)
    {
        _6800 = ivec3(_3224.xy, -2);
    }
    else
    {
        _6800 = _6813;
    }
    bool _7577 = _3240 ? true : false;
    ivec3 _6799;
    if (!_7577)
    {
        bool _3256 = _3186 > (-_1391.frustumGrid.rangeNear);
        ivec3 _6815;
        if (_3256)
        {
            _6815 = ivec3(_3224.xy, -1);
        }
        else
        {
            _6815 = _6800;
        }
        bvec3 _7579 = bvec3(_3256 ? true : _7577);
        _6799 = ivec3(_7579.x ? _6815.x : _3224.x, _7579.y ? _6815.y : _3224.y, _7579.z ? _6815.z : _3224.z);
    }
    else
    {
        _6799 = _6800;
    }
    int _3364 = _6799.x + ((_6799.y + (_6799.z * _1391.frustumGrid.dims.y)) * _1391.frustumGrid.dims.x);
    int _3378 = 255 & (_1512._clusterGridTable[_3364 / 4][_3364 % 4] >> 16);
    int _3383 = 65535 & _1512._clusterGridTable[_3364 / 4][_3364 % 4];
    int _2913 = _3378 + (255 & (_1512._clusterGridTable[_3364 / 4][_3364 % 4] >> 24));
    bool _3390 = _2913 > 0;
    bool _3396;
    if (_3390)
    {
        _3396 = all(greaterThanEqual(_6799, ivec3(0)));
    }
    else
    {
        _3396 = _3390;
    }
    bool _3405;
    if (_3396)
    {
        _3405 = all(lessThan(_6799.xy, _1391.frustumGrid.dims.xy));
    }
    else
    {
        _3405 = _3396;
    }
    bool _3413;
    if (_3405)
    {
        _3413 = _6799.z <= _1391.frustumGrid.dims.z;
    }
    else
    {
        _3413 = _3405;
    }
    vec4 _6851;
    if (_3413)
    {
        vec3 _6840;
        vec3 _6842;
        _6842 = vec3(0.0);
        _6840 = vec3(0.0);
        vec3 _7213;
        vec3 _7215;
        for (int _6837 = 0; _6837 < _3378; _6842 = _7215, _6840 = _7213, _6837++)
        {
            int _3745 = _3383 + _6837;
            int _3747 = _3745 >> 1;
            int _7080;
            if ((_3745 & 1) == 1)
            {
                _7080 = _1548._clusterGridContent[_3747 / 4][_3747 % 4] >> 16;
            }
            else
            {
                _7080 = _1548._clusterGridContent[_3747 / 4][_3747 % 4];
            }
            vec3 _3793 = (_1609.lightArray[_7080 & 65535].volume.positionRadius.xyz - _positionWS.xyz).xyz;
            if (!(dot(_3793, _3793) <= (_1609.lightArray[_7080 & 65535].volume.positionRadius.w * _1609.lightArray[_7080 & 65535].volume.positionRadius.w)))
            {
                _7215 = _6842;
                _7213 = _6840;
                continue;
            }
            float _3534 = length(_3793);
            vec3 _3547 = (_3793 / vec3(_3534)).xyz;
            float _3548 = dot(_2885, _3547);
            if (_3548 < 0.0)
            {
                _7215 = _6842;
                _7213 = _6840;
                continue;
            }
            vec3 _3820 = normalize(_2882 + _3547);
            vec3 _6660 = _7574;
            _6660.x = dot(_2885, _3820);
            vec3 _6662 = _6660;
            _6662.y = _3548;
            vec3 _6664 = _6662;
            _6664.z = dot(_3820, _3547);
            vec3 _3841 = clamp(_6664, vec3(0.0), vec3(1.0));
            float _3843 = _3841.x;
            float _3846 = _3841.y;
            float _3865 = (_3534 / _1609.lightArray[_7080 & 65535].irradiance.attenuation.x) + 1.0;
            vec3 _3569 = (_1609.lightArray[_7080 & 65535].irradiance.colorIntensity.xyz * _1609.lightArray[_7080 & 65535].irradiance.colorIntensity.w) * ((1.0 / (_3865 * _3865)) * min(1.0, max(0.0, -(_3534 - _1609.lightArray[_7080 & 65535].irradiance.attenuation.y))));
            float _4253 = 1.0 - _3841.z;
            float _4256 = _4253 * _4253;
            float _4261 = (_4253 * _4256) * _4256;
            vec3 _4268 = vec3(_4261) + (_3089 * (1.0 - _4261));
            float _4284 = ((_3843 * _3843) * (_3134 - 1.0)) + 1.0;
            float _4240 = ((1.0 - _2802) * _3846) * (1.0 - _4268.x);
            _7215 = _6842 + (vec4((_4268 * (_3134 / ((_4284 * _4284) * (_3164 * (_3846 + sqrt(_3134 + ((_3846 * _3846) * _3160))))))) * _3846, _4240).xyz * _3569);
            _7213 = _6840 + ((vec3(_4240) * mix(vec3(1.0), _2782, vec3(_727.lightingModel._ScatteringDiffuseSpecularAlbedo.w))) * _3569);
            continue;
        }
        vec3 _6839;
        vec3 _6841;
        _6841 = _6842;
        _6839 = _6840;
        vec3 _7214;
        vec3 _7216;
        for (int _6838 = _3378; _6838 < _2913; _6841 = _7216, _6839 = _7214, _6838++)
        {
            int _4325 = _3383 + _6838;
            int _4327 = _4325 >> 1;
            int _6918;
            if ((_4325 & 1) == 1)
            {
                _6918 = _1548._clusterGridContent[_4327 / 4][_4327 % 4] >> 16;
            }
            else
            {
                _6918 = _1548._clusterGridContent[_4327 / 4][_4327 % 4];
            }
            vec3 _4373 = (_1609.lightArray[_6918 & 65535].volume.positionRadius.xyz - _positionWS.xyz).xyz;
            if (!(dot(_4373, _4373) <= (_1609.lightArray[_6918 & 65535].volume.positionRadius.w * _1609.lightArray[_6918 & 65535].volume.positionRadius.w)))
            {
                _7216 = _6841;
                _7214 = _6839;
                continue;
            }
            float _3630 = length(_4373);
            vec3 _3643 = (_4373 / vec3(_3630)).xyz;
            float _3644 = dot(_2885, _3643);
            if (_3644 < 0.0)
            {
                _7216 = _6841;
                _7214 = _6839;
                continue;
            }
            float _4402 = max(-dot(_3643, _1609.lightArray[_6918 & 65535].volume.directionSpotCos.xyz), 0.0);
            if (!(_4402 >= _1609.lightArray[_6918 & 65535].volume.directionSpotCos.w))
            {
                _7216 = _6841;
                _7214 = _6839;
                continue;
            }
            vec3 _4421 = normalize(_2882 + _3643);
            vec3 _6699 = _7574;
            _6699.x = dot(_2885, _4421);
            vec3 _6701 = _6699;
            _6701.y = _3644;
            vec3 _6703 = _6701;
            _6703.z = dot(_4421, _3643);
            vec3 _4442 = clamp(_6703, vec3(0.0), vec3(1.0));
            float _4444 = _4442.x;
            float _4447 = _4442.y;
            float _4466 = (_3630 / _1609.lightArray[_6918 & 65535].irradiance.attenuation.x) + 1.0;
            vec3 _3679 = (_1609.lightArray[_6918 & 65535].irradiance.colorIntensity.xyz * _1609.lightArray[_6918 & 65535].irradiance.colorIntensity.w) * (((1.0 / (_4466 * _4466)) * min(1.0, max(0.0, -(_3630 - _1609.lightArray[_6918 & 65535].irradiance.attenuation.y)))) * pow(_4402, _1609.lightArray[_6918 & 65535].irradiance.attenuation.z));
            float _4863 = 1.0 - _4442.z;
            float _4866 = _4863 * _4863;
            float _4871 = (_4863 * _4866) * _4866;
            vec3 _4878 = vec3(_4871) + (_3089 * (1.0 - _4871));
            float _4894 = ((_4444 * _4444) * (_3134 - 1.0)) + 1.0;
            float _4850 = ((1.0 - _2802) * _4447) * (1.0 - _4878.x);
            _7216 = _6841 + (vec4((_4878 * (_3134 / ((_4894 * _4894) * (_3164 * (_4447 + sqrt(_3134 + ((_4447 * _4447) * _3160))))))) * _4447, _4850).xyz * _3679);
            _7214 = _6839 + ((vec3(_4850) * mix(vec3(1.0), _2782, vec3(_727.lightingModel._ScatteringDiffuseSpecularAlbedo.w))) * _3679);
            continue;
        }
        vec3 _3732 = (_6839 * _727.lightingModel._ScatteringDiffuseSpecularAlbedo.y).xyz + ((_6841 * _727.lightingModel._ScatteringDiffuseSpecularAlbedo.z) / vec3(_2752));
        _6851 = vec4(_3732.x, _3732.y, _3732.z, vec4(0.0).w);
    }
    else
    {
        _6851 = vec4(0.0);
    }
    vec4 _5138 = _1987.lightAmbient.transform * vec4(_2885, 0.0);
    vec3 _5218 = _3089 + ((max(vec3(1.0 - _3122), _3089) - _3089) * pow(1.0 - _3139, 5.0));
    float _5158 = 1.0 - _2802;
    vec4 _5228 = _1987.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875;
    float _5230 = _5138.x;
    float _5235 = _5138.y;
    vec4 _5243 = _1987.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625;
    float _5245 = _5138.z;
    vec4 _5253 = _1987.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375;
    vec4 _5257 = _1987.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625;
    vec3 _5171 = -reflect((_1987.lightAmbient.transform * vec4(_2882, 0.0)).xyz, _5138.xyz);
    vec3 _6862;
    if (_1987.lightAmbient._ambient.y > 0.0)
    {
        _6862 = textureLod(skyboxMap, _5171, max(max(_1987.lightAmbient._ambient.y - (12.0 / (1.0 + (11.0 * _3122))), 0.0), textureQueryLod(skyboxMap, _5171).x)).xyz;
    }
    else
    {
        float _5377 = _5171.x;
        float _5382 = _5171.y;
        float _5392 = _5171.z;
        _6862 = ((((((_5228 * ((_5377 * _5377) - (_5382 * _5382))) + ((_5243 * _5392) * _5392)) + _5253) - _5257) + (((((_1987.lightAmbient._ambientSphere.L2m2 * _5377) * _5382) + ((_1987.lightAmbient._ambientSphere.L21 * _5377) * _5392)) + ((_1987.lightAmbient._ambientSphere.L2m1 * _5382) * _5392)) * 0.85808598995208740234375)) + ((((_1987.lightAmbient._ambientSphere.L11 * _5377) + (_1987.lightAmbient._ambientSphere.L1m1 * _5382)) + (_1987.lightAmbient._ambientSphere.L10 * _5392)) * 1.02332794666290283203125)).xyz;
    }
    vec3 _5177 = _6862 * _5218;
    float _5180 = mix(1.0, _6785, _727.lightingModel._ShowContourObscuranceWireframe.y);
    vec3 _5188 = mix(vec3(1.0), _2782, vec3(_727.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
    float _5193 = (_5180 * _1987.lightAmbient._ambient.x) * _727.lightingModel._AmbientDirectionalPointSpot.x;
    vec3 _5485 = -_1964.light.volume.directionSpotCos.xyz;
    vec3 _5516 = normalize(_2882 + _5485);
    vec3 _6762 = _7574;
    _6762.x = dot(_2885, _5516);
    vec3 _6764 = _6762;
    _6764.y = dot(_2885, _5485);
    vec3 _6766 = _6764;
    _6766.z = dot(_5516, _5485);
    vec3 _5537 = clamp(_6766, vec3(0.0), vec3(1.0));
    float _5539 = _5537.x;
    float _5542 = _5537.y;
    float _5607 = 1.0 - _5537.z;
    float _5610 = _5607 * _5607;
    float _5615 = (_5607 * _5610) * _5610;
    vec3 _5622 = vec3(_5615) + (_3089 * (1.0 - _5615));
    float _5638 = ((_5539 * _5539) * (_3134 - 1.0)) + 1.0;
    float _5594 = (_5158 * _5542) * (1.0 - _5622.x);
    vec3 _5498 = ((_1964.light.irradiance.colorIntensity.xyz * _1964.light.irradiance.colorIntensity.w) * 1.0) * _727.lightingModel._AmbientDirectionalPointSpot.y;
    vec3 _5018 = ((_6851.xyz + (_2819 * _727.lightingModel._UnlitEmissiveLightmapBackground.y)) + ((((((vec3(1.0) - _5218) * _5158) * ((((((_5228 * ((_5230 * _5230) - (_5235 * _5235))) + ((_5243 * _5245) * _5245)) + _5253) - _5257) + (((((_1987.lightAmbient._ambientSphere.L2m2 * _5230) * _5235) + ((_1987.lightAmbient._ambientSphere.L21 * _5230) * _5245)) + ((_1987.lightAmbient._ambientSphere.L2m1 * _5235) * _5245)) * 0.85808598995208740234375)) + ((((_1987.lightAmbient._ambientSphere.L11 * _5230) + (_1987.lightAmbient._ambientSphere.L1m1 * _5235)) + (_1987.lightAmbient._ambientSphere.L10 * _5245)) * 1.02332794666290283203125)).xyz) * _5188) * (_5193 * _727.lightingModel._ScatteringDiffuseSpecularAlbedo.y)) + ((vec3(_5594) * _5188) * (_5498 * _727.lightingModel._ScatteringDiffuseSpecularAlbedo.y)))) + (((_5177 * (_5193 * _727.lightingModel._ScatteringDiffuseSpecularAlbedo.z)) + (vec4((_5622 * (_3134 / ((_5638 * _5638) * (_3164 * (_5542 + sqrt(_3134 + ((_5542 * _5542) * _3160))))))) * _5542, _5594).xyz * (_5498 * _727.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) / vec3(_2752));
    bool _5020 = _727.lightingModel._HazeBloomSkinningBlendshape.x > 0.0;
    bool _5027;
    if (_5020)
    {
        _5027 = (_2029.hazeParams.hazeMode & 1) == 1;
    }
    else
    {
        _5027 = _5020;
    }
    vec3 _6907;
    if (_5027)
    {
        float _5713 = length(_positionES.xyz);
        vec4 _5721 = vec4(_2029.hazeParams.hazeColor, 1.0);
        vec4 _6893;
        if ((_2029.hazeParams.hazeMode & 16) == 16)
        {
            _6893 = mix(_5721, vec4(_2029.hazeParams.hazeGlareColor, 1.0), vec4(min(1.0, pow(max(0.0, dot(normalize(_positionWS.xyz - _cameraBlock._camera._viewInverse[3].xyz), _5485)), _2029.hazeParams.hazeGlareBlend))));
        }
        else
        {
            _6893 = _5721;
        }
        vec4 _6896;
        if ((_2029.hazeParams.hazeMode & 8) == 8)
        {
            vec3 _5776 = (_2029.hazeParams.colorModulationFactor * exp((-_2029.hazeParams.hazeHeightFactor) * (_cameraBlock._camera._viewInverse[3].y - _2029.hazeParams.hazeBaseReference))) * _5713;
            float _5780 = _positionWS.y - _cameraBlock._camera._viewInverse[3].y;
            vec3 _6895;
            if (abs(_5780) > 0.00999999977648258209228515625)
            {
                float _5789 = _2029.hazeParams.hazeHeightFactor * _5780;
                _6895 = _5776 * ((1.0 - exp(-_5789)) / _5789);
            }
            else
            {
                _6895 = _5776;
            }
            _6896 = vec4(1.0, 1.0, 1.0, (vec3(1.0) - exp(-_6895)).x);
        }
        else
        {
            vec4 _6897;
            if ((_2029.hazeParams.hazeMode & 2) != 2)
            {
                _6897 = vec4(_6893.xyz, 1.0 - exp((-_5713) * _2029.hazeParams.hazeRangeFactor));
            }
            else
            {
                float _5841 = (_2029.hazeParams.hazeRangeFactor * exp((-_2029.hazeParams.hazeHeightFactor) * (_cameraBlock._camera._viewInverse[3].y - _2029.hazeParams.hazeBaseReference))) * _5713;
                float _5845 = _positionWS.y - _cameraBlock._camera._viewInverse[3].y;
                float _6890;
                if (abs(_5845) > 0.00999999977648258209228515625)
                {
                    float _5854 = _2029.hazeParams.hazeHeightFactor * _5845;
                    float _6891;
                    if (abs(_5854) > 1.0000000116860974230803549289703e-07)
                    {
                        _6891 = _5841 * ((1.0 - exp(-_5854)) / _5854);
                    }
                    else
                    {
                        _6891 = _5841;
                    }
                    _6890 = _6891;
                }
                else
                {
                    _6890 = _5841;
                }
                _6897 = vec4(_6893.xyz, 1.0 - exp(-_6890));
            }
            _6896 = _6897;
        }
        vec4 _6898;
        if (_5713 > 27000.0)
        {
            vec4 _6778 = _6896;
            _6778.w = _6896.w * _2029.hazeParams.backgroundBlend;
            _6898 = _6778;
        }
        else
        {
            _6898 = _6896;
        }
        _6907 = mix(_5018, _6898.xyz, vec3(_6898.w));
    }
    else
    {
        _6907 = _5018;
    }
    _fragColor = vec4(_6907, _2752);
}

