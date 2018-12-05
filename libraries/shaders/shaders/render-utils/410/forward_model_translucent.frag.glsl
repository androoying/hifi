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
} _241;

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _437;

layout(std140) uniform keyLightBuffer
{
    Light light;
} _480;

layout(std140) uniform lightAmbientBuffer
{
    LightAmbient lightAmbient;
} _504;

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
layout(location = 3) in vec3 _normalWS;
layout(location = 0) out vec4 _fragColor0;

vec3 _2683;

void main()
{
    int _1397 = floatBitsToInt(_241._mat._keySpare3.x);
    vec4 _2657;
    if ((_1397 & 1216) != 0)
    {
        _2657 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _2657 = vec4(1.0);
    }
    bool _1162 = (_1397 & 4096) != 0;
    float _2658;
    if (_1162)
    {
        _2658 = texture(roughnessMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _2658 = 1.0;
    }
    bool _1176 = (_1397 & 2048) != 0;
    float _2659;
    if (_1176)
    {
        _2659 = texture(metallicMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _2659 = 0.0;
    }
    bool _1190 = (_1397 & 512) != 0;
    vec3 _2660;
    if (_1190)
    {
        _2660 = texture(emissiveMap, _texCoord01.xy, -1.0).xyz;
    }
    else
    {
        _2660 = vec3(0.0);
    }
    float _2661;
    if ((_1397 & 16384) != 0)
    {
        _2661 = texture(occlusionMap, _texCoord01.zw).x;
    }
    else
    {
        _2661 = 1.0;
    }
    float _2663;
    if ((_1397 & 192) != 0)
    {
        float _2662;
        if ((_1397 & 64) != 0)
        {
            _2662 = step(0.5, _2657.w);
        }
        else
        {
            _2662 = _2657.w;
        }
        _2663 = _2662;
    }
    else
    {
        _2663 = 1.0;
    }
    float _1248 = _2663 * (_241._mat._emissiveOpacity.w * _color.w);
    if (_1248 < 9.9999999747524270787835121154785e-07)
    {
        discard;
    }
    bvec3 _1264 = bvec3((_1397 & 4) != 0);
    vec3 _1265 = vec3(_1264.x ? _241._mat._albedoRoughness.xyz.x : vec3(1.0).x, _1264.y ? _241._mat._albedoRoughness.xyz.y : vec3(1.0).y, _1264.z ? _241._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _2666;
    if ((_1397 & 1024) != 0)
    {
        _2666 = _1265 * _2657.xyz;
    }
    else
    {
        _2666 = _1265;
    }
    vec3 _1279 = _2666 * _color.xyz;
    float _1289 = _1162 ? _2658 : _241._mat._albedoRoughness.w;
    float _1299 = _1176 ? _2659 : _241._mat._metallicScatteringSpare2.x;
    vec3 _1439 = mix(vec3(0.02999999932944774627685546875), _1279, vec3(_1299));
    bvec3 _1317 = bvec3(_1190);
    vec3 _1318 = vec3(_1317.x ? _2660.x : _241._mat._emissiveOpacity.xyz.x, _1317.y ? _2660.y : _241._mat._emissiveOpacity.xyz.y, _1317.z ? _2660.z : _241._mat._emissiveOpacity.xyz.z);
    vec3 _1327 = normalize(_normalWS);
    vec3 _1524 = normalize(_cameraBlock._camera._viewInverse[3].xyz - vec3((_cameraBlock._camera._viewInverse * vec4(_positionES.xyz, 1.0)).xyz));
    float _1649 = mix(0.00999999977648258209228515625, 1.0, _1289);
    float _1655 = _1649 * _1649;
    float _1661 = _1655 * _1655;
    float _1666 = clamp(dot(_1327, _1524), 0.0, 1.0);
    float _1687 = 1.0 - _1661;
    vec4 _1718 = _504.lightAmbient.transform * vec4(_1327, 0.0);
    vec3 _1798 = _1439 + ((max(vec3(1.0 - _1649), _1439) - _1439) * pow(1.0 - _1666, 5.0));
    float _1738 = 1.0 - _1299;
    vec4 _1808 = _504.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875;
    float _1810 = _1718.x;
    float _1815 = _1718.y;
    vec4 _1823 = _504.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625;
    float _1825 = _1718.z;
    vec4 _1833 = _504.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375;
    vec4 _1837 = _504.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625;
    vec3 _1751 = -reflect((_504.lightAmbient.transform * vec4(_1524, 0.0)).xyz, _1718.xyz);
    vec3 _2668;
    if (_504.lightAmbient._ambient.y > 0.0)
    {
        _2668 = textureLod(skyboxMap, _1751, max(max(_504.lightAmbient._ambient.y - (12.0 / (1.0 + (11.0 * _1649))), 0.0), textureQueryLod(skyboxMap, _1751).x)).xyz;
    }
    else
    {
        float _1958 = _1751.x;
        float _1963 = _1751.y;
        float _1973 = _1751.z;
        _2668 = ((((((_1808 * ((_1958 * _1958) - (_1963 * _1963))) + ((_1823 * _1973) * _1973)) + _1833) - _1837) + (((((_504.lightAmbient._ambientSphere.L2m2 * _1958) * _1963) + ((_504.lightAmbient._ambientSphere.L21 * _1958) * _1973)) + ((_504.lightAmbient._ambientSphere.L2m1 * _1963) * _1973)) * 0.85808598995208740234375)) + ((((_504.lightAmbient._ambientSphere.L11 * _1958) + (_504.lightAmbient._ambientSphere.L1m1 * _1963)) + (_504.lightAmbient._ambientSphere.L10 * _1973)) * 1.02332794666290283203125)).xyz;
    }
    vec3 _1768 = mix(vec3(1.0), _1279, vec3(_437.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
    float _1773 = (mix(1.0, _2661, _437.lightingModel._ShowContourObscuranceWireframe.y) * _504.lightAmbient._ambient.x) * _437.lightingModel._AmbientDirectionalPointSpot.x;
    vec3 _2066 = -_480.light.volume.directionSpotCos.xyz;
    vec3 _2097 = normalize(_1524 + _2066);
    vec3 _2647 = _2683;
    _2647.x = dot(_1327, _2097);
    vec3 _2649 = _2647;
    _2649.y = dot(_1327, _2066);
    vec3 _2651 = _2649;
    _2651.z = dot(_2097, _2066);
    vec3 _2118 = clamp(_2651, vec3(0.0), vec3(1.0));
    float _2120 = _2118.x;
    float _2123 = _2118.y;
    float _2188 = 1.0 - _2118.z;
    float _2191 = _2188 * _2188;
    float _2196 = (_2188 * _2191) * _2191;
    vec3 _2203 = vec3(_2196) + (_1439 * (1.0 - _2196));
    float _2219 = ((_2120 * _2120) * (_1661 - 1.0)) + 1.0;
    float _2175 = (_1738 * _2123) * (1.0 - _2203.x);
    vec3 _2079 = ((_480.light.irradiance.colorIntensity.xyz * _480.light.irradiance.colorIntensity.w) * 1.0) * _437.lightingModel._AmbientDirectionalPointSpot.y;
    _fragColor0 = vec4((((_1318 * _437.lightingModel._UnlitEmissiveLightmapBackground.y) + (((((vec3(1.0) - _1798) * _1738) * ((((((_1808 * ((_1810 * _1810) - (_1815 * _1815))) + ((_1823 * _1825) * _1825)) + _1833) - _1837) + (((((_504.lightAmbient._ambientSphere.L2m2 * _1810) * _1815) + ((_504.lightAmbient._ambientSphere.L21 * _1810) * _1825)) + ((_504.lightAmbient._ambientSphere.L2m1 * _1815) * _1825)) * 0.85808598995208740234375)) + ((((_504.lightAmbient._ambientSphere.L11 * _1810) + (_504.lightAmbient._ambientSphere.L1m1 * _1815)) + (_504.lightAmbient._ambientSphere.L10 * _1825)) * 1.02332794666290283203125)).xyz) * _1768) * (_1773 * _437.lightingModel._ScatteringDiffuseSpecularAlbedo.y))) + ((vec3(_2175) * _1768) * (_2079 * _437.lightingModel._ScatteringDiffuseSpecularAlbedo.y))) + ((((_2668 * _1798) * (_1773 * _437.lightingModel._ScatteringDiffuseSpecularAlbedo.z)) + (vec4((_2203 * (_1661 / ((_2219 * _2219) * ((_1666 + sqrt(_1661 + ((_1666 * _1666) * _1687))) * (_2123 + sqrt(_1661 + ((_2123 * _2123) * _1687))))))) * _2123, _2175).xyz * (_2079 * _437.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) / vec3(_1248)), _1248);
}

