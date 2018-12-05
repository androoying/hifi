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
} _339;

layout(std140) uniform keyLightBuffer
{
    Light light;
} _374;

layout(std140) uniform lightAmbientBuffer
{
    LightAmbient lightAmbient;
} _398;

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

vec3 _2221;

void main()
{
    vec4 _1005 = texture(originalTexture, _texCoord01.xy);
    float _1013 = _color.w * _1005.w;
    vec3 _1025 = normalize(_normalWS);
    vec3 _1148 = normalize(_cameraBlock._camera[_stereoSide]._viewInverse[3].xyz - vec3((_cameraBlock._camera[_stereoSide]._viewInverse * vec4(_positionES.xyz, 1.0)).xyz));
    float _1273 = mix(0.00999999977648258209228515625, 1.0, 0.89999997615814208984375);
    float _1279 = _1273 * _1273;
    float _1285 = _1279 * _1279;
    float _1290 = clamp(dot(_1025, _1148), 0.0, 1.0);
    float _1311 = 1.0 - _1285;
    vec4 _1342 = _398.lightAmbient.transform * vec4(_1025, 0.0);
    vec3 _1421 = max(vec3(1.0 - _1273), vec3(0.0)) * pow(1.0 - _1290, 5.0);
    vec4 _1432 = _398.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875;
    float _1434 = _1342.x;
    float _1439 = _1342.y;
    vec4 _1447 = _398.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625;
    float _1449 = _1342.z;
    vec4 _1457 = _398.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375;
    vec4 _1461 = _398.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625;
    vec3 _1375 = -reflect((_398.lightAmbient.transform * vec4(_1148, 0.0)).xyz, _1342.xyz);
    vec3 _2215;
    if (_398.lightAmbient._ambient.y > 0.0)
    {
        _2215 = textureLod(skyboxMap, _1375, max(max(_398.lightAmbient._ambient.y - (12.0 / (1.0 + (11.0 * _1273))), 0.0), textureQueryLod(skyboxMap, _1375).x)).xyz;
    }
    else
    {
        float _1582 = _1375.x;
        float _1587 = _1375.y;
        float _1597 = _1375.z;
        _2215 = ((((((_1432 * ((_1582 * _1582) - (_1587 * _1587))) + ((_1447 * _1597) * _1597)) + _1457) - _1461) + (((((_398.lightAmbient._ambientSphere.L2m2 * _1582) * _1587) + ((_398.lightAmbient._ambientSphere.L21 * _1582) * _1597)) + ((_398.lightAmbient._ambientSphere.L2m1 * _1587) * _1597)) * 0.85808598995208740234375)) + ((((_398.lightAmbient._ambientSphere.L11 * _1582) + (_398.lightAmbient._ambientSphere.L1m1 * _1587)) + (_398.lightAmbient._ambientSphere.L10 * _1597)) * 1.02332794666290283203125)).xyz;
    }
    vec3 _1392 = mix(vec3(1.0), _color.xyz * _1005.xyz, vec3(_339.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
    float _1397 = (mix(1.0, 1.0, _339.lightingModel._ShowContourObscuranceWireframe.y) * _398.lightAmbient._ambient.x) * _339.lightingModel._AmbientDirectionalPointSpot.x;
    vec3 _1690 = -_374.light.volume.directionSpotCos.xyz;
    vec3 _1721 = normalize(_1148 + _1690);
    vec3 _2205 = _2221;
    _2205.x = dot(_1025, _1721);
    vec3 _2207 = _2205;
    _2207.y = dot(_1025, _1690);
    vec3 _2209 = _2207;
    _2209.z = dot(_1721, _1690);
    vec3 _1742 = clamp(_2209, vec3(0.0), vec3(1.0));
    float _1744 = _1742.x;
    float _1747 = _1742.y;
    float _1812 = 1.0 - _1742.z;
    float _1815 = _1812 * _1812;
    float _1820 = (_1812 * _1815) * _1815;
    float _1843 = ((_1744 * _1744) * (_1285 - 1.0)) + 1.0;
    float _1799 = _1747 * (1.0 - _1820);
    vec3 _1703 = ((_374.light.irradiance.colorIntensity.xyz * _374.light.irradiance.colorIntensity.w) * 1.0) * _339.lightingModel._AmbientDirectionalPointSpot.y;
    _fragColor0 = vec4(((((((vec3(1.0) - _1421) * 1.0) * ((((((_1432 * ((_1434 * _1434) - (_1439 * _1439))) + ((_1447 * _1449) * _1449)) + _1457) - _1461) + (((((_398.lightAmbient._ambientSphere.L2m2 * _1434) * _1439) + ((_398.lightAmbient._ambientSphere.L21 * _1434) * _1449)) + ((_398.lightAmbient._ambientSphere.L2m1 * _1439) * _1449)) * 0.85808598995208740234375)) + ((((_398.lightAmbient._ambientSphere.L11 * _1434) + (_398.lightAmbient._ambientSphere.L1m1 * _1439)) + (_398.lightAmbient._ambientSphere.L10 * _1449)) * 1.02332794666290283203125)).xyz) * _1392) * (_1397 * _339.lightingModel._ScatteringDiffuseSpecularAlbedo.y)) + ((vec3(_1799) * _1392) * (_1703 * _339.lightingModel._ScatteringDiffuseSpecularAlbedo.y))) + ((((_2215 * _1421) * (_1397 * _339.lightingModel._ScatteringDiffuseSpecularAlbedo.z)) + (vec4((vec3(_1820) * (_1285 / ((_1843 * _1843) * ((_1290 + sqrt(_1285 + ((_1290 * _1290) * _1311))) * (_1747 + sqrt(_1285 + ((_1747 * _1747) * _1311))))))) * _1747, _1799).xyz * (_1703 * _339.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) / vec3(_1013)), _1013);
}

