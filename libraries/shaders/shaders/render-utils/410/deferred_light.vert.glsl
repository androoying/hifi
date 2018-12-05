#version 410

const vec4 _19[4] = vec4[](vec4(-1.0, -1.0, 1.0, 1.0), vec4(1.0, -1.0, 1.0, 1.0), vec4(-1.0, 1.0, 1.0, 1.0), vec4(1.0));

layout(location = 0) out vec4 _texCoord01;

void main()
{
    vec2 _36 = (_19[gl_VertexID].xy + vec2(1.0)) * 0.5;
    _texCoord01 = vec4(_36.x, _36.y, _texCoord01.z, _texCoord01.w);
    gl_Position = _19[gl_VertexID];
}

