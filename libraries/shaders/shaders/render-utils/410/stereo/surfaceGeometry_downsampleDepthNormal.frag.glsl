#version 410

uniform sampler2D linearDepthMap;
uniform sampler2D normalMap;

layout(location = 0) in vec2 varTexCoord0;
layout(location = 0) out vec4 outLinearDepth;
layout(location = 1) out vec4 outNormal;

void main()
{
    vec4 _137 = textureGather(linearDepthMap, varTexCoord0, 0);
    vec4 _142 = textureGather(normalMap, varTexCoord0, 0);
    vec4 _147 = textureGather(normalMap, varTexCoord0, 1);
    vec4 _152 = textureGather(normalMap, varTexCoord0, 2);
    vec3 _237 = vec3(_142.x, _147.x, _152.x) * 255.0;
    float _240 = _237.y * 0.0625;
    vec2 _261 = clamp((vec2((_237.x * 16.0) + floor(_240), (fract(_240) * 4096.0) + _237.z) * 0.000488519784994423389434814453125) - vec2(1.0), vec2(-1.0), vec2(1.0));
    float _267 = _261.x;
    float _271 = _261.y;
    float _273 = (1.0 - abs(_267)) - abs(_271);
    vec3 _276 = vec3(_267, _271, _273);
    vec3 _600;
    if (_273 < 0.0)
    {
        vec2 _290 = (vec2(1.0) - abs(_276.yx)) * vec2((_267 >= 0.0) ? 1.0 : (-1.0), (_271 >= 0.0) ? 1.0 : (-1.0));
        _600 = vec3(_290.x, _290.y, _276.z);
    }
    else
    {
        _600 = _276;
    }
    vec3 _294 = normalize(_600);
    vec3 _314 = vec3(_142.y, _147.y, _152.y) * 255.0;
    float _317 = _314.y * 0.0625;
    vec2 _338 = clamp((vec2((_314.x * 16.0) + floor(_317), (fract(_317) * 4096.0) + _314.z) * 0.000488519784994423389434814453125) - vec2(1.0), vec2(-1.0), vec2(1.0));
    float _344 = _338.x;
    float _348 = _338.y;
    float _350 = (1.0 - abs(_344)) - abs(_348);
    vec3 _353 = vec3(_344, _348, _350);
    vec3 _602;
    if (_350 < 0.0)
    {
        vec2 _367 = (vec2(1.0) - abs(_353.yx)) * vec2((_344 >= 0.0) ? 1.0 : (-1.0), (_348 >= 0.0) ? 1.0 : (-1.0));
        _602 = vec3(_367.x, _367.y, _353.z);
    }
    else
    {
        _602 = _353;
    }
    vec3 _371 = normalize(_602);
    vec3 _391 = vec3(_142.z, _147.z, _152.z) * 255.0;
    float _394 = _391.y * 0.0625;
    vec2 _415 = clamp((vec2((_391.x * 16.0) + floor(_394), (fract(_394) * 4096.0) + _391.z) * 0.000488519784994423389434814453125) - vec2(1.0), vec2(-1.0), vec2(1.0));
    float _421 = _415.x;
    float _425 = _415.y;
    float _427 = (1.0 - abs(_421)) - abs(_425);
    vec3 _430 = vec3(_421, _425, _427);
    vec3 _604;
    if (_427 < 0.0)
    {
        vec2 _444 = (vec2(1.0) - abs(_430.yx)) * vec2((_421 >= 0.0) ? 1.0 : (-1.0), (_425 >= 0.0) ? 1.0 : (-1.0));
        _604 = vec3(_444.x, _444.y, _430.z);
    }
    else
    {
        _604 = _430;
    }
    vec3 _448 = normalize(_604);
    vec3 _468 = vec3(_142.w, _147.w, _152.w) * 255.0;
    float _471 = _468.y * 0.0625;
    vec2 _492 = clamp((vec2((_468.x * 16.0) + floor(_471), (fract(_471) * 4096.0) + _468.z) * 0.000488519784994423389434814453125) - vec2(1.0), vec2(-1.0), vec2(1.0));
    float _498 = _492.x;
    float _502 = _492.y;
    float _504 = (1.0 - abs(_498)) - abs(_502);
    vec3 _507 = vec3(_498, _502, _504);
    vec3 _606;
    if (_504 < 0.0)
    {
        vec2 _521 = (vec2(1.0) - abs(_507.yx)) * vec2((_498 >= 0.0) ? 1.0 : (-1.0), (_502 >= 0.0) ? 1.0 : (-1.0));
        _606 = vec3(_521.x, _521.y, _507.z);
    }
    else
    {
        _606 = _507;
    }
    outLinearDepth = vec4(min(min(_137.x, _137.y), min(_137.z, _137.w)), 0.0, 0.0, 0.0);
    outNormal = vec4((normalize(((_294 + _371) + _448) + normalize(_606)) + vec3(1.0)) * 0.5, 0.0);
}

