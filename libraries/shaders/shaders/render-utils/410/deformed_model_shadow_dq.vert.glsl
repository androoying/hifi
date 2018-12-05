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

layout(std140) uniform skinClusterBuffer
{
    mat4 clusterMatrices[128];
} _401;

uniform samplerBuffer transformObjectBuffer;
uniform samplerBuffer blendshapeOffsetsBuffer;

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

mat4 _1274;

void main()
{
    vec4 _1264;
    if ((_drawCallInfo.y & 1) != 0)
    {
        uvec4 _733 = floatBitsToUint(texelFetch(blendshapeOffsetsBuffer, gl_VertexID));
        int _739 = int(_733.y);
        _1264 = inPosition + vec4(vec3(clamp(float(bitfieldExtract(_739, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_739, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_739, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)) * uintBitsToFloat(_733.x), 0.0);
    }
    else
    {
        _1264 = inPosition;
    }
    vec4 _1271;
    if ((_drawCallInfo.y & 2) != 0)
    {
        ivec4 _689 = inSkinClusterIndex;
        vec4 _690 = inSkinClusterWeight;
        vec4 _1266;
        vec4 _1267;
        vec4 _1268;
        vec4 _1269;
        _1269 = vec4(0.0);
        _1268 = vec4(0.0);
        _1267 = vec4(0.0);
        _1266 = vec4(0.0);
        float _799;
        vec4 _801;
        vec4 _803;
        vec4 _805;
        vec4 _807;
        float _1282;
        for (int _1265 = 0; _1265 < 4; _1269 += (_807 * _799), _1268 += (_801 * _799), _1267 += (_805 * _1282), _1266 += (_803 * _1282), _1265++)
        {
            _799 = _690[_1265];
            _801 = _401.clusterMatrices[_689[_1265]][0];
            _803 = _401.clusterMatrices[_689[_1265]][1];
            _805 = _401.clusterMatrices[_689[_1265]][2];
            _807 = _401.clusterMatrices[_689[_1265]][3];
            if (dot(_803, _401.clusterMatrices[_689.x][1]) < 0.0)
            {
                _1282 = -_799;
                continue;
            }
            else
            {
                _1282 = _799;
                continue;
            }
            continue;
        }
        float _840 = length(_1266);
        vec4 _843 = vec4(_840);
        vec4 _844 = _1266 / _843;
        vec4 _848 = _1267 / _843;
        float _880 = _844.x;
        float _881 = 2.0 * _880;
        float _886 = _844.y;
        float _887 = 2.0 * _886;
        float _890 = _887 * _886;
        float _892 = _844.z;
        float _893 = 2.0 * _892;
        float _896 = _893 * _892;
        float _902 = _881 * _886;
        float _908 = _881 * _892;
        float _913 = _844.w;
        float _914 = _881 * _913;
        float _920 = _893 * _913;
        float _926 = _887 * _892;
        float _932 = _887 * _913;
        float _948 = 1.0 - (_881 * _880);
        float _968 = -_848.w;
        float _973 = _848.x;
        float _979 = _848.y;
        float _985 = _848.z;
        vec4 _1270;
        if (_1268.w > 0.100000001490116119384765625)
        {
            _1270 = _1269;
        }
        else
        {
            vec4 _1242 = _1268;
            _1242.w = 1.0;
            _1270 = mat4(vec4((1.0 - _890) - _896, _902 + _920, _908 - _932, 0.0), vec4(_902 - _920, _948 - _896, _926 + _914, 0.0), vec4(_908 + _932, _926 - _914, _948 - _890, 0.0), vec4(2.0 * ((((_968 * _880) + (_973 * _913)) - (_979 * _892)) + (_985 * _886)), 2.0 * ((((_968 * _886) + (_973 * _892)) + (_979 * _913)) - (_985 * _880)), 2.0 * ((((_968 * _892) - (_973 * _886)) + (_979 * _880)) + (_985 * _913)), 1.0)) * (_1242 * _1264);
        }
        _1271 = _1270;
    }
    else
    {
        _1271 = _1264;
    }
    int _1091 = 8 * _drawCallInfo.x;
    mat4 _1244 = _1274;
    _1244[0] = texelFetch(transformObjectBuffer, _1091);
    mat4 _1246 = _1244;
    _1246[1] = texelFetch(transformObjectBuffer, _1091 + 1);
    mat4 _1248 = _1246;
    _1248[2] = texelFetch(transformObjectBuffer, _1091 + 2);
    vec4 _1113 = texelFetch(transformObjectBuffer, _1091 + 3);
    mat4 _1250 = _1248;
    _1250[3] = _1113;
    vec3 _643 = _1113.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _1263 = _1250;
    _1263[3] = vec4(_643.x, _643.y, _643.z, _1113.w);
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * (_1263 * _1271);
    _positionWS = _1250 * _1271;
}

