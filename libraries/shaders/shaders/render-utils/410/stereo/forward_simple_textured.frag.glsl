#version 410

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

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _319;

layout(std140) uniform keyLightBuffer
{
    Light light;
} _350;

layout(std140) uniform lightAmbientBuffer
{
    LightAmbient lightAmbient;
} _374;

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera[2];
} _cameraBlock;

uniform samplerCube skyboxMap;
uniform sampler2D originalTexture;

layout(location = 8) flat in int _stereoSide;
layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 7) in vec4 _positionES;
layout(location = 0) out vec4 _fragColor0;
layout(location = 3) in vec3 _normalWS;

vec3 _1970;

void main()
{
    vec3 _974 = normalize(_normalWS);
    vec3 _1091 = normalize(_cameraBlock._camera[_stereoSide]._viewInverse[3].xyz - vec3((_cameraBlock._camera[_stereoSide]._viewInverse * vec4(_positionES.xyz, 1.0)).xyz));
    float _1210 = mix(0.00999999977648258209228515625, 1.0, 0.89999997615814208984375);
    float _1216 = _1210 * _1210;
    float _1222 = _1216 * _1216;
    float _1227 = clamp(dot(_974, _1091), 0.0, 1.0);
    float _1248 = 1.0 - _1222;
    vec4 _1276 = _374.lightAmbient.transform * vec4(_974, 0.0);
    vec3 _1355 = max(vec3(1.0 - _1210), vec3(0.0)) * pow(1.0 - _1227, 5.0);
    float _1368 = _1276.x;
    float _1373 = _1276.y;
    float _1383 = _1276.z;
    vec3 _1309 = -reflect((_374.lightAmbient.transform * vec4(_1091, 0.0)).xyz, _1276.xyz);
    vec3 _1326 = mix(vec3(1.0), _color.xyz * texture(originalTexture, _texCoord01.xy).xyz, vec3(_319.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
    float _1331 = (mix(1.0, 1.0, _319.lightingModel._ShowContourObscuranceWireframe.y) * _374.lightAmbient._ambient.x) * _319.lightingModel._AmbientDirectionalPointSpot.x;
    vec3 _1517 = -_350.light.volume.directionSpotCos.xyz;
    vec3 _1548 = normalize(_1091 + _1517);
    vec3 _1959 = _1970;
    _1959.x = dot(_974, _1548);
    vec3 _1961 = _1959;
    _1961.y = dot(_974, _1517);
    vec3 _1963 = _1961;
    _1963.z = dot(_1548, _1517);
    vec3 _1569 = clamp(_1963, vec3(0.0), vec3(1.0));
    float _1571 = _1569.x;
    float _1574 = _1569.y;
    float _1639 = 1.0 - _1569.z;
    float _1642 = _1639 * _1639;
    float _1647 = (_1639 * _1642) * _1642;
    float _1670 = ((_1571 * _1571) * (_1222 - 1.0)) + 1.0;
    float _1626 = _1574 * (1.0 - _1647);
    vec3 _1530 = ((_350.light.irradiance.colorIntensity.xyz * _350.light.irradiance.colorIntensity.w) * 1.0) * _319.lightingModel._AmbientDirectionalPointSpot.y;
    _fragColor0 = vec4((((((((vec3(1.0) - _1355) * 1.0) * (((((((_374.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875) * ((_1368 * _1368) - (_1373 * _1373))) + (((_374.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625) * _1383) * _1383)) + (_374.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375)) - (_374.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625)) + (((((_374.lightAmbient._ambientSphere.L2m2 * _1368) * _1373) + ((_374.lightAmbient._ambientSphere.L21 * _1368) * _1383)) + ((_374.lightAmbient._ambientSphere.L2m1 * _1373) * _1383)) * 0.85808598995208740234375)) + ((((_374.lightAmbient._ambientSphere.L11 * _1368) + (_374.lightAmbient._ambientSphere.L1m1 * _1373)) + (_374.lightAmbient._ambientSphere.L10 * _1383)) * 1.02332794666290283203125)).xyz) * _1326) * (_1331 * _319.lightingModel._ScatteringDiffuseSpecularAlbedo.y)) + ((textureLod(skyboxMap, _1309, max(max(_374.lightAmbient._ambient.y - (12.0 / (1.0 + (11.0 * _1210))), 0.0), textureQueryLod(skyboxMap, _1309).x)).xyz * _1355) * (_1331 * _319.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) + ((vec3(_1626) * _1326) * (_1530 * _319.lightingModel._ScatteringDiffuseSpecularAlbedo.y))) + (vec4((vec3(_1647) * (_1222 / ((_1670 * _1670) * ((_1227 + sqrt(_1222 + ((_1227 * _1227) * _1248))) * (_1574 + sqrt(_1222 + ((_1574 * _1574) * _1248))))))) * _1574, _1626).xyz * (_1530 * _319.lightingModel._ScatteringDiffuseSpecularAlbedo.z)), 1.0);
}

