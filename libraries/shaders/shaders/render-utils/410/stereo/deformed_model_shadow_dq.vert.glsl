#version 410

out float gl_ClipDistance[1];

const vec4 _675[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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
    _TransformCamera _camera[2];
} _cameraBlock;

layout(std140) uniform skinClusterBuffer
{
    mat4 clusterMatrices[128];
} _408;

uniform samplerBuffer transformObjectBuffer;
uniform samplerBuffer blendshapeOffsetsBuffer;

layout(location = 8) flat out int _stereoSide;
uniform int SPIRV_Cross_BaseInstance;
layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 0) in vec4 inPosition;
layout(location = 2) out vec4 _positionWS;
layout(location = 1) in vec4 inNormal;
layout(location = 2) in vec4 inColor;
layout(location = 3) in vec4 inTexCoord0;
layout(location = 4) in vec4 inTangent;
layout(location = 7) in vec4 inTexCoord1;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;

mat4 _1320;

void main()
{
    vec4 _1310;
    if ((_drawCallInfo.y & 1) != 0)
    {
        uvec4 _776 = floatBitsToUint(texelFetch(blendshapeOffsetsBuffer, gl_VertexID));
        int _782 = int(_776.y);
        _1310 = inPosition + vec4(vec3(clamp(float(bitfieldExtract(_782, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_782, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_782, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)) * uintBitsToFloat(_776.x), 0.0);
    }
    else
    {
        _1310 = inPosition;
    }
    vec4 _1317;
    if ((_drawCallInfo.y & 2) != 0)
    {
        ivec4 _732 = inSkinClusterIndex;
        vec4 _733 = inSkinClusterWeight;
        vec4 _1312;
        vec4 _1313;
        vec4 _1314;
        vec4 _1315;
        _1315 = vec4(0.0);
        _1314 = vec4(0.0);
        _1313 = vec4(0.0);
        _1312 = vec4(0.0);
        float _842;
        vec4 _844;
        vec4 _846;
        vec4 _848;
        vec4 _850;
        float _1328;
        for (int _1311 = 0; _1311 < 4; _1315 += (_850 * _842), _1314 += (_844 * _842), _1313 += (_848 * _1328), _1312 += (_846 * _1328), _1311++)
        {
            _842 = _733[_1311];
            _844 = _408.clusterMatrices[_732[_1311]][0];
            _846 = _408.clusterMatrices[_732[_1311]][1];
            _848 = _408.clusterMatrices[_732[_1311]][2];
            _850 = _408.clusterMatrices[_732[_1311]][3];
            if (dot(_846, _408.clusterMatrices[_732.x][1]) < 0.0)
            {
                _1328 = -_842;
                continue;
            }
            else
            {
                _1328 = _842;
                continue;
            }
            continue;
        }
        float _883 = length(_1312);
        vec4 _886 = vec4(_883);
        vec4 _887 = _1312 / _886;
        vec4 _891 = _1313 / _886;
        float _923 = _887.x;
        float _924 = 2.0 * _923;
        float _929 = _887.y;
        float _930 = 2.0 * _929;
        float _933 = _930 * _929;
        float _935 = _887.z;
        float _936 = 2.0 * _935;
        float _939 = _936 * _935;
        float _945 = _924 * _929;
        float _951 = _924 * _935;
        float _956 = _887.w;
        float _957 = _924 * _956;
        float _963 = _936 * _956;
        float _969 = _930 * _935;
        float _975 = _930 * _956;
        float _991 = 1.0 - (_924 * _923);
        float _1011 = -_891.w;
        float _1016 = _891.x;
        float _1022 = _891.y;
        float _1028 = _891.z;
        vec4 _1316;
        if (_1314.w > 0.100000001490116119384765625)
        {
            _1316 = _1315;
        }
        else
        {
            vec4 _1288 = _1314;
            _1288.w = 1.0;
            _1316 = mat4(vec4((1.0 - _933) - _939, _945 + _963, _951 - _975, 0.0), vec4(_945 - _963, _991 - _939, _969 + _957, 0.0), vec4(_951 + _975, _969 - _957, _991 - _933, 0.0), vec4(2.0 * ((((_1011 * _923) + (_1016 * _956)) - (_1022 * _935)) + (_1028 * _929)), 2.0 * ((((_1011 * _929) + (_1016 * _935)) + (_1022 * _956)) - (_1028 * _923)), 2.0 * ((((_1011 * _935) - (_1016 * _929)) + (_1022 * _923)) + (_1028 * _956)), 1.0)) * (_1288 * _1310);
        }
        _1317 = _1316;
    }
    else
    {
        _1317 = _1310;
    }
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _1137 = 8 * _drawCallInfo.x;
    mat4 _1290 = _1320;
    _1290[0] = texelFetch(transformObjectBuffer, _1137);
    mat4 _1292 = _1290;
    _1292[1] = texelFetch(transformObjectBuffer, _1137 + 1);
    mat4 _1294 = _1292;
    _1294[2] = texelFetch(transformObjectBuffer, _1137 + 2);
    vec4 _1159 = texelFetch(transformObjectBuffer, _1137 + 3);
    mat4 _1296 = _1294;
    _1296[3] = _1159;
    vec3 _650 = _1159.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _1309 = _1296;
    _1309[3] = vec4(_650.x, _650.y, _650.z, _1159.w);
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * (_1309 * _1317);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _684 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _675[_684]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_684] * gl_Position.w);
    _positionWS = _1296 * _1317;
}

