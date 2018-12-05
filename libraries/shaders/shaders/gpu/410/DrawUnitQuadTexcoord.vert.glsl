#version 410

const vec4 _19[4] = vec4[](vec4(-1.0, -1.0, 1.0, 1.0), vec4(1.0, -1.0, 1.0, 1.0), vec4(-1.0, 1.0, 1.0, 1.0), vec4(1.0));

layout(location = 0) out vec2 varTexCoord0;

void main()
{
    varTexCoord0 = (_19[gl_VertexID].xy + vec2(1.0)) * 0.5;
    gl_Position = _19[gl_VertexID];
}

