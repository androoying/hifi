#version 410

uniform sampler2D colorTexture;

layout(location = 0) out vec4 outFragColor;
layout(location = 0) in vec2 varTexCoord0;

void main()
{
    outFragColor = vec4(texture(colorTexture, varTexCoord0).xyz, 0.125);
    if (gl_FragCoord.x > 800.0)
    {
        outFragColor.w = 1.0;
    }
}

