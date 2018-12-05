#version 410

uniform sampler2D depthTexture;

layout(location = 0) in vec2 varTexCoord0;
layout(location = 0) out vec4 outFragColor;

void main()
{
    vec4 _21 = textureGather(depthTexture, varTexCoord0, 0);
    float _39 = min(_21.w, min(_21.z, min(_21.x, _21.y)));
    outFragColor = vec4(_39, _39, _39, 1.0);
}

