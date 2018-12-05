#version 410

const vec4 _101[4] = vec4[](vec4(-1.0, -1.0, 0.0, 1.0), vec4(1.0, -1.0, 0.0, 1.0), vec4(-1.0, 1.0, 0.0, 1.0), vec4(1.0, 1.0, 0.0, 1.0));

uniform samplerBuffer transformObjectBuffer;

layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 0) out vec2 varTexCoord0;

mat4 _233;

void main()
{
    int _151 = 8 * _drawCallInfo.x;
    mat4 _218 = _233;
    _218[0] = texelFetch(transformObjectBuffer, _151);
    mat4 _220 = _218;
    _220[1] = texelFetch(transformObjectBuffer, _151 + 1);
    mat4 _222 = _220;
    _222[2] = texelFetch(transformObjectBuffer, _151 + 2);
    mat4 _224 = _222;
    _224[3] = texelFetch(transformObjectBuffer, _151 + 3);
    gl_Position = _101[gl_VertexID];
    varTexCoord0 = (_224 * vec4((_101[gl_VertexID].xy + vec2(1.0)) * 0.5, _101[gl_VertexID].zw)).xy;
}

