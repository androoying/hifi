#version 410

const vec4 _347[6] = vec4[](vec4(-1.0, -1.0, 0.0, 1.0), vec4(1.0, -1.0, 0.0, 1.0), vec4(-1.0, 1.0, 0.0, 1.0), vec4(-1.0, 1.0, 0.0, 1.0), vec4(1.0, -1.0, 0.0, 1.0), vec4(1.0, 1.0, 0.0, 1.0));
const vec2 _406[8] = vec2[](vec2(-1.5, 0.5), vec2(-0.5, 0.5), vec2(0.5), vec2(1.5, 0.5), vec2(-1.5, -0.5), vec2(-0.5), vec2(0.5, -0.5), vec2(1.5, -0.5));

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
layout(location = 2) in ivec4 inStatus0;
layout(location = 3) in ivec4 inStatus1;
layout(location = 0) in vec3 inBoundPos;
layout(location = 1) in vec3 inBoundDim;
layout(location = 0) out vec4 varColor;
layout(location = 1) out vec3 varTexcoord;

mat4 _732;
int _738;

void main()
{
    int _495 = 8 * _drawCallInfo.x;
    mat4 _704 = _732;
    _704[0] = texelFetch(transformObjectBuffer, _495);
    mat4 _706 = _704;
    _706[1] = texelFetch(transformObjectBuffer, _495 + 1);
    mat4 _708 = _706;
    _708[2] = texelFetch(transformObjectBuffer, _495 + 2);
    vec4 _517 = texelFetch(transformObjectBuffer, _495 + 3);
    mat4 _710 = _708;
    _710[3] = _517;
    vec3 _298 = _517.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _723 = _710;
    _723[3] = vec4(_298.x, _298.y, _298.z, _517.w);
    vec4 _311 = _cameraBlock._camera._projectionViewUntranslated * (_723 * (vec4(inBoundPos, 1.0) + (vec4(inBoundDim, 0.0) * vec4(0.5, 0.5, 0.5, 0.0))));
    int _315 = gl_VertexID / 6;
    bool _733;
    int _736;
    if (_315 < 4)
    {
        _736 = inStatus0[_315];
        _733 = true;
    }
    else
    {
        bool _556 = _315 < 8;
        int _737;
        if (_556)
        {
            _737 = inStatus1[_315 - 4];
        }
        else
        {
            _737 = _738;
        }
        _736 = _737;
        _733 = _556 ? true : false;
    }
    int _762 = _733 ? _736 : (-1);
    bool _321 = _762 == (-1);
    if (_321)
    {
        gl_Position = _311;
        varColor = vec4(1.0);
    }
    if (!(_321 ? true : false))
    {
        vec4 _352 = _347[gl_VertexID - (_315 * 6)];
        float _594 = abs(clamp(float(uint((_762 >> 16) & 255)) * 0.0039215688593685626983642578125, 0.0, 1.0)) * 6.0;
        vec3 _751;
        if (_594 < 0.0)
        {
            _751 = vec3(1.0, 0.0, 0.0);
        }
        else
        {
            vec3 _752;
            if (_594 < 1.0)
            {
                _752 = vec3(1.0, _594, 0.0);
            }
            else
            {
                vec3 _753;
                if (_594 < 2.0)
                {
                    _753 = vec3(2.0 - _594, 1.0, 0.0);
                }
                else
                {
                    vec3 _754;
                    if (_594 < 3.0)
                    {
                        _754 = vec3(0.0, 1.0, _594 - 2.0);
                    }
                    else
                    {
                        vec3 _755;
                        if (_594 < 4.0)
                        {
                            _755 = vec3(0.0, 4.0 - _594, 1.0);
                        }
                        else
                        {
                            vec3 _756;
                            if (_594 < 5.0)
                            {
                                _756 = vec3(_594 - 4.0, 0.0, 1.0);
                            }
                            else
                            {
                                vec3 _757;
                                if (_594 < 6.0)
                                {
                                    _757 = vec3(1.0, 0.0, 6.0 - _594);
                                }
                                else
                                {
                                    _757 = vec3(1.0, 0.0, 0.0);
                                }
                                _756 = _757;
                            }
                            _755 = _756;
                        }
                        _754 = _755;
                    }
                    _753 = _754;
                }
                _752 = _753;
            }
            _751 = _752;
        }
        varColor = vec4(_751, 1.0);
        varTexcoord = vec3((_352.x + 1.0) * 0.5, (_352.y + 1.0) * (-0.5), clamp(float((_762 >> 24) & 255), 0.0, 255.0));
        gl_Position = _311 + (vec4(((_406[_315] * vec2(38.0)) + ((_352.xy * 0.5) * max(vec2(0.0), vec2(36.0) * clamp(float(((_762 >> 0) & 65535) - 32727) * 3.0555809644283726811408996582031e-05, -1.0, 1.0)))) * vec2(2.0 / _cameraBlock._camera._viewport.z, 2.0 / _cameraBlock._camera._viewport.w), 0.0, 0.0) * _311.w);
    }
}

