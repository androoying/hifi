#version 410

out float gl_ClipDistance[1];

const vec4 _175[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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
layout(location = 0) in vec4 inPosition;
layout(location = 0) out vec3 varWorldPos;

mat4 _355;

void main()
{
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _238 = 8 * _drawCallInfo.x;
    mat4 _335 = _355;
    _335[0] = texelFetch(transformObjectBuffer, _238);
    mat4 _337 = _335;
    _337[1] = texelFetch(transformObjectBuffer, _238 + 1);
    mat4 _339 = _337;
    _339[2] = texelFetch(transformObjectBuffer, _238 + 2);
    vec4 _260 = texelFetch(transformObjectBuffer, _238 + 3);
    mat4 _341 = _339;
    _341[3] = _260;
    vec3 _144 = _260.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _354 = _341;
    _354[3] = vec4(_144.x, _144.y, _144.z, _260.w);
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * (_354 * inPosition);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _185 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _175[_185]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_185] * gl_Position.w);
}

