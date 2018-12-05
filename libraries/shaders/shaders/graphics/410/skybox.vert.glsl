#version 410

const vec4 _60[4] = vec4[](vec4(-1.0, -1.0, 0.0, 1.0), vec4(1.0, -1.0, 0.0, 1.0), vec4(-1.0, 1.0, 0.0, 1.0), vec4(1.0, 1.0, 0.0, 1.0));

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

layout(location = 0) out vec3 _normal;
layout(location = 15) in ivec2 _drawCallInfo;

void main()
{
    vec4 _86 = vec4(_60[gl_VertexID].xy, 0.0, 1.0);
    _normal = vec3((_cameraBlock._camera._viewInverse * vec4((_cameraBlock._camera._projectionInverse * _86).xyz, 0.0)).xyz);
    gl_Position = _86;
}

