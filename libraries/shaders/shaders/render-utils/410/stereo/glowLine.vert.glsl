#version 410

out float gl_ClipDistance[1];

const vec4 _299[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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

struct LineData
{
    vec4 p1;
    vec4 p2;
    vec4 color;
    float width;
};

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera[2];
} _cameraBlock;

layout(std140) uniform LineDataBuffer
{
    LineData _lineData;
} _135;

uniform samplerBuffer transformObjectBuffer;

layout(location = 8) flat out int _stereoSide;
uniform int SPIRV_Cross_BaseInstance;
layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 1) out vec4 _color;
layout(location = 0) out float distanceFromCenter;

mat4 _482;

void main()
{
    _color = _135._lineData.color;
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _357 = 8 * _drawCallInfo.x;
    mat4 _455 = _482;
    _455[0] = texelFetch(transformObjectBuffer, _357);
    mat4 _457 = _455;
    _457[1] = texelFetch(transformObjectBuffer, _357 + 1);
    mat4 _459 = _457;
    _459[2] = texelFetch(transformObjectBuffer, _357 + 2);
    vec4 _379 = texelFetch(transformObjectBuffer, _357 + 3);
    mat4 _461 = _459;
    _461[3] = _379;
    vec3 _153 = _379.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _474 = _461;
    _474[3] = vec4(_153.x, _153.y, _153.z, _379.w);
    vec4 _180 = vec4((_cameraBlock._camera[_stereoSide]._view * vec4((_474 * _135._lineData.p1).xyz, 0.0)).xyz, 1.0);
    vec4 _215 = vec4((_cameraBlock._camera[_stereoSide]._view * vec4((_474 * _135._lineData.p2).xyz, 0.0)).xyz, 1.0);
    vec3 _231 = _180.xyz;
    vec3 _247 = cross(normalize(_231 - _215.xyz), normalize(_231)) * _135._lineData.width;
    bvec4 _257 = bvec4(0 == (gl_VertexID % 2));
    vec4 _258 = vec4(_257.x ? _180.x : _215.x, _257.y ? _180.y : _215.y, _257.z ? _180.z : _215.z, _257.w ? _180.w : _215.w);
    vec4 _483;
    if (gl_VertexID < 2)
    {
        distanceFromCenter = -1.0;
        vec3 _269 = _258.xyz - _247;
        _483 = vec4(_269.x, _269.y, _269.z, _258.w);
    }
    else
    {
        distanceFromCenter = 1.0;
        vec3 _276 = _258.xyz + _247;
        _483 = vec4(_276.x, _276.y, _276.z, _258.w);
    }
    gl_Position = _cameraBlock._camera[_stereoSide]._projection * vec4(_483.xyz, 1.0);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _309 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _299[_309]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_309] * gl_Position.w);
}

