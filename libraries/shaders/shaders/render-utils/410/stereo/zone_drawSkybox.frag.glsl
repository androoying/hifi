#version 410

struct DeferredFrameTransform
{
    vec4 _pixelInfo;
    vec4 _invPixelInfo;
    vec4 _depthInfo;
    vec4 _stereoInfo;
    mat4 _projection[2];
    mat4 _invProjection[2];
    mat4 _projectionMono;
    mat4 _viewInverse;
    mat4 _view;
    mat4 _projectionUnJittered[2];
    mat4 _invProjectionUnJittered[2];
};

struct CameraCorrection
{
    mat4 _correction;
    mat4 _correctionInverse;
    mat4 _prevView;
    mat4 _prevViewInverse;
};

struct Skybox
{
    vec4 color;
};

layout(std140) uniform deferredFrameTransformBuffer
{
    DeferredFrameTransform frameTransform;
} _21;

layout(std140) uniform cameraCorrectionBuffer
{
    CameraCorrection cameraCorrection;
} _31;

layout(std140) uniform skyboxBuffer
{
    Skybox skybox;
} _118;

uniform samplerCube skyboxMap;

layout(location = 0) in vec2 varTexCoord0;
layout(location = 0) out vec4 _fragColor;

void main()
{
    vec2 _50 = ((varTexCoord0 * 2.0) - vec2(1.0)) * 1.02499997615814208984375;
    float _55 = dot(_50, _50);
    if (_55 > 1.05062496662139892578125)
    {
        discard;
    }
    float _70 = (1.0 - sqrt(_55)) * 40.0;
    float _80 = 1.0 - min(1.0, _70 * _70);
    vec4 _81 = vec4(0.0, 0.0, 0.0, _80);
    bool _83 = _55 > 1.0;
    if (_83)
    {
        _fragColor = _81;
    }
    if (!(_83 ? true : false))
    {
        vec3 _186;
        if (_118.skybox.color.w > 0.0)
        {
            vec4 _136 = texture(skyboxMap, vec3(((_21.frameTransform._viewInverse * _31.cameraCorrection._correctionInverse) * vec4(normalize(vec3(_50, -sqrt(1.0 - _55))), 0.0)).xyz));
            vec3 _137 = _136.xyz;
            vec3 _187;
            if (_118.skybox.color.w < 1.0)
            {
                _187 = _137 * _118.skybox.color.xyz;
            }
            else
            {
                _187 = _137;
            }
            _186 = _187;
        }
        else
        {
            _186 = _118.skybox.color.xyz;
        }
        _fragColor = vec4(pow(((_186 * 1.0) - vec3(_80)) + (_81.xyz * _80), vec3(0.4545454680919647216796875)), 1.0);
    }
}

