#version 410

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

struct ScatteringParameters
{
    vec4 normalBendInfo;
    vec4 curvatureInfo;
    vec4 debugFlags;
};

struct SSSDebugParams
{
    vec4 cursorTexCoordSpare2;
};

layout(std140) uniform keyLightBuffer
{
    Light light;
} _333;

layout(std140) uniform subsurfaceScatteringParametersBuffer
{
    ScatteringParameters parameters;
} _369;

layout(std140) uniform sssDebugParamsBuffer
{
    SSSDebugParams sssDebugParams;
} _558;

uniform sampler2D curvatureMap;
uniform sampler2D diffusedCurvatureMap;

layout(location = 0) out vec4 _fragColor;
layout(location = 0) in vec2 varTexCoord0;

void main()
{
    vec4 _897 = texture(diffusedCurvatureMap, _558.sssDebugParams.cursorTexCoordSpare2.xy);
    vec3 _634 = normalize((texture(curvatureMap, _558.sssDebugParams.cursorTexCoordSpare2.xy).xyz - vec3(0.5)) * 2.0);
    vec3 _640 = normalize((_897.xyz - vec3(0.5)) * 2.0);
    vec3 _648 = -normalize(_333.light.volume.directionSpotCos.xyz);
    vec3 _973 = _369.parameters.normalBendInfo.xyz * _369.parameters.normalBendInfo.w;
    vec3 _607 = vec3(dot(normalize(mix(_634, _640, vec3(_973.x))), _648), dot(normalize(mix(_634, _640, vec3(_973.y))), _648), dot(normalize(mix(_634, _640, vec3(_973.z))), _648));
    vec3 _612 = vec3(0.0);
    for (int _1003 = 0; _1003 < 3; )
    {
        vec2 _673 = vec2(clamp((_607[_1003] * 0.5) + 0.5, 0.0, 1.0), clamp(2.0 * ((_897.w * 2.0) - 1.0), 0.0, 1.0)) - varTexCoord0;
        _612[_1003] = 1.0 - dot(_673, _673);
        _1003++;
        continue;
    }
    _612 *= _612;
    vec3 _617 = vec3(0.0);
    bool _1005;
    _1005 = false;
    bool _696;
    for (int _1004 = 0; _1004 < 3; _1005 = _696 ? true : _1005, _1004++)
    {
        _696 = _612[_1004] > 0.999000012874603271484375;
        if (_696)
        {
            _617[_1004] += 1.0;
            continue;
        }
        else
        {
            continue;
        }
        continue;
    }
    if (!_1005)
    {
        discard;
    }
    _fragColor = vec4(_617, 1.0);
}

