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
layout(location = 3) in vec3 _normalWS;
layout(location = 0) out vec4 _fragColor0;

vec3 _2430;

void main()
{
    int _1348 = floatBitsToInt(_226._mat._keySpare3.x);
    vec4 _2409;
    if ((_1348 & 1216) != 0)
    {
        _2409 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _2409 = vec4(1.0);
    }
    bool _1115 = (_1348 & 4096) != 0;
    float _2410;
    if (_1115)
    {
        _2410 = texture(roughnessMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _2410 = 1.0;
    }
    bool _1129 = (_1348 & 2048) != 0;
    float _2411;
    if (_1129)
    {
        _2411 = texture(metallicMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _2411 = 0.0;
    }
    bool _1143 = (_1348 & 512) != 0;
    vec3 _2412;
    if (_1143)
    {
        _2412 = texture(emissiveMap, _texCoord01.xy, -1.0).xyz;
    }
    else
    {
        _2412 = vec3(0.0);
    }
    float _2413;
    if ((_1348 & 16384) != 0)
    {
        _2413 = texture(occlusionMap, _texCoord01.zw).x;
    }
    else
    {
        _2413 = 1.0;
    }
    float _2415;
    if ((_1348 & 192) != 0)
    {
        float _2414;
        if ((_1348 & 64) != 0)
        {
            _2414 = step(0.5, _2409.w);
        }
        else
        {
            _2414 = _2409.w;
        }
        _2415 = _2414;
    }
    else
    {
        _2415 = 1.0;
    }
    if (_2415 < 1.0)
    {
        discard;
    }
    bvec3 _1208 = bvec3((_1348 & 4) != 0);
    vec3 _1209 = vec3(_1208.x ? _226._mat._albedoRoughness.xyz.x : vec3(1.0).x, _1208.y ? _226._mat._albedoRoughness.xyz.y : vec3(1.0).y, _1208.z ? _226._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _2418;
    if ((_1348 & 1024) != 0)
    {
        _2418 = _1209 * _2409.xyz;
    }
    else
    {
        _2418 = _1209;
    }
    vec3 _1224 = _2418 * _color.xyz;
    bvec3 _1244 = bvec3(_1143);
    float _1255 = _1129 ? _2411 : _226._mat._metallicScatteringSpare2.x;
    vec3 _1391 = mix(vec3(0.02999999932944774627685546875), _1224, vec3(_1255));
    vec3 _1272 = normalize(_normalWS);
    vec3 _1471 = normalize(_cameraBlock._camera[_stereoSide]._viewInverse[3].xyz - vec3((_cameraBlock._camera[_stereoSide]._viewInverse * vec4(_positionES.xyz, 1.0)).xyz));
    float _1590 = mix(0.00999999977648258209228515625, 1.0, _1115 ? _2410 : _226._mat._albedoRoughness.w);
    float _1596 = _1590 * _1590;
    float _1602 = _1596 * _1596;
    float _1607 = clamp(dot(_1272, _1471), 0.0, 1.0);
    float _1628 = 1.0 - _1602;
    vec4 _1656 = _479.lightAmbient.transform * vec4(_1272, 0.0);
    vec3 _1736 = _1391 + ((max(vec3(1.0 - _1590), _1391) - _1391) * pow(1.0 - _1607, 5.0));
    float _1676 = 1.0 - _1255;
    float _1748 = _1656.x;
    float _1753 = _1656.y;
    float _1763 = _1656.z;
    vec3 _1689 = -reflect((_479.lightAmbient.transform * vec4(_1471, 0.0)).xyz, _1656.xyz);
    vec3 _1706 = mix(vec3(1.0), _1224, vec3(_412.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
    float _1711 = (mix(1.0, _2413, _412.lightingModel._ShowContourObscuranceWireframe.y) * _479.lightAmbient._ambient.x) * _412.lightingModel._AmbientDirectionalPointSpot.x;
    vec3 _1897 = -_455.light.volume.directionSpotCos.xyz;
    vec3 _1928 = normalize(_1471 + _1897);
    vec3 _2399 = _2430;
    _2399.x = dot(_1272, _1928);
    vec3 _2401 = _2399;
    _2401.y = dot(_1272, _1897);
    vec3 _2403 = _2401;
    _2403.z = dot(_1928, _1897);
    vec3 _1949 = clamp(_2403, vec3(0.0), vec3(1.0));
    float _1951 = _1949.x;
    float _1954 = _1949.y;
    float _2019 = 1.0 - _1949.z;
    float _2022 = _2019 * _2019;
    float _2027 = (_2019 * _2022) * _2022;
    vec3 _2034 = vec3(_2027) + (_1391 * (1.0 - _2027));
    float _2050 = ((_1951 * _1951) * (_1602 - 1.0)) + 1.0;
    float _2006 = (_1676 * _1954) * (1.0 - _2034.x);
    vec3 _1910 = ((_455.light.irradiance.colorIntensity.xyz * _455.light.irradiance.colorIntensity.w) * 1.0) * _412.lightingModel._AmbientDirectionalPointSpot.y;
    vec4 _1299 = vec4((((((((vec3(1.0) - _1736) * _1676) * (((((((_479.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875) * ((_1748 * _1748) - (_1753 * _1753))) + (((_479.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625) * _1763) * _1763)) + (_479.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375)) - (_479.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625)) + (((((_479.lightAmbient._ambientSphere.L2m2 * _1748) * _1753) + ((_479.lightAmbient._ambientSphere.L21 * _1748) * _1763)) + ((_479.lightAmbient._ambientSphere.L2m1 * _1753) * _1763)) * 0.85808598995208740234375)) + ((((_479.lightAmbient._ambientSphere.L11 * _1748) + (_479.lightAmbient._ambientSphere.L1m1 * _1753)) + (_479.lightAmbient._ambientSphere.L10 * _1763)) * 1.02332794666290283203125)).xyz) * _1706) * (_1711 * _412.lightingModel._ScatteringDiffuseSpecularAlbedo.y)) + ((textureLod(skyboxMap, _1689, max(max(_479.lightAmbient._ambient.y - (12.0 / (1.0 + (11.0 * _1590))), 0.0), textureQueryLod(skyboxMap, _1689).x)).xyz * _1736) * (_1711 * _412.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) + ((vec3(_2006) * _1706) * (_1910 * _412.lightingModel._ScatteringDiffuseSpecularAlbedo.y))) + (vec4((_2034 * (_1602 / ((_2050 * _2050) * ((_1607 + sqrt(_1602 + ((_1607 * _1607) * _1628))) * (_1954 + sqrt(_1602 + ((_1954 * _1954) * _1628))))))) * _1954, _2006).xyz * (_1910 * _412.lightingModel._ScatteringDiffuseSpecularAlbedo.z)), _2415);
    vec3 _1305 = _1299.xyz + (vec3(_1244.x ? _2412.x : _226._mat._emissiveOpacity.xyz.x, _1244.y ? _2412.y : _226._mat._emissiveOpacity.xyz.y, _1244.z ? _2412.z : _226._mat._emissiveOpacity.xyz.z) * _412.lightingModel._UnlitEmissiveLightmapBackground.y);
    _fragColor0 = vec4(_1305.x, _1305.y, _1305.z, _1299.w);
}

