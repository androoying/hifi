#version 410

const vec4 _166[3] = vec4[](vec4(-1.0, -1.0, 0.0, 1.0), vec4(3.0, -1.0, 0.0, 1.0), vec4(-1.0, 3.0, 0.0, 1.0));
const int _168[3] = int[](0, 1, 2);
const vec4 _302[4] = vec4[](vec4(0.0, 1.0, 0.0, 1.0), vec4(1.0, 0.60000002384185791015625, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0), vec4(0.300000011920928955078125, 0.0, 0.800000011920928955078125, 1.0));

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
uniform samplerBuffer workloadProxiesBuffer;

layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 2) out vec3 varEyePos;
layout(location = 1) out vec3 varTexcoord;
layout(location = 0) out vec4 varColor;

mat4 _497;

void main()
{
    int _150 = gl_VertexID / 3;
    int _326 = 2 * _150;
    vec4 _330 = texelFetch(workloadProxiesBuffer, _326);
    int _363 = 8 * _drawCallInfo.x;
    mat4 _472 = _497;
    _472[0] = texelFetch(transformObjectBuffer, _363);
    mat4 _474 = _472;
    _474[1] = texelFetch(transformObjectBuffer, _363 + 1);
    mat4 _476 = _474;
    _476[2] = texelFetch(transformObjectBuffer, _363 + 2);
    vec4 _385 = texelFetch(transformObjectBuffer, _363 + 3);
    mat4 _478 = _476;
    _478[3] = _385;
    vec3 _204 = _385.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _491 = _478;
    _491[3] = vec4(_204.x, _204.y, _204.z, _385.w);
    vec3 _232 = vec4((_cameraBlock._camera._view * vec4((_491 * vec4(_330.xyz, 1.0)).xyz, 0.0)).xyz, 1.0).xyz;
    float _246 = _330.w;
    vec4 _262 = vec4(_232 + (((normalize(cross(vec3(0.0, 1.0, 0.0), -normalize(_232))) * _166[_168[gl_VertexID - (_150 * 3)]].x) + (vec3(0.0, 1.0, 0.0) * _166[_168[gl_VertexID - (_150 * 3)]].y)) * _246), 1.0);
    varEyePos = _262.xyz;
    varTexcoord = _166[_168[gl_VertexID - (_150 * 3)]].xyz;
    gl_Position = _cameraBlock._camera._projection * _262;
    int _291 = 255 & floatBitsToInt(texelFetch(workloadProxiesBuffer, _326 + 1).x);
    varColor = vec4(_302[_291].xyz, _246);
    if (_291 == 4)
    {
        gl_Position = vec4(0.0);
    }
}

