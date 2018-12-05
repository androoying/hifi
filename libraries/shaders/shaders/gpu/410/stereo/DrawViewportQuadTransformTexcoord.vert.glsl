#version 410

const vec4 _101[4] = vec4[](vec4(-1.0, -1.0, 0.0, 1.0), vec4(1.0, -1.0, 0.0, 1.0), vec4(-1.0, 1.0, 0.0, 1.0), vec4(1.0, 1.0, 0.0, 1.0));

uniform samplerBuffer transformObjectBuffer;

layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 0) out vec2 varTexCoord0;
layout(location = 8) flat out int _stereoSide;

mat4 _237;

void main()
{
    int _155 = 8 * _drawCallInfo.x;
    mat4 _222 = _237;
    _222[0] = texelFetch(transformObjectBuffer, _155);
    mat4 _224 = _222;
    _224[1] = texelFetch(transformObjectBuffer, _155 + 1);
    mat4 _226 = _224;
    _226[2] = texelFetch(transformObjectBuffer, _155 + 2);
    mat4 _228 = _226;
    _228[3] = texelFetch(transformObjectBuffer, _155 + 3);
    gl_Position = _101[gl_VertexID];
    varTexCoord0 = (_228 * vec4((_101[gl_VertexID].xy + vec2(1.0)) * 0.5, _101[gl_VertexID].zw)).xy;
}

