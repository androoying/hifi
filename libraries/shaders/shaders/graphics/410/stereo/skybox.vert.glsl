#version 410

out float gl_ClipDistance[1];

const vec4 _69[4] = vec4[](vec4(-1.0, -1.0, 0.0, 1.0), vec4(1.0, -1.0, 0.0, 1.0), vec4(-1.0, 1.0, 0.0, 1.0), vec4(1.0, 1.0, 0.0, 1.0));
const vec4 _131[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera[2];
} _cameraBlock;

layout(location = 8) flat out int _stereoSide;
uniform int SPIRV_Cross_BaseInstance;
layout(location = 0) out vec3 _normal;
layout(location = 15) in ivec2 _drawCallInfo;

void main()
{
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    vec4 _94 = vec4(_69[gl_VertexID].xy, 0.0, 1.0);
    _normal = vec3((_cameraBlock._camera[_stereoSide]._viewInverse * vec4((_cameraBlock._camera[_stereoSide]._projectionInverse * _94).xyz, 0.0)).xyz);
    gl_Position = _94;
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _140 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _131[_140]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_140] * gl_Position.w);
}

