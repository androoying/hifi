#version 410

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 3) out vec4 _fragColor3;
layout(location = 0) in vec4 _color;
layout(location = 2) out vec4 _fragColor2;

void main()
{
    _fragColor0 = vec4(_color.xyz, 0.60000002384185791015625);
    float _241 = abs(0.0);
    vec2 _248 = vec2(1.0, 0.0) * (1.0 / ((abs(1.0) + _241) + _241));
    vec2 _285 = round((clamp((vec2(1.0) - abs(_248.yx)) * vec2((_248.x >= 0.0) ? 1.0 : (-1.0), (_248.y >= 0.0) ? 1.0 : (-1.0)), vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _290 = _285.y;
    float _292 = floor(_290 * 0.00390625);
    float _295 = _285.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_295, (fract(_295) * 256.0) + _292, _290 - (_292 * 256.0))) * vec3(0.0039215688593685626983642578125), 1.0);
    _fragColor3 = vec4(_color.xyz, 1.0);
}

