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

struct AmbientOcclusionParams
{
    vec4 _resolutionInfo;
    vec4 _radiusInfo;
    vec4 _ditheringInfo;
    vec4 _sampleInfo;
    vec4 _falloffInfo;
    vec4 _sideSizes[2];
};

layout(std140) uniform deferredFrameTransformBuffer
{
    DeferredFrameTransform frameTransform;
} _104;

layout(std140) uniform ambientOcclusionParamsBuffer
{
    AmbientOcclusionParams params;
} _207;

uniform sampler2D depthPyramidTex;

layout(location = 0) in vec2 varTexCoord0;
layout(location = 0) out vec4 outFragColor;

void main()
{
    ivec2 _477 = ivec2(_207.params._sideSizes[0].xy);
    int _484 = _477.x;
    ivec2 _1130;
    if (ivec2(gl_FragCoord.xy).x < _484)
    {
        _1130 = ivec2(0);
    }
    else
    {
        _1130 = ivec2(1, _484);
    }
    bool _555 = _104.frameTransform._stereoInfo.x > 0.0;
    ivec2 _561 = textureSize(depthPyramidTex, 0);
    ivec2 _1107 = _561;
    _1107.x = _561.x >> (int(_555) & 1);
    vec2 _570 = vec2(_1107);
    float _583 = float(_1130.x);
    vec2 _590 = vec2(float(_555));
    vec2 _591 = mix(varTexCoord0, vec2((varTexCoord0.x * 2.0) - _583, varTexCoord0.y), _590);
    float _630 = _591.x;
    vec2 _642 = mix(_591, vec2((_630 + _583) * 0.5, _591.y), _590);
    float _656 = -textureLod(depthPyramidTex, _642, 0.0).x;
    vec4 _701 = _104.frameTransform._invProjection[_1130.x] * vec4((vec3(_630, _591.y, (_104.frameTransform._depthInfo.x - (_656 * _104.frameTransform._depthInfo.z)) / (_656 * _104.frameTransform._depthInfo.y)) * 2.0) - vec3(1.0), 1.0);
    vec3 _707 = _701.xyz / vec3(_701.w);
    float _747 = -textureLodOffset(depthPyramidTex, _642, 0.0, ivec2(1, 0)).x;
    vec4 _875 = _104.frameTransform._invProjection[_1130.x] * vec4((vec3(_591 + (vec2(1.0, 0.0) / _570), (_104.frameTransform._depthInfo.x - (_747 * _104.frameTransform._depthInfo.z)) / (_747 * _104.frameTransform._depthInfo.y)) * 2.0) - vec3(1.0), 1.0);
    float _760 = -textureLodOffset(depthPyramidTex, _642, 0.0, ivec2(-1, 0)).x;
    vec4 _926 = _104.frameTransform._invProjection[_1130.x] * vec4((vec3(_591 + (vec2(-1.0, 0.0) / _570), (_104.frameTransform._depthInfo.x - (_760 * _104.frameTransform._depthInfo.z)) / (_760 * _104.frameTransform._depthInfo.y)) * 2.0) - vec3(1.0), 1.0);
    float _773 = -textureLodOffset(depthPyramidTex, _642, 0.0, ivec2(0, 1)).x;
    vec4 _977 = _104.frameTransform._invProjection[_1130.x] * vec4((vec3(_591 + (vec2(0.0, 1.0) / _570), (_104.frameTransform._depthInfo.x - (_773 * _104.frameTransform._depthInfo.z)) / (_773 * _104.frameTransform._depthInfo.y)) * 2.0) - vec3(1.0), 1.0);
    float _786 = -textureLodOffset(depthPyramidTex, _642, 0.0, ivec2(0, -1)).x;
    vec4 _1028 = _104.frameTransform._invProjection[_1130.x] * vec4((vec3(_591 + (vec2(0.0, -1.0) / _570), (_104.frameTransform._depthInfo.x - (_786 * _104.frameTransform._depthInfo.z)) / (_786 * _104.frameTransform._depthInfo.y)) * 2.0) - vec3(1.0), 1.0);
    vec3 _1042 = (_875.xyz / vec3(_875.w)) - _707;
    vec3 _1045 = _707 - (_926.xyz / vec3(_926.w));
    vec3 _1067 = (_977.xyz / vec3(_977.w)) - _707;
    vec3 _1070 = _707 - (_1028.xyz / vec3(_1028.w));
    vec3 _806 = normalize(cross(mix(_1045, _1042, vec3(float(dot(_1042, _1042) < dot(_1045, _1045)))), mix(_1070, _1067, vec3(float(dot(_1067, _1067) < dot(_1070, _1070))))));
    vec3 _1088 = abs(_806);
    outFragColor = vec4(vec3(0.5) + ((_806 * 0.5) / vec3(max(_1088.x, max(_1088.y, _1088.z)))), 1.0);
}

