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
} _226;

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _412;

layout(std140) uniform keyLightBuffer
{
    Light light;
} _455;

layout(std140) uniform lightAmbientBuffer
{
    LightAmbient lightAmbient;
} _479;

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

vec3 _2425;

void main()
{
    int _1344 = floatBitsToInt(_226._mat._keySpare3.x);
    vec4 _2404;
    if ((_1344 & 1216) != 0)
    {
        _2404 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _2404 = vec4(1.0);
    }
    bool _1111 = (_1344 & 4096) != 0;
    float _2405;
    if (_1111)
    {
        _2405 = texture(roughnessMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _2405 = 1.0;
    }
    bool _1125 = (_1344 & 2048) != 0;
    float _2406;
    if (_1125)
    {
        _2406 = texture(metallicMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _2406 = 0.0;
    }
    bool _1139 = (_1344 & 512) != 0;
    vec3 _2407;
    if (_1139)
    {
        _2407 = texture(emissiveMap, _texCoord01.xy, -1.0).xyz;
    }
    else
    {
        _2407 = vec3(0.0);
    }
    float _2408;
    if ((_1344 & 16384) != 0)
    {
        _2408 = texture(occlusionMap, _texCoord01.zw).x;
    }
    else
    {
        _2408 = 1.0;
    }
    float _2410;
    if ((_1344 & 192) != 0)
    {
        float _2409;
        if ((_1344 & 64) != 0)
        {
            _2409 = step(0.5, _2404.w);
        }
        else
        {
            _2409 = _2404.w;
        }
        _2410 = _2409;
    }
    else
    {
        _2410 = 1.0;
    }
    if (_2410 < 1.0)
    {
        discard;
    }
    bvec3 _1204 = bvec3((_1344 & 4) != 0);
    vec3 _1205 = vec3(_1204.x ? _226._mat._albedoRoughness.xyz.x : vec3(1.0).x, _1204.y ? _226._mat._albedoRoughness.xyz.y : vec3(1.0).y, _1204.z ? _226._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _2413;
    if ((_1344 & 1024) != 0)
    {
        _2413 = _1205 * _2404.xyz;
    }
    else
    {
        _2413 = _1205;
    }
    vec3 _1220 = _2413 * _color.xyz;
    bvec3 _1240 = bvec3(_1139);
    float _1251 = _1125 ? _2406 : _226._mat._metallicScatteringSpare2.x;
    vec3 _1387 = mix(vec3(0.02999999932944774627685546875), _1220, vec3(_1251));
    vec3 _1268 = normalize(_normalWS);
    vec3 _1466 = normalize(_cameraBlock._camera._viewInverse[3].xyz - vec3((_cameraBlock._camera._viewInverse * vec4(_positionES.xyz, 1.0)).xyz));
    float _1585 = mix(0.00999999977648258209228515625, 1.0, _1111 ? _2405 : _226._mat._albedoRoughness.w);
    float _1591 = _1585 * _1585;
    float _1597 = _1591 * _1591;
    float _1602 = clamp(dot(_1268, _1466), 0.0, 1.0);
    float _1623 = 1.0 - _1597;
    vec4 _1651 = _479.lightAmbient.transform * vec4(_1268, 0.0);
    vec3 _1731 = _1387 + ((max(vec3(1.0 - _1585), _1387) - _1387) * pow(1.0 - _1602, 5.0));
    float _1671 = 1.0 - _1251;
    float _1743 = _1651.x;
    float _1748 = _1651.y;
    float _1758 = _1651.z;
    vec3 _1684 = -reflect((_479.lightAmbient.transform * vec4(_1466, 0.0)).xyz, _1651.xyz);
    vec3 _1701 = mix(vec3(1.0), _1220, vec3(_412.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
    float _1706 = (mix(1.0, _2408, _412.lightingModel._ShowContourObscuranceWireframe.y) * _479.lightAmbient._ambient.x) * _412.lightingModel._AmbientDirectionalPointSpot.x;
    vec3 _1892 = -_455.light.volume.directionSpotCos.xyz;
    vec3 _1923 = normalize(_1466 + _1892);
    vec3 _2394 = _2425;
    _2394.x = dot(_1268, _1923);
    vec3 _2396 = _2394;
    _2396.y = dot(_1268, _1892);
    vec3 _2398 = _2396;
    _2398.z = dot(_1923, _1892);
    vec3 _1944 = clamp(_2398, vec3(0.0), vec3(1.0));
    float _1946 = _1944.x;
    float _1949 = _1944.y;
    float _2014 = 1.0 - _1944.z;
    float _2017 = _2014 * _2014;
    float _2022 = (_2014 * _2017) * _2017;
    vec3 _2029 = vec3(_2022) + (_1387 * (1.0 - _2022));
    float _2045 = ((_1946 * _1946) * (_1597 - 1.0)) + 1.0;
    float _2001 = (_1671 * _1949) * (1.0 - _2029.x);
    vec3 _1905 = ((_455.light.irradiance.colorIntensity.xyz * _455.light.irradiance.colorIntensity.w) * 1.0) * _412.lightingModel._AmbientDirectionalPointSpot.y;
    vec4 _1295 = vec4((((((((vec3(1.0) - _1731) * _1671) * (((((((_479.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875) * ((_1743 * _1743) - (_1748 * _1748))) + (((_479.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625) * _1758) * _1758)) + (_479.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375)) - (_479.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625)) + (((((_479.lightAmbient._ambientSphere.L2m2 * _1743) * _1748) + ((_479.lightAmbient._ambientSphere.L21 * _1743) * _1758)) + ((_479.lightAmbient._ambientSphere.L2m1 * _1748) * _1758)) * 0.85808598995208740234375)) + ((((_479.lightAmbient._ambientSphere.L11 * _1743) + (_479.lightAmbient._ambientSphere.L1m1 * _1748)) + (_479.lightAmbient._ambientSphere.L10 * _1758)) * 1.02332794666290283203125)).xyz) * _1701) * (_1706 * _412.lightingModel._ScatteringDiffuseSpecularAlbedo.y)) + ((textureLod(skyboxMap, _1684, max(max(_479.lightAmbient._ambient.y - (12.0 / (1.0 + (11.0 * _1585))), 0.0), textureQueryLod(skyboxMap, _1684).x)).xyz * _1731) * (_1706 * _412.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) + ((vec3(_2001) * _1701) * (_1905 * _412.lightingModel._ScatteringDiffuseSpecularAlbedo.y))) + (vec4((_2029 * (_1597 / ((_2045 * _2045) * ((_1602 + sqrt(_1597 + ((_1602 * _1602) * _1623))) * (_1949 + sqrt(_1597 + ((_1949 * _1949) * _1623))))))) * _1949, _2001).xyz * (_1905 * _412.lightingModel._ScatteringDiffuseSpecularAlbedo.z)), _2410);
    vec3 _1301 = _1295.xyz + (vec3(_1240.x ? _2407.x : _226._mat._emissiveOpacity.xyz.x, _1240.y ? _2407.y : _226._mat._emissiveOpacity.xyz.y, _1240.z ? _2407.z : _226._mat._emissiveOpacity.xyz.z) * _412.lightingModel._UnlitEmissiveLightmapBackground.y);
    _fragColor0 = vec4(_1301.x, _1301.y, _1301.z, _1295.w);
}

