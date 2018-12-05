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

struct HazeParams
{
    vec3 hazeColor;
    float hazeGlareBlend;
    vec3 hazeGlareColor;
    float hazeBaseReference;
    vec3 colorModulationFactor;
    int hazeMode;
    mat4 transform;
    float backgroundBlend;
    float hazeRangeFactor;
    float hazeHeightFactor;
    float hazeKeyLightRangeFactor;
    float hazeKeyLightAltitudeFactor;
};

layout(std140) uniform deferredFrameTransformBuffer
{
    DeferredFrameTransform frameTransform;
} _556;

layout(std140) uniform cameraCorrectionBuffer
{
    CameraCorrection cameraCorrection;
} _563;

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _845;

layout(std140) uniform keyLightBuffer
{
    Light light;
} _883;

layout(std140) uniform lightAmbientBuffer
{
    LightAmbient lightAmbient;
} _907;

layout(std140) uniform subsurfaceScatteringParametersBuffer
{
    ScatteringParameters parameters;
} _1252;

layout(std140) uniform hazeBuffer
{
    HazeParams hazeParams;
} _1436;

uniform sampler2D normalMap;
uniform sampler2D albedoMap;
uniform sampler2D specularMap;
uniform sampler2D obscuranceMap;
uniform sampler2D depthMap;
uniform sampler2D scatteringSpecularBeckmann;
uniform sampler2D scatteringLUT;
uniform samplerCube skyboxMap;
uniform sampler2D curvatureMap;
uniform sampler2D diffusedCurvatureMap;

layout(location = 0) in vec4 _texCoord01;
layout(location = 0) out vec4 _fragColor;

int _4046;
float _4052;
vec3 _4087;
vec3 _4137;
vec2 _4138;

void main()
{
    vec4 _2091 = texture(depthMap, _texCoord01.xy);
    vec4 _2117 = texture(normalMap, _texCoord01.xy);
    vec4 _2120 = texture(albedoMap, _texCoord01.xy);
    vec4 _2123 = texture(specularMap, _texCoord01.xy);
    vec4 _2126 = texture(obscuranceMap, _texCoord01.xy);
    vec3 _2177 = _2117.xyz * 255.0;
    float _2180 = _2177.y * 0.0625;
    vec2 _2201 = clamp((vec2((_2177.x * 16.0) + floor(_2180), (fract(_2180) * 4096.0) + _2177.z) * 0.000488519784994423389434814453125) - vec2(1.0), vec2(-1.0), vec2(1.0));
    float _2207 = _2201.x;
    float _2211 = _2201.y;
    float _2213 = (1.0 - abs(_2207)) - abs(_2211);
    vec3 _2216 = vec3(_2207, _2211, _2213);
    vec3 _4040;
    if (_2213 < 0.0)
    {
        vec2 _2230 = (vec2(1.0) - abs(_2216.yx)) * vec2((_2207 >= 0.0) ? 1.0 : (-1.0), (_2211 >= 0.0) ? 1.0 : (-1.0));
        _4040 = vec3(_2230.x, _2230.y, _2216.z);
    }
    else
    {
        _4040 = _2216;
    }
    vec3 _2234 = normalize(_4040);
    vec3 _2137 = _2120.xyz;
    float _2141 = _2120.w;
    int _4041;
    float _4047;
    if (_2141 <= 0.100000001490116119384765625)
    {
        _4047 = clamp(_2141 * 10.0, 0.0, 1.0);
        _4041 = 1;
    }
    else
    {
        int _4042;
        float _4048;
        if (_2141 <= 0.300000011920928955078125)
        {
            _4048 = clamp((_2141 - 0.20000000298023223876953125) * 10.0, 0.0, 1.0);
            _4042 = 2;
        }
        else
        {
            int _4043;
            float _4049;
            if (_2141 <= 0.5)
            {
                _4049 = clamp((_2141 - 0.4000000059604644775390625) * 10.0, 0.0, 1.0);
                _4043 = 3;
            }
            else
            {
                bool _2273 = _2141 >= 0.60000002384185791015625;
                _4049 = _2273 ? 0.0 : _4052;
                _4043 = _2273 ? 0 : _4046;
            }
            _4048 = _4049;
            _4042 = _4043;
        }
        _4047 = _4048;
        _4041 = _4042;
    }
    float _2151 = min(_2123.w, _2126.x);
    bool _2155 = _4041 == 3;
    float _4058;
    if (_2155)
    {
        _4058 = _2123.x;
    }
    else
    {
        _4058 = 0.0;
    }
    vec3 _2279 = vec3(_4047);
    vec3 _2280 = mix(vec3(0.02999999932944774627685546875), _2137, _2279);
    int _4072;
    vec2 _4074;
    if (_556.frameTransform._stereoInfo.x > 0.0)
    {
        bool _2291 = _texCoord01.x > 0.5;
        vec2 _4071;
        if (_2291)
        {
            vec2 _3966 = _texCoord01.xy;
            _3966.x = _texCoord01.x - 0.5;
            _4071 = _3966;
        }
        else
        {
            _4071 = _texCoord01.xy;
        }
        vec2 _3969 = _4071;
        _3969.x = _4071.x * 2.0;
        _4074 = _3969;
        _4072 = int(_2291);
    }
    else
    {
        _4074 = _texCoord01.xy;
        _4072 = 0;
    }
    vec4 _2333 = _556.frameTransform._invProjection[_4072] * vec4((vec3(_4074, _2091.x) * 2.0) - vec3(1.0), 1.0);
    if (_4041 == 0)
    {
        discard;
    }
    else
    {
        if (_4041 == 2)
        {
            discard;
        }
        else
        {
            vec4 _4075;
            vec4 _4076;
            if (_2155)
            {
                vec4 _2375 = texture(curvatureMap, _texCoord01.xy);
                vec4 _2379 = texture(diffusedCurvatureMap, _texCoord01.xy);
                vec3 _2351 = normalize((_2375.xyz - vec3(0.5)) * 2.0);
                vec3 _2359 = normalize((_2379.xyz - vec3(0.5)) * 2.0);
                vec4 _3973 = vec4(_2351.x, _2351.y, _2351.z, _2375.w);
                _3973.w = (_2375.w * 2.0) - 1.0;
                vec4 _3976 = vec4(_2359.x, _2359.y, _2359.z, _2379.w);
                _3976.w = (_2379.w * 2.0) - 1.0;
                _4076 = _3976;
                _4075 = _3973;
            }
            else
            {
                _4076 = vec4(0.0);
                _4075 = vec4(0.0);
            }
            mat4 _2385 = _556.frameTransform._viewInverse * _563.cameraCorrection._correctionInverse;
            vec4 _2443 = _2385 * vec4(_2333.xyz / vec3(_2333.w), 1.0);
            vec3 _2454 = normalize(_2385[3].xyz - vec3(_2443.xyz));
            float _2594 = mix(0.00999999977648258209228515625, 1.0, _2117.w);
            float _2600 = _2594 * _2594;
            float _2606 = _2600 * _2600;
            float _2611 = clamp(dot(_2234, _2454), 0.0, 1.0);
            float _2632 = 1.0 - _2606;
            vec4 _2668 = _907.lightAmbient.transform * vec4(_2234, 0.0);
            vec4 _2688 = _907.lightAmbient.transform * vec4(_4076.xyz, 0.0);
            vec3 _2785 = _2280 + ((max(vec3(1.0 - _2594), _2280) - _2280) * pow(1.0 - _2611, 5.0));
            float _2698 = 1.0 - _4047;
            vec4 _2795 = _907.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875;
            float _2797 = _2668.x;
            float _2802 = _2668.y;
            vec4 _2810 = _907.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625;
            float _2812 = _2668.z;
            vec4 _2820 = _907.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375;
            vec4 _2824 = _907.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625;
            vec3 _2711 = -reflect((_907.lightAmbient.transform * vec4(_2454, 0.0)).xyz, _2668.xyz);
            vec2 _2906 = textureQueryLod(skyboxMap, _2711);
            float _2720 = _4058 * _845.lightingModel._ScatteringDiffuseSpecularAlbedo.x;
            bool _2721 = _2720 > 0.0;
            float _4077;
            vec3 _4078;
            if (_2721)
            {
                float _2949 = _2688.x;
                float _2954 = _2688.y;
                float _2964 = _2688.z;
                _4078 = ((((((_2795 * ((_2949 * _2949) - (_2954 * _2954))) + ((_2810 * _2964) * _2964)) + _2820) - _2824) + (((((_907.lightAmbient._ambientSphere.L2m2 * _2949) * _2954) + ((_907.lightAmbient._ambientSphere.L21 * _2949) * _2964)) + ((_907.lightAmbient._ambientSphere.L2m1 * _2954) * _2964)) * 0.85808598995208740234375)) + ((((_907.lightAmbient._ambientSphere.L11 * _2949) + (_907.lightAmbient._ambientSphere.L1m1 * _2954)) + (_907.lightAmbient._ambientSphere.L10 * _2964)) * 1.02332794666290283203125)).xyz;
                _4077 = min(_2151, min((((1.0 - ((_4076.w * 0.0439999997615814208984375) * (_4076.w * 20.0))) + (_4076.w * 1.5520000457763671875)) + 0.73689997196197509765625) * 0.5, (((1.0 - ((_4075.w * 0.017599999904632568359375) * (_4075.w * 8.0))) + (_4075.w * 0.620800018310546875)) + 0.73689997196197509765625) * 0.5));
            }
            else
            {
                _4078 = ((vec3(1.0) - _2785) * _2698) * ((((((_2795 * ((_2797 * _2797) - (_2802 * _2802))) + ((_2810 * _2812) * _2812)) + _2820) - _2824) + (((((_907.lightAmbient._ambientSphere.L2m2 * _2797) * _2802) + ((_907.lightAmbient._ambientSphere.L21 * _2797) * _2812)) + ((_907.lightAmbient._ambientSphere.L2m1 * _2802) * _2812)) * 0.85808598995208740234375)) + ((((_907.lightAmbient._ambientSphere.L11 * _2797) + (_907.lightAmbient._ambientSphere.L1m1 * _2802)) + (_907.lightAmbient._ambientSphere.L10 * _2812)) * 1.02332794666290283203125)).xyz;
                _4077 = _2151;
            }
            float _2747 = mix(1.0, _4077, _845.lightingModel._ShowContourObscuranceWireframe.y);
            vec3 _2755 = mix(vec3(1.0), _2137, vec3(_845.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
            vec3 _2757 = _4078 * _2755;
            float _2760 = (_2747 * _907.lightAmbient._ambient.x) * _845.lightingModel._AmbientDirectionalPointSpot.x;
            vec3 _3060 = -_883.light.volume.directionSpotCos.xyz;
            vec3 _3094 = normalize(_2454 + _3060);
            vec3 _4014 = _4137;
            _4014.x = dot(_2234, _3094);
            vec3 _4016 = _4014;
            _4016.y = dot(_2234, _3060);
            vec3 _4018 = _4016;
            _4018.z = dot(_3094, _3060);
            vec3 _3115 = clamp(_4018, vec3(0.0), vec3(1.0));
            float _3117 = _3115.x;
            float _3120 = _3115.y;
            float _3123 = _3115.z;
            vec3 _4111;
            vec3 _4112;
            if (_2721)
            {
                bool _3246 = _1252.parameters.debugFlags.y > 0.0;
                vec3 _4096;
                if (_3246)
                {
                    _4096 = (_4076.xyz * 0.5) + vec3(0.5);
                }
                else
                {
                    _4096 = _4087;
                }
                bool _4142 = _3246 ? true : false;
                vec3 _4095;
                if (!_4142)
                {
                    bool _3250 = _1252.parameters.debugFlags.x > 0.0;
                    vec3 _4108;
                    if (_3250)
                    {
                        vec3 _4093;
                        if (_4076.w > 0.0)
                        {
                            _4093 = vec3(_4076.w, 0.0, 0.0);
                        }
                        else
                        {
                            _4093 = vec3(0.0, 0.0, -_4076.w);
                        }
                        _4108 = _4093;
                    }
                    else
                    {
                        _4108 = _4096;
                    }
                    vec3 _4107;
                    if (!(_3250 ? true : _4142))
                    {
                        vec3 _3296 = _1252.parameters.normalBendInfo.xyz * _1252.parameters.normalBendInfo.w;
                        float _3337 = clamp(2.0 * ((abs(_4076.w) * _1252.parameters.curvatureInfo.y) + _1252.parameters.curvatureInfo.x), 0.0, 1.0);
                        _4107 = vec3(texture(scatteringLUT, vec2(clamp((dot(normalize(mix(_4075.xyz, _4076.xyz, vec3(_3296.x))), _3060) * 0.5) + 0.5, 0.0, 1.0), _3337)).x, texture(scatteringLUT, vec2(clamp((dot(normalize(mix(_4075.xyz, _4076.xyz, vec3(_3296.y))), _3060) * 0.5) + 0.5, 0.0, 1.0), _3337)).y, texture(scatteringLUT, vec2(clamp((dot(normalize(mix(_4075.xyz, _4076.xyz, vec3(_3296.z))), _3060) * 0.5) + 0.5, 0.0, 1.0), _3337)).z);
                    }
                    else
                    {
                        _4107 = _4108;
                    }
                    _4095 = _4107;
                }
                else
                {
                    _4095 = _4096;
                }
                vec3 _3161 = vec3(_4058);
                vec3 _3162 = mix(vec3(_3120), _4095, _3161);
                vec2 _4109;
                if (_3120 > 0.0)
                {
                    float _3424 = 1.0 - _3123;
                    float _3427 = _3424 * _3424;
                    float _3432 = (_3424 * _3427) * _3427;
                    float _3438 = _3432 + (0.0280000008642673492431640625 * (1.0 - _3432));
                    vec2 _4030 = _4138;
                    _4030.x = _3120 * max((pow(2.0 * texture(scatteringSpecularBeckmann, vec2(_3117, _2594)).x, 10.0) * _3438) / dot(_3094, _3094), 0.0);
                    vec2 _4033 = _4030;
                    _4033.y = 1.0 - _3438;
                    _4109 = _4033;
                }
                else
                {
                    _4109 = vec2(0.0, 1.0);
                }
                _4112 = vec3(_4109.x);
                _4111 = _3162 * _4109.y;
            }
            else
            {
                float _3480 = 1.0 - _3123;
                float _3483 = _3480 * _3480;
                float _3488 = (_3480 * _3483) * _3483;
                vec3 _3495 = vec3(_3488) + (_2280 * (1.0 - _3488));
                float _3511 = ((_3117 * _3117) * (_2606 - 1.0)) + 1.0;
                float _3467 = (_2698 * _3120) * (1.0 - _3495.x);
                _4112 = vec4((_3495 * (_2606 / ((_3511 * _3511) * ((_2611 + sqrt(_2606 + ((_2611 * _2611) * _2632))) * (_3120 + sqrt(_2606 + ((_3120 * _3120) * _2632))))))) * _3120, _3467).xyz;
                _4111 = vec3(_3467);
            }
            vec3 _3186 = _4111 * _2755;
            vec3 _3076 = ((_883.light.irradiance.colorIntensity.xyz * _883.light.irradiance.colorIntensity.w) * 1.0) * _845.lightingModel._AmbientDirectionalPointSpot.y;
            vec3 _3086 = _4112 * (_3076 * _845.lightingModel._ScatteringDiffuseSpecularAlbedo.z);
            vec3 _2501 = (((_2757 * (_2760 * _845.lightingModel._ScatteringDiffuseSpecularAlbedo.y)) + ((textureLod(skyboxMap, _2711, max(max(_907.lightAmbient._ambient.y - (12.0 / (1.0 + (11.0 * _2594))), 0.0), _2906.x)).xyz * _2785) * (_2760 * _845.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) + (_3186 * (_3076 * _845.lightingModel._ScatteringDiffuseSpecularAlbedo.y))) + _3086;
            bool _2503 = _845.lightingModel._HazeBloomSkinningBlendshape.x > 0.0;
            bool _2510;
            if (_2503)
            {
                _2510 = (_1436.hazeParams.hazeMode & 4) == 4;
            }
            else
            {
                _2510 = _2503;
            }
            vec3 _4130;
            if (_2510)
            {
                float _4128;
                if (_1436.hazeParams.hazeKeyLightAltitudeFactor > 0.0)
                {
                    _4128 = 2.99573230743408203125 / _1436.hazeParams.hazeKeyLightAltitudeFactor;
                }
                else
                {
                    _4128 = 2000.0;
                }
                float _3574 = abs(_883.light.volume.directionSpotCos.y);
                float _4129;
                if (_3574 < 0.001000000047497451305389404296875)
                {
                    _4129 = _4128 * 999.99993896484375;
                }
                else
                {
                    _4129 = _4128 / _3574;
                }
                _4130 = _2501 * exp(((_1436.hazeParams.hazeKeyLightRangeFactor * exp((-_1436.hazeParams.hazeKeyLightAltitudeFactor) * (_2443.y - _1436.hazeParams.hazeBaseReference))) * _4129) * (-0.31711781024932861328125));
            }
            else
            {
                _4130 = _2501;
            }
            _fragColor = vec4(_4130, 1.0);
        }
    }
}

