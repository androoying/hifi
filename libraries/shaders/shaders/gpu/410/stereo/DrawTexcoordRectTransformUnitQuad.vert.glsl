#version 410

out float gl_ClipDistance[1];

const vec4 _140[4] = vec4[](vec4(-1.0, -1.0, 0.0, 1.0), vec4(1.0, -1.0, 0.0, 1.0), vec4(-1.0, 1.0, 0.0, 1.0), vec4(1.0, 1.0, 0.0, 1.0));
const vec4 _187[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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
    _TransformCamera _camera[2];
} _cameraBlock;

layout(std140) uniform texcoordRectBuffer
{
    TexCoordRectParams params;
} _231;

uniform samplerBuffer transformObjectBuffer;

layout(location = 8) flat out int _stereoSide;
uniform int SPIRV_Cross_BaseInstance;
layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 0) out vec2 varTexCoord0;

mat4 _385;

void main()
{
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _268 = 8 * _drawCallInfo.x;
    mat4 _365 = _385;
    _365[0] = texelFetch(transformObjectBuffer, _268);
    mat4 _367 = _365;
    _367[1] = texelFetch(transformObjectBuffer, _268 + 1);
    mat4 _369 = _367;
    _369[2] = texelFetch(transformObjectBuffer, _268 + 2);
    vec4 _290 = texelFetch(transformObjectBuffer, _268 + 3);
    mat4 _371 = _369;
    _371[3] = _290;
    vec3 _161 = _290.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _384 = _371;
    _384[3] = vec4(_161.x, _161.y, _161.z, _290.w);
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * (_384 * _140[gl_VertexID]);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _197 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _187[_197]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_197] * gl_Position.w);
    varTexCoord0 = (((_140[gl_VertexID].xy + vec2(1.0)) * 0.5) * _231.params.texcoordRect.zw) + _231.params.texcoordRect.xy;
}

