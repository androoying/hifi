#version 410

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
layout(location = 1) out vec4 _color;
layout(location = 2) in vec4 inColor;
layout(location = 0) in vec4 inPosition;
layout(location = 1) in vec4 inNormal;
layout(location = 3) in vec4 inTexCoord0;
layout(location = 4) in vec4 inTangent;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 7) in vec4 inTexCoord1;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;

mat4 _457;

void main()
{
    float _451;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _451 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _451 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _452;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _452 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _452 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _453;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _453 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _453 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    _color = vec4(_451, _452, _453, inColor.w);
    int _330 = 8 * _drawCallInfo.x;
    mat4 _431 = _457;
    _431[0] = texelFetch(transformObjectBuffer, _330);
    mat4 _433 = _431;
    _433[1] = texelFetch(transformObjectBuffer, _330 + 1);
    mat4 _435 = _433;
    _435[2] = texelFetch(transformObjectBuffer, _330 + 2);
    vec4 _352 = texelFetch(transformObjectBuffer, _330 + 3);
    mat4 _437 = _435;
    _437[3] = _352;
    vec3 _208 = _352.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _450 = _437;
    _450[3] = vec4(_208.x, _208.y, _208.z, _352.w);
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * (_450 * inPosition);
}

