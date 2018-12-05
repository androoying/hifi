#version 410 core
#define GPU_GL410
#define BITFIELD int
#if defined(VULKAN)
  #extension GL_ARB_shading_language_420pack : require
  #define LAYOUT(X) layout(X)
  #define LAYOUT_STD140(X) layout(std140, X)
#else
  #define LAYOUT(X)
  #define LAYOUT_STD140(X) layout(std140)
#endif
#ifdef VULKAN
#define gl_InstanceID  gl_InstanceIndex
#define gl_VertexID  gl_VertexIndex
#endif
#define GPU_VERTEX_SHADER
//PC 410 core
//  Generated on Wed Dec  5 03:18:51 2018
//
//  drawWorkloadProxy.vert
//  vertex shader
//
//  Created by Sam Gateau on 6/29/2015.
//  Copyright 2015 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

// // // // Hack comment to absorb the extra '//' scribe prepends

#ifndef GPU_SHADER_CONSTANTS_H
#define GPU_SHADER_CONSTANTS_H

#define GPU_BUFFER_TRANSFORM_CAMERA 15
#define GPU_BUFFER_TEXTURE_TABLE0 16
#define GPU_BUFFER_TEXTURE_TABLE1 17
#define GPU_BUFFER_CAMERA_CORRECTION 18

#define GPU_TEXTURE_TRANSFORM_OBJECT 31


#define GPU_RESOURCE_BUFFER_SLOT0_TEXTURE 35
#define GPU_RESOURCE_BUFFER_SLOT1_TEXTURE 36
#define GPU_RESOURCE_BUFFER_SLOT0_STORAGE 0
#define GPU_RESOURCE_BUFFER_SLOT1_STORAGE 1

// Mip creation
#define GPU_TEXTURE_MIP_CREATION_INPUT 30

#define GPU_STORAGE_TRANSFORM_OBJECT 7

#define GPU_ATTR_POSITION 0
#define GPU_ATTR_NORMAL 1
#define GPU_ATTR_COLOR 2
#define GPU_ATTR_TEXCOORD0 3
#define GPU_ATTR_TANGENT 4
#define GPU_ATTR_SKIN_CLUSTER_INDEX 5
#define GPU_ATTR_SKIN_CLUSTER_WEIGHT 6
#define GPU_ATTR_TEXCOORD1 7
#define GPU_ATTR_TEXCOORD2 8
#define GPU_ATTR_TEXCOORD3 9
#define GPU_ATTR_TEXCOORD4 10
#define GPU_ATTR_STEREO_SIDE 14
#define GPU_ATTR_DRAW_CALL_INFO 15

// OSX seems to have an issue using 14 as an attribute location for passing from the vertex to the fragment shader
#define GPU_ATTR_V2F_STEREO_SIDE 8

#define GPU_UNIFORM_EXTRA0 110
#define GPU_UNIFORM_EXTRA1 111
#define GPU_UNIFORM_EXTRA2 112
#define GPU_UNIFORM_EXTRA3 113
#define GPU_UNIFORM_EXTRA4 114
#define GPU_UNIFORM_EXTRA5 115
#define GPU_UNIFORM_EXTRA6 116
#define GPU_UNIFORM_EXTRA7 117
#define GPU_UNIFORM_EXTRA8 118
#define GPU_UNIFORM_EXTRA9 119

// // Hack Comment
#endif // GPU_SHADER_CONSTANTS_H

// // // Hack Comment
// glsl / C++ compatible source as interface for FadeEffect
#ifdef __cplusplus
#   define _MAT4 Mat4
#   define _VEC4 Vec4
#    define _MUTABLE mutable
#else
#   define _MAT4 mat4
#   define _VEC4 vec4
#    define _MUTABLE 
#endif

struct _TransformCamera {
    _MUTABLE _MAT4 _view;
    _MUTABLE _MAT4 _viewInverse;
    _MUTABLE _MAT4 _projectionViewUntranslated;
    _MAT4 _projection;
    _MUTABLE _MAT4 _projectionInverse;
    _VEC4 _viewport; // Public value is int but float in the shader to stay in floats for all the transform computations.
    _MUTABLE _VEC4 _stereoInfo;
};

    // //

#define TransformCamera _TransformCamera

LAYOUT_STD140(binding=GPU_BUFFER_TRANSFORM_CAMERA) uniform transformCameraBuffer {
#ifdef GPU_TRANSFORM_IS_STEREO
#ifdef GPU_TRANSFORM_STEREO_CAMERA
    TransformCamera _camera[2];
#else
    TransformCamera _camera;
#endif
#else
    TransformCamera _camera;
#endif
} _cameraBlock;

#ifdef GPU_VERTEX_SHADER
#ifdef GPU_TRANSFORM_IS_STEREO
#ifdef GPU_TRANSFORM_STEREO_CAMERA
#ifdef GPU_TRANSFORM_STEREO_CAMERA_ATTRIBUTED
layout(location=GPU_ATTR_STEREO_SIDE) in int _inStereoSide;
#endif

layout(location=GPU_ATTR_V2F_STEREO_SIDE) flat out int _stereoSide;

// In stereo drawcall mode Instances are drawn twice (left then right) hence the true InstanceID is the gl_InstanceID / 2
int gpu_InstanceID() {
    return gl_InstanceID >> 1;
}

#else

int gpu_InstanceID() {
    return gl_InstanceID;
}
#endif
#else

int gpu_InstanceID() {
    return gl_InstanceID;
}

#endif

#endif

#ifdef GPU_PIXEL_SHADER
#ifdef GPU_TRANSFORM_STEREO_CAMERA
layout(location=GPU_ATTR_V2F_STEREO_SIDE) flat in int _stereoSide;
#endif
#endif


TransformCamera getTransformCamera() {
#ifdef GPU_TRANSFORM_IS_STEREO
    #ifdef GPU_TRANSFORM_STEREO_CAMERA
        #ifdef GPU_VERTEX_SHADER
            #ifdef GPU_TRANSFORM_STEREO_CAMERA_ATTRIBUTED
                _stereoSide = _inStereoSide;
            #endif
            #ifdef GPU_TRANSFORM_STEREO_CAMERA_INSTANCED
                _stereoSide = gl_InstanceID % 2;
            #endif
        #endif
        return _cameraBlock._camera[_stereoSide];
    #else
        return _cameraBlock._camera;
    #endif
#else
    return _cameraBlock._camera;
#endif
}

vec3 getEyeWorldPos() {
    return getTransformCamera()._viewInverse[3].xyz;
}

bool cam_isStereo() {
#ifdef GPU_TRANSFORM_IS_STEREO
    return getTransformCamera()._stereoInfo.x > 0.0;
#else
    return _cameraBlock._camera._stereoInfo.x > 0.0;
#endif
}

float cam_getStereoSide() {
#ifdef GPU_TRANSFORM_IS_STEREO
#ifdef GPU_TRANSFORM_STEREO_CAMERA
    return getTransformCamera()._stereoInfo.y;
#else
    return _cameraBlock._camera._stereoInfo.y;
#endif
#else
    return _cameraBlock._camera._stereoInfo.y;
#endif
}


struct TransformObject {
    mat4 _model;
    mat4 _modelInverse;
};

layout(location=GPU_ATTR_DRAW_CALL_INFO) in ivec2 _drawCallInfo;

#if defined(GPU_SSBO_TRANSFORM_OBJECT)
LAYOUT_STD140(binding=GPU_STORAGE_TRANSFORM_OBJECT) buffer transformObjectBuffer {
    TransformObject _object[];
};
TransformObject getTransformObject() {
    TransformObject transformObject = _object[_drawCallInfo.x];
    return transformObject;
}
#else
LAYOUT(binding=GPU_TEXTURE_TRANSFORM_OBJECT) uniform samplerBuffer transformObjectBuffer;

TransformObject getTransformObject() {
    int offset = 8 * _drawCallInfo.x;
    TransformObject object;
    object._model[0] = texelFetch(transformObjectBuffer, offset);
    object._model[1] = texelFetch(transformObjectBuffer, offset + 1);
    object._model[2] = texelFetch(transformObjectBuffer, offset + 2);
    object._model[3] = texelFetch(transformObjectBuffer, offset + 3);

    object._modelInverse[0] = texelFetch(transformObjectBuffer, offset + 4);
    object._modelInverse[1] = texelFetch(transformObjectBuffer, offset + 5);
    object._modelInverse[2] = texelFetch(transformObjectBuffer, offset + 6);
    object._modelInverse[3] = texelFetch(transformObjectBuffer, offset + 7);

    return object;
}
#endif




//
//  Created by Sam Gateau on 7/31/2018.
//  Copyright 2018 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//
// Linear ====> linear RGB
// sRGB ======> standard RGB with gamma of 2.2
// YCoCg =====> Luma (Y) chrominance green (Cg) and chrominance orange (Co)
// https://software.intel.com/en-us/node/503873

float color_scalar_sRGBToLinear(float value) {
    const float SRGB_ELBOW = 0.04045;
    
    return (value <= SRGB_ELBOW) ? value / 12.92 : pow((value + 0.055) / 1.055, 2.4);
}

vec3 color_sRGBToLinear(vec3 srgb) {
    return vec3(color_scalar_sRGBToLinear(srgb.r), color_scalar_sRGBToLinear(srgb.g), color_scalar_sRGBToLinear(srgb.b));
}

vec4 color_sRGBAToLinear(vec4 srgba) {
    return vec4(color_sRGBToLinear(srgba.xyz), srgba.w);
}

vec3 color_LinearToYCoCg(vec3 rgb) {
    // Y = R/4 + G/2 + B/4
    // Co = R/2 - B/2
    // Cg = -R/4 + G/2 - B/4
    return vec3(
            rgb.x/4.0 + rgb.y/2.0 + rgb.z/4.0,
            rgb.x/2.0 - rgb.z/2.0,
        -rgb.x/4.0 + rgb.y/2.0 - rgb.z/4.0
    );
}

vec3 color_YCoCgToUnclampedLinear(vec3 ycocg) {
    // R = Y + Co - Cg
    // G = Y + Cg
    // B = Y - Co - Cg
    return vec3(
        ycocg.x + ycocg.y - ycocg.z,
        ycocg.x + ycocg.z,
        ycocg.x - ycocg.y - ycocg.z
    );
}

vec3 color_YCoCgToLinear(vec3 ycocg) {
    return clamp(color_YCoCgToUnclampedLinear(ycocg), vec3(0.0), vec3(1.0));
}

vec3 colorWheel(float normalizedHue) {
    float v = normalizedHue * 6.f;
    if (v < 0.f) {
        return vec3(1.f, 0.f, 0.f);
    } else if (v < 1.f) {
        return vec3(1.f, v, 0.f);
    } else if (v < 2.f) {
        return vec3(1.f - (v-1.f), 1.f, 0.f);
    } else if (v < 3.f) {
        return vec3(0.f, 1.f, (v-2.f));
    } else if (v < 4.f) {
        return vec3(0.f, 1.f - (v-3.f), 1.f );
    } else if (v < 5.f) {
        return vec3((v-4.f), 0.f, 1.f );
    } else if (v < 6.f) {
        return vec3(1.f, 0.f, 1.f - (v-5.f));
    } else {
        return vec3(1.f, 0.f, 0.f);
    }
}

vec3 colorRamp(float normalizedHue) {
    float v = normalizedHue * 5.f;
    if (v < 0.f) {
        return vec3(1.f, 0.f, 0.f);
    } else if (v < 1.f) {
        return vec3(1.f, v, 0.f);
    } else if (v < 2.f) {
        return vec3(1.f - (v - 1.f), 1.f, 0.f);
    } else if (v < 3.f) {
        return vec3(0.f, 1.f, (v - 2.f));
    } else if (v < 4.f) {
        return vec3(0.f, 1.f - (v - 3.f), 1.f);
    } else if (v < 5.f) {
        return vec3((v - 4.f), 0.f, 1.f);
    } else {
        return vec3(1.f, 0.f, 1.f);
    }
}


const vec4 REGION_COLOR[4] = vec4[4](
    vec4(0.0, 1.0, 0.0, 1.0),
    vec4(1.0, 0.6, 0.0, 1.0),
    vec4(1.0, 0.0, 0.0, 1.0),
    vec4(0.3, 0.0, 0.8, 1.0)
);

struct WorkloadProxy {
    vec4 sphere;
    vec4 region;
};

#if !defined(GPU_SSBO_TRANSFORM_OBJECT)
LAYOUT(binding=GPU_RESOURCE_BUFFER_SLOT0_TEXTURE) uniform samplerBuffer workloadProxiesBuffer;
WorkloadProxy getWorkloadProxy(int i) {
    int offset = 2 * i;
    WorkloadProxy proxy;
    proxy.sphere = texelFetch(workloadProxiesBuffer, offset);
    proxy.region = texelFetch(workloadProxiesBuffer, offset + 1);
    return proxy;
}
#else
LAYOUT_STD140(binding=GPU_RESOURCE_BUFFER_SLOT0_STORAGE) buffer workloadProxiesBuffer {
    WorkloadProxy _proxies[];
};
WorkloadProxy getWorkloadProxy(int i) {
    WorkloadProxy proxy = _proxies[i];
    return proxy;
}
#endif




layout(location=0) out vec4 varColor;
layout(location=1) out vec3 varTexcoord;
layout(location=2) out vec3 varEyePos;

void main(void) {
    const vec4 UNIT_SPRITE[3] = vec4[3](
        vec4(-1.0, -1.0, 0.0, 1.0),
        vec4(3.0, -1.0, 0.0, 1.0),
        vec4(-1.0, 3.0, 0.0, 1.0)
    );
     const int UNIT_SPRITE_INDICES[3] = int[3](
        0, 1, 2
    );
    int proxyID = gl_VertexID / 3;
    int vertexID = gl_VertexID - proxyID * 3;

    vec4 spriteVert = UNIT_SPRITE[UNIT_SPRITE_INDICES[vertexID]];

    WorkloadProxy proxy = getWorkloadProxy(proxyID);
    vec4 proxyPosWorld = vec4(proxy.sphere.xyz, 1.0);

    // standard transform, bring proxy in view space
    TransformCamera cam = getTransformCamera();
    TransformObject obj = getTransformObject();
    vec4 proxyPosEye;
    { // transformModelToEyePos
        vec4 eyeWAPos;
        { // _transformModelToEyeWorldAlignedPos
        highp mat4 _mv = obj._model;
        _mv[3].xyz -= cam._viewInverse[3].xyz;
        highp vec4 _eyeWApos = (_mv * proxyPosWorld);
        eyeWAPos = _eyeWApos;
    }

        proxyPosEye = vec4((cam._view * vec4(eyeWAPos.xyz, 0.0)).xyz, 1.0);
    }


    // Define the billboarded space
    vec3 dirZ = -normalize(proxyPosEye.xyz);
    vec3 dirX = normalize(cross(vec3(0.0, 1.0, 0.0), dirZ));
    vec3 dirY = vec3(0.0, 1.0, 0.0);

    vec4 pos = vec4(proxyPosEye.xyz + proxy.sphere.w * ( dirX * spriteVert.x + dirY * spriteVert.y /* + dirZ * spriteVert.z*/), 1.0);
    varEyePos = pos.xyz;
    varTexcoord = spriteVert.xyz;
    { // transformEyeToClipPos
        gl_Position = cam._projection * vec4(pos.xyz, 1.0);

        {
#ifdef GPU_TRANSFORM_IS_STEREO

#ifdef GPU_TRANSFORM_STEREO_SPLIT_SCREEN
        vec4 eyeClipEdge[2]= vec4[2](vec4(-1,0,0,1), vec4(1,0,0,1));
        vec2 eyeOffsetScale = vec2(-0.5, +0.5);
        uint eyeIndex = uint(_stereoSide);
#ifndef GPU_GLES
        gl_ClipDistance[0] = dot(gl_Position, eyeClipEdge[eyeIndex]);
#endif
        float newClipPosX = gl_Position.x * 0.5 + eyeOffsetScale[eyeIndex] * gl_Position.w;
        gl_Position.x = newClipPosX;
#endif

#else
#endif
    }

    }


    // Convert region to color
    int region = floatBitsToInt(proxy.region.x);
    region = (0x000000FF & region);

    varColor = vec4(REGION_COLOR[region].xyz, proxy.sphere.w);

    if (region == 4) {
        gl_Position = vec4(0.0);
    }
}
