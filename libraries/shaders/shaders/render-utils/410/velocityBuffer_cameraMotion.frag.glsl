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

layout(std140) uniform deferredFrameTransformBuffer
{
    DeferredFrameTransform frameTransform;
} _70;

layout(std140) uniform cameraCorrectionBuffer
{
    CameraCorrection cameraCorrection;
} _92;

uniform sampler2D depthMap;

layout(location = 0) out vec4 outFragColor;
layout(location = 0) in vec2 varTexCoord0;

void main()
{
    ivec2 _305 = ivec2(gl_FragCoord.xy);
    int _307 = _305.x;
    int _330 = int(float(int(_70.frameTransform._stereoInfo.y) >> 0));
    ivec2 _416;
    if (_307 < _330)
    {
        _416 = ivec2(0);
    }
    else
    {
        _416 = ivec2(1, _330);
    }
    ivec2 _411 = _305;
    _411.x = _307 - _416.y;
    vec2 _321 = (vec2(_411) + vec2(0.5)) * _70.frameTransform._invPixelInfo.xy;
    vec4 _386 = _70.frameTransform._invProjectionUnJittered[_416.x] * vec4((vec3(_321, texelFetch(depthMap, _305, 0).x) * 2.0) - vec3(1.0), 1.0);
    vec4 _275 = _70.frameTransform._projectionUnJittered[_416.x] * vec4((_92.cameraCorrection._prevView * vec4(((_70.frameTransform._viewInverse * _92.cameraCorrection._correctionInverse) * vec4(_386.xyz / vec3(_386.w), 1.0)).xyz, 1.0)).xyz, 1.0);
    outFragColor = vec4(_321 - (((_275.xy / vec2(_275.w)) * 0.5) + vec2(0.5)), 0.0, 0.0);
}

