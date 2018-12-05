#version 410

const vec4 _132[4] = vec4[](vec4(-1.0, -1.0, 0.0, 1.0), vec4(1.0, -1.0, 0.0, 1.0), vec4(-1.0, 1.0, 0.0, 1.0), vec4(1.0, 1.0, 0.0, 1.0));

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

struct TexCoordRectParams
{
    vec4 texcoordRect;
};

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera;
} _cameraBlock;

layout(std140) uniform texcoordRectBuffer
{
    TexCoordRectParams params;
} _186;

uniform samplerBuffer transformObjectBuffer;

layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 0) out vec2 varTexCoord0;

mat4 _337;

void main()
{
    int _220 = 8 * _drawCallInfo.x;
    mat4 _317 = _337;
    _317[0] = texelFetch(transformObjectBuffer, _220);
    mat4 _319 = _317;
    _319[1] = texelFetch(transformObjectBuffer, _220 + 1);
    mat4 _321 = _319;
    _321[2] = texelFetch(transformObjectBuffer, _220 + 2);
    vec4 _242 = texelFetch(transformObjectBuffer, _220 + 3);
    mat4 _323 = _321;
    _323[3] = _242;
    vec3 _153 = _242.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _336 = _323;
    _336[3] = vec4(_153.x, _153.y, _153.z, _242.w);
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * (_336 * _132[gl_VertexID]);
    varTexCoord0 = (((_132[gl_VertexID].xy + vec2(1.0)) * 0.5) * _186.params.texcoordRect.zw) + _186.params.texcoordRect.xy;
}

