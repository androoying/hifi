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
layout(location = 3) in vec3 _normalWS;
layout(location = 4) in vec3 _tangentWS;
layout(location = 0) out vec4 _fragColor0;

vec3 _2534;

void main()
{
    int _1421 = floatBitsToInt(_229._mat._keySpare3.x);
    vec4 _2512;
    if ((_1421 & 1216) != 0)
    {
        _2512 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _2512 = vec4(1.0);
    }
    bool _1143 = (_1421 & 4096) != 0;
    float _2513;
    if (_1143)
    {
        _2513 = texture(roughnessMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _2513 = 1.0;
    }
    vec3 _2514;
    if ((_1421 & 8192) != 0)
    {
        vec2 _1439 = (texture(normalMap, _texCoord01.xy, -1.0).xy - vec2(0.5)) * 2.0;
        vec2 _1442 = _1439 * _1439;
        _2514 = vec3(_1439.x, sqrt((1.0 - _1442.x) - _1442.y), _1439.y);
    }
    else
    {
        _2514 = vec3(0.0, 1.0, 0.0);
    }
    bool _1172 = (_1421 & 2048) != 0;
    float _2515;
    if (_1172)
    {
        _2515 = texture(metallicMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _2515 = 0.0;
    }
    bool _1186 = (_1421 & 512) != 0;
    vec3 _2516;
    if (_1186)
    {
        _2516 = texture(emissiveMap, _texCoord01.xy, -1.0).xyz;
    }
    else
    {
        _2516 = vec3(0.0);
    }
    float _2517;
    if ((_1421 & 16384) != 0)
    {
        _2517 = texture(occlusionMap, _texCoord01.zw).x;
    }
    else
    {
        _2517 = 1.0;
    }
    float _2519;
    if ((_1421 & 192) != 0)
    {
        float _2518;
        if ((_1421 & 64) != 0)
        {
            _2518 = step(0.5, _2512.w);
        }
        else
        {
            _2518 = _2512.w;
        }
        _2519 = _2518;
    }
    else
    {
        _2519 = 1.0;
    }
    bvec3 _1245 = bvec3((_1421 & 4) != 0);
    vec3 _1246 = vec3(_1245.x ? _229._mat._albedoRoughness.xyz.x : vec3(1.0).x, _1245.y ? _229._mat._albedoRoughness.xyz.y : vec3(1.0).y, _1245.z ? _229._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _2522;
    if ((_1421 & 1024) != 0)
    {
        _2522 = _1246 * _2512.xyz;
    }
    else
    {
        _2522 = _1246;
    }
    vec3 _1261 = _2522 * _color.xyz;
    bvec3 _1281 = bvec3(_1186);
    float _1292 = _1172 ? _2515 : _229._mat._metallicScatteringSpare2.x;
    vec3 _1488 = mix(vec3(0.02999999932944774627685546875), _1261, vec3(_1292));
    vec3 _1309 = normalize(_normalWS);
    vec3 _1313 = normalize(_tangentWS);
    vec3 _1327 = mix(_2514, vec3(0.0, 1.0, 0.0), vec3(smoothstep(30.0, 100.0, (-_positionES.xyz).z)));
    vec3 _1342 = ((cross(_1309, _1313) * _1327.x) + (_1309 * _1327.y)) + (_1313 * _1327.z);
    vec3 _1567 = normalize(_cameraBlock._camera._viewInverse[3].xyz - vec3((_cameraBlock._camera._viewInverse * vec4(_positionES.xyz, 1.0)).xyz));
    float _1686 = mix(0.00999999977648258209228515625, 1.0, _1143 ? _2513 : _229._mat._albedoRoughness.w);
    float _1692 = _1686 * _1686;
    float _1698 = _1692 * _1692;
    float _1703 = clamp(dot(_1342, _1567), 0.0, 1.0);
    float _1724 = 1.0 - _1698;
    vec4 _1752 = _482.lightAmbient.transform * vec4(_1342, 0.0);
    vec3 _1832 = _1488 + ((max(vec3(1.0 - _1686), _1488) - _1488) * pow(1.0 - _1703, 5.0));
    float _1772 = 1.0 - _1292;
    float _1844 = _1752.x;
    float _1849 = _1752.y;
    float _1859 = _1752.z;
    vec3 _1785 = -reflect((_482.lightAmbient.transform * vec4(_1567, 0.0)).xyz, _1752.xyz);
    vec3 _1802 = mix(vec3(1.0), _1261, vec3(_415.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
    float _1807 = (mix(1.0, _2517, _415.lightingModel._ShowContourObscuranceWireframe.y) * _482.lightAmbient._ambient.x) * _415.lightingModel._AmbientDirectionalPointSpot.x;
    vec3 _1993 = -_458.light.volume.directionSpotCos.xyz;
    vec3 _2024 = normalize(_1567 + _1993);
    vec3 _2502 = _2534;
    _2502.x = dot(_1342, _2024);
    vec3 _2504 = _2502;
    _2504.y = dot(_1342, _1993);
    vec3 _2506 = _2504;
    _2506.z = dot(_2024, _1993);
    vec3 _2045 = clamp(_2506, vec3(0.0), vec3(1.0));
    float _2047 = _2045.x;
    float _2050 = _2045.y;
    float _2115 = 1.0 - _2045.z;
    float _2118 = _2115 * _2115;
    float _2123 = (_2115 * _2118) * _2118;
    vec3 _2130 = vec3(_2123) + (_1488 * (1.0 - _2123));
    float _2146 = ((_2047 * _2047) * (_1698 - 1.0)) + 1.0;
    float _2102 = (_1772 * _2050) * (1.0 - _2130.x);
    vec3 _2006 = ((_458.light.irradiance.colorIntensity.xyz * _458.light.irradiance.colorIntensity.w) * 1.0) * _415.lightingModel._AmbientDirectionalPointSpot.y;
    vec4 _1373 = vec4((((((((vec3(1.0) - _1832) * _1772) * (((((((_482.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875) * ((_1844 * _1844) - (_1849 * _1849))) + (((_482.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625) * _1859) * _1859)) + (_482.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375)) - (_482.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625)) + (((((_482.lightAmbient._ambientSphere.L2m2 * _1844) * _1849) + ((_482.lightAmbient._ambientSphere.L21 * _1844) * _1859)) + ((_482.lightAmbient._ambientSphere.L2m1 * _1849) * _1859)) * 0.85808598995208740234375)) + ((((_482.lightAmbient._ambientSphere.L11 * _1844) + (_482.lightAmbient._ambientSphere.L1m1 * _1849)) + (_482.lightAmbient._ambientSphere.L10 * _1859)) * 1.02332794666290283203125)).xyz) * _1802) * (_1807 * _415.lightingModel._ScatteringDiffuseSpecularAlbedo.y)) + ((textureLod(skyboxMap, _1785, max(max(_482.lightAmbient._ambient.y - (12.0 / (1.0 + (11.0 * _1686))), 0.0), textureQueryLod(skyboxMap, _1785).x)).xyz * _1832) * (_1807 * _415.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) + ((vec3(_2102) * _1802) * (_2006 * _415.lightingModel._ScatteringDiffuseSpecularAlbedo.y))) + (vec4((_2130 * (_1698 / ((_2146 * _2146) * ((_1703 + sqrt(_1698 + ((_1703 * _1703) * _1724))) * (_2050 + sqrt(_1698 + ((_2050 * _2050) * _1724))))))) * _2050, _2102).xyz * (_2006 * _415.lightingModel._ScatteringDiffuseSpecularAlbedo.z)), _2519);
    vec3 _1379 = _1373.xyz + (vec3(_1281.x ? _2516.x : _229._mat._emissiveOpacity.xyz.x, _1281.y ? _2516.y : _229._mat._emissiveOpacity.xyz.y, _1281.z ? _2516.z : _229._mat._emissiveOpacity.xyz.z) * _415.lightingModel._UnlitEmissiveLightmapBackground.y);
    _fragColor0 = vec4(_1379.x, _1379.y, _1379.z, _1373.w);
}

