#version 410

struct TextureData
{
    ivec2 textureSize;
};

layout(std140) uniform textureDataBuffer
{
    TextureData textureData;
} _18;

uniform sampler2D colorMap;

layout(location = 0) in vec2 varTexCoord0;
layout(location = 0) out vec4 outFragColor;

void main()
{
    ivec2 _26 = ivec2(floor(varTexCoord0 * vec2(_18.textureData.textureSize)));
    int _33 = _26.x / 2;
    ivec2 _81 = _26;
    _81.x = _33;
    ivec2 _85;
    if ((int(floor(gl_FragCoord.y)) % 2) > 0)
    {
        ivec2 _84 = _81;
        _84.x = _33 + (_18.textureData.textureSize.x / 2);
        _85 = _84;
    }
    else
    {
        _85 = _81;
    }
    outFragColor = vec4(pow(texelFetch(colorMap, _85, 0).xyz, vec3(2.2000000476837158203125)), 1.0);
}

