#version 410

out float gl_ClipDistance[1];

const int _168[36] = int[](0, 1, 2, 0, 2, 3, 3, 2, 6, 3, 6, 7, 7, 6, 5, 7, 5, 4, 4, 5, 1, 4, 1, 0, 1, 5, 6, 1, 6, 2, 4, 0, 3, 4, 3, 7);
const vec3 _189[8] = vec3[](vec3(0.0, 1.0, 0.0), vec3(1.0, 1.0, 0.0), vec3(1.0, 0.0, 0.0), vec3(0.0), vec3(0.0, 1.0, 1.0), vec3(1.0), vec3(1.0, 0.0, 1.0), vec3(0.0, 0.0, 1.0));
const vec3 _259[8] = vec3[](vec3(-1.0, 1.0, -1.0), vec3(1.0, 1.0, -1.0), vec3(1.0, -1.0, -1.0), vec3(-1.0), vec3(-1.0, 1.0, 1.0), vec3(1.0), vec3(1.0, -1.0, 1.0), vec3(-1.0, -1.0, 1.0));
const vec4 _326[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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

struct HighlightParameters
{
    vec2 outlineWidth;
};

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera[2];
} _cameraBlock;

layout(std140) uniform parametersBuffer
{
    HighlightParameters _parameters;
} _304;

uniform samplerBuffer transformObjectBuffer;
uniform samplerBuffer ssbo0Buffer;

layout(location = 8) flat out int _stereoSide;
uniform int SPIRV_Cross_BaseInstance;
layout(location = 15) in ivec2 _drawCallInfo;

mat4 _533;

void main()
{
    int _159 = gl_VertexID / 36;
    int _361 = 2 * _159;
    vec4 _216 = vec4(texelFetch(ssbo0Buffer, _361).yzw + (texelFetch(ssbo0Buffer, _361 + 1).xyz * _189[_168[gl_VertexID - (_159 * 36)]]), 1.0);
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _401 = 8 * _drawCallInfo.x;
    mat4 _508 = _533;
    _508[0] = texelFetch(transformObjectBuffer, _401);
    mat4 _510 = _508;
    _510[1] = texelFetch(transformObjectBuffer, _401 + 1);
    mat4 _512 = _510;
    _512[2] = texelFetch(transformObjectBuffer, _401 + 2);
    vec4 _423 = texelFetch(transformObjectBuffer, _401 + 3);
    mat4 _514 = _512;
    _514[3] = _423;
    vec3 _230 = _423.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _527 = _514;
    _527[3] = vec4(_230.x, _230.y, _230.z, _423.w);
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * (_527 * _216);
    vec3 _266 = _216.xyz + _259[_168[gl_VertexID - (_159 * 36)]];
    vec2 _317 = gl_Position.xy + ((normalize((_cameraBlock._camera[_stereoSide]._projectionViewUntranslated * (_527 * vec4(_266.x, _266.y, _266.z, _216.w))).xy - gl_Position.xy) * _304._parameters.outlineWidth) * gl_Position.w);
    gl_Position = vec4(_317.x, _317.y, gl_Position.z, gl_Position.w);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _335 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _326[_335]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_335] * gl_Position.w);
}

