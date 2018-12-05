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

vec3 _2688;

void main()
{
    int _1401 = floatBitsToInt(_241._mat._keySpare3.x);
    vec4 _2662;
    if ((_1401 & 1216) != 0)
    {
        _2662 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _2662 = vec4(1.0);
    }
    bool _1166 = (_1401 & 4096) != 0;
    float _2663;
    if (_1166)
    {
        _2663 = texture(roughnessMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _2663 = 1.0;
    }
    bool _1180 = (_1401 & 2048) != 0;
    float _2664;
    if (_1180)
    {
        _2664 = texture(metallicMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _2664 = 0.0;
    }
    bool _1194 = (_1401 & 512) != 0;
    vec3 _2665;
    if (_1194)
    {
        _2665 = texture(emissiveMap, _texCoord01.xy, -1.0).xyz;
    }
    else
    {
        _2665 = vec3(0.0);
    }
    float _2666;
    if ((_1401 & 16384) != 0)
    {
        _2666 = texture(occlusionMap, _texCoord01.zw).x;
    }
    else
    {
        _2666 = 1.0;
    }
    float _2668;
    if ((_1401 & 192) != 0)
    {
        float _2667;
        if ((_1401 & 64) != 0)
        {
            _2667 = step(0.5, _2662.w);
        }
        else
        {
            _2667 = _2662.w;
        }
        _2668 = _2667;
    }
    else
    {
        _2668 = 1.0;
    }
    float _1252 = _2668 * (_241._mat._emissiveOpacity.w * _color.w);
    if (_1252 < 9.9999999747524270787835121154785e-07)
    {
        discard;
    }
    bvec3 _1268 = bvec3((_1401 & 4) != 0);
    vec3 _1269 = vec3(_1268.x ? _241._mat._albedoRoughness.xyz.x : vec3(1.0).x, _1268.y ? _241._mat._albedoRoughness.xyz.y : vec3(1.0).y, _1268.z ? _241._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _2671;
    if ((_1401 & 1024) != 0)
    {
        _2671 = _1269 * _2662.xyz;
    }
    else
    {
        _2671 = _1269;
    }
    vec3 _1283 = _2671 * _color.xyz;
    float _1293 = _1166 ? _2663 : _241._mat._albedoRoughness.w;
    float _1303 = _1180 ? _2664 : _241._mat._metallicScatteringSpare2.x;
    vec3 _1443 = mix(vec3(0.02999999932944774627685546875), _1283, vec3(_1303));
    bvec3 _1321 = bvec3(_1194);
    vec3 _1322 = vec3(_1321.x ? _2665.x : _241._mat._emissiveOpacity.xyz.x, _1321.y ? _2665.y : _241._mat._emissiveOpacity.xyz.y, _1321.z ? _2665.z : _241._mat._emissiveOpacity.xyz.z);
    vec3 _1331 = normalize(_normalWS);
    vec3 _1529 = normalize(_cameraBlock._camera[_stereoSide]._viewInverse[3].xyz - vec3((_cameraBlock._camera[_stereoSide]._viewInverse * vec4(_positionES.xyz, 1.0)).xyz));
    float _1654 = mix(0.00999999977648258209228515625, 1.0, _1293);
    float _1660 = _1654 * _1654;
    float _1666 = _1660 * _1660;
    float _1671 = clamp(dot(_1331, _1529), 0.0, 1.0);
    float _1692 = 1.0 - _1666;
    vec4 _1723 = _504.lightAmbient.transform * vec4(_1331, 0.0);
    vec3 _1803 = _1443 + ((max(vec3(1.0 - _1654), _1443) - _1443) * pow(1.0 - _1671, 5.0));
    float _1743 = 1.0 - _1303;
    vec4 _1813 = _504.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875;
    float _1815 = _1723.x;
    float _1820 = _1723.y;
    vec4 _1828 = _504.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625;
    float _1830 = _1723.z;
    vec4 _1838 = _504.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375;
    vec4 _1842 = _504.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625;
    vec3 _1756 = -reflect((_504.lightAmbient.transform * vec4(_1529, 0.0)).xyz, _1723.xyz);
    vec3 _2673;
    if (_504.lightAmbient._ambient.y > 0.0)
    {
        _2673 = textureLod(skyboxMap, _1756, max(max(_504.lightAmbient._ambient.y - (12.0 / (1.0 + (11.0 * _1654))), 0.0), textureQueryLod(skyboxMap, _1756).x)).xyz;
    }
    else
    {
        float _1963 = _1756.x;
        float _1968 = _1756.y;
        float _1978 = _1756.z;
        _2673 = ((((((_1813 * ((_1963 * _1963) - (_1968 * _1968))) + ((_1828 * _1978) * _1978)) + _1838) - _1842) + (((((_504.lightAmbient._ambientSphere.L2m2 * _1963) * _1968) + ((_504.lightAmbient._ambientSphere.L21 * _1963) * _1978)) + ((_504.lightAmbient._ambientSphere.L2m1 * _1968) * _1978)) * 0.85808598995208740234375)) + ((((_504.lightAmbient._ambientSphere.L11 * _1963) + (_504.lightAmbient._ambientSphere.L1m1 * _1968)) + (_504.lightAmbient._ambientSphere.L10 * _1978)) * 1.02332794666290283203125)).xyz;
    }
    vec3 _1773 = mix(vec3(1.0), _1283, vec3(_437.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
    float _1778 = (mix(1.0, _2666, _437.lightingModel._ShowContourObscuranceWireframe.y) * _504.lightAmbient._ambient.x) * _437.lightingModel._AmbientDirectionalPointSpot.x;
    vec3 _2071 = -_480.light.volume.directionSpotCos.xyz;
    vec3 _2102 = normalize(_1529 + _2071);
    vec3 _2652 = _2688;
    _2652.x = dot(_1331, _2102);
    vec3 _2654 = _2652;
    _2654.y = dot(_1331, _2071);
    vec3 _2656 = _2654;
    _2656.z = dot(_2102, _2071);
    vec3 _2123 = clamp(_2656, vec3(0.0), vec3(1.0));
    float _2125 = _2123.x;
    float _2128 = _2123.y;
    float _2193 = 1.0 - _2123.z;
    float _2196 = _2193 * _2193;
    float _2201 = (_2193 * _2196) * _2196;
    vec3 _2208 = vec3(_2201) + (_1443 * (1.0 - _2201));
    float _2224 = ((_2125 * _2125) * (_1666 - 1.0)) + 1.0;
    float _2180 = (_1743 * _2128) * (1.0 - _2208.x);
    vec3 _2084 = ((_480.light.irradiance.colorIntensity.xyz * _480.light.irradiance.colorIntensity.w) * 1.0) * _437.lightingModel._AmbientDirectionalPointSpot.y;
    _fragColor0 = vec4((((_1322 * _437.lightingModel._UnlitEmissiveLightmapBackground.y) + (((((vec3(1.0) - _1803) * _1743) * ((((((_1813 * ((_1815 * _1815) - (_1820 * _1820))) + ((_1828 * _1830) * _1830)) + _1838) - _1842) + (((((_504.lightAmbient._ambientSphere.L2m2 * _1815) * _1820) + ((_504.lightAmbient._ambientSphere.L21 * _1815) * _1830)) + ((_504.lightAmbient._ambientSphere.L2m1 * _1820) * _1830)) * 0.85808598995208740234375)) + ((((_504.lightAmbient._ambientSphere.L11 * _1815) + (_504.lightAmbient._ambientSphere.L1m1 * _1820)) + (_504.lightAmbient._ambientSphere.L10 * _1830)) * 1.02332794666290283203125)).xyz) * _1773) * (_1778 * _437.lightingModel._ScatteringDiffuseSpecularAlbedo.y))) + ((vec3(_2180) * _1773) * (_2084 * _437.lightingModel._ScatteringDiffuseSpecularAlbedo.y))) + ((((_2673 * _1803) * (_1778 * _437.lightingModel._ScatteringDiffuseSpecularAlbedo.z)) + (vec4((_2208 * (_1666 / ((_2224 * _2224) * ((_1671 + sqrt(_1666 + ((_1671 * _1671) * _1692))) * (_2128 + sqrt(_1666 + ((_2128 * _2128) * _1692))))))) * _2128, _2180).xyz * (_2084 * _437.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) / vec3(_1252)), _1252);
}

