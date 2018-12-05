#version 410

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
    _TransformCamera _camera;
} _cameraBlock;

uniform samplerBuffer transformObjectBuffer;

layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 0) in vec4 inPosition;
layout(location = 0) out vec3 varWorldPos;

mat4 _302;

void main()
{
    int _185 = 8 * _drawCallInfo.x;
    mat4 _282 = _302;
    _282[0] = texelFetch(transformObjectBuffer, _185);
    mat4 _284 = _282;
    _284[1] = texelFetch(transformObjectBuffer, _185 + 1);
    mat4 _286 = _284;
    _286[2] = texelFetch(transformObjectBuffer, _185 + 2);
    vec4 _207 = texelFetch(transformObjectBuffer, _185 + 3);
    mat4 _288 = _286;
    _288[3] = _207;
    vec3 _136 = _207.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _301 = _288;
    _301[3] = vec4(_136.x, _136.y, _136.z, _207.w);
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * (_301 * inPosition);
}

