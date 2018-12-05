#version 410

uniform sampler2D originalTexture;

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 1) in vec2 varTexcoord;
layout(location = 2) in vec4 varColor;
layout(location = 0) in vec3 interpolatedNormal;
layout(location = 2) out vec4 _fragColor2;
layout(location = 3) out vec4 _fragColor3;

void main()
{
    vec4 _173 = texture(originalTexture, varTexcoord);
    vec3 _196 = interpolatedNormal * float(1 - (int(gl_FrontFacing) * 2));
    float _203 = _173.w * varColor.w;
    if (_203 <= 0.0)
    {
        discard;
    }
    _fragColor0 = vec4(varColor.xyz * _173.xyz, _203);
    float _270 = _196.z;
    vec2 _274 = _196.xy * (1.0 / ((abs(_196.x) + abs(_196.y)) + abs(_270)));
    vec2 _349;
    if (_270 <= 0.0)
    {
        _349 = (vec2(1.0) - abs(_274.yx)) * vec2((_274.x >= 0.0) ? 1.0 : (-1.0), (_274.y >= 0.0) ? 1.0 : (-1.0));
    }
    else
    {
        _349 = _274;
    }
    vec2 _311 = round((clamp(_349, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _316 = _311.y;
    float _318 = floor(_316 * 0.00390625);
    float _321 = _311.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_321, (fract(_321) * 256.0) + _318, _316 - (_318 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(10.0, 0.0, 1.0));
}

