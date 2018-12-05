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
    _TransformCamera _camera[2];
} _cameraBlock;

uniform samplerCube skyboxMap;
uniform sampler2D albedoMap;
uniform sampler2D roughnessMap;
uniform sampler2D normalMap;
uniform sampler2D metallicMap;
uniform sampler2D emissiveMap;
uniform sampler2D occlusionMap;

layout(location = 8) flat in int _stereoSide;
layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 7) in vec4 _positionES;
layout(location = 2) in vec4 _positionWS;
layout(location = 3) in vec3 _normalWS;
layout(location = 4) in vec3 _tangentWS;
layout(location = 0) out vec4 _fragColor;

ivec3 _6818;
float _7578;
vec3 _7579;

void main()
{
    int _3027 = floatBitsToInt(_431._mat._keySpare3.x);
    vec4 _6785;
    if ((_3027 & 1216) != 0)
    {
        _6785 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _6785 = vec4(1.0);
    }
    bool _2656 = (_3027 & 4096) != 0;
    float _6786;
    if (_2656)
    {
        _6786 = texture(roughnessMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _6786 = 1.0;
    }
    vec3 _6787;
    if ((_3027 & 8192) != 0)
    {
        vec2 _3045 = (texture(normalMap, _texCoord01.xy, -1.0).xy - vec2(0.5)) * 2.0;
        vec2 _3048 = _3045 * _3045;
        _6787 = vec3(_3045.x, sqrt((1.0 - _3048.x) - _3048.y), _3045.y);
    }
    else
    {
        _6787 = vec3(0.0, 1.0, 0.0);
    }
    bool _2685 = (_3027 & 2048) != 0;
    float _6788;
    if (_2685)
    {
        _6788 = texture(metallicMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _6788 = 0.0;
    }
    bool _2699 = (_3027 & 512) != 0;
    vec3 _6789;
    if (_2699)
    {
        _6789 = texture(emissiveMap, _texCoord01.xy, -1.0).xyz;
    }
    else
    {
        _6789 = vec3(0.0);
    }
    float _6790;
    if ((_3027 & 16384) != 0)
    {
        _6790 = texture(occlusionMap, _texCoord01.zw).x;
    }
    else
    {
        _6790 = 1.0;
    }
    float _6792;
    if ((_3027 & 192) != 0)
    {
        float _6791;
        if ((_3027 & 64) != 0)
        {
            _6791 = step(0.5, _6785.w);
        }
        else
        {
            _6791 = _6785.w;
        }
        _6792 = _6791;
    }
    else
    {
        _6792 = 1.0;
    }
    float _2756 = _6792 * (_431._mat._emissiveOpacity.w * _color.w);
    if (_2756 < 9.9999999747524270787835121154785e-07)
    {
        discard;
    }
    bvec3 _2771 = bvec3((_3027 & 4) != 0);
    vec3 _2772 = vec3(_2771.x ? _431._mat._albedoRoughness.xyz.x : vec3(1.0).x, _2771.y ? _431._mat._albedoRoughness.xyz.y : vec3(1.0).y, _2771.z ? _431._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _6795;
    if ((_3027 & 1024) != 0)
    {
        _6795 = _2772 * _6785.xyz;
    }
    else
    {
        _6795 = _2772;
    }
    vec3 _2786 = _6795 * _color.xyz;
    float _2796 = _2656 ? _6786 : _431._mat._albedoRoughness.w;
    float _2806 = _2685 ? _6788 : _431._mat._metallicScatteringSpare2.x;
    vec3 _3093 = mix(vec3(0.02999999932944774627685546875), _2786, vec3(_2806));
    bvec3 _2822 = bvec3(_2699);
    vec3 _2823 = vec3(_2822.x ? _6789.x : _431._mat._emissiveOpacity.xyz.x, _2822.y ? _6789.y : _431._mat._emissiveOpacity.xyz.y, _2822.z ? _6789.z : _431._mat._emissiveOpacity.xyz.z);
    vec3 _2838 = normalize(_normalWS);
    vec3 _2842 = normalize(_tangentWS);
    vec3 _2856 = mix(_6787, vec3(0.0, 1.0, 0.0), vec3(smoothstep(30.0, 100.0, (-_positionES).z)));
    vec3 _2886 = normalize(_cameraBlock._camera[_stereoSide]._viewInverse[3].xyz - _positionWS.xyz);
    vec3 _2889 = normalize(((cross(_2838, _2842) * _2856.x) + (_2838 * _2856.y)) + (_2842 * _2856.z));
    float _3127 = mix(0.00999999977648258209228515625, 1.0, _2796);
    float _3133 = _3127 * _3127;
    float _3139 = _3133 * _3133;
    float _3144 = clamp(dot(_2889, _2886), 0.0, 1.0);
    float _3165 = 1.0 - _3139;
    float _3169 = _3144 + sqrt(_3139 + ((_3144 * _3144) * _3165));
    vec4 _3174 = _1391.frustumGrid.worldToEyeMat * _positionWS;
    float _3191 = _3174.z;
    float _6796;
    if (_3191 > 0.0)
    {
        _6796 = -_3191;
    }
    else
    {
        _6796 = _3191;
    }
    float _3288 = _6796 * _1391.frustumGrid.eyeToGridProj[2].x;
    float _3299 = _6796 * _1391.frustumGrid.eyeToGridProj[2].y;
    float _3311 = -_6796;
    vec4 _3317 = vec4((_3174.x * _1391.frustumGrid.eyeToGridProj[0].x) + _3288, (_3174.y * _1391.frustumGrid.eyeToGridProj[1].y) + _3299, _7578, _3311) / vec4(_3311);
    vec3 _3349 = vec3(0.5 * (_3317.x + 1.0), 0.5 * (_3317.y + 1.0), log2(((_3311 - _1391.frustumGrid.rangeNear) / (_1391.frustumGrid.rangeFar - _1391.frustumGrid.rangeNear)) + 1.0)) * vec3(_1391.frustumGrid.dims);
    float _3219 = float(_1391.frustumGrid.dims.z);
    vec3 _6798;
    if (_3349.z >= _3219)
    {
        vec3 _6638 = _3349;
        _6638.z = _3219;
        _6798 = _6638;
    }
    else
    {
        _6798 = _3349;
    }
    vec3 _3228 = floor(_6798);
    ivec3 _3229 = ivec3(_3228);
    bool _3235 = _3191 > (-_1391.frustumGrid.frustumNear);
    bool _3245;
    if (!_3235)
    {
        _3245 = _3191 < (-_1391.frustumGrid.frustumFar);
    }
    else
    {
        _3245 = _3235;
    }
    ivec3 _6805;
    if (_3245)
    {
        _6805 = ivec3(_3229.xy, -2);
    }
    else
    {
        _6805 = _6818;
    }
    bool _7582 = _3245 ? true : false;
    ivec3 _6804;
    if (!_7582)
    {
        bool _3261 = _3191 > (-_1391.frustumGrid.rangeNear);
        ivec3 _6820;
        if (_3261)
        {
            _6820 = ivec3(_3229.xy, -1);
        }
        else
        {
            _6820 = _6805;
        }
        bvec3 _7584 = bvec3(_3261 ? true : _7582);
        _6804 = ivec3(_7584.x ? _6820.x : _3229.x, _7584.y ? _6820.y : _3229.y, _7584.z ? _6820.z : _3229.z);
    }
    else
    {
        _6804 = _6805;
    }
    int _3369 = _6804.x + ((_6804.y + (_6804.z * _1391.frustumGrid.dims.y)) * _1391.frustumGrid.dims.x);
    int _3383 = 255 & (_1512._clusterGridTable[_3369 / 4][_3369 % 4] >> 16);
    int _3388 = 65535 & _1512._clusterGridTable[_3369 / 4][_3369 % 4];
    int _2917 = _3383 + (255 & (_1512._clusterGridTable[_3369 / 4][_3369 % 4] >> 24));
    bool _3395 = _2917 > 0;
    bool _3401;
    if (_3395)
    {
        _3401 = all(greaterThanEqual(_6804, ivec3(0)));
    }
    else
    {
        _3401 = _3395;
    }
    bool _3410;
    if (_3401)
    {
        _3410 = all(lessThan(_6804.xy, _1391.frustumGrid.dims.xy));
    }
    else
    {
        _3410 = _3401;
    }
    bool _3418;
    if (_3410)
    {
        _3418 = _6804.z <= _1391.frustumGrid.dims.z;
    }
    else
    {
        _3418 = _3410;
    }
    vec4 _6856;
    if (_3418)
    {
        vec3 _6845;
        vec3 _6847;
        _6847 = vec3(0.0);
        _6845 = vec3(0.0);
        vec3 _7218;
        vec3 _7220;
        for (int _6842 = 0; _6842 < _3383; _6847 = _7220, _6845 = _7218, _6842++)
        {
            int _3750 = _3388 + _6842;
            int _3752 = _3750 >> 1;
            int _7085;
            if ((_3750 & 1) == 1)
            {
                _7085 = _1548._clusterGridContent[_3752 / 4][_3752 % 4] >> 16;
            }
            else
            {
                _7085 = _1548._clusterGridContent[_3752 / 4][_3752 % 4];
            }
            vec3 _3798 = (_1609.lightArray[_7085 & 65535].volume.positionRadius.xyz - _positionWS.xyz).xyz;
            if (!(dot(_3798, _3798) <= (_1609.lightArray[_7085 & 65535].volume.positionRadius.w * _1609.lightArray[_7085 & 65535].volume.positionRadius.w)))
            {
                _7220 = _6847;
                _7218 = _6845;
                continue;
            }
            float _3539 = length(_3798);
            vec3 _3552 = (_3798 / vec3(_3539)).xyz;
            float _3553 = dot(_2889, _3552);
            if (_3553 < 0.0)
            {
                _7220 = _6847;
                _7218 = _6845;
                continue;
            }
            vec3 _3825 = normalize(_2886 + _3552);
            vec3 _6665 = _7579;
            _6665.x = dot(_2889, _3825);
            vec3 _6667 = _6665;
            _6667.y = _3553;
            vec3 _6669 = _6667;
            _6669.z = dot(_3825, _3552);
            vec3 _3846 = clamp(_6669, vec3(0.0), vec3(1.0));
            float _3848 = _3846.x;
            float _3851 = _3846.y;
            float _3870 = (_3539 / _1609.lightArray[_7085 & 65535].irradiance.attenuation.x) + 1.0;
            vec3 _3574 = (_1609.lightArray[_7085 & 65535].irradiance.colorIntensity.xyz * _1609.lightArray[_7085 & 65535].irradiance.colorIntensity.w) * ((1.0 / (_3870 * _3870)) * min(1.0, max(0.0, -(_3539 - _1609.lightArray[_7085 & 65535].irradiance.attenuation.y))));
            float _4258 = 1.0 - _3846.z;
            float _4261 = _4258 * _4258;
            float _4266 = (_4258 * _4261) * _4261;
            vec3 _4273 = vec3(_4266) + (_3093 * (1.0 - _4266));
            float _4289 = ((_3848 * _3848) * (_3139 - 1.0)) + 1.0;
            float _4245 = ((1.0 - _2806) * _3851) * (1.0 - _4273.x);
            _7220 = _6847 + (vec4((_4273 * (_3139 / ((_4289 * _4289) * (_3169 * (_3851 + sqrt(_3139 + ((_3851 * _3851) * _3165))))))) * _3851, _4245).xyz * _3574);
            _7218 = _6845 + ((vec3(_4245) * mix(vec3(1.0), _2786, vec3(_727.lightingModel._ScatteringDiffuseSpecularAlbedo.w))) * _3574);
            continue;
        }
        vec3 _6844;
        vec3 _6846;
        _6846 = _6847;
        _6844 = _6845;
        vec3 _7219;
        vec3 _7221;
        for (int _6843 = _3383; _6843 < _2917; _6846 = _7221, _6844 = _7219, _6843++)
        {
            int _4330 = _3388 + _6843;
            int _4332 = _4330 >> 1;
            int _6923;
            if ((_4330 & 1) == 1)
            {
                _6923 = _1548._clusterGridContent[_4332 / 4][_4332 % 4] >> 16;
            }
            else
            {
                _6923 = _1548._clusterGridContent[_4332 / 4][_4332 % 4];
            }
            vec3 _4378 = (_1609.lightArray[_6923 & 65535].volume.positionRadius.xyz - _positionWS.xyz).xyz;
            if (!(dot(_4378, _4378) <= (_1609.lightArray[_6923 & 65535].volume.positionRadius.w * _1609.lightArray[_6923 & 65535].volume.positionRadius.w)))
            {
                _7221 = _6846;
                _7219 = _6844;
                continue;
            }
            float _3635 = length(_4378);
            vec3 _3648 = (_4378 / vec3(_3635)).xyz;
            float _3649 = dot(_2889, _3648);
            if (_3649 < 0.0)
            {
                _7221 = _6846;
                _7219 = _6844;
                continue;
            }
            float _4407 = max(-dot(_3648, _1609.lightArray[_6923 & 65535].volume.directionSpotCos.xyz), 0.0);
            if (!(_4407 >= _1609.lightArray[_6923 & 65535].volume.directionSpotCos.w))
            {
                _7221 = _6846;
                _7219 = _6844;
                continue;
            }
            vec3 _4426 = normalize(_2886 + _3648);
            vec3 _6704 = _7579;
            _6704.x = dot(_2889, _4426);
            vec3 _6706 = _6704;
            _6706.y = _3649;
            vec3 _6708 = _6706;
            _6708.z = dot(_4426, _3648);
            vec3 _4447 = clamp(_6708, vec3(0.0), vec3(1.0));
            float _4449 = _4447.x;
            float _4452 = _4447.y;
            float _4471 = (_3635 / _1609.lightArray[_6923 & 65535].irradiance.attenuation.x) + 1.0;
            vec3 _3684 = (_1609.lightArray[_6923 & 65535].irradiance.colorIntensity.xyz * _1609.lightArray[_6923 & 65535].irradiance.colorIntensity.w) * (((1.0 / (_4471 * _4471)) * min(1.0, max(0.0, -(_3635 - _1609.lightArray[_6923 & 65535].irradiance.attenuation.y)))) * pow(_4407, _1609.lightArray[_6923 & 65535].irradiance.attenuation.z));
            float _4868 = 1.0 - _4447.z;
            float _4871 = _4868 * _4868;
            float _4876 = (_4868 * _4871) * _4871;
            vec3 _4883 = vec3(_4876) + (_3093 * (1.0 - _4876));
            float _4899 = ((_4449 * _4449) * (_3139 - 1.0)) + 1.0;
            float _4855 = ((1.0 - _2806) * _4452) * (1.0 - _4883.x);
            _7221 = _6846 + (vec4((_4883 * (_3139 / ((_4899 * _4899) * (_3169 * (_4452 + sqrt(_3139 + ((_4452 * _4452) * _3165))))))) * _4452, _4855).xyz * _3684);
            _7219 = _6844 + ((vec3(_4855) * mix(vec3(1.0), _2786, vec3(_727.lightingModel._ScatteringDiffuseSpecularAlbedo.w))) * _3684);
            continue;
        }
        vec3 _3737 = (_6844 * _727.lightingModel._ScatteringDiffuseSpecularAlbedo.y).xyz + ((_6846 * _727.lightingModel._ScatteringDiffuseSpecularAlbedo.z) / vec3(_2756));
        _6856 = vec4(_3737.x, _3737.y, _3737.z, vec4(0.0).w);
    }
    else
    {
        _6856 = vec4(0.0);
    }
    vec4 _5143 = _1987.lightAmbient.transform * vec4(_2889, 0.0);
    vec3 _5223 = _3093 + ((max(vec3(1.0 - _3127), _3093) - _3093) * pow(1.0 - _3144, 5.0));
    float _5163 = 1.0 - _2806;
    vec4 _5233 = _1987.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875;
    float _5235 = _5143.x;
    float _5240 = _5143.y;
    vec4 _5248 = _1987.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625;
    float _5250 = _5143.z;
    vec4 _5258 = _1987.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375;
    vec4 _5262 = _1987.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625;
    vec3 _5176 = -reflect((_1987.lightAmbient.transform * vec4(_2886, 0.0)).xyz, _5143.xyz);
    vec3 _6867;
    if (_1987.lightAmbient._ambient.y > 0.0)
    {
        _6867 = textureLod(skyboxMap, _5176, max(max(_1987.lightAmbient._ambient.y - (12.0 / (1.0 + (11.0 * _3127))), 0.0), textureQueryLod(skyboxMap, _5176).x)).xyz;
    }
    else
    {
        float _5382 = _5176.x;
        float _5387 = _5176.y;
        float _5397 = _5176.z;
        _6867 = ((((((_5233 * ((_5382 * _5382) - (_5387 * _5387))) + ((_5248 * _5397) * _5397)) + _5258) - _5262) + (((((_1987.lightAmbient._ambientSphere.L2m2 * _5382) * _5387) + ((_1987.lightAmbient._ambientSphere.L21 * _5382) * _5397)) + ((_1987.lightAmbient._ambientSphere.L2m1 * _5387) * _5397)) * 0.85808598995208740234375)) + ((((_1987.lightAmbient._ambientSphere.L11 * _5382) + (_1987.lightAmbient._ambientSphere.L1m1 * _5387)) + (_1987.lightAmbient._ambientSphere.L10 * _5397)) * 1.02332794666290283203125)).xyz;
    }
    vec3 _5182 = _6867 * _5223;
    float _5185 = mix(1.0, _6790, _727.lightingModel._ShowContourObscuranceWireframe.y);
    vec3 _5193 = mix(vec3(1.0), _2786, vec3(_727.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
    float _5198 = (_5185 * _1987.lightAmbient._ambient.x) * _727.lightingModel._AmbientDirectionalPointSpot.x;
    vec3 _5490 = -_1964.light.volume.directionSpotCos.xyz;
    vec3 _5521 = normalize(_2886 + _5490);
    vec3 _6767 = _7579;
    _6767.x = dot(_2889, _5521);
    vec3 _6769 = _6767;
    _6769.y = dot(_2889, _5490);
    vec3 _6771 = _6769;
    _6771.z = dot(_5521, _5490);
    vec3 _5542 = clamp(_6771, vec3(0.0), vec3(1.0));
    float _5544 = _5542.x;
    float _5547 = _5542.y;
    float _5612 = 1.0 - _5542.z;
    float _5615 = _5612 * _5612;
    float _5620 = (_5612 * _5615) * _5615;
    vec3 _5627 = vec3(_5620) + (_3093 * (1.0 - _5620));
    float _5643 = ((_5544 * _5544) * (_3139 - 1.0)) + 1.0;
    float _5599 = (_5163 * _5547) * (1.0 - _5627.x);
    vec3 _5503 = ((_1964.light.irradiance.colorIntensity.xyz * _1964.light.irradiance.colorIntensity.w) * 1.0) * _727.lightingModel._AmbientDirectionalPointSpot.y;
    vec3 _5023 = ((_6856.xyz + (_2823 * _727.lightingModel._UnlitEmissiveLightmapBackground.y)) + ((((((vec3(1.0) - _5223) * _5163) * ((((((_5233 * ((_5235 * _5235) - (_5240 * _5240))) + ((_5248 * _5250) * _5250)) + _5258) - _5262) + (((((_1987.lightAmbient._ambientSphere.L2m2 * _5235) * _5240) + ((_1987.lightAmbient._ambientSphere.L21 * _5235) * _5250)) + ((_1987.lightAmbient._ambientSphere.L2m1 * _5240) * _5250)) * 0.85808598995208740234375)) + ((((_1987.lightAmbient._ambientSphere.L11 * _5235) + (_1987.lightAmbient._ambientSphere.L1m1 * _5240)) + (_1987.lightAmbient._ambientSphere.L10 * _5250)) * 1.02332794666290283203125)).xyz) * _5193) * (_5198 * _727.lightingModel._ScatteringDiffuseSpecularAlbedo.y)) + ((vec3(_5599) * _5193) * (_5503 * _727.lightingModel._ScatteringDiffuseSpecularAlbedo.y)))) + (((_5182 * (_5198 * _727.lightingModel._ScatteringDiffuseSpecularAlbedo.z)) + (vec4((_5627 * (_3139 / ((_5643 * _5643) * (_3169 * (_5547 + sqrt(_3139 + ((_5547 * _5547) * _3165))))))) * _5547, _5599).xyz * (_5503 * _727.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) / vec3(_2756));
    bool _5025 = _727.lightingModel._HazeBloomSkinningBlendshape.x > 0.0;
    bool _5032;
    if (_5025)
    {
        _5032 = (_2029.hazeParams.hazeMode & 1) == 1;
    }
    else
    {
        _5032 = _5025;
    }
    vec3 _6912;
    if (_5032)
    {
        float _5718 = length(_positionES.xyz);
        vec4 _5726 = vec4(_2029.hazeParams.hazeColor, 1.0);
        vec4 _6898;
        if ((_2029.hazeParams.hazeMode & 16) == 16)
        {
            _6898 = mix(_5726, vec4(_2029.hazeParams.hazeGlareColor, 1.0), vec4(min(1.0, pow(max(0.0, dot(normalize(_positionWS.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz), _5490)), _2029.hazeParams.hazeGlareBlend))));
        }
        else
        {
            _6898 = _5726;
        }
        vec4 _6901;
        if ((_2029.hazeParams.hazeMode & 8) == 8)
        {
            vec3 _5781 = (_2029.hazeParams.colorModulationFactor * exp((-_2029.hazeParams.hazeHeightFactor) * (_cameraBlock._camera[_stereoSide]._viewInverse[3].y - _2029.hazeParams.hazeBaseReference))) * _5718;
            float _5785 = _positionWS.y - _cameraBlock._camera[_stereoSide]._viewInverse[3].y;
            vec3 _6900;
            if (abs(_5785) > 0.00999999977648258209228515625)
            {
                float _5794 = _2029.hazeParams.hazeHeightFactor * _5785;
                _6900 = _5781 * ((1.0 - exp(-_5794)) / _5794);
            }
            else
            {
                _6900 = _5781;
            }
            _6901 = vec4(1.0, 1.0, 1.0, (vec3(1.0) - exp(-_6900)).x);
        }
        else
        {
            vec4 _6902;
            if ((_2029.hazeParams.hazeMode & 2) != 2)
            {
                _6902 = vec4(_6898.xyz, 1.0 - exp((-_5718) * _2029.hazeParams.hazeRangeFactor));
            }
            else
            {
                float _5846 = (_2029.hazeParams.hazeRangeFactor * exp((-_2029.hazeParams.hazeHeightFactor) * (_cameraBlock._camera[_stereoSide]._viewInverse[3].y - _2029.hazeParams.hazeBaseReference))) * _5718;
                float _5850 = _positionWS.y - _cameraBlock._camera[_stereoSide]._viewInverse[3].y;
                float _6895;
                if (abs(_5850) > 0.00999999977648258209228515625)
                {
                    float _5859 = _2029.hazeParams.hazeHeightFactor * _5850;
                    float _6896;
                    if (abs(_5859) > 1.0000000116860974230803549289703e-07)
                    {
                        _6896 = _5846 * ((1.0 - exp(-_5859)) / _5859);
                    }
                    else
                    {
                        _6896 = _5846;
                    }
                    _6895 = _6896;
                }
                else
                {
                    _6895 = _5846;
                }
                _6902 = vec4(_6898.xyz, 1.0 - exp(-_6895));
            }
            _6901 = _6902;
        }
        vec4 _6903;
        if (_5718 > 27000.0)
        {
            vec4 _6783 = _6901;
            _6783.w = _6901.w * _2029.hazeParams.backgroundBlend;
            _6903 = _6783;
        }
        else
        {
            _6903 = _6901;
        }
        _6912 = mix(_5023, _6903.xyz, vec3(_6903.w));
    }
    else
    {
        _6912 = _5023;
    }
    _fragColor = vec4(_6912, _2756);
}

