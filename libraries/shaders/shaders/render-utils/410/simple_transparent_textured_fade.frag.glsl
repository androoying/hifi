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

struct FadeParameters
{
    vec4 _noiseInvSizeAndLevel;
    vec4 _innerEdgeColor;
    vec4 _outerEdgeColor;
    vec2 _edgeWidthInvWidth;
    float _baseLevel;
    int _isInverted;
};

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _306;

layout(std140) uniform keyLightBuffer
{
    Light light;
} _489;

layout(std140) uniform lightAmbientBuffer
{
    LightAmbient lightAmbient;
} _513;

layout(std140) uniform hazeBuffer
{
    HazeParams hazeParams;
} _775;

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera;
} _cameraBlock;

layout(std140) uniform fadeParametersBuffer
{
    FadeParameters fadeParameters[5];
} _1351;

uniform samplerCube skyboxMap;
uniform sampler2D fadeMaskMap;
uniform sampler2D originalTexture;

layout(location = 9) in vec4 _fadeData1;
layout(location = 10) in vec4 _fadeData2;
layout(location = 11) in vec4 _fadeData3;
layout(location = 2) in vec4 _positionWS;
layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 7) in vec4 _positionES;
layout(location = 3) in vec3 _normalWS;
layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 2) out vec4 _fragColor2;
layout(location = 3) out vec4 _fragColor3;

vec3 _3670;

void main()
{
    int _1628 = int(_fadeData1.w);
    vec3 _1878 = (_positionWS.xyz * _1351.fadeParameters[_1628]._noiseInvSizeAndLevel.xyz) + _fadeData1.xyz;
    vec3 _1880 = floor(_1878);
    vec3 _1882 = fract(_1878);
    vec3 _1890 = (_1882 * _1882) * (vec3(3.0) - (_1882 * 2.0));
    vec3 _1894 = _1880 + vec3(0.0, 1.0, 0.0);
    vec3 _1897 = _1880 + vec3(1.0, 0.0, 0.0);
    vec3 _1900 = _1880 + vec3(1.0, 1.0, 0.0);
    vec3 _1903 = _1880 + vec3(0.0, 0.0, 1.0);
    vec3 _1906 = _1880 + vec3(0.0, 1.0, 1.0);
    vec3 _1909 = _1880 + vec3(1.0, 0.0, 1.0);
    vec3 _1912 = _1880 + vec3(1.0);
    vec4 _1929 = mix(vec4(pow(textureLod(fadeMaskMap, (_1880.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1880.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1894.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1894.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1897.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1897.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1900.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1900.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(pow(textureLod(fadeMaskMap, (_1903.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1903.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1906.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1906.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1909.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1909.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1912.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1912.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(_1890.z));
    vec2 _1937 = mix(_1929.xy, _1929.zw, vec2(_1890.x));
    float _1792 = ((((mix(_1937.x, _1937.y, _1890.y) - 0.5) * _1351.fadeParameters[_1628]._noiseInvSizeAndLevel.w) + ((length((_positionWS.xyz - _fadeData2.xyz) * _fadeData3.xyz) - 0.5) * _1351.fadeParameters[_1628]._baseLevel)) + 0.5) - _fadeData2.w;
    float _3622;
    if (_1351.fadeParameters[_1628]._isInverted != 0)
    {
        _3622 = -_1792;
    }
    else
    {
        _3622 = _1792;
    }
    if (_3622 < 0.0)
    {
        discard;
    }
    float _1756 = _3622 * _1351.fadeParameters[_1628]._edgeWidthInvWidth.y;
    float _1759 = 1.0 - clamp(_1756, 0.0, 1.0);
    vec4 _1775 = mix(_1351.fadeParameters[_1628]._innerEdgeColor, _1351.fadeParameters[_1628]._outerEdgeColor, vec4(_1759 * _1759));
    vec4 _1657 = texture(originalTexture, _texCoord01.xy);
    vec4 _3626;
    float _3627;
    if (_color.w <= 0.0)
    {
        float _2129 = _1657.x;
        float _3623;
        if (_2129 <= 0.040449999272823333740234375)
        {
            _3623 = _2129 * 0.077399380505084991455078125;
        }
        else
        {
            _3623 = pow((_2129 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        float _2132 = _1657.y;
        float _3624;
        if (_2132 <= 0.040449999272823333740234375)
        {
            _3624 = _2132 * 0.077399380505084991455078125;
        }
        else
        {
            _3624 = pow((_2132 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        float _2135 = _1657.z;
        float _3625;
        if (_2135 <= 0.040449999272823333740234375)
        {
            _3625 = _2135 * 0.077399380505084991455078125;
        }
        else
        {
            _3625 = pow((_2135 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        _3627 = -_color.w;
        _3626 = vec4(_3623, _3624, _3625, _1657.w);
    }
    else
    {
        _3627 = _color.w;
        _3626 = _1657;
    }
    float _1676 = _3627 * _3626.w;
    vec3 _1691 = normalize(_normalWS);
    vec4 _2254 = _cameraBlock._camera._viewInverse * vec4(_positionES.xyz, 1.0);
    float _2256 = _2254.y;
    vec3 _2258 = vec3(_2254.x, _2256, _2254.z);
    vec3 _2265 = normalize(_cameraBlock._camera._viewInverse[3].xyz - _2258);
    float _2415 = mix(0.00999999977648258209228515625, 1.0, 0.89999997615814208984375);
    float _2421 = _2415 * _2415;
    float _2427 = _2421 * _2421;
    float _2432 = clamp(dot(_1691, _2265), 0.0, 1.0);
    float _2453 = 1.0 - _2427;
    vec4 _2484 = _513.lightAmbient.transform * vec4(_1691, 0.0);
    vec3 _2563 = max(vec3(1.0 - _2415), vec3(0.0)) * pow(1.0 - _2432, 5.0);
    vec4 _2574 = _513.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875;
    float _2576 = _2484.x;
    float _2581 = _2484.y;
    vec4 _2589 = _513.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625;
    float _2591 = _2484.z;
    vec4 _2599 = _513.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375;
    vec4 _2603 = _513.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625;
    vec3 _2517 = -reflect((_513.lightAmbient.transform * vec4(_2265, 0.0)).xyz, _2484.xyz);
    vec3 _3628;
    if (_513.lightAmbient._ambient.y > 0.0)
    {
        _3628 = textureLod(skyboxMap, _2517, max(max(_513.lightAmbient._ambient.y - (12.0 / (1.0 + (11.0 * _2415))), 0.0), textureQueryLod(skyboxMap, _2517).x)).xyz;
    }
    else
    {
        float _2724 = _2517.x;
        float _2729 = _2517.y;
        float _2739 = _2517.z;
        _3628 = ((((((_2574 * ((_2724 * _2724) - (_2729 * _2729))) + ((_2589 * _2739) * _2739)) + _2599) - _2603) + (((((_513.lightAmbient._ambientSphere.L2m2 * _2724) * _2729) + ((_513.lightAmbient._ambientSphere.L21 * _2724) * _2739)) + ((_513.lightAmbient._ambientSphere.L2m1 * _2729) * _2739)) * 0.85808598995208740234375)) + ((((_513.lightAmbient._ambientSphere.L11 * _2724) + (_513.lightAmbient._ambientSphere.L1m1 * _2729)) + (_513.lightAmbient._ambientSphere.L10 * _2739)) * 1.02332794666290283203125)).xyz;
    }
    vec3 _2523 = _3628 * _2563;
    vec3 _2534 = mix(vec3(1.0), _color.xyz * _3626.xyz, vec3(_306.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
    float _2539 = (mix(1.0, 1.0, _306.lightingModel._ShowContourObscuranceWireframe.y) * _513.lightAmbient._ambient.x) * _306.lightingModel._AmbientDirectionalPointSpot.x;
    vec3 _2832 = -_489.light.volume.directionSpotCos.xyz;
    vec3 _2863 = normalize(_2265 + _2832);
    vec3 _3604 = _3670;
    _3604.x = dot(_1691, _2863);
    vec3 _3606 = _3604;
    _3606.y = dot(_1691, _2832);
    vec3 _3608 = _3606;
    _3608.z = dot(_2863, _2832);
    vec3 _2884 = clamp(_3608, vec3(0.0), vec3(1.0));
    float _2886 = _2884.x;
    float _2889 = _2884.y;
    float _2954 = 1.0 - _2884.z;
    float _2957 = _2954 * _2954;
    float _2962 = (_2954 * _2957) * _2957;
    float _2985 = ((_2886 * _2886) * (_2427 - 1.0)) + 1.0;
    float _2941 = _2889 * (1.0 - _2962);
    vec3 _2845 = ((_489.light.irradiance.colorIntensity.xyz * _489.light.irradiance.colorIntensity.w) * 1.0) * _306.lightingModel._AmbientDirectionalPointSpot.y;
    vec3 _2312 = (((((_1775.xyz * step(_1756, 1.0)) * _1775.w) * _306.lightingModel._UnlitEmissiveLightmapBackground.y) + (((((vec3(1.0) - _2563) * 1.0) * ((((((_2574 * ((_2576 * _2576) - (_2581 * _2581))) + ((_2589 * _2591) * _2591)) + _2599) - _2603) + (((((_513.lightAmbient._ambientSphere.L2m2 * _2576) * _2581) + ((_513.lightAmbient._ambientSphere.L21 * _2576) * _2591)) + ((_513.lightAmbient._ambientSphere.L2m1 * _2581) * _2591)) * 0.85808598995208740234375)) + ((((_513.lightAmbient._ambientSphere.L11 * _2576) + (_513.lightAmbient._ambientSphere.L1m1 * _2581)) + (_513.lightAmbient._ambientSphere.L10 * _2591)) * 1.02332794666290283203125)).xyz) * _2534) * (_2539 * _306.lightingModel._ScatteringDiffuseSpecularAlbedo.y))) + ((vec3(_2941) * _2534) * (_2845 * _306.lightingModel._ScatteringDiffuseSpecularAlbedo.y))) + (((_2523 * (_2539 * _306.lightingModel._ScatteringDiffuseSpecularAlbedo.z)) + (vec4((vec3(_2962) * (_2427 / ((_2985 * _2985) * ((_2432 + sqrt(_2427 + ((_2432 * _2432) * _2453))) * (_2889 + sqrt(_2427 + ((_2889 * _2889) * _2453))))))) * _2889, _2941).xyz * (_2845 * _306.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) / vec3(_1676));
    bool _2314 = _306.lightingModel._HazeBloomSkinningBlendshape.x > 0.0;
    bool _2321;
    if (_2314)
    {
        _2321 = (_775.hazeParams.hazeMode & 1) == 1;
    }
    else
    {
        _2321 = _2314;
    }
    vec3 _3656;
    if (_2321)
    {
        float _3060 = length(_positionES.xyz);
        vec4 _3068 = vec4(_775.hazeParams.hazeColor, 1.0);
        vec4 _3642;
        if ((_775.hazeParams.hazeMode & 16) == 16)
        {
            _3642 = mix(_3068, vec4(_775.hazeParams.hazeGlareColor, 1.0), vec4(min(1.0, pow(max(0.0, dot(normalize(_2258 - _cameraBlock._camera._viewInverse[3].xyz), _2832)), _775.hazeParams.hazeGlareBlend))));
        }
        else
        {
            _3642 = _3068;
        }
        vec4 _3645;
        if ((_775.hazeParams.hazeMode & 8) == 8)
        {
            vec3 _3123 = (_775.hazeParams.colorModulationFactor * exp((-_775.hazeParams.hazeHeightFactor) * (_cameraBlock._camera._viewInverse[3].y - _775.hazeParams.hazeBaseReference))) * _3060;
            float _3127 = _2256 - _cameraBlock._camera._viewInverse[3].y;
            vec3 _3644;
            if (abs(_3127) > 0.00999999977648258209228515625)
            {
                float _3136 = _775.hazeParams.hazeHeightFactor * _3127;
                _3644 = _3123 * ((1.0 - exp(-_3136)) / _3136);
            }
            else
            {
                _3644 = _3123;
            }
            _3645 = vec4(1.0, 1.0, 1.0, (vec3(1.0) - exp(-_3644)).x);
        }
        else
        {
            vec4 _3646;
            if ((_775.hazeParams.hazeMode & 2) != 2)
            {
                _3646 = vec4(_3642.xyz, 1.0 - exp((-_3060) * _775.hazeParams.hazeRangeFactor));
            }
            else
            {
                float _3188 = (_775.hazeParams.hazeRangeFactor * exp((-_775.hazeParams.hazeHeightFactor) * (_cameraBlock._camera._viewInverse[3].y - _775.hazeParams.hazeBaseReference))) * _3060;
                float _3192 = _2256 - _cameraBlock._camera._viewInverse[3].y;
                float _3639;
                if (abs(_3192) > 0.00999999977648258209228515625)
                {
                    float _3201 = _775.hazeParams.hazeHeightFactor * _3192;
                    float _3640;
                    if (abs(_3201) > 1.0000000116860974230803549289703e-07)
                    {
                        _3640 = _3188 * ((1.0 - exp(-_3201)) / _3201);
                    }
                    else
                    {
                        _3640 = _3188;
                    }
                    _3639 = _3640;
                }
                else
                {
                    _3639 = _3188;
                }
                _3646 = vec4(_3642.xyz, 1.0 - exp(-_3639));
            }
            _3645 = _3646;
        }
        vec4 _3647;
        if (_3060 > 27000.0)
        {
            vec4 _3620 = _3645;
            _3620.w = _3645.w * _775.hazeParams.backgroundBlend;
            _3647 = _3620;
        }
        else
        {
            _3647 = _3645;
        }
        _3656 = mix(_2312, _3647.xyz, vec3(_3647.w));
    }
    else
    {
        _3656 = _2312;
    }
    _fragColor0 = vec4(_3656, _1676);
}

