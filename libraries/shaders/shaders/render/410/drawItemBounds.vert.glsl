#version 410

const vec4 _250[8] = vec4[](vec4(0.0), vec4(1.0, 0.0, 0.0, 1.0), vec4(0.0, 1.0, 0.0, 1.0), vec4(1.0, 1.0, 0.0, 2.0), vec4(0.0, 0.0, 1.0, 1.0), vec4(1.0, 0.0, 1.0, 2.0), vec4(0.0, 1.0, 1.0, 2.0), vec4(1.0, 1.0, 1.0, 3.0));
const int _253[24] = int[](0, 1, 1, 3, 3, 2, 2, 0, 4, 5, 5, 7, 7, 6, 6, 4, 2, 6, 3, 7, 0, 4, 1, 5);

struct _TransformCamera
{
    mat4 _view;
    mat4 _viewInverse;
    mat4 _projectionViewUntranslated;
    mat4 _projection;
    mat4 _projectionInverse;
    vec4 _viewport;
    vec4 _stereoInfo;
};

struct DrawItemBoundsParams
{
    vec4 color;
};

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera;
} _cameraBlock;

layout(std140) uniform drawItemBoundsParamsBuffer
{
    DrawItemBoundsParams params;
} _324;

uniform samplerBuffer transformObjectBuffer;
uniform samplerBuffer ssbo0Buffer;

layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 0) out vec4 varColor;
layout(location = 1) out vec2 varTexcoord;

mat4 _674;

void main()
{
    int _233 = gl_VertexID / 24;
    vec4 _262 = _250[_253[gl_VertexID - (_233 * 24)]];
    int _376 = 2 * _233;
    vec3 _275 = texelFetch(ssbo0Buffer, _376 + 1).xyz;
    int _413 = 8 * _drawCallInfo.x;
    mat4 _653 = _674;
    _653[0] = texelFetch(transformObjectBuffer, _413);
    mat4 _655 = _653;
    _655[1] = texelFetch(transformObjectBuffer, _413 + 1);
    mat4 _657 = _655;
    _657[2] = texelFetch(transformObjectBuffer, _413 + 2);
    vec4 _435 = texelFetch(transformObjectBuffer, _413 + 3);
    mat4 _659 = _657;
    _659[3] = _435;
    vec3 _300 = _435.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _672 = _659;
    _672[3] = vec4(_300.x, _300.y, _300.z, _435.w);
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * (_672 * vec4(texelFetch(ssbo0Buffer, _376).yzw + (_275 * _262.xyz), 1.0));
    if (_324.params.color.w < 0.0)
    {
        float _467 = (float(_233) / (-_324.params.color.w)) * 6.0;
        vec3 _698;
        if (_467 < 0.0)
        {
            _698 = vec3(1.0, 0.0, 0.0);
        }
        else
        {
            vec3 _699;
            if (_467 < 1.0)
            {
                _699 = vec3(1.0, _467, 0.0);
            }
            else
            {
                vec3 _700;
                if (_467 < 2.0)
                {
                    _700 = vec3(2.0 - _467, 1.0, 0.0);
                }
                else
                {
                    vec3 _701;
                    if (_467 < 3.0)
                    {
                        _701 = vec3(0.0, 1.0, _467 - 2.0);
                    }
                    else
                    {
                        vec3 _702;
                        if (_467 < 4.0)
                        {
                            _702 = vec3(0.0, 4.0 - _467, 1.0);
                        }
                        else
                        {
                            vec3 _703;
                            if (_467 < 5.0)
                            {
                                _703 = vec3(_467 - 4.0, 0.0, 1.0);
                            }
                            else
                            {
                                vec3 _704;
                                if (_467 < 6.0)
                                {
                                    _704 = vec3(1.0, 0.0, 6.0 - _467);
                                }
                                else
                                {
                                    _704 = vec3(1.0, 0.0, 0.0);
                                }
                                _703 = _704;
                            }
                            _702 = _703;
                        }
                        _701 = _702;
                    }
                    _700 = _701;
                }
                _699 = _700;
            }
            _698 = _699;
        }
        varColor = vec4(_698, 1.0);
    }
    else
    {
        float _534 = _324.params.color.w * 6.0;
        vec3 _683;
        if (_534 < 0.0)
        {
            _683 = vec3(1.0, 0.0, 0.0);
        }
        else
        {
            vec3 _684;
            if (_534 < 1.0)
            {
                _684 = vec3(1.0, _534, 0.0);
            }
            else
            {
                vec3 _685;
                if (_534 < 2.0)
                {
                    _685 = vec3(2.0 - _534, 1.0, 0.0);
                }
                else
                {
                    vec3 _686;
                    if (_534 < 3.0)
                    {
                        _686 = vec3(0.0, 1.0, _534 - 2.0);
                    }
                    else
                    {
                        vec3 _687;
                        if (_534 < 4.0)
                        {
                            _687 = vec3(0.0, 4.0 - _534, 1.0);
                        }
                        else
                        {
                            vec3 _688;
                            if (_534 < 5.0)
                            {
                                _688 = vec3(_534 - 4.0, 0.0, 1.0);
                            }
                            else
                            {
                                vec3 _689;
                                if (_534 < 6.0)
                                {
                                    _689 = vec3(1.0, 0.0, 6.0 - _534);
                                }
                                else
                                {
                                    _689 = vec3(1.0, 0.0, 0.0);
                                }
                                _688 = _689;
                            }
                            _687 = _688;
                        }
                        _686 = _687;
                    }
                    _685 = _686;
                }
                _684 = _685;
            }
            _683 = _684;
        }
        varColor = vec4(_683, 1.0);
    }
    varTexcoord = vec2(_262.w, length(_275));
}

