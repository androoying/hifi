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
} _229;

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _415;

layout(std140) uniform keyLightBuffer
{
    Light light;
} _458;

layout(std140) uniform lightAmbientBuffer
{
    LightAmbient lightAmbient;
} _482;

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
layout(location = 3) in vec3 _normalWS;
layout(location = 4) in vec3 _tangentWS;
layout(location = 0) out vec4 _fragColor0;

vec3 _2539;

void main()
{
    int _1425 = floatBitsToInt(_229._mat._keySpare3.x);
    vec4 _2517;
    if ((_1425 & 1216) != 0)
    {
        _2517 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _2517 = vec4(1.0);
    }
    bool _1147 = (_1425 & 4096) != 0;
    float _2518;
    if (_1147)
    {
        _2518 = texture(roughnessMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _2518 = 1.0;
    }
    vec3 _2519;
    if ((_1425 & 8192) != 0)
    {
        vec2 _1443 = (texture(normalMap, _texCoord01.xy, -1.0).xy - vec2(0.5)) * 2.0;
        vec2 _1446 = _1443 * _1443;
        _2519 = vec3(_1443.x, sqrt((1.0 - _1446.x) - _1446.y), _1443.y);
    }
    else
    {
        _2519 = vec3(0.0, 1.0, 0.0);
    }
    bool _1176 = (_1425 & 2048) != 0;
    float _2520;
    if (_1176)
    {
        _2520 = texture(metallicMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _2520 = 0.0;
    }
    bool _1190 = (_1425 & 512) != 0;
    vec3 _2521;
    if (_1190)
    {
        _2521 = texture(emissiveMap, _texCoord01.xy, -1.0).xyz;
    }
    else
    {
        _2521 = vec3(0.0);
    }
    float _2522;
    if ((_1425 & 16384) != 0)
    {
        _2522 = texture(occlusionMap, _texCoord01.zw).x;
    }
    else
    {
        _2522 = 1.0;
    }
    float _2524;
    if ((_1425 & 192) != 0)
    {
        float _2523;
        if ((_1425 & 64) != 0)
        {
            _2523 = step(0.5, _2517.w);
        }
        else
        {
            _2523 = _2517.w;
        }
        _2524 = _2523;
    }
    else
    {
        _2524 = 1.0;
    }
    bvec3 _1249 = bvec3((_1425 & 4) != 0);
    vec3 _1250 = vec3(_1249.x ? _229._mat._albedoRoughness.xyz.x : vec3(1.0).x, _1249.y ? _229._mat._albedoRoughness.xyz.y : vec3(1.0).y, _1249.z ? _229._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _2527;
    if ((_1425 & 1024) != 0)
    {
        _2527 = _1250 * _2517.xyz;
    }
    else
    {
        _2527 = _1250;
    }
    vec3 _1265 = _2527 * _color.xyz;
    bvec3 _1285 = bvec3(_1190);
    float _1296 = _1176 ? _2520 : _229._mat._metallicScatteringSpare2.x;
    vec3 _1492 = mix(vec3(0.02999999932944774627685546875), _1265, vec3(_1296));
    vec3 _1313 = normalize(_normalWS);
    vec3 _1317 = normalize(_tangentWS);
    vec3 _1331 = mix(_2519, vec3(0.0, 1.0, 0.0), vec3(smoothstep(30.0, 100.0, (-_positionES.xyz).z)));
    vec3 _1346 = ((cross(_1313, _1317) * _1331.x) + (_1313 * _1331.y)) + (_1317 * _1331.z);
    vec3 _1572 = normalize(_cameraBlock._camera[_stereoSide]._viewInverse[3].xyz - vec3((_cameraBlock._camera[_stereoSide]._viewInverse * vec4(_positionES.xyz, 1.0)).xyz));
    float _1691 = mix(0.00999999977648258209228515625, 1.0, _1147 ? _2518 : _229._mat._albedoRoughness.w);
    float _1697 = _1691 * _1691;
    float _1703 = _1697 * _1697;
    float _1708 = clamp(dot(_1346, _1572), 0.0, 1.0);
    float _1729 = 1.0 - _1703;
    vec4 _1757 = _482.lightAmbient.transform * vec4(_1346, 0.0);
    vec3 _1837 = _1492 + ((max(vec3(1.0 - _1691), _1492) - _1492) * pow(1.0 - _1708, 5.0));
    float _1777 = 1.0 - _1296;
    float _1849 = _1757.x;
    float _1854 = _1757.y;
    float _1864 = _1757.z;
    vec3 _1790 = -reflect((_482.lightAmbient.transform * vec4(_1572, 0.0)).xyz, _1757.xyz);
    vec3 _1807 = mix(vec3(1.0), _1265, vec3(_415.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
    float _1812 = (mix(1.0, _2522, _415.lightingModel._ShowContourObscuranceWireframe.y) * _482.lightAmbient._ambient.x) * _415.lightingModel._AmbientDirectionalPointSpot.x;
    vec3 _1998 = -_458.light.volume.directionSpotCos.xyz;
    vec3 _2029 = normalize(_1572 + _1998);
    vec3 _2507 = _2539;
    _2507.x = dot(_1346, _2029);
    vec3 _2509 = _2507;
    _2509.y = dot(_1346, _1998);
    vec3 _2511 = _2509;
    _2511.z = dot(_2029, _1998);
    vec3 _2050 = clamp(_2511, vec3(0.0), vec3(1.0));
    float _2052 = _2050.x;
    float _2055 = _2050.y;
    float _2120 = 1.0 - _2050.z;
    float _2123 = _2120 * _2120;
    float _2128 = (_2120 * _2123) * _2123;
    vec3 _2135 = vec3(_2128) + (_1492 * (1.0 - _2128));
    float _2151 = ((_2052 * _2052) * (_1703 - 1.0)) + 1.0;
    float _2107 = (_1777 * _2055) * (1.0 - _2135.x);
    vec3 _2011 = ((_458.light.irradiance.colorIntensity.xyz * _458.light.irradiance.colorIntensity.w) * 1.0) * _415.lightingModel._AmbientDirectionalPointSpot.y;
    vec4 _1377 = vec4((((((((vec3(1.0) - _1837) * _1777) * (((((((_482.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875) * ((_1849 * _1849) - (_1854 * _1854))) + (((_482.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625) * _1864) * _1864)) + (_482.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375)) - (_482.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625)) + (((((_482.lightAmbient._ambientSphere.L2m2 * _1849) * _1854) + ((_482.lightAmbient._ambientSphere.L21 * _1849) * _1864)) + ((_482.lightAmbient._ambientSphere.L2m1 * _1854) * _1864)) * 0.85808598995208740234375)) + ((((_482.lightAmbient._ambientSphere.L11 * _1849) + (_482.lightAmbient._ambientSphere.L1m1 * _1854)) + (_482.lightAmbient._ambientSphere.L10 * _1864)) * 1.02332794666290283203125)).xyz) * _1807) * (_1812 * _415.lightingModel._ScatteringDiffuseSpecularAlbedo.y)) + ((textureLod(skyboxMap, _1790, max(max(_482.lightAmbient._ambient.y - (12.0 / (1.0 + (11.0 * _1691))), 0.0), textureQueryLod(skyboxMap, _1790).x)).xyz * _1837) * (_1812 * _415.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) + ((vec3(_2107) * _1807) * (_2011 * _415.lightingModel._ScatteringDiffuseSpecularAlbedo.y))) + (vec4((_2135 * (_1703 / ((_2151 * _2151) * ((_1708 + sqrt(_1703 + ((_1708 * _1708) * _1729))) * (_2055 + sqrt(_1703 + ((_2055 * _2055) * _1729))))))) * _2055, _2107).xyz * (_2011 * _415.lightingModel._ScatteringDiffuseSpecularAlbedo.z)), _2524);
    vec3 _1383 = _1377.xyz + (vec3(_1285.x ? _2521.x : _229._mat._emissiveOpacity.xyz.x, _1285.y ? _2521.y : _229._mat._emissiveOpacity.xyz.y, _1285.z ? _2521.z : _229._mat._emissiveOpacity.xyz.z) * _415.lightingModel._UnlitEmissiveLightmapBackground.y);
    _fragColor0 = vec4(_1383.x, _1383.y, _1383.z, _1377.w);
}

