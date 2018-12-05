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
    _TransformCamera _camera;
} _cameraBlock;

uniform samplerCube skyboxMap;
uniform sampler2D originalTexture;

layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 7) in vec4 _positionES;
layout(location = 0) out vec4 _fragColor0;
layout(location = 3) in vec3 _normalWS;

vec3 _2216;

void main()
{
    vec4 _1001 = texture(originalTexture, _texCoord01.xy);
    float _1009 = _color.w * _1001.w;
    vec3 _1021 = normalize(_normalWS);
    vec3 _1143 = normalize(_cameraBlock._camera._viewInverse[3].xyz - vec3((_cameraBlock._camera._viewInverse * vec4(_positionES.xyz, 1.0)).xyz));
    float _1268 = mix(0.00999999977648258209228515625, 1.0, 0.89999997615814208984375);
    float _1274 = _1268 * _1268;
    float _1280 = _1274 * _1274;
    float _1285 = clamp(dot(_1021, _1143), 0.0, 1.0);
    float _1306 = 1.0 - _1280;
    vec4 _1337 = _398.lightAmbient.transform * vec4(_1021, 0.0);
    vec3 _1416 = max(vec3(1.0 - _1268), vec3(0.0)) * pow(1.0 - _1285, 5.0);
    vec4 _1427 = _398.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875;
    float _1429 = _1337.x;
    float _1434 = _1337.y;
    vec4 _1442 = _398.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625;
    float _1444 = _1337.z;
    vec4 _1452 = _398.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375;
    vec4 _1456 = _398.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625;
    vec3 _1370 = -reflect((_398.lightAmbient.transform * vec4(_1143, 0.0)).xyz, _1337.xyz);
    vec3 _2210;
    if (_398.lightAmbient._ambient.y > 0.0)
    {
        _2210 = textureLod(skyboxMap, _1370, max(max(_398.lightAmbient._ambient.y - (12.0 / (1.0 + (11.0 * _1268))), 0.0), textureQueryLod(skyboxMap, _1370).x)).xyz;
    }
    else
    {
        float _1577 = _1370.x;
        float _1582 = _1370.y;
        float _1592 = _1370.z;
        _2210 = ((((((_1427 * ((_1577 * _1577) - (_1582 * _1582))) + ((_1442 * _1592) * _1592)) + _1452) - _1456) + (((((_398.lightAmbient._ambientSphere.L2m2 * _1577) * _1582) + ((_398.lightAmbient._ambientSphere.L21 * _1577) * _1592)) + ((_398.lightAmbient._ambientSphere.L2m1 * _1582) * _1592)) * 0.85808598995208740234375)) + ((((_398.lightAmbient._ambientSphere.L11 * _1577) + (_398.lightAmbient._ambientSphere.L1m1 * _1582)) + (_398.lightAmbient._ambientSphere.L10 * _1592)) * 1.02332794666290283203125)).xyz;
    }
    vec3 _1387 = mix(vec3(1.0), _color.xyz * _1001.xyz, vec3(_339.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
    float _1392 = (mix(1.0, 1.0, _339.lightingModel._ShowContourObscuranceWireframe.y) * _398.lightAmbient._ambient.x) * _339.lightingModel._AmbientDirectionalPointSpot.x;
    vec3 _1685 = -_374.light.volume.directionSpotCos.xyz;
    vec3 _1716 = normalize(_1143 + _1685);
    vec3 _2200 = _2216;
    _2200.x = dot(_1021, _1716);
    vec3 _2202 = _2200;
    _2202.y = dot(_1021, _1685);
    vec3 _2204 = _2202;
    _2204.z = dot(_1716, _1685);
    vec3 _1737 = clamp(_2204, vec3(0.0), vec3(1.0));
    float _1739 = _1737.x;
    float _1742 = _1737.y;
    float _1807 = 1.0 - _1737.z;
    float _1810 = _1807 * _1807;
    float _1815 = (_1807 * _1810) * _1810;
    float _1838 = ((_1739 * _1739) * (_1280 - 1.0)) + 1.0;
    float _1794 = _1742 * (1.0 - _1815);
    vec3 _1698 = ((_374.light.irradiance.colorIntensity.xyz * _374.light.irradiance.colorIntensity.w) * 1.0) * _339.lightingModel._AmbientDirectionalPointSpot.y;
    _fragColor0 = vec4(((((((vec3(1.0) - _1416) * 1.0) * ((((((_1427 * ((_1429 * _1429) - (_1434 * _1434))) + ((_1442 * _1444) * _1444)) + _1452) - _1456) + (((((_398.lightAmbient._ambientSphere.L2m2 * _1429) * _1434) + ((_398.lightAmbient._ambientSphere.L21 * _1429) * _1444)) + ((_398.lightAmbient._ambientSphere.L2m1 * _1434) * _1444)) * 0.85808598995208740234375)) + ((((_398.lightAmbient._ambientSphere.L11 * _1429) + (_398.lightAmbient._ambientSphere.L1m1 * _1434)) + (_398.lightAmbient._ambientSphere.L10 * _1444)) * 1.02332794666290283203125)).xyz) * _1387) * (_1392 * _339.lightingModel._ScatteringDiffuseSpecularAlbedo.y)) + ((vec3(_1794) * _1387) * (_1698 * _339.lightingModel._ScatteringDiffuseSpecularAlbedo.y))) + ((((_2210 * _1416) * (_1392 * _339.lightingModel._ScatteringDiffuseSpecularAlbedo.z)) + (vec4((vec3(_1815) * (_1280 / ((_1838 * _1838) * ((_1285 + sqrt(_1280 + ((_1285 * _1285) * _1306))) * (_1742 + sqrt(_1280 + ((_1742 * _1742) * _1306))))))) * _1742, _1794).xyz * (_1698 * _339.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) / vec3(_1009)), _1009);
}

