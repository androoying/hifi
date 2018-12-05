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

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera[2];
} _cameraBlock;

uniform samplerBuffer transformObjectBuffer;

layout(location = 8) flat out int _stereoSide;
uniform int SPIRV_Cross_BaseInstance;
layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 0) out vec2 varTexCoord0;

mat4 _372;

void main()
{
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _255 = 8 * _drawCallInfo.x;
    mat4 _352 = _372;
    _352[0] = texelFetch(transformObjectBuffer, _255);
    mat4 _354 = _352;
    _354[1] = texelFetch(transformObjectBuffer, _255 + 1);
    mat4 _356 = _354;
    _356[2] = texelFetch(transformObjectBuffer, _255 + 2);
    vec4 _277 = texelFetch(transformObjectBuffer, _255 + 3);
    mat4 _358 = _356;
    _358[3] = _277;
    vec3 _161 = _277.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _371 = _358;
    _371[3] = vec4(_161.x, _161.y, _161.z, _277.w);
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * (_371 * _140[gl_VertexID]);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _197 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _187[_197]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_197] * gl_Position.w);
    varTexCoord0 = (_140[gl_VertexID].xy + vec2(1.0)) * 0.5;
}

