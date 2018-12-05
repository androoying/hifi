#version 410

struct PolyvoxParams
{
    vec4 voxelVolumeSize;
};

layout(std140) uniform polyvoxParamsBuffer
{
    PolyvoxParams params;
} _255;

uniform sampler2D xMap;
uniform sampler2D yMap;
uniform sampler2D zMap;

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 2) out vec4 _fragColor2;
layout(location = 3) out vec4 _fragColor3;
layout(location = 2) in vec4 _worldPosition;
layout(location = 6) in vec3 _normal;
layout(location = 5) in vec4 _position;

void main()
{
    vec3 _246 = normalize(cross(dFdy(_worldPosition.xyz), dFdx(_worldPosition.xyz)));
    float _272 = (_worldPosition.z - 0.5) / _255.params.voxelVolumeSize.z;
    float _281 = -((_worldPosition.x - 0.5) / _255.params.voxelVolumeSize.x);
    float _283 = -((_worldPosition.y - 0.5) / _255.params.voxelVolumeSize.y);
    _fragColor0 = vec4(((texture(xMap, vec2(_281, _283)).xyz * abs(_246.z)) + (texture(yMap, vec2(_281, _272)).xyz * abs(_246.y))) + (texture(zMap, vec2(_272, _283)).xyz * abs(_246.x)), 0.0);
    vec2 _466 = _normal.xy * (1.0 / ((abs(_normal.x) + abs(_normal.y)) + abs(_normal.z)));
    vec2 _547;
    if (_normal.z <= 0.0)
    {
        _547 = (vec2(1.0) - abs(_466.yx)) * vec2((_466.x >= 0.0) ? 1.0 : (-1.0), (_466.y >= 0.0) ? 1.0 : (-1.0));
    }
    else
    {
        _547 = _466;
    }
    vec2 _503 = round((clamp(_547, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _508 = _503.y;
    float _510 = floor(_508 * 0.00390625);
    float _513 = _503.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_513, (fract(_513) * 256.0) + _510, _508 - (_510 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(0.89999997615814208984375, 0.0, 1.0));
    _fragColor2 = vec4(0.0, 0.0, 0.0, 1.0);
    _fragColor3 = vec4(0.0, 0.0, 0.0, 1.0);
}

