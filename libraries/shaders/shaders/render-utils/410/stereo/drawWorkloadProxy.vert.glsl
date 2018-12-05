#version 410

out float gl_ClipDistance[1];

const vec4 _174[3] = vec4[](vec4(-1.0, -1.0, 0.0, 1.0), vec4(3.0, -1.0, 0.0, 1.0), vec4(-1.0, 3.0, 0.0, 1.0));
const int _176[3] = int[](0, 1, 2);
const vec4 _298[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));
const vec4 _346[4] = vec4[](vec4(0.0, 1.0, 0.0, 1.0), vec4(1.0, 0.60000002384185791015625, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0), vec4(0.300000011920928955078125, 0.0, 0.800000011920928955078125, 1.0));

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
uniform samplerBuffer workloadProxiesBuffer;

layout(location = 8) flat out int _stereoSide;
uniform int SPIRV_Cross_BaseInstance;
layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 2) out vec3 varEyePos;
layout(location = 1) out vec3 varTexcoord;
layout(location = 0) out vec4 varColor;

mat4 _544;

void main()
{
    int _158 = gl_VertexID / 3;
    int _370 = 2 * _158;
    vec4 _374 = texelFetch(workloadProxiesBuffer, _370);
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _410 = 8 * _drawCallInfo.x;
    mat4 _519 = _544;
    _519[0] = texelFetch(transformObjectBuffer, _410);
    mat4 _521 = _519;
    _521[1] = texelFetch(transformObjectBuffer, _410 + 1);
    mat4 _523 = _521;
    _523[2] = texelFetch(transformObjectBuffer, _410 + 2);
    vec4 _432 = texelFetch(transformObjectBuffer, _410 + 3);
    mat4 _525 = _523;
    _525[3] = _432;
    vec3 _212 = _432.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _538 = _525;
    _538[3] = vec4(_212.x, _212.y, _212.z, _432.w);
    vec3 _240 = vec4((_cameraBlock._camera[_stereoSide]._view * vec4((_538 * vec4(_374.xyz, 1.0)).xyz, 0.0)).xyz, 1.0).xyz;
    float _254 = _374.w;
    vec4 _270 = vec4(_240 + (((normalize(cross(vec3(0.0, 1.0, 0.0), -normalize(_240))) * _174[_176[gl_VertexID - (_158 * 3)]].x) + (vec3(0.0, 1.0, 0.0) * _174[_176[gl_VertexID - (_158 * 3)]].y)) * _254), 1.0);
    varEyePos = _270.xyz;
    varTexcoord = _174[_176[gl_VertexID - (_158 * 3)]].xyz;
    gl_Position = _cameraBlock._camera[_stereoSide]._projection * _270;
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _308 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _298[_308]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_308] * gl_Position.w);
    int _336 = 255 & floatBitsToInt(texelFetch(workloadProxiesBuffer, _370 + 1).x);
    varColor = vec4(_346[_336].xyz, _254);
    if (_336 == 4)
    {
        gl_Position = vec4(0.0);
    }
}

