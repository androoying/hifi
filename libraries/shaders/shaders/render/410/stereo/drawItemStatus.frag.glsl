#version 410

uniform sampler2D _icons;

layout(location = 1) in vec3 varTexcoord;
layout(location = 0) out vec4 outFragColor;
layout(location = 0) in vec4 varColor;

void main()
{
    if (varTexcoord.z < 254.5)
    {
        outFragColor = texture(_icons, vec2((varTexcoord.x + varTexcoord.z) * 0.0625, varTexcoord.y)) * varColor;
    }
    else
    {
        vec2 _70 = (varTexcoord.xy * 2.0) - vec2(1.0);
        outFragColor = vec4(varColor.xyz, 1.0 - step(1.0, dot(_70, _70)));
    }
}

