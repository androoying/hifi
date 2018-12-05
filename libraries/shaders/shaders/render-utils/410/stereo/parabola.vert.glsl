#version 410

out float gl_ClipDistance[1];

const vec4 _283[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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
    _TransformCamera _camera[2];
} _cameraBlock;

layout(std140) uniform parabolaData
{
    ParabolaData _parabolaData;
} _137;

uniform samplerBuffer transformObjectBuffer;

layout(location = 8) flat out int _stereoSide;
uniform int SPIRV_Cross_BaseInstance;
layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 0) out vec4 _color;

mat4 _459;

void main()
{
    _color = _137._parabolaData.color;
    float _155 = _137._parabolaData.parabolicDistance * (float(gl_VertexID / 2) / float(_137._parabolaData.numSections));
    vec4 _175 = vec4((_137._parabolaData.velocity * _155) + (((_137._parabolaData.acceleration * 0.5) * _155) * _155), 1.0);
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _342 = 8 * _drawCallInfo.x;
    mat4 _439 = _459;
    _439[0] = texelFetch(transformObjectBuffer, _342);
    mat4 _441 = _439;
    _441[1] = texelFetch(transformObjectBuffer, _342 + 1);
    mat4 _443 = _441;
    _443[2] = texelFetch(transformObjectBuffer, _342 + 2);
    vec4 _364 = texelFetch(transformObjectBuffer, _342 + 3);
    mat4 _445 = _443;
    _445[3] = _364;
    vec4 _460;
    if (dot(_137._parabolaData.acceleration, _137._parabolaData.acceleration) < 9.9999997473787516355514526367188e-06)
    {
        _460 = vec4(normalize(cross(_137._parabolaData.velocity, vec3((_cameraBlock._camera[_stereoSide]._viewInverse * vec4(0.0, 1.0, 0.0, 0.0)).xyz))), 0.0);
    }
    else
    {
        _460 = vec4(normalize(cross(_137._parabolaData.velocity, _137._parabolaData.acceleration)), 0.0);
    }
    vec4 _462;
    if ((gl_VertexID % 2) == 0)
    {
        _462 = _175 + (_460 * (0.5 * _137._parabolaData.width));
    }
    else
    {
        _462 = _175 - (_460 * (0.5 * _137._parabolaData.width));
    }
    vec3 _257 = _364.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _458 = _445;
    _458[3] = vec4(_257.x, _257.y, _257.z, _364.w);
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * (_458 * _462);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _292 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _283[_292]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_292] * gl_Position.w);
}

