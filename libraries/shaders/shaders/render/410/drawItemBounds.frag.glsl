#version 410

layout(location = 1) in vec2 varTexcoord;
layout(location = 0) in vec4 varColor;
layout(location = 0) out vec4 outFragColor;

void main()
{
    float _25 = step(fract(varTexcoord.x * varTexcoord.y), 0.5);
    if (varColor.w == 0.0)
    {
        outFragColor = vec4(mix(vec3(0.0), varColor.xyz, vec3(_25)), mix(0.0, 1.0, _25));
    }
    else
    {
        outFragColor = vec4(mix(vec3(1.0), varColor.xyz, vec3(_25)), varColor.w);
    }
}

