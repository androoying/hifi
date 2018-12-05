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

layout(std140) uniform deferredFrameTransformBuffer
{
    DeferredFrameTransform frameTransform;
} _23;

uniform sampler2D depthMap;

layout(location = 0) out vec4 outFragColor;

void main()
{
    outFragColor = vec4(-(_23.frameTransform._depthInfo.x / ((texelFetch(depthMap, ivec2(gl_FragCoord.xy), 0).x * _23.frameTransform._depthInfo.y) + _23.frameTransform._depthInfo.z)), 0.0, 0.0, 1.0);
}

