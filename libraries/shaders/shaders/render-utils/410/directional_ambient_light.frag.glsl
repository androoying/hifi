#version 410

struct DeferredFrameTransform
{
    vec4 _pixelInfo;
    vec4 _invPixelInfo;
    vec4 _depthInfo;
    vec4 _stereoInfo;
    mat4 _projection[2];
    mat4 _invProjection[2];
    mat4 _projectionMono;
    mat4 _viewInverse;
    mat4 _view;
    mat4 _projectionUnJittered[2];
    mat4 _invProjectionUnJittered[2];
};

struct CameraCorrection
{
    mat4 _correction;
    mat4 _correctionInverse;
    mat4 _prevView;
    mat4 _prevViewInverse;
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

struct ScatteringParameters
{
    vec4 normalBendInfo;
    vec4 curvatureInfo;
    vec4 debugFlags;
};

layout(std140) uniform deferredFrameTransformBuffer
{
    DeferredFrameTransform frameTransform;
} _540;

layout(std140) uniform cameraCorrectionBuffer
{
    CameraCorrection cameraCorrection;
} _547;

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _825;

layout(std140) uniform keyLightBuffer
{
    Light light;
} _859;

layout(std140) uniform lightAmbientBuffer
{
    LightAmbient lightAmbient;
} _883;

layout(std140) uniform subsurfaceScatteringParametersBuffer
{
    ScatteringParameters parameters;
} _1228;

uniform sampler2D normalMap;
uniform sampler2D albedoMap;
uniform sampler2D specularMap;
uniform sampler2D obscuranceMap;
uniform sampler2D depthMap;
uniform sampler2D scatteringSpecularBeckmann;
uniform sampler2D scatteringLUT;
uniform sampler2D curvatureMap;
uniform sampler2D diffusedCurvatureMap;

layout(location = 0) in vec4 _texCoord01;
layout(location = 0) out vec4 _fragColor;

int _3956;
float _3962;
vec3 _3997;
vec3 _4041;
vec2 _4042;

void main()
{
    vec4 _1959 = texture(depthMap, _texCoord01.xy);
    vec4 _1985 = texture(normalMap, _texCoord01.xy);
    vec4 _1988 = texture(albedoMap, _texCoord01.xy);
    vec4 _1991 = texture(specularMap, _texCoord01.xy);
    vec4 _1994 = texture(obscuranceMap, _texCoord01.xy);
    vec3 _2045 = _1985.xyz * 255.0;
    float _2048 = _2045.y * 0.0625;
    vec2 _2069 = clamp((vec2((_2045.x * 16.0) + floor(_2048), (fract(_2048) * 4096.0) + _2045.z) * 0.000488519784994423389434814453125) - vec2(1.0), vec2(-1.0), vec2(1.0));
    float _2075 = _2069.x;
    float _2079 = _2069.y;
    float _2081 = (1.0 - abs(_2075)) - abs(_2079);
    vec3 _2084 = vec3(_2075, _2079, _2081);
    vec3 _3950;
    if (_2081 < 0.0)
    {
        vec2 _2098 = (vec2(1.0) - abs(_2084.yx)) * vec2((_2075 >= 0.0) ? 1.0 : (-1.0), (_2079 >= 0.0) ? 1.0 : (-1.0));
        _3950 = vec3(_2098.x, _2098.y, _2084.z);
    }
    else
    {
        _3950 = _2084;
    }
    vec3 _2102 = normalize(_3950);
    vec3 _2005 = _1988.xyz;
    float _2009 = _1988.w;
    int _3951;
    float _3957;
    if (_2009 <= 0.100000001490116119384765625)
    {
        _3957 = clamp(_2009 * 10.0, 0.0, 1.0);
        _3951 = 1;
    }
    else
    {
        int _3952;
        float _3958;
        if (_2009 <= 0.300000011920928955078125)
        {
            _3958 = clamp((_2009 - 0.20000000298023223876953125) * 10.0, 0.0, 1.0);
            _3952 = 2;
        }
        else
        {
            int _3953;
            float _3959;
            if (_2009 <= 0.5)
            {
                _3959 = clamp((_2009 - 0.4000000059604644775390625) * 10.0, 0.0, 1.0);
                _3953 = 3;
            }
            else
            {
                bool _2141 = _2009 >= 0.60000002384185791015625;
                _3959 = _2141 ? 0.0 : _3962;
                _3953 = _2141 ? 0 : _3956;
            }
            _3958 = _3959;
            _3952 = _3953;
        }
        _3957 = _3958;
        _3951 = _3952;
    }
    float _2019 = min(_1991.w, _1994.x);
    bool _2023 = _3951 == 3;
    float _3968;
    if (_2023)
    {
        _3968 = _1991.x;
    }
    else
    {
        _3968 = 0.0;
    }
    vec3 _2147 = vec3(_3957);
    vec3 _2148 = mix(vec3(0.02999999932944774627685546875), _2005, _2147);
    int _3982;
    vec2 _3984;
    if (_540.frameTransform._stereoInfo.x > 0.0)
    {
        bool _2159 = _texCoord01.x > 0.5;
        vec2 _3981;
        if (_2159)
        {
            vec2 _3864 = _texCoord01.xy;
            _3864.x = _texCoord01.x - 0.5;
            _3981 = _3864;
        }
        else
        {
            _3981 = _texCoord01.xy;
        }
        vec2 _3867 = _3981;
        _3867.x = _3981.x * 2.0;
        _3984 = _3867;
        _3982 = int(_2159);
    }
    else
    {
        _3984 = _texCoord01.xy;
        _3982 = 0;
    }
    vec4 _2201 = _540.frameTransform._invProjection[_3982] * vec4((vec3(_3984, _1959.x) * 2.0) - vec3(1.0), 1.0);
    if (_3951 == 0)
    {
        discard;
    }
    else
    {
        if (_3951 == 2)
        {
            discard;
        }
        else
        {
            vec4 _3985;
            vec4 _3986;
            if (_2023)
            {
                vec4 _2243 = texture(curvatureMap, _texCoord01.xy);
                vec4 _2247 = texture(diffusedCurvatureMap, _texCoord01.xy);
                vec3 _2219 = normalize((_2243.xyz - vec3(0.5)) * 2.0);
                vec3 _2227 = normalize((_2247.xyz - vec3(0.5)) * 2.0);
                vec4 _3871 = vec4(_2219.x, _2219.y, _2219.z, _2243.w);
                _3871.w = (_2243.w * 2.0) - 1.0;
                vec4 _3874 = vec4(_2227.x, _2227.y, _2227.z, _2247.w);
                _3874.w = (_2247.w * 2.0) - 1.0;
                _3986 = _3874;
                _3985 = _3871;
            }
            else
            {
                _3986 = vec4(0.0);
                _3985 = vec4(0.0);
            }
            mat4 _2253 = _540.frameTransform._viewInverse * _547.cameraCorrection._correctionInverse;
            vec3 _2319 = normalize(_2253[3].xyz - vec3((_2253 * vec4(_2201.xyz / vec3(_2201.w), 1.0)).xyz));
            float _2444 = mix(0.00999999977648258209228515625, 1.0, _1985.w);
            float _2450 = _2444 * _2444;
            float _2456 = _2450 * _2450;
            float _2461 = clamp(dot(_2102, _2319), 0.0, 1.0);
            float _2482 = 1.0 - _2456;
            vec4 _2518 = _883.lightAmbient.transform * vec4(_2102, 0.0);
            vec4 _2538 = _883.lightAmbient.transform * vec4(_3986.xyz, 0.0);
            vec3 _2635 = _2148 + ((max(vec3(1.0 - _2444), _2148) - _2148) * pow(1.0 - _2461, 5.0));
            float _2548 = 1.0 - _3957;
            vec4 _2645 = _883.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875;
            float _2647 = _2518.x;
            float _2652 = _2518.y;
            vec4 _2660 = _883.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625;
            float _2662 = _2518.z;
            vec4 _2670 = _883.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375;
            vec4 _2674 = _883.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625;
            vec3 _2561 = -reflect((_883.lightAmbient.transform * vec4(_2319, 0.0)).xyz, _2518.xyz);
            float _2746 = _2561.x;
            float _2751 = _2561.y;
            float _2761 = _2561.z;
            float _2570 = _3968 * _825.lightingModel._ScatteringDiffuseSpecularAlbedo.x;
            bool _2571 = _2570 > 0.0;
            float _3987;
            vec3 _3988;
            if (_2571)
            {
                float _2857 = _2538.x;
                float _2862 = _2538.y;
                float _2872 = _2538.z;
                _3988 = ((((((_2645 * ((_2857 * _2857) - (_2862 * _2862))) + ((_2660 * _2872) * _2872)) + _2670) - _2674) + (((((_883.lightAmbient._ambientSphere.L2m2 * _2857) * _2862) + ((_883.lightAmbient._ambientSphere.L21 * _2857) * _2872)) + ((_883.lightAmbient._ambientSphere.L2m1 * _2862) * _2872)) * 0.85808598995208740234375)) + ((((_883.lightAmbient._ambientSphere.L11 * _2857) + (_883.lightAmbient._ambientSphere.L1m1 * _2862)) + (_883.lightAmbient._ambientSphere.L10 * _2872)) * 1.02332794666290283203125)).xyz;
                _3987 = min(_2019, min((((1.0 - ((_3986.w * 0.0439999997615814208984375) * (_3986.w * 20.0))) + (_3986.w * 1.5520000457763671875)) + 0.73689997196197509765625) * 0.5, (((1.0 - ((_3985.w * 0.017599999904632568359375) * (_3985.w * 8.0))) + (_3985.w * 0.620800018310546875)) + 0.73689997196197509765625) * 0.5));
            }
            else
            {
                _3988 = ((vec3(1.0) - _2635) * _2548) * ((((((_2645 * ((_2647 * _2647) - (_2652 * _2652))) + ((_2660 * _2662) * _2662)) + _2670) - _2674) + (((((_883.lightAmbient._ambientSphere.L2m2 * _2647) * _2652) + ((_883.lightAmbient._ambientSphere.L21 * _2647) * _2662)) + ((_883.lightAmbient._ambientSphere.L2m1 * _2652) * _2662)) * 0.85808598995208740234375)) + ((((_883.lightAmbient._ambientSphere.L11 * _2647) + (_883.lightAmbient._ambientSphere.L1m1 * _2652)) + (_883.lightAmbient._ambientSphere.L10 * _2662)) * 1.02332794666290283203125)).xyz;
                _3987 = _2019;
            }
            float _2597 = mix(1.0, _3987, _825.lightingModel._ShowContourObscuranceWireframe.y);
            vec3 _2605 = mix(vec3(1.0), _2005, vec3(_825.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
            vec3 _2607 = _3988 * _2605;
            float _2610 = (_2597 * _883.lightAmbient._ambient.x) * _825.lightingModel._AmbientDirectionalPointSpot.x;
            vec3 _2968 = -_859.light.volume.directionSpotCos.xyz;
            vec3 _3002 = normalize(_2319 + _2968);
            vec3 _3926 = _4041;
            _3926.x = dot(_2102, _3002);
            vec3 _3928 = _3926;
            _3928.y = dot(_2102, _2968);
            vec3 _3930 = _3928;
            _3930.z = dot(_3002, _2968);
            vec3 _3023 = clamp(_3930, vec3(0.0), vec3(1.0));
            float _3025 = _3023.x;
            float _3028 = _3023.y;
            float _3031 = _3023.z;
            vec3 _4021;
            vec3 _4022;
            if (_2571)
            {
                bool _3154 = _1228.parameters.debugFlags.y > 0.0;
                vec3 _4006;
                if (_3154)
                {
                    _4006 = (_3986.xyz * 0.5) + vec3(0.5);
                }
                else
                {
                    _4006 = _3997;
                }
                bool _4046 = _3154 ? true : false;
                vec3 _4005;
                if (!_4046)
                {
                    bool _3158 = _1228.parameters.debugFlags.x > 0.0;
                    vec3 _4018;
                    if (_3158)
                    {
                        vec3 _4003;
                        if (_3986.w > 0.0)
                        {
                            _4003 = vec3(_3986.w, 0.0, 0.0);
                        }
                        else
                        {
                            _4003 = vec3(0.0, 0.0, -_3986.w);
                        }
                        _4018 = _4003;
                    }
                    else
                    {
                        _4018 = _4006;
                    }
                    vec3 _4017;
                    if (!(_3158 ? true : _4046))
                    {
                        vec3 _3204 = _1228.parameters.normalBendInfo.xyz * _1228.parameters.normalBendInfo.w;
                        float _3245 = clamp(2.0 * ((abs(_3986.w) * _1228.parameters.curvatureInfo.y) + _1228.parameters.curvatureInfo.x), 0.0, 1.0);
                        _4017 = vec3(texture(scatteringLUT, vec2(clamp((dot(normalize(mix(_3985.xyz, _3986.xyz, vec3(_3204.x))), _2968) * 0.5) + 0.5, 0.0, 1.0), _3245)).x, texture(scatteringLUT, vec2(clamp((dot(normalize(mix(_3985.xyz, _3986.xyz, vec3(_3204.y))), _2968) * 0.5) + 0.5, 0.0, 1.0), _3245)).y, texture(scatteringLUT, vec2(clamp((dot(normalize(mix(_3985.xyz, _3986.xyz, vec3(_3204.z))), _2968) * 0.5) + 0.5, 0.0, 1.0), _3245)).z);
                    }
                    else
                    {
                        _4017 = _4018;
                    }
                    _4005 = _4017;
                }
                else
                {
                    _4005 = _4006;
                }
                vec3 _3069 = vec3(_3968);
                vec3 _3070 = mix(vec3(_3028), _4005, _3069);
                vec2 _4019;
                if (_3028 > 0.0)
                {
                    float _3332 = 1.0 - _3031;
                    float _3335 = _3332 * _3332;
                    float _3340 = (_3332 * _3335) * _3335;
                    float _3346 = _3340 + (0.0280000008642673492431640625 * (1.0 - _3340));
                    vec2 _3942 = _4042;
                    _3942.x = _3028 * max((pow(2.0 * texture(scatteringSpecularBeckmann, vec2(_3025, _2444)).x, 10.0) * _3346) / dot(_3002, _3002), 0.0);
                    vec2 _3945 = _3942;
                    _3945.y = 1.0 - _3346;
                    _4019 = _3945;
                }
                else
                {
                    _4019 = vec2(0.0, 1.0);
                }
                _4022 = vec3(_4019.x);
                _4021 = _3070 * _4019.y;
            }
            else
            {
                float _3388 = 1.0 - _3031;
                float _3391 = _3388 * _3388;
                float _3396 = (_3388 * _3391) * _3391;
                vec3 _3403 = vec3(_3396) + (_2148 * (1.0 - _3396));
                float _3419 = ((_3025 * _3025) * (_2456 - 1.0)) + 1.0;
                float _3375 = (_2548 * _3028) * (1.0 - _3403.x);
                _4022 = vec4((_3403 * (_2456 / ((_3419 * _3419) * ((_2461 + sqrt(_2456 + ((_2461 * _2461) * _2482))) * (_3028 + sqrt(_2456 + ((_3028 * _3028) * _2482))))))) * _3028, _3375).xyz;
                _4021 = vec3(_3375);
            }
            vec3 _2984 = ((_859.light.irradiance.colorIntensity.xyz * _859.light.irradiance.colorIntensity.w) * 1.0) * _825.lightingModel._AmbientDirectionalPointSpot.y;
            _fragColor = vec4((((_2607 * (_2610 * _825.lightingModel._ScatteringDiffuseSpecularAlbedo.y)) + ((((((((_2645 * ((_2746 * _2746) - (_2751 * _2751))) + ((_2660 * _2761) * _2761)) + _2670) - _2674) + (((((_883.lightAmbient._ambientSphere.L2m2 * _2746) * _2751) + ((_883.lightAmbient._ambientSphere.L21 * _2746) * _2761)) + ((_883.lightAmbient._ambientSphere.L2m1 * _2751) * _2761)) * 0.85808598995208740234375)) + ((((_883.lightAmbient._ambientSphere.L11 * _2746) + (_883.lightAmbient._ambientSphere.L1m1 * _2751)) + (_883.lightAmbient._ambientSphere.L10 * _2761)) * 1.02332794666290283203125)).xyz * _2635) * (_2610 * _825.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) + ((_4021 * _2605) * (_2984 * _825.lightingModel._ScatteringDiffuseSpecularAlbedo.y))) + (_4022 * (_2984 * _825.lightingModel._ScatteringDiffuseSpecularAlbedo.z)), 1.0);
        }
    }
}

