#version 410

out float gl_ClipDistance[1];

const vec4 _272[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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
layout(location = 1) out vec4 _color;
layout(location = 2) in vec4 inColor;
layout(location = 0) out vec4 _texCoord01;
layout(location = 3) in vec4 inTexCoord0;
layout(location = 5) out vec4 _positionMS;
layout(location = 0) in vec4 inPosition;
layout(location = 6) out vec3 _normalMS;
layout(location = 1) in vec4 inNormal;
layout(location = 7) out vec4 _positionES;
layout(location = 3) out vec3 _normalWS;
layout(location = 4) in vec4 inTangent;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 7) in vec4 inTexCoord1;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;

mat4 _565;

void main()
{
    float _559;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _559 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _559 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _560;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _560 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _560 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _561;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _561 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _561 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    _color = vec4(_559, _560, _561, inColor.w);
    _texCoord01 = vec4(inTexCoord0.x, inTexCoord0.y, _texCoord01.z, _texCoord01.w);
    _positionMS = inPosition;
    _normalMS = inNormal.xyz;
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _432 = 8 * _drawCallInfo.x;
    mat4 _536 = _565;
    _536[0] = texelFetch(transformObjectBuffer, _432);
    mat4 _538 = _536;
    _538[1] = texelFetch(transformObjectBuffer, _432 + 1);
    mat4 _540 = _538;
    _540[2] = texelFetch(transformObjectBuffer, _432 + 2);
    vec4 _454 = texelFetch(transformObjectBuffer, _432 + 3);
    mat4 _542 = _540;
    _542[3] = _454;
    vec3 _230 = _454.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _555 = _542;
    _555[3] = vec4(_230.x, _230.y, _230.z, _454.w);
    vec4 _237 = _555 * inPosition;
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * _237;
    _positionES = vec4((_cameraBlock._camera[_stereoSide]._view * vec4(_237.xyz, 0.0)).xyz, 1.0);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _281 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _272[_281]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_281] * gl_Position.w);
    _normalWS = vec3(dot(texelFetch(transformObjectBuffer, _432 + 4).xyz, inNormal.xyz), dot(texelFetch(transformObjectBuffer, _432 + 5).xyz, inNormal.xyz), dot(texelFetch(transformObjectBuffer, _432 + 6).xyz, inNormal.xyz));
}

