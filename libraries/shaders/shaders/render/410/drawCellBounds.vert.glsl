#version 410

const float _248[16] = float[](1.0, 0.5, 0.25, 0.125, 0.0625, 0.03125, 0.015625, 0.0078125, 0.00390625, 0.001953125, 0.0009765625, 0.00048828125, 0.000244140625, 0.0001220703125, 6.103515625e-05, 3.0517578125e-05);
const vec4 _301[8] = vec4[](vec4(0.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0), vec4(0.0, 1.0, 0.0, 1.0), vec4(1.0, 1.0, 0.0, 1.0), vec4(0.0, 0.0, 1.0, 1.0), vec4(1.0, 0.0, 1.0, 1.0), vec4(0.0, 1.0, 1.0, 1.0), vec4(1.0));
const int _304[24] = int[](0, 1, 1, 3, 3, 2, 2, 0, 4, 5, 5, 7, 7, 6, 6, 4, 2, 6, 3, 7, 0, 4, 1, 5);

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

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera;
} _cameraBlock;

uniform samplerBuffer transformObjectBuffer;

layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 0) in ivec4 inCellLocation;
layout(location = 0) out vec4 varColor;

mat4 _681;

void main()
{
    vec4 _314 = _301[_304[gl_VertexID]];
    int _678;
    if (inCellLocation.w < 0)
    {
        _678 = -inCellLocation.w;
    }
    else
    {
        _678 = inCellLocation.w;
    }
    float _454 = 32768.0 * _248[_678];
    vec3 _353 = vec4(vec3(-16384.0) + (vec3(ivec4(inCellLocation.xyz, _678).xyz) * _454), _454).xyz + (vec3(_454) * _314.xyz);
    int _492 = 8 * _drawCallInfo.x;
    mat4 _658 = _681;
    _658[0] = texelFetch(transformObjectBuffer, _492);
    mat4 _660 = _658;
    _660[1] = texelFetch(transformObjectBuffer, _492 + 1);
    mat4 _662 = _660;
    _662[2] = texelFetch(transformObjectBuffer, _492 + 2);
    vec4 _514 = texelFetch(transformObjectBuffer, _492 + 3);
    mat4 _664 = _662;
    _664[3] = _514;
    vec3 _369 = _514.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _677 = _664;
    _677[3] = vec4(_369.x, _369.y, _369.z, _514.w);
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * (_677 * vec4(_353.x, _353.y, _353.z, _314.w));
    float _546 = fract(float(inCellLocation.w) * 0.20000000298023223876953125) * 6.0;
    vec3 _691;
    if (_546 < 0.0)
    {
        _691 = vec3(1.0, 0.0, 0.0);
    }
    else
    {
        vec3 _692;
        if (_546 < 1.0)
        {
            _692 = vec3(1.0, _546, 0.0);
        }
        else
        {
            vec3 _693;
            if (_546 < 2.0)
            {
                _693 = vec3(2.0 - _546, 1.0, 0.0);
            }
            else
            {
                vec3 _694;
                if (_546 < 3.0)
                {
                    _694 = vec3(0.0, 1.0, _546 - 2.0);
                }
                else
                {
                    vec3 _695;
                    if (_546 < 4.0)
                    {
                        _695 = vec3(0.0, 4.0 - _546, 1.0);
                    }
                    else
                    {
                        vec3 _696;
                        if (_546 < 5.0)
                        {
                            _696 = vec3(_546 - 4.0, 0.0, 1.0);
                        }
                        else
                        {
                            vec3 _697;
                            if (_546 < 6.0)
                            {
                                _697 = vec3(1.0, 0.0, 6.0 - _546);
                            }
                            else
                            {
                                _697 = vec3(1.0, 0.0, 0.0);
                            }
                            _696 = _697;
                        }
                        _695 = _696;
                    }
                    _694 = _695;
                }
                _693 = _694;
            }
            _692 = _693;
        }
        _691 = _692;
    }
    varColor = vec4(_691, 0.800000011920928955078125 + (0.20000000298023223876953125 * float(sign(inCellLocation.w))));
}

