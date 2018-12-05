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

struct FrustumGrid
{
    float frustumNear;
    float rangeNear;
    float rangeFar;
    float frustumFar;
    ivec3 dims;
    float spare;
    mat4 eyeToGridProj;
    mat4 worldToEyeMat;
    mat4 eyeToWorldMat;
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

struct FadeObjectParams
{
    vec4 noiseOffset;
    vec4 baseOffset;
    vec4 baseInvSize;
    int category;
    float threshold;
};

layout(std140) uniform materialBuffer
{
    Material _mat;
    TexMapArray _texMapArray;
} _469;

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _765;

layout(std140) uniform frustumGridBuffer
{
    FrustumGrid frustumGrid;
} _1429;

layout(std140) uniform clusterGridBuffer
{
    ivec4 _clusterGridTable[4096];
} _1550;

layout(std140) uniform clusterContentBuffer
{
    ivec4 _clusterGridContent[4096];
} _1586;

layout(std140) uniform lightBuffer
{
    Light lightArray[256];
} _1647;

layout(std140) uniform keyLightBuffer
{
    Light light;
} _2002;

layout(std140) uniform lightAmbientBuffer
{
    LightAmbient lightAmbient;
} _2025;

layout(std140) uniform hazeBuffer
{
    HazeParams hazeParams;
} _2067;

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera[2];
} _cameraBlock;

layout(std140) uniform fadeParametersBuffer
{
    FadeParameters fadeParameters[5];
} _2645;

layout(std140) uniform fadeObjectParametersBuffer
{
    FadeObjectParams fadeObjectParams;
} _2913;

uniform samplerCube skyboxMap;
uniform sampler2D albedoMap;
uniform sampler2D roughnessMap;
uniform sampler2D metallicMap;
uniform sampler2D emissiveMap;
uniform sampler2D occlusionMap;
uniform sampler2D fadeMaskMap;

layout(location = 8) flat in int _stereoSide;
layout(location = 2) in vec4 _positionWS;
layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 7) in vec4 _positionES;
layout(location = 3) in vec3 _normalWS;
layout(location = 0) out vec4 _fragColor;

ivec3 _7468;
float _8229;
vec3 _8230;

void main()
{
    vec3 _3408 = (_positionWS.xyz * _2645.fadeParameters[_2913.fadeObjectParams.category]._noiseInvSizeAndLevel.xyz) + _2913.fadeObjectParams.noiseOffset.xyz;
    vec3 _3410 = floor(_3408);
    vec3 _3412 = fract(_3408);
    vec3 _3420 = (_3412 * _3412) * (vec3(3.0) - (_3412 * 2.0));
    vec3 _3424 = _3410 + vec3(0.0, 1.0, 0.0);
    vec3 _3427 = _3410 + vec3(1.0, 0.0, 0.0);
    vec3 _3430 = _3410 + vec3(1.0, 1.0, 0.0);
    vec3 _3433 = _3410 + vec3(0.0, 0.0, 1.0);
    vec3 _3436 = _3410 + vec3(0.0, 1.0, 1.0);
    vec3 _3439 = _3410 + vec3(1.0, 0.0, 1.0);
    vec3 _3442 = _3410 + vec3(1.0);
    vec4 _3459 = mix(vec4(pow(textureLod(fadeMaskMap, (_3410.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3410.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3424.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3424.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3427.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3427.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3430.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3430.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(pow(textureLod(fadeMaskMap, (_3433.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3433.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3436.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3436.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3439.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3439.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3442.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3442.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(_3420.z));
    vec2 _3467 = mix(_3459.xy, _3459.zw, vec2(_3420.x));
    float _3322 = ((((mix(_3467.x, _3467.y, _3420.y) - 0.5) * _2645.fadeParameters[_2913.fadeObjectParams.category]._noiseInvSizeAndLevel.w) + ((length((_positionWS.xyz - _2913.fadeObjectParams.baseOffset.xyz) * _2913.fadeObjectParams.baseInvSize.xyz) - 0.5) * _2645.fadeParameters[_2913.fadeObjectParams.category]._baseLevel)) + 0.5) - _2913.fadeObjectParams.threshold;
    float _7435;
    if (_2645.fadeParameters[_2913.fadeObjectParams.category]._isInverted != 0)
    {
        _7435 = -_3322;
    }
    else
    {
        _7435 = _3322;
    }
    if (_7435 < 0.0)
    {
        discard;
    }
    float _3286 = _7435 * _2645.fadeParameters[_2913.fadeObjectParams.category]._edgeWidthInvWidth.y;
    float _3289 = 1.0 - clamp(_3286, 0.0, 1.0);
    vec4 _3305 = mix(_2645.fadeParameters[_2913.fadeObjectParams.category]._innerEdgeColor, _2645.fadeParameters[_2913.fadeObjectParams.category]._outerEdgeColor, vec4(_3289 * _3289));
    int _3659 = floatBitsToInt(_469._mat._keySpare3.x);
    vec4 _7436;
    if ((_3659 & 1216) != 0)
    {
        _7436 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _7436 = vec4(1.0);
    }
    bool _2964 = (_3659 & 4096) != 0;
    float _7437;
    if (_2964)
    {
        _7437 = texture(roughnessMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _7437 = 1.0;
    }
    bool _2978 = (_3659 & 2048) != 0;
    float _7438;
    if (_2978)
    {
        _7438 = texture(metallicMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _7438 = 0.0;
    }
    bool _2992 = (_3659 & 512) != 0;
    vec3 _7439;
    if (_2992)
    {
        _7439 = texture(emissiveMap, _texCoord01.xy, -1.0).xyz;
    }
    else
    {
        _7439 = vec3(0.0);
    }
    float _7440;
    if ((_3659 & 16384) != 0)
    {
        _7440 = texture(occlusionMap, _texCoord01.zw).x;
    }
    else
    {
        _7440 = 1.0;
    }
    float _7442;
    if ((_3659 & 192) != 0)
    {
        float _7441;
        if ((_3659 & 64) != 0)
        {
            _7441 = step(0.5, _7436.w);
        }
        else
        {
            _7441 = _7436.w;
        }
        _7442 = _7441;
    }
    else
    {
        _7442 = 1.0;
    }
    float _3049 = _7442 * (_469._mat._emissiveOpacity.w * _color.w);
    if (_3049 < 1.0)
    {
        discard;
    }
    bvec3 _3063 = bvec3((_3659 & 4) != 0);
    vec3 _3064 = vec3(_3063.x ? _469._mat._albedoRoughness.xyz.x : vec3(1.0).x, _3063.y ? _469._mat._albedoRoughness.xyz.y : vec3(1.0).y, _3063.z ? _469._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _7445;
    if ((_3659 & 1024) != 0)
    {
        _7445 = _3064 * _7436.xyz;
    }
    else
    {
        _7445 = _3064;
    }
    vec3 _3078 = _7445 * _color.xyz;
    float _3088 = _2964 ? _7437 : _469._mat._albedoRoughness.w;
    float _3098 = _2978 ? _7438 : _469._mat._metallicScatteringSpare2.x;
    vec3 _3701 = mix(vec3(0.02999999932944774627685546875), _3078, vec3(_3098));
    bvec3 _3114 = bvec3(_2992);
    vec3 _3115 = vec3(_3114.x ? _7439.x : _469._mat._emissiveOpacity.xyz.x, _3114.y ? _7439.y : _469._mat._emissiveOpacity.xyz.y, _3114.z ? _7439.z : _469._mat._emissiveOpacity.xyz.z);
    vec3 _3129 = normalize(_normalWS);
    vec3 _3140 = normalize(_cameraBlock._camera[_stereoSide]._viewInverse[3].xyz - _positionWS.xyz);
    float _3735 = mix(0.00999999977648258209228515625, 1.0, _3088);
    float _3741 = _3735 * _3735;
    float _3747 = _3741 * _3741;
    float _3752 = clamp(dot(_3129, _3140), 0.0, 1.0);
    float _3773 = 1.0 - _3747;
    float _3777 = _3752 + sqrt(_3747 + ((_3752 * _3752) * _3773));
    vec4 _3782 = _1429.frustumGrid.worldToEyeMat * _positionWS;
    float _3799 = _3782.z;
    float _7446;
    if (_3799 > 0.0)
    {
        _7446 = -_3799;
    }
    else
    {
        _7446 = _3799;
    }
    float _3896 = _7446 * _1429.frustumGrid.eyeToGridProj[2].x;
    float _3907 = _7446 * _1429.frustumGrid.eyeToGridProj[2].y;
    float _3919 = -_7446;
    vec4 _3925 = vec4((_3782.x * _1429.frustumGrid.eyeToGridProj[0].x) + _3896, (_3782.y * _1429.frustumGrid.eyeToGridProj[1].y) + _3907, _8229, _3919) / vec4(_3919);
    vec3 _3957 = vec3(0.5 * (_3925.x + 1.0), 0.5 * (_3925.y + 1.0), log2(((_3919 - _1429.frustumGrid.rangeNear) / (_1429.frustumGrid.rangeFar - _1429.frustumGrid.rangeNear)) + 1.0)) * vec3(_1429.frustumGrid.dims);
    float _3827 = float(_1429.frustumGrid.dims.z);
    vec3 _7448;
    if (_3957.z >= _3827)
    {
        vec3 _7288 = _3957;
        _7288.z = _3827;
        _7448 = _7288;
    }
    else
    {
        _7448 = _3957;
    }
    vec3 _3836 = floor(_7448);
    ivec3 _3837 = ivec3(_3836);
    bool _3843 = _3799 > (-_1429.frustumGrid.frustumNear);
    bool _3853;
    if (!_3843)
    {
        _3853 = _3799 < (-_1429.frustumGrid.frustumFar);
    }
    else
    {
        _3853 = _3843;
    }
    ivec3 _7455;
    if (_3853)
    {
        _7455 = ivec3(_3837.xy, -2);
    }
    else
    {
        _7455 = _7468;
    }
    bool _8233 = _3853 ? true : false;
    ivec3 _7454;
    if (!_8233)
    {
        bool _3869 = _3799 > (-_1429.frustumGrid.rangeNear);
        ivec3 _7470;
        if (_3869)
        {
            _7470 = ivec3(_3837.xy, -1);
        }
        else
        {
            _7470 = _7455;
        }
        bvec3 _8235 = bvec3(_3869 ? true : _8233);
        _7454 = ivec3(_8235.x ? _7470.x : _3837.x, _8235.y ? _7470.y : _3837.y, _8235.z ? _7470.z : _3837.z);
    }
    else
    {
        _7454 = _7455;
    }
    int _3977 = _7454.x + ((_7454.y + (_7454.z * _1429.frustumGrid.dims.y)) * _1429.frustumGrid.dims.x);
    int _3991 = 255 & (_1550._clusterGridTable[_3977 / 4][_3977 % 4] >> 16);
    int _3996 = 65535 & _1550._clusterGridTable[_3977 / 4][_3977 % 4];
    int _3170 = _3991 + (255 & (_1550._clusterGridTable[_3977 / 4][_3977 % 4] >> 24));
    bool _4003 = _3170 > 0;
    bool _4009;
    if (_4003)
    {
        _4009 = all(greaterThanEqual(_7454, ivec3(0)));
    }
    else
    {
        _4009 = _4003;
    }
    bool _4018;
    if (_4009)
    {
        _4018 = all(lessThan(_7454.xy, _1429.frustumGrid.dims.xy));
    }
    else
    {
        _4018 = _4009;
    }
    bool _4026;
    if (_4018)
    {
        _4026 = _7454.z <= _1429.frustumGrid.dims.z;
    }
    else
    {
        _4026 = _4018;
    }
    vec4 _7506;
    if (_4026)
    {
        vec3 _7495;
        vec3 _7497;
        _7497 = vec3(0.0);
        _7495 = vec3(0.0);
        vec3 _7868;
        vec3 _7870;
        for (int _7492 = 0; _7492 < _3991; _7497 = _7870, _7495 = _7868, _7492++)
        {
            int _4358 = _3996 + _7492;
            int _4360 = _4358 >> 1;
            int _7735;
            if ((_4358 & 1) == 1)
            {
                _7735 = _1586._clusterGridContent[_4360 / 4][_4360 % 4] >> 16;
            }
            else
            {
                _7735 = _1586._clusterGridContent[_4360 / 4][_4360 % 4];
            }
            vec3 _4406 = (_1647.lightArray[_7735 & 65535].volume.positionRadius.xyz - _positionWS.xyz).xyz;
            if (!(dot(_4406, _4406) <= (_1647.lightArray[_7735 & 65535].volume.positionRadius.w * _1647.lightArray[_7735 & 65535].volume.positionRadius.w)))
            {
                _7870 = _7497;
                _7868 = _7495;
                continue;
            }
            float _4147 = length(_4406);
            vec3 _4160 = (_4406 / vec3(_4147)).xyz;
            float _4161 = dot(_3129, _4160);
            if (_4161 < 0.0)
            {
                _7870 = _7497;
                _7868 = _7495;
                continue;
            }
            vec3 _4433 = normalize(_3140 + _4160);
            vec3 _7315 = _8230;
            _7315.x = dot(_3129, _4433);
            vec3 _7317 = _7315;
            _7317.y = _4161;
            vec3 _7319 = _7317;
            _7319.z = dot(_4433, _4160);
            vec3 _4454 = clamp(_7319, vec3(0.0), vec3(1.0));
            float _4456 = _4454.x;
            float _4459 = _4454.y;
            float _4478 = (_4147 / _1647.lightArray[_7735 & 65535].irradiance.attenuation.x) + 1.0;
            vec3 _4182 = (_1647.lightArray[_7735 & 65535].irradiance.colorIntensity.xyz * _1647.lightArray[_7735 & 65535].irradiance.colorIntensity.w) * ((1.0 / (_4478 * _4478)) * min(1.0, max(0.0, -(_4147 - _1647.lightArray[_7735 & 65535].irradiance.attenuation.y))));
            float _4866 = 1.0 - _4454.z;
            float _4869 = _4866 * _4866;
            float _4874 = (_4866 * _4869) * _4869;
            vec3 _4881 = vec3(_4874) + (_3701 * (1.0 - _4874));
            float _4897 = ((_4456 * _4456) * (_3747 - 1.0)) + 1.0;
            float _4853 = ((1.0 - _3098) * _4459) * (1.0 - _4881.x);
            _7870 = _7497 + (vec4((_4881 * (_3747 / ((_4897 * _4897) * (_3777 * (_4459 + sqrt(_3747 + ((_4459 * _4459) * _3773))))))) * _4459, _4853).xyz * _4182);
            _7868 = _7495 + ((vec3(_4853) * mix(vec3(1.0), _3078, vec3(_765.lightingModel._ScatteringDiffuseSpecularAlbedo.w))) * _4182);
            continue;
        }
        vec3 _7494;
        vec3 _7496;
        _7496 = _7497;
        _7494 = _7495;
        vec3 _7869;
        vec3 _7871;
        for (int _7493 = _3991; _7493 < _3170; _7496 = _7871, _7494 = _7869, _7493++)
        {
            int _4938 = _3996 + _7493;
            int _4940 = _4938 >> 1;
            int _7573;
            if ((_4938 & 1) == 1)
            {
                _7573 = _1586._clusterGridContent[_4940 / 4][_4940 % 4] >> 16;
            }
            else
            {
                _7573 = _1586._clusterGridContent[_4940 / 4][_4940 % 4];
            }
            vec3 _4986 = (_1647.lightArray[_7573 & 65535].volume.positionRadius.xyz - _positionWS.xyz).xyz;
            if (!(dot(_4986, _4986) <= (_1647.lightArray[_7573 & 65535].volume.positionRadius.w * _1647.lightArray[_7573 & 65535].volume.positionRadius.w)))
            {
                _7871 = _7496;
                _7869 = _7494;
                continue;
            }
            float _4243 = length(_4986);
            vec3 _4256 = (_4986 / vec3(_4243)).xyz;
            float _4257 = dot(_3129, _4256);
            if (_4257 < 0.0)
            {
                _7871 = _7496;
                _7869 = _7494;
                continue;
            }
            float _5015 = max(-dot(_4256, _1647.lightArray[_7573 & 65535].volume.directionSpotCos.xyz), 0.0);
            if (!(_5015 >= _1647.lightArray[_7573 & 65535].volume.directionSpotCos.w))
            {
                _7871 = _7496;
                _7869 = _7494;
                continue;
            }
            vec3 _5034 = normalize(_3140 + _4256);
            vec3 _7354 = _8230;
            _7354.x = dot(_3129, _5034);
            vec3 _7356 = _7354;
            _7356.y = _4257;
            vec3 _7358 = _7356;
            _7358.z = dot(_5034, _4256);
            vec3 _5055 = clamp(_7358, vec3(0.0), vec3(1.0));
            float _5057 = _5055.x;
            float _5060 = _5055.y;
            float _5079 = (_4243 / _1647.lightArray[_7573 & 65535].irradiance.attenuation.x) + 1.0;
            vec3 _4292 = (_1647.lightArray[_7573 & 65535].irradiance.colorIntensity.xyz * _1647.lightArray[_7573 & 65535].irradiance.colorIntensity.w) * (((1.0 / (_5079 * _5079)) * min(1.0, max(0.0, -(_4243 - _1647.lightArray[_7573 & 65535].irradiance.attenuation.y)))) * pow(_5015, _1647.lightArray[_7573 & 65535].irradiance.attenuation.z));
            float _5476 = 1.0 - _5055.z;
            float _5479 = _5476 * _5476;
            float _5484 = (_5476 * _5479) * _5479;
            vec3 _5491 = vec3(_5484) + (_3701 * (1.0 - _5484));
            float _5507 = ((_5057 * _5057) * (_3747 - 1.0)) + 1.0;
            float _5463 = ((1.0 - _3098) * _5060) * (1.0 - _5491.x);
            _7871 = _7496 + (vec4((_5491 * (_3747 / ((_5507 * _5507) * (_3777 * (_5060 + sqrt(_3747 + ((_5060 * _5060) * _3773))))))) * _5060, _5463).xyz * _4292);
            _7869 = _7494 + ((vec3(_5463) * mix(vec3(1.0), _3078, vec3(_765.lightingModel._ScatteringDiffuseSpecularAlbedo.w))) * _4292);
            continue;
        }
        vec3 _4345 = (_7494 * _765.lightingModel._ScatteringDiffuseSpecularAlbedo.y).xyz + ((_7496 * _765.lightingModel._ScatteringDiffuseSpecularAlbedo.z) / vec3(_3049));
        _7506 = vec4(_4345.x, _4345.y, _4345.z, vec4(0.0).w);
    }
    else
    {
        _7506 = vec4(0.0);
    }
    vec4 _5751 = _2025.lightAmbient.transform * vec4(_3129, 0.0);
    vec3 _5831 = _3701 + ((max(vec3(1.0 - _3735), _3701) - _3701) * pow(1.0 - _3752, 5.0));
    float _5771 = 1.0 - _3098;
    vec4 _5841 = _2025.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875;
    float _5843 = _5751.x;
    float _5848 = _5751.y;
    vec4 _5856 = _2025.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625;
    float _5858 = _5751.z;
    vec4 _5866 = _2025.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375;
    vec4 _5870 = _2025.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625;
    vec3 _5784 = -reflect((_2025.lightAmbient.transform * vec4(_3140, 0.0)).xyz, _5751.xyz);
    vec3 _7517;
    if (_2025.lightAmbient._ambient.y > 0.0)
    {
        _7517 = textureLod(skyboxMap, _5784, max(max(_2025.lightAmbient._ambient.y - (12.0 / (1.0 + (11.0 * _3735))), 0.0), textureQueryLod(skyboxMap, _5784).x)).xyz;
    }
    else
    {
        float _5990 = _5784.x;
        float _5995 = _5784.y;
        float _6005 = _5784.z;
        _7517 = ((((((_5841 * ((_5990 * _5990) - (_5995 * _5995))) + ((_5856 * _6005) * _6005)) + _5866) - _5870) + (((((_2025.lightAmbient._ambientSphere.L2m2 * _5990) * _5995) + ((_2025.lightAmbient._ambientSphere.L21 * _5990) * _6005)) + ((_2025.lightAmbient._ambientSphere.L2m1 * _5995) * _6005)) * 0.85808598995208740234375)) + ((((_2025.lightAmbient._ambientSphere.L11 * _5990) + (_2025.lightAmbient._ambientSphere.L1m1 * _5995)) + (_2025.lightAmbient._ambientSphere.L10 * _6005)) * 1.02332794666290283203125)).xyz;
    }
    vec3 _5790 = _7517 * _5831;
    float _5793 = mix(1.0, _7440, _765.lightingModel._ShowContourObscuranceWireframe.y);
    vec3 _5801 = mix(vec3(1.0), _3078, vec3(_765.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
    float _5806 = (_5793 * _2025.lightAmbient._ambient.x) * _765.lightingModel._AmbientDirectionalPointSpot.x;
    vec3 _6098 = -_2002.light.volume.directionSpotCos.xyz;
    vec3 _6129 = normalize(_3140 + _6098);
    vec3 _7417 = _8230;
    _7417.x = dot(_3129, _6129);
    vec3 _7419 = _7417;
    _7419.y = dot(_3129, _6098);
    vec3 _7421 = _7419;
    _7421.z = dot(_6129, _6098);
    vec3 _6150 = clamp(_7421, vec3(0.0), vec3(1.0));
    float _6152 = _6150.x;
    float _6155 = _6150.y;
    float _6220 = 1.0 - _6150.z;
    float _6223 = _6220 * _6220;
    float _6228 = (_6220 * _6223) * _6223;
    vec3 _6235 = vec3(_6228) + (_3701 * (1.0 - _6228));
    float _6251 = ((_6152 * _6152) * (_3747 - 1.0)) + 1.0;
    float _6207 = (_5771 * _6155) * (1.0 - _6235.x);
    vec3 _6111 = ((_2002.light.irradiance.colorIntensity.xyz * _2002.light.irradiance.colorIntensity.w) * 1.0) * _765.lightingModel._AmbientDirectionalPointSpot.y;
    vec3 _5631 = ((_7506.xyz + ((_3115 + ((_3305.xyz * step(_3286, 1.0)) * _3305.w)) * _765.lightingModel._UnlitEmissiveLightmapBackground.y)) + ((((((vec3(1.0) - _5831) * _5771) * ((((((_5841 * ((_5843 * _5843) - (_5848 * _5848))) + ((_5856 * _5858) * _5858)) + _5866) - _5870) + (((((_2025.lightAmbient._ambientSphere.L2m2 * _5843) * _5848) + ((_2025.lightAmbient._ambientSphere.L21 * _5843) * _5858)) + ((_2025.lightAmbient._ambientSphere.L2m1 * _5848) * _5858)) * 0.85808598995208740234375)) + ((((_2025.lightAmbient._ambientSphere.L11 * _5843) + (_2025.lightAmbient._ambientSphere.L1m1 * _5848)) + (_2025.lightAmbient._ambientSphere.L10 * _5858)) * 1.02332794666290283203125)).xyz) * _5801) * (_5806 * _765.lightingModel._ScatteringDiffuseSpecularAlbedo.y)) + ((vec3(_6207) * _5801) * (_6111 * _765.lightingModel._ScatteringDiffuseSpecularAlbedo.y)))) + (((_5790 * (_5806 * _765.lightingModel._ScatteringDiffuseSpecularAlbedo.z)) + (vec4((_6235 * (_3747 / ((_6251 * _6251) * (_3777 * (_6155 + sqrt(_3747 + ((_6155 * _6155) * _3773))))))) * _6155, _6207).xyz * (_6111 * _765.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) / vec3(_3049));
    bool _5633 = _765.lightingModel._HazeBloomSkinningBlendshape.x > 0.0;
    bool _5640;
    if (_5633)
    {
        _5640 = (_2067.hazeParams.hazeMode & 1) == 1;
    }
    else
    {
        _5640 = _5633;
    }
    vec3 _7562;
    if (_5640)
    {
        float _6326 = length(_positionES.xyz);
        vec4 _6334 = vec4(_2067.hazeParams.hazeColor, 1.0);
        vec4 _7548;
        if ((_2067.hazeParams.hazeMode & 16) == 16)
        {
            _7548 = mix(_6334, vec4(_2067.hazeParams.hazeGlareColor, 1.0), vec4(min(1.0, pow(max(0.0, dot(normalize(_positionWS.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz), _6098)), _2067.hazeParams.hazeGlareBlend))));
        }
        else
        {
            _7548 = _6334;
        }
        vec4 _7551;
        if ((_2067.hazeParams.hazeMode & 8) == 8)
        {
            vec3 _6389 = (_2067.hazeParams.colorModulationFactor * exp((-_2067.hazeParams.hazeHeightFactor) * (_cameraBlock._camera[_stereoSide]._viewInverse[3].y - _2067.hazeParams.hazeBaseReference))) * _6326;
            float _6393 = _positionWS.y - _cameraBlock._camera[_stereoSide]._viewInverse[3].y;
            vec3 _7550;
            if (abs(_6393) > 0.00999999977648258209228515625)
            {
                float _6402 = _2067.hazeParams.hazeHeightFactor * _6393;
                _7550 = _6389 * ((1.0 - exp(-_6402)) / _6402);
            }
            else
            {
                _7550 = _6389;
            }
            _7551 = vec4(1.0, 1.0, 1.0, (vec3(1.0) - exp(-_7550)).x);
        }
        else
        {
            vec4 _7552;
            if ((_2067.hazeParams.hazeMode & 2) != 2)
            {
                _7552 = vec4(_7548.xyz, 1.0 - exp((-_6326) * _2067.hazeParams.hazeRangeFactor));
            }
            else
            {
                float _6454 = (_2067.hazeParams.hazeRangeFactor * exp((-_2067.hazeParams.hazeHeightFactor) * (_cameraBlock._camera[_stereoSide]._viewInverse[3].y - _2067.hazeParams.hazeBaseReference))) * _6326;
                float _6458 = _positionWS.y - _cameraBlock._camera[_stereoSide]._viewInverse[3].y;
                float _7545;
                if (abs(_6458) > 0.00999999977648258209228515625)
                {
                    float _6467 = _2067.hazeParams.hazeHeightFactor * _6458;
                    float _7546;
                    if (abs(_6467) > 1.0000000116860974230803549289703e-07)
                    {
                        _7546 = _6454 * ((1.0 - exp(-_6467)) / _6467);
                    }
                    else
                    {
                        _7546 = _6454;
                    }
                    _7545 = _7546;
                }
                else
                {
                    _7545 = _6454;
                }
                _7552 = vec4(_7548.xyz, 1.0 - exp(-_7545));
            }
            _7551 = _7552;
        }
        vec4 _7553;
        if (_6326 > 27000.0)
        {
            vec4 _7433 = _7551;
            _7433.w = _7551.w * _2067.hazeParams.backgroundBlend;
            _7553 = _7433;
        }
        else
        {
            _7553 = _7551;
        }
        _7562 = mix(_5631, _7553.xyz, vec3(_7553.w));
    }
    else
    {
        _7562 = _5631;
    }
    _fragColor = vec4(_7562, _3049);
}

