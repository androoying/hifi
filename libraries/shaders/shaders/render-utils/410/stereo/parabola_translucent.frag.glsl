#version 410

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 0) in vec4 _color;
layout(location = 2) out vec4 _fragColor2;
layout(location = 3) out vec4 _fragColor3;

void main()
{
    if (_color.w <= 0.0)
    {
        discard;
    }
    _fragColor0 = vec4(_color.xyz, _color.w);
    float _235 = abs(0.0);
    vec2 _242 = vec2(1.0, 0.0) * (1.0 / ((abs(1.0) + _235) + _235));
    vec2 _279 = round((clamp((vec2(1.0) - abs(_242.yx)) * vec2((_242.x >= 0.0) ? 1.0 : (-1.0), (_242.y >= 0.0) ? 1.0 : (-1.0)), vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _284 = _279.y;
    float _286 = floor(_284 * 0.00390625);
    float _289 = _279.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_289, (fract(_289) * 256.0) + _286, _284 - (_286 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(0.89999997615814208984375, 0.0, 1.0));
}

