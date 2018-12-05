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
    _TransformCamera _camera[2];
} _cameraBlock;

layout(std140) uniform fadeParametersBuffer
{
    FadeParameters fadeParameters[5];
} _1355;

uniform samplerCube skyboxMap;
uniform sampler2D fadeMaskMap;
uniform sampler2D originalTexture;

layout(location = 8) flat in int _stereoSide;
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

vec3 _3675;

void main()
{
    int _1632 = int(_fadeData1.w);
    vec3 _1882 = (_positionWS.xyz * _1355.fadeParameters[_1632]._noiseInvSizeAndLevel.xyz) + _fadeData1.xyz;
    vec3 _1884 = floor(_1882);
    vec3 _1886 = fract(_1882);
    vec3 _1894 = (_1886 * _1886) * (vec3(3.0) - (_1886 * 2.0));
    vec3 _1898 = _1884 + vec3(0.0, 1.0, 0.0);
    vec3 _1901 = _1884 + vec3(1.0, 0.0, 0.0);
    vec3 _1904 = _1884 + vec3(1.0, 1.0, 0.0);
    vec3 _1907 = _1884 + vec3(0.0, 0.0, 1.0);
    vec3 _1910 = _1884 + vec3(0.0, 1.0, 1.0);
    vec3 _1913 = _1884 + vec3(1.0, 0.0, 1.0);
    vec3 _1916 = _1884 + vec3(1.0);
    vec4 _1933 = mix(vec4(pow(textureLod(fadeMaskMap, (_1884.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1884.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1898.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1898.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1901.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1901.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1904.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1904.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(pow(textureLod(fadeMaskMap, (_1907.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1907.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1910.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1910.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1913.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1913.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_1916.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_1916.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(_1894.z));
    vec2 _1941 = mix(_1933.xy, _1933.zw, vec2(_1894.x));
    float _1796 = ((((mix(_1941.x, _1941.y, _1894.y) - 0.5) * _1355.fadeParameters[_1632]._noiseInvSizeAndLevel.w) + ((length((_positionWS.xyz - _fadeData2.xyz) * _fadeData3.xyz) - 0.5) * _1355.fadeParameters[_1632]._baseLevel)) + 0.5) - _fadeData2.w;
    float _3627;
    if (_1355.fadeParameters[_1632]._isInverted != 0)
    {
        _3627 = -_1796;
    }
    else
    {
        _3627 = _1796;
    }
    if (_3627 < 0.0)
    {
        discard;
    }
    float _1760 = _3627 * _1355.fadeParameters[_1632]._edgeWidthInvWidth.y;
    float _1763 = 1.0 - clamp(_1760, 0.0, 1.0);
    vec4 _1779 = mix(_1355.fadeParameters[_1632]._innerEdgeColor, _1355.fadeParameters[_1632]._outerEdgeColor, vec4(_1763 * _1763));
    vec4 _1661 = texture(originalTexture, _texCoord01.xy);
    vec4 _3631;
    float _3632;
    if (_color.w <= 0.0)
    {
        float _2133 = _1661.x;
        float _3628;
        if (_2133 <= 0.040449999272823333740234375)
        {
            _3628 = _2133 * 0.077399380505084991455078125;
        }
        else
        {
            _3628 = pow((_2133 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        float _2136 = _1661.y;
        float _3629;
        if (_2136 <= 0.040449999272823333740234375)
        {
            _3629 = _2136 * 0.077399380505084991455078125;
        }
        else
        {
            _3629 = pow((_2136 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        float _2139 = _1661.z;
        float _3630;
        if (_2139 <= 0.040449999272823333740234375)
        {
            _3630 = _2139 * 0.077399380505084991455078125;
        }
        else
        {
            _3630 = pow((_2139 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        _3632 = -_color.w;
        _3631 = vec4(_3628, _3629, _3630, _1661.w);
    }
    else
    {
        _3632 = _color.w;
        _3631 = _1661;
    }
    float _1680 = _3632 * _3631.w;
    vec3 _1695 = normalize(_normalWS);
    vec4 _2259 = _cameraBlock._camera[_stereoSide]._viewInverse * vec4(_positionES.xyz, 1.0);
    float _2261 = _2259.y;
    vec3 _2263 = vec3(_2259.x, _2261, _2259.z);
    vec3 _2270 = normalize(_cameraBlock._camera[_stereoSide]._viewInverse[3].xyz - _2263);
    float _2420 = mix(0.00999999977648258209228515625, 1.0, 0.89999997615814208984375);
    float _2426 = _2420 * _2420;
    float _2432 = _2426 * _2426;
    float _2437 = clamp(dot(_1695, _2270), 0.0, 1.0);
    float _2458 = 1.0 - _2432;
    vec4 _2489 = _513.lightAmbient.transform * vec4(_1695, 0.0);
    vec3 _2568 = max(vec3(1.0 - _2420), vec3(0.0)) * pow(1.0 - _2437, 5.0);
    vec4 _2579 = _513.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875;
    float _2581 = _2489.x;
    float _2586 = _2489.y;
    vec4 _2594 = _513.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625;
    float _2596 = _2489.z;
    vec4 _2604 = _513.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375;
    vec4 _2608 = _513.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625;
    vec3 _2522 = -reflect((_513.lightAmbient.transform * vec4(_2270, 0.0)).xyz, _2489.xyz);
    vec3 _3633;
    if (_513.lightAmbient._ambient.y > 0.0)
    {
        _3633 = textureLod(skyboxMap, _2522, max(max(_513.lightAmbient._ambient.y - (12.0 / (1.0 + (11.0 * _2420))), 0.0), textureQueryLod(skyboxMap, _2522).x)).xyz;
    }
    else
    {
        float _2729 = _2522.x;
        float _2734 = _2522.y;
        float _2744 = _2522.z;
        _3633 = ((((((_2579 * ((_2729 * _2729) - (_2734 * _2734))) + ((_2594 * _2744) * _2744)) + _2604) - _2608) + (((((_513.lightAmbient._ambientSphere.L2m2 * _2729) * _2734) + ((_513.lightAmbient._ambientSphere.L21 * _2729) * _2744)) + ((_513.lightAmbient._ambientSphere.L2m1 * _2734) * _2744)) * 0.85808598995208740234375)) + ((((_513.lightAmbient._ambientSphere.L11 * _2729) + (_513.lightAmbient._ambientSphere.L1m1 * _2734)) + (_513.lightAmbient._ambientSphere.L10 * _2744)) * 1.02332794666290283203125)).xyz;
    }
    vec3 _2528 = _3633 * _2568;
    vec3 _2539 = mix(vec3(1.0), _color.xyz * _3631.xyz, vec3(_306.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
    float _2544 = (mix(1.0, 1.0, _306.lightingModel._ShowContourObscuranceWireframe.y) * _513.lightAmbient._ambient.x) * _306.lightingModel._AmbientDirectionalPointSpot.x;
    vec3 _2837 = -_489.light.volume.directionSpotCos.xyz;
    vec3 _2868 = normalize(_2270 + _2837);
    vec3 _3609 = _3675;
    _3609.x = dot(_1695, _2868);
    vec3 _3611 = _3609;
    _3611.y = dot(_1695, _2837);
    vec3 _3613 = _3611;
    _3613.z = dot(_2868, _2837);
    vec3 _2889 = clamp(_3613, vec3(0.0), vec3(1.0));
    float _2891 = _2889.x;
    float _2894 = _2889.y;
    float _2959 = 1.0 - _2889.z;
    float _2962 = _2959 * _2959;
    float _2967 = (_2959 * _2962) * _2962;
    float _2990 = ((_2891 * _2891) * (_2432 - 1.0)) + 1.0;
    float _2946 = _2894 * (1.0 - _2967);
    vec3 _2850 = ((_489.light.irradiance.colorIntensity.xyz * _489.light.irradiance.colorIntensity.w) * 1.0) * _306.lightingModel._AmbientDirectionalPointSpot.y;
    vec3 _2317 = (((((_1779.xyz * step(_1760, 1.0)) * _1779.w) * _306.lightingModel._UnlitEmissiveLightmapBackground.y) + (((((vec3(1.0) - _2568) * 1.0) * ((((((_2579 * ((_2581 * _2581) - (_2586 * _2586))) + ((_2594 * _2596) * _2596)) + _2604) - _2608) + (((((_513.lightAmbient._ambientSphere.L2m2 * _2581) * _2586) + ((_513.lightAmbient._ambientSphere.L21 * _2581) * _2596)) + ((_513.lightAmbient._ambientSphere.L2m1 * _2586) * _2596)) * 0.85808598995208740234375)) + ((((_513.lightAmbient._ambientSphere.L11 * _2581) + (_513.lightAmbient._ambientSphere.L1m1 * _2586)) + (_513.lightAmbient._ambientSphere.L10 * _2596)) * 1.02332794666290283203125)).xyz) * _2539) * (_2544 * _306.lightingModel._ScatteringDiffuseSpecularAlbedo.y))) + ((vec3(_2946) * _2539) * (_2850 * _306.lightingModel._ScatteringDiffuseSpecularAlbedo.y))) + (((_2528 * (_2544 * _306.lightingModel._ScatteringDiffuseSpecularAlbedo.z)) + (vec4((vec3(_2967) * (_2432 / ((_2990 * _2990) * ((_2437 + sqrt(_2432 + ((_2437 * _2437) * _2458))) * (_2894 + sqrt(_2432 + ((_2894 * _2894) * _2458))))))) * _2894, _2946).xyz * (_2850 * _306.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) / vec3(_1680));
    bool _2319 = _306.lightingModel._HazeBloomSkinningBlendshape.x > 0.0;
    bool _2326;
    if (_2319)
    {
        _2326 = (_775.hazeParams.hazeMode & 1) == 1;
    }
    else
    {
        _2326 = _2319;
    }
    vec3 _3661;
    if (_2326)
    {
        float _3065 = length(_positionES.xyz);
        vec4 _3073 = vec4(_775.hazeParams.hazeColor, 1.0);
        vec4 _3647;
        if ((_775.hazeParams.hazeMode & 16) == 16)
        {
            _3647 = mix(_3073, vec4(_775.hazeParams.hazeGlareColor, 1.0), vec4(min(1.0, pow(max(0.0, dot(normalize(_2263 - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz), _2837)), _775.hazeParams.hazeGlareBlend))));
        }
        else
        {
            _3647 = _3073;
        }
        vec4 _3650;
        if ((_775.hazeParams.hazeMode & 8) == 8)
        {
            vec3 _3128 = (_775.hazeParams.colorModulationFactor * exp((-_775.hazeParams.hazeHeightFactor) * (_cameraBlock._camera[_stereoSide]._viewInverse[3].y - _775.hazeParams.hazeBaseReference))) * _3065;
            float _3132 = _2261 - _cameraBlock._camera[_stereoSide]._viewInverse[3].y;
            vec3 _3649;
            if (abs(_3132) > 0.00999999977648258209228515625)
            {
                float _3141 = _775.hazeParams.hazeHeightFactor * _3132;
                _3649 = _3128 * ((1.0 - exp(-_3141)) / _3141);
            }
            else
            {
                _3649 = _3128;
            }
            _3650 = vec4(1.0, 1.0, 1.0, (vec3(1.0) - exp(-_3649)).x);
        }
        else
        {
            vec4 _3651;
            if ((_775.hazeParams.hazeMode & 2) != 2)
            {
                _3651 = vec4(_3647.xyz, 1.0 - exp((-_3065) * _775.hazeParams.hazeRangeFactor));
            }
            else
            {
                float _3193 = (_775.hazeParams.hazeRangeFactor * exp((-_775.hazeParams.hazeHeightFactor) * (_cameraBlock._camera[_stereoSide]._viewInverse[3].y - _775.hazeParams.hazeBaseReference))) * _3065;
                float _3197 = _2261 - _cameraBlock._camera[_stereoSide]._viewInverse[3].y;
                float _3644;
                if (abs(_3197) > 0.00999999977648258209228515625)
                {
                    float _3206 = _775.hazeParams.hazeHeightFactor * _3197;
                    float _3645;
                    if (abs(_3206) > 1.0000000116860974230803549289703e-07)
                    {
                        _3645 = _3193 * ((1.0 - exp(-_3206)) / _3206);
                    }
                    else
                    {
                        _3645 = _3193;
                    }
                    _3644 = _3645;
                }
                else
                {
                    _3644 = _3193;
                }
                _3651 = vec4(_3647.xyz, 1.0 - exp(-_3644));
            }
            _3650 = _3651;
        }
        vec4 _3652;
        if (_3065 > 27000.0)
        {
            vec4 _3625 = _3650;
            _3625.w = _3650.w * _775.hazeParams.backgroundBlend;
            _3652 = _3625;
        }
        else
        {
            _3652 = _3650;
        }
        _3661 = mix(_2317, _3652.xyz, vec3(_3652.w));
    }
    else
    {
        _3661 = _2317;
    }
    _fragColor0 = vec4(_3661, _1680);
}

