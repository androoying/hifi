#version 410

struct Grid
{
    vec4 period;
    vec4 offset;
    vec4 edge;
};

layout(std140) uniform gridBuffer
{
    Grid grid;
} _157;

layout(location = 3) in vec2 varTexCoord0;
layout(location = 0) out vec4 outFragColor;
layout(location = 2) in vec4 varColor;

void main()
{
    float _722;
    if (_157.grid.edge.z == 0.0)
    {
        float _290 = fwidth(varTexCoord0.x) * _157.grid.period.x;
        float _298 = ((varTexCoord0.x + _157.grid.offset.x) * _157.grid.period.x) - (_290 * 0.5);
        float _301 = _298 + _290;
        float _303 = 1.0 - _157.grid.edge.x;
        float _344 = fwidth(varTexCoord0.y) * _157.grid.period.y;
        float _352 = ((varTexCoord0.y + _157.grid.offset.y) * _157.grid.period.y) - (_344 * 0.5);
        float _355 = _352 + _344;
        float _357 = 1.0 - _157.grid.edge.y;
        _722 = max(clamp((((_157.grid.edge.x * floor(_301)) + max(0.0, fract(_301) - _303)) - ((_157.grid.edge.x * floor(_298)) + max(0.0, fract(_298) - _303))) / _290, 0.0, 1.0), clamp((((_157.grid.edge.y * floor(_355)) + max(0.0, fract(_355) - _357)) - ((_157.grid.edge.y * floor(_352)) + max(0.0, fract(_352) - _357))) / _344, 0.0, 1.0));
    }
    else
    {
        float _452 = fwidth(varTexCoord0.x) * _157.grid.period.x;
        float _460 = ((varTexCoord0.x + _157.grid.offset.x) * _157.grid.period.x) - (_452 * 0.5);
        float _463 = _460 + _452;
        float _465 = 1.0 - _157.grid.edge.x;
        float _506 = fwidth(varTexCoord0.y) * _157.grid.period.y;
        float _514 = ((varTexCoord0.y + _157.grid.offset.y) * _157.grid.period.y) - (_506 * 0.5);
        float _517 = _514 + _506;
        float _519 = 1.0 - _157.grid.edge.y;
        float _588 = fwidth(varTexCoord0.x) * _157.grid.period.z;
        float _596 = ((varTexCoord0.x + _157.grid.offset.z) * _157.grid.period.z) - (_588 * 0.5);
        float _599 = _596 + _588;
        float _601 = 1.0 - _157.grid.edge.z;
        float _642 = fwidth(varTexCoord0.y) * _157.grid.period.w;
        float _650 = ((varTexCoord0.y + _157.grid.offset.w) * _157.grid.period.w) - (_642 * 0.5);
        float _653 = _650 + _642;
        float _655 = 1.0 - _157.grid.edge.w;
        _722 = max(max(clamp((((_157.grid.edge.x * floor(_463)) + max(0.0, fract(_463) - _465)) - ((_157.grid.edge.x * floor(_460)) + max(0.0, fract(_460) - _465))) / _452, 0.0, 1.0), clamp((((_157.grid.edge.y * floor(_517)) + max(0.0, fract(_517) - _519)) - ((_157.grid.edge.y * floor(_514)) + max(0.0, fract(_514) - _519))) / _506, 0.0, 1.0)), max(clamp((((_157.grid.edge.z * floor(_599)) + max(0.0, fract(_599) - _601)) - ((_157.grid.edge.z * floor(_596)) + max(0.0, fract(_596) - _601))) / _588, 0.0, 1.0), clamp((((_157.grid.edge.w * floor(_653)) + max(0.0, fract(_653) - _655)) - ((_157.grid.edge.w * floor(_650)) + max(0.0, fract(_650) - _655))) / _642, 0.0, 1.0)));
    }
    if (_722 == 0.0)
    {
        discard;
    }
    outFragColor = vec4(varColor.xyz, varColor.w * _722);
}

