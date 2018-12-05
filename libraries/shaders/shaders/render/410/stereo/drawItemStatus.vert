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
#define GPU_TRANSFORM_IS_STEREO
#define GPU_TRANSFORM_STEREO_CAMERA
#define GPU_TRANSFORM_STEREO_CAMERA_INSTANCED
#define GPU_TRANSFORM_STEREO_SPLIT_SCREEN
#define GPU_VERTEX_SHADER
//PC 410 core
//  Generated on Wed Dec  5 03:18:47 2018
//
//  drawItemStatus.vert
//  vertex shader
//
//  Created by Sam Gateau on 6/30/2015.
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




layout(location=0) out vec4 varColor;
layout(location=1) out vec3 varTexcoord;

layout(location=0) in vec3 inBoundPos;
layout(location=1) in vec3 inBoundDim;
layout(location=2) in ivec4 inStatus0;
layout(location=3) in ivec4 inStatus1;

vec3 paintRainbow(float normalizedHue) {
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

const int INVALID_STATUS = int(0xFFFFFFFF);
const int MAX_NUM_ICONS = 8;
const int ICONS_PER_ROW = 4;

int getIconStatus(int icon) {
    if (icon < ICONS_PER_ROW) {
        return inStatus0[icon];
    } else if (icon < MAX_NUM_ICONS) {
        return inStatus1[icon - ICONS_PER_ROW];
    }
    return INVALID_STATUS;
}

vec3 unpackStatus(int v) {
    return vec3(clamp(float(int((v >> 0) & 0xFFFF) - 32727) / 32727.0, -1.0, 1.0),
                clamp(float(uint((v >> 16) & 0xFF)) / 255.0, 0.0, 1.0),
                clamp(float(int((v >> 24) & 0xFF)), 0.0, 255.0));
}

void main(void) {
    const int NUM_VERTICES_PER_ICON = 6;
    const vec4 UNIT_QUAD[NUM_VERTICES_PER_ICON] = vec4[NUM_VERTICES_PER_ICON](
        vec4(-1.0, -1.0, 0.0, 1.0),
        vec4(1.0, -1.0, 0.0, 1.0),
        vec4(-1.0, 1.0, 0.0, 1.0),
        vec4(-1.0, 1.0, 0.0, 1.0),
        vec4(1.0, -1.0, 0.0, 1.0),
        vec4(1.0, 1.0, 0.0, 1.0)
    );

    const vec2 ICON_PIXEL_SIZE = vec2(36, 36);
    const vec2 MARGIN_PIXEL_SIZE = vec2(2, 2);
    const vec2 ICON_GRID_SLOTS[MAX_NUM_ICONS] = vec2[MAX_NUM_ICONS](vec2(-1.5, 0.5),
                                                                    vec2(-0.5, 0.5),
                                                                    vec2(0.5, 0.5),
                                                                    vec2(1.5, 0.5),
                                                                    vec2(-1.5,-0.5),
                                                                    vec2(-0.5,-0.5),
                                                                    vec2(0.5, -0.5),
                                                                    vec2(1.5, -0.5));

    // anchor point in clip space
    vec4 anchorPoint = vec4(inBoundPos, 1.0) + vec4(inBoundDim, 0.0) * vec4(0.5, 0.5, 0.5, 0.0);
    TransformCamera cam = getTransformCamera();
    TransformObject obj = getTransformObject();
    { // transformModelToClipPos
        { // transformModelToMonoClipPos
        vec4 eyeWAPos;
        { // _transformModelToEyeWorldAlignedPos
        highp mat4 _mv = obj._model;
        _mv[3].xyz -= cam._viewInverse[3].xyz;
        highp vec4 _eyeWApos = (_mv * anchorPoint);
        eyeWAPos = _eyeWApos;
    }

        anchorPoint = cam._projectionViewUntranslated * eyeWAPos;
    }

        {
#ifdef GPU_TRANSFORM_IS_STEREO

#ifdef GPU_TRANSFORM_STEREO_SPLIT_SCREEN
        vec4 eyeClipEdge[2]= vec4[2](vec4(-1,0,0,1), vec4(1,0,0,1));
        vec2 eyeOffsetScale = vec2(-0.5, +0.5);
        uint eyeIndex = uint(_stereoSide);
#ifndef GPU_GLES
        gl_ClipDistance[0] = dot(anchorPoint, eyeClipEdge[eyeIndex]);
#endif
        float newClipPosX = anchorPoint.x * 0.5 + eyeOffsetScale[eyeIndex] * anchorPoint.w;
        anchorPoint.x = newClipPosX;
#endif

#else
#endif
    }

    }


    // Which icon are we dealing with ?
    int iconNum = gl_VertexID / NUM_VERTICES_PER_ICON;
    int packedIconStatus = getIconStatus(iconNum);

    // if invalid, just kill
    if (packedIconStatus == INVALID_STATUS) {
        gl_Position = anchorPoint;
        varColor = vec4(1.0);
        return;
    }

    // Which quad vertex pos?
    int twoTriID = gl_VertexID - iconNum * NUM_VERTICES_PER_ICON;
    vec4 quadPos = UNIT_QUAD[twoTriID];

    // unpack to get x and y satus
    vec3 iconStatus = unpackStatus(packedIconStatus);

    // Use the status for showing a color
    varColor = vec4(paintRainbow(abs(iconStatus.y)), 1.0);

    // Pass the texcoord and the z texcoord is representing the texture icon
    varTexcoord = vec3( (quadPos.x + 1.0) * 0.5, (quadPos.y + 1.0) * -0.5, iconStatus.z);

    // Also changes the size of the notification
    vec2 iconScale = ICON_PIXEL_SIZE;
    iconScale = max(vec2(0, 0), (iconScale * iconStatus.x));

    //Offset icon to the right based on the iconNum
    vec2 gridOffset = ICON_GRID_SLOTS[iconNum];
    vec2 offset = gridOffset * (ICON_PIXEL_SIZE + MARGIN_PIXEL_SIZE);

    // Final position in pixel space
    vec2 quadPixelPos = offset.xy + quadPos.xy * 0.5 * iconScale;

    vec4 viewport;
    viewport = cam._viewport;
;
    vec2 pixelToClip = vec2(2.0 / viewport.z, 2.0 / viewport.w);
    gl_Position = anchorPoint + (anchorPoint.w * vec4(quadPixelPos * pixelToClip, 0.0, 0.0));

}
