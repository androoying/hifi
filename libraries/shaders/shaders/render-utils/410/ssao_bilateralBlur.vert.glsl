#version 410

const vec4 _101[4] = vec4[](vec4(-1.0, -1.0, 0.0, 1.0), vec4(1.0, -1.0, 0.0, 1.0), vec4(-1.0, 1.0, 0.0, 1.0), vec4(1.0, 1.0, 0.0, 1.0));

uniform samplerBuffer transformObjectBuffer;

layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 0) out vec4 varTexCoord0;

mat4 _240;

void main()
{
    vec2 _116 = (_101[gl_VertexID].xy + vec2(1.0)) * 0.5;
    int _158 = 8 * _drawCallInfo.x;
    mat4 _225 = _240;
    _225[0] = texelFetch(transformObjectBuffer, _158);
    mat4 _227 = _225;
    _227[1] = texelFetch(transformObjectBuffer, _158 + 1);
    mat4 _229 = _227;
    _229[2] = texelFetch(transformObjectBuffer, _158 + 2);
    mat4 _231 = _229;
    _231[3] = texelFetch(transformObjectBuffer, _158 + 3);
    vec4 _132 = _231 * vec4(_116, _101[gl_VertexID].zw);
    gl_Position = _101[gl_VertexID];
    varTexCoord0 = vec4(_132.x, _132.y, varTexCoord0.z, varTexCoord0.w);
    varTexCoord0 = vec4(varTexCoord0.x, varTexCoord0.y, _116.x, _116.y);
}

