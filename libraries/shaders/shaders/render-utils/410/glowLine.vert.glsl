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

struct LineData
{
    vec4 p1;
    vec4 p2;
    vec4 color;
    float width;
};

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera;
} _cameraBlock;

layout(std140) uniform LineDataBuffer
{
    LineData _lineData;
} _127;

uniform samplerBuffer transformObjectBuffer;

layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 1) out vec4 _color;
layout(location = 0) out float distanceFromCenter;

mat4 _435;

void main()
{
    _color = _127._lineData.color;
    int _310 = 8 * _drawCallInfo.x;
    mat4 _408 = _435;
    _408[0] = texelFetch(transformObjectBuffer, _310);
    mat4 _410 = _408;
    _410[1] = texelFetch(transformObjectBuffer, _310 + 1);
    mat4 _412 = _410;
    _412[2] = texelFetch(transformObjectBuffer, _310 + 2);
    vec4 _332 = texelFetch(transformObjectBuffer, _310 + 3);
    mat4 _414 = _412;
    _414[3] = _332;
    vec3 _145 = _332.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _427 = _414;
    _427[3] = vec4(_145.x, _145.y, _145.z, _332.w);
    vec4 _172 = vec4((_cameraBlock._camera._view * vec4((_427 * _127._lineData.p1).xyz, 0.0)).xyz, 1.0);
    vec4 _207 = vec4((_cameraBlock._camera._view * vec4((_427 * _127._lineData.p2).xyz, 0.0)).xyz, 1.0);
    vec3 _223 = _172.xyz;
    vec3 _239 = cross(normalize(_223 - _207.xyz), normalize(_223)) * _127._lineData.width;
    bvec4 _249 = bvec4(0 == (gl_VertexID % 2));
    vec4 _250 = vec4(_249.x ? _172.x : _207.x, _249.y ? _172.y : _207.y, _249.z ? _172.z : _207.z, _249.w ? _172.w : _207.w);
    vec4 _436;
    if (gl_VertexID < 2)
    {
        distanceFromCenter = -1.0;
        vec3 _261 = _250.xyz - _239;
        _436 = vec4(_261.x, _261.y, _261.z, _250.w);
    }
    else
    {
        distanceFromCenter = 1.0;
        vec3 _268 = _250.xyz + _239;
        _436 = vec4(_268.x, _268.y, _268.z, _250.w);
    }
    gl_Position = _cameraBlock._camera._projection * vec4(_436.xyz, 1.0);
}

