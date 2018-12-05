#version 410

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 3) out vec4 _fragColor3;
layout(location = 0) in vec4 varColor;
layout(location = 1) in vec3 varTexcoord;
layout(location = 2) in vec3 varEyePos;
layout(location = 2) out vec4 _fragColor2;

void main()
{
    if (varColor.w > 0.0)
    {
        float _250 = sqrt(dot(varTexcoord, varTexcoord));
        float _258 = varColor.w / abs(varEyePos.z);
        float _262 = _250 * _258;
        float _264 = 1.0 / _258;
        float _267 = 0.004999999888241291046142578125 / _258;
        float _321 = fwidth(_262) * _264;
        float _329 = (_262 * _264) - (_321 * 0.5);
        float _332 = _329 + _321;
        float _334 = 1.0 - _267;
        if ((clamp((((_267 * floor(_332)) + max(0.0, fract(_332) - _334)) - ((_267 * floor(_329)) + max(0.0, fract(_329) - _334))) / _321, 0.0, 1.0) <= 0.100000001490116119384765625) || (_250 > 1.10000002384185791015625))
        {
            discard;
        }
    }
    _fragColor0 = vec4(varColor.xyz, 0.60000002384185791015625);
    float _400 = abs(0.0);
    vec2 _410 = vec2(0.0, 1.0) * (1.0 / ((_400 + abs(1.0)) + _400));
    vec2 _447 = round((clamp((vec2(1.0) - abs(_410.yx)) * vec2((_410.x >= 0.0) ? 1.0 : (-1.0), (_410.y >= 0.0) ? 1.0 : (-1.0)), vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _452 = _447.y;
    float _454 = floor(_452 * 0.00390625);
    float _457 = _447.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_457, (fract(_457) * 256.0) + _454, _452 - (_454 * 256.0))) * vec3(0.0039215688593685626983642578125), 1.0);
    _fragColor3 = vec4(varColor.xyz, 1.0);
}

