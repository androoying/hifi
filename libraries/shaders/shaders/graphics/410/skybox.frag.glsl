#version 410

struct Skybox
{
    vec4 color;
};

layout(std140) uniform skyboxBuffer
{
    Skybox skybox;
} _19;

uniform samplerCube cubeMap;

layout(location = 0) in vec3 _normal;
layout(location = 0) out vec4 _fragColor;

void main()
{
    vec3 _62;
    if (_19.skybox.color.w > 0.0)
    {
        vec4 _42 = texture(cubeMap, normalize(_normal));
        vec3 _43 = _42.xyz;
        vec3 _63;
        if (_19.skybox.color.w < 1.0)
        {
            _63 = _43 * _19.skybox.color.xyz;
        }
        else
        {
            _63 = _43;
        }
        _62 = _63;
    }
    else
    {
        _62 = _19.skybox.color.xyz;
    }
    _fragColor = vec4(_62, 0.0);
}

