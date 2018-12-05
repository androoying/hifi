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

struct ParabolaData
{
    vec3 velocity;
    float parabolicDistance;
    vec3 acceleration;
    float width;
    vec4 color;
    int numSections;
    ivec3 spare;
};

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera;
} _cameraBlock;

layout(std140) uniform parabolaData
{
    ParabolaData _parabolaData;
} _129;

uniform samplerBuffer transformObjectBuffer;

layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 0) out vec4 _color;

mat4 _410;

void main()
{
    _color = _129._parabolaData.color;
    float _147 = _129._parabolaData.parabolicDistance * (float(gl_VertexID / 2) / float(_129._parabolaData.numSections));
    vec4 _167 = vec4((_129._parabolaData.velocity * _147) + (((_129._parabolaData.acceleration * 0.5) * _147) * _147), 1.0);
    int _293 = 8 * _drawCallInfo.x;
    mat4 _390 = _410;
    _390[0] = texelFetch(transformObjectBuffer, _293);
    mat4 _392 = _390;
    _392[1] = texelFetch(transformObjectBuffer, _293 + 1);
    mat4 _394 = _392;
    _394[2] = texelFetch(transformObjectBuffer, _293 + 2);
    vec4 _315 = texelFetch(transformObjectBuffer, _293 + 3);
    mat4 _396 = _394;
    _396[3] = _315;
    vec4 _411;
    if (dot(_129._parabolaData.acceleration, _129._parabolaData.acceleration) < 9.9999997473787516355514526367188e-06)
    {
        _411 = vec4(normalize(cross(_129._parabolaData.velocity, vec3((_cameraBlock._camera._viewInverse * vec4(0.0, 1.0, 0.0, 0.0)).xyz))), 0.0);
    }
    else
    {
        _411 = vec4(normalize(cross(_129._parabolaData.velocity, _129._parabolaData.acceleration)), 0.0);
    }
    vec4 _413;
    if ((gl_VertexID % 2) == 0)
    {
        _413 = _167 + (_411 * (0.5 * _129._parabolaData.width));
    }
    else
    {
        _413 = _167 - (_411 * (0.5 * _129._parabolaData.width));
    }
    vec3 _249 = _315.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _409 = _396;
    _409[3] = vec4(_249.x, _249.y, _249.z, _315.w);
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * (_409 * _413);
}

