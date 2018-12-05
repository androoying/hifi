#version 410

out float gl_ClipDistance[1];

const vec4 _186[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));
const vec4 _250[4] = vec4[](vec4(-1.0, -1.0, -1.0, 1.0), vec4(1.0, -1.0, -1.0, 1.0), vec4(-1.0, 1.0, -1.0, 1.0), vec4(1.0, 1.0, -1.0, 1.0));

layout(location = 8) flat out int _stereoSide;
uniform int SPIRV_Cross_BaseInstance;
layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 0) in vec4 inPosition;
layout(location = 0) out vec4 _texCoord01;
layout(location = 1) in vec4 inNormal;
layout(location = 2) in vec4 inColor;
layout(location = 3) in vec4 inTexCoord0;
layout(location = 4) in vec4 inTangent;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 7) in vec4 inTexCoord1;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;

void main()
{
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _263 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(_250[gl_VertexID], _186[_263]);
    vec4 _475 = _250[gl_VertexID];
    _475.x = (_250[gl_VertexID].x * 0.5) + (eyeOffsetScale[_263] * _250[gl_VertexID].w);
    _texCoord01 = vec4((_475.xy + vec2(1.0)) * 0.5, 0.0, 1.0);
    gl_Position = _475;
}

