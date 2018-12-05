#version 410

struct LightingModel
{
    vec4 _UnlitEmissiveLightmapBackground;
    vec4 _ScatteringDiffuseSpecularAlbedo;
    vec4 _AmbientDirectionalPointSpot;
    vec4 _ShowContourObscuranceWireframe;
    vec4 _HazeBloomSkinningBlendshape;
};

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _194;

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 2) out vec4 _fragColor2;
layout(location = 3) out vec4 _fragColor3;
layout(location = 3) in vec3 _normalWS;
layout(location = 1) in vec4 _color;
layout(location = 6) in vec3 _normalMS;
layout(location = 0) in vec4 _texCoord01;
layout(location = 5) in vec4 _positionMS;
layout(location = 7) in vec4 _positionES;
layout(location = 8) flat in int _stereoSide;

void main()
{
    vec3 _309 = normalize(_normalWS);
    _fragColor0 = vec4(_color.xyz, 0.20000000298023223876953125);
    float _464 = _309.z;
    vec2 _468 = _309.xy * (1.0 / ((abs(_309.x) + abs(_309.y)) + abs(_464)));
    vec2 _712;
    if (_464 <= 0.0)
    {
        _712 = (vec2(1.0) - abs(_468.yx)) * vec2((_468.x >= 0.0) ? 1.0 : (-1.0), (_468.y >= 0.0) ? 1.0 : (-1.0));
    }
    else
    {
        _712 = _468;
    }
    vec2 _505 = round((clamp(_712, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _510 = _505.y;
    float _512 = floor(_510 * 0.00390625);
    float _515 = _505.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_515, (fract(_515) * 256.0) + _512, _510 - (_512 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(max(0.0, 0.921875), 0.0, 1.0));
    vec3 _427 = vec3(clamp(1.0, 0.0, 1.0)) * _194.lightingModel._UnlitEmissiveLightmapBackground.z;
    _fragColor2 = vec4(_427, 1.0);
    _fragColor3 = vec4(_427 * _color.xyz, 1.0);
}

