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

layout(std140) uniform deferredFrameTransformBuffer
{
    DeferredFrameTransform frameTransform;
} _49;

layout(std140) uniform cameraCorrectionBuffer
{
    CameraCorrection cameraCorrection;
} _59;

layout(std140) uniform lightAmbientBuffer
{
    LightAmbient lightAmbient;
} _179;

uniform samplerCube skyboxMap;

layout(location = 0) in vec2 varTexCoord0;
layout(location = 0) out vec4 _fragColor;

void main()
{
    vec2 _242 = ((varTexCoord0 * 2.0) - vec2(1.0)) * 1.02499997615814208984375;
    float _246 = dot(_242, _242);
    if (_246 > 1.05062496662139892578125)
    {
        discard;
    }
    float _261 = (1.0 - sqrt(_246)) * 40.0;
    float _270 = 1.0 - min(1.0, _261 * _261);
    vec4 _271 = vec4(0.0, 0.0, 0.0, _270);
    bool _273 = _246 > 1.0;
    if (_273)
    {
        _fragColor = _271;
    }
    if (!(_273 ? true : false))
    {
        float _285 = _242.x;
        vec4 _296 = (_49.frameTransform._viewInverse * _59.cameraCorrection._correctionInverse) * vec4(normalize(vec3(_285, _242.y, sqrt(1.0 - _246))), 0.0);
        float _297 = _296.x;
        float _298 = _296.y;
        float _299 = _296.z;
        vec3 _300 = vec3(_297, _298, _299);
        vec3 _321 = textureLod(skyboxMap, _300, max(min(0.100000001490116119384765625 * _179.lightAmbient._ambient.y, _179.lightAmbient._ambient.y), textureQueryLod(skyboxMap, _300).x)).xyz;
        vec3 _330 = (((((((_179.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875) * ((_297 * _297) - (_298 * _298))) + (((_179.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625) * _299) * _299)) + (_179.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375)) - (_179.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625)) + (((((_179.lightAmbient._ambientSphere.L2m2 * _297) * _298) + ((_179.lightAmbient._ambientSphere.L21 * _297) * _299)) + ((_179.lightAmbient._ambientSphere.L2m1 * _298) * _299)) * 0.85808598995208740234375)) + ((((_179.lightAmbient._ambientSphere.L11 * _297) + (_179.lightAmbient._ambientSphere.L1m1 * _298)) + (_179.lightAmbient._ambientSphere.L10 * _299)) * 1.02332794666290283203125)).xyz;
        bvec3 _338 = bvec3(_285 > 0.0);
        _fragColor = vec4(pow(((vec3(_338.x ? _321.x : _330.x, _338.y ? _321.y : _330.y, _338.z ? _321.z : _330.z) * 1.0) - vec3(_270)) + (_271.xyz * _270), vec3(0.4545454680919647216796875)), 1.0);
    }
}

