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

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera;
} _cameraBlock;

uniform samplerBuffer transformObjectBuffer;

layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 0) out vec2 varTexCoord0;

mat4 _324;

void main()
{
    int _207 = 8 * _drawCallInfo.x;
    mat4 _304 = _324;
    _304[0] = texelFetch(transformObjectBuffer, _207);
    mat4 _306 = _304;
    _306[1] = texelFetch(transformObjectBuffer, _207 + 1);
    mat4 _308 = _306;
    _308[2] = texelFetch(transformObjectBuffer, _207 + 2);
    vec4 _229 = texelFetch(transformObjectBuffer, _207 + 3);
    mat4 _310 = _308;
    _310[3] = _229;
    vec3 _153 = _229.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _323 = _310;
    _323[3] = vec4(_153.x, _153.y, _153.z, _229.w);
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * (_323 * _132[gl_VertexID]);
    varTexCoord0 = (_132[gl_VertexID].xy + vec2(1.0)) * 0.5;
}

