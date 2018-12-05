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
    _TransformCamera _camera;
} _cameraBlock;

uniform samplerCube skyboxMap;
uniform sampler2D originalTexture;

layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 7) in vec4 _positionES;
layout(location = 0) out vec4 _fragColor0;
layout(location = 3) in vec3 _normalWS;

vec3 _1965;

void main()
{
    vec3 _970 = normalize(_normalWS);
    vec3 _1086 = normalize(_cameraBlock._camera._viewInverse[3].xyz - vec3((_cameraBlock._camera._viewInverse * vec4(_positionES.xyz, 1.0)).xyz));
    float _1205 = mix(0.00999999977648258209228515625, 1.0, 0.89999997615814208984375);
    float _1211 = _1205 * _1205;
    float _1217 = _1211 * _1211;
    float _1222 = clamp(dot(_970, _1086), 0.0, 1.0);
    float _1243 = 1.0 - _1217;
    vec4 _1271 = _374.lightAmbient.transform * vec4(_970, 0.0);
    vec3 _1350 = max(vec3(1.0 - _1205), vec3(0.0)) * pow(1.0 - _1222, 5.0);
    float _1363 = _1271.x;
    float _1368 = _1271.y;
    float _1378 = _1271.z;
    vec3 _1304 = -reflect((_374.lightAmbient.transform * vec4(_1086, 0.0)).xyz, _1271.xyz);
    vec3 _1321 = mix(vec3(1.0), _color.xyz * texture(originalTexture, _texCoord01.xy).xyz, vec3(_319.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
    float _1326 = (mix(1.0, 1.0, _319.lightingModel._ShowContourObscuranceWireframe.y) * _374.lightAmbient._ambient.x) * _319.lightingModel._AmbientDirectionalPointSpot.x;
    vec3 _1512 = -_350.light.volume.directionSpotCos.xyz;
    vec3 _1543 = normalize(_1086 + _1512);
    vec3 _1954 = _1965;
    _1954.x = dot(_970, _1543);
    vec3 _1956 = _1954;
    _1956.y = dot(_970, _1512);
    vec3 _1958 = _1956;
    _1958.z = dot(_1543, _1512);
    vec3 _1564 = clamp(_1958, vec3(0.0), vec3(1.0));
    float _1566 = _1564.x;
    float _1569 = _1564.y;
    float _1634 = 1.0 - _1564.z;
    float _1637 = _1634 * _1634;
    float _1642 = (_1634 * _1637) * _1637;
    float _1665 = ((_1566 * _1566) * (_1217 - 1.0)) + 1.0;
    float _1621 = _1569 * (1.0 - _1642);
    vec3 _1525 = ((_350.light.irradiance.colorIntensity.xyz * _350.light.irradiance.colorIntensity.w) * 1.0) * _319.lightingModel._AmbientDirectionalPointSpot.y;
    _fragColor0 = vec4((((((((vec3(1.0) - _1350) * 1.0) * (((((((_374.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875) * ((_1363 * _1363) - (_1368 * _1368))) + (((_374.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625) * _1378) * _1378)) + (_374.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375)) - (_374.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625)) + (((((_374.lightAmbient._ambientSphere.L2m2 * _1363) * _1368) + ((_374.lightAmbient._ambientSphere.L21 * _1363) * _1378)) + ((_374.lightAmbient._ambientSphere.L2m1 * _1368) * _1378)) * 0.85808598995208740234375)) + ((((_374.lightAmbient._ambientSphere.L11 * _1363) + (_374.lightAmbient._ambientSphere.L1m1 * _1368)) + (_374.lightAmbient._ambientSphere.L10 * _1378)) * 1.02332794666290283203125)).xyz) * _1321) * (_1326 * _319.lightingModel._ScatteringDiffuseSpecularAlbedo.y)) + ((textureLod(skyboxMap, _1304, max(max(_374.lightAmbient._ambient.y - (12.0 / (1.0 + (11.0 * _1205))), 0.0), textureQueryLod(skyboxMap, _1304).x)).xyz * _1350) * (_1326 * _319.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) + ((vec3(_1621) * _1321) * (_1525 * _319.lightingModel._ScatteringDiffuseSpecularAlbedo.y))) + (vec4((vec3(_1642) * (_1217 / ((_1665 * _1665) * ((_1222 + sqrt(_1217 + ((_1222 * _1222) * _1243))) * (_1569 + sqrt(_1217 + ((_1569 * _1569) * _1243))))))) * _1569, _1621).xyz * (_1525 * _319.lightingModel._ScatteringDiffuseSpecularAlbedo.z)), 1.0);
}

