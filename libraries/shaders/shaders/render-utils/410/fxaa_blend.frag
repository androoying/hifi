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
#define GPU_PIXEL_SHADER
//PC 410 core
//  Generated on Wed Dec  5 03:19:02 2018
//
//  fxaa_blend.frag
//  fragment shader
//
//  Created by Raffi Bedikian on 8/30/15
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
layout(location=0) in vec2 varTexCoord0;
layout(location=0) out vec4 outFragColor;

LAYOUT(binding=0) uniform sampler2D colorTexture;

struct FxaaBlendParams {
    vec4 sharpenIntensity;
};

LAYOUT(binding=0) uniform fxaaBlendParamsBuffer {
    FxaaBlendParams params;
};

void main(void) {
    vec4 pixels[9];
    vec4 sharpenedPixel;
    pixels[0] = texelFetch(colorTexture, ivec2(gl_FragCoord.xy)+ivec2(-1,-1), 0);
    pixels[1] = texelFetch(colorTexture, ivec2(gl_FragCoord.xy)+ivec2(0,-1), 0);
    pixels[2] = texelFetch(colorTexture, ivec2(gl_FragCoord.xy)+ivec2(1,-1), 0);

    pixels[3] = texelFetch(colorTexture, ivec2(gl_FragCoord.xy)+ivec2(-1,0), 0);
    pixels[4] = texelFetch(colorTexture, ivec2(gl_FragCoord.xy), 0);
    pixels[5] = texelFetch(colorTexture, ivec2(gl_FragCoord.xy)+ivec2(1,0), 0);

    pixels[6] = texelFetch(colorTexture, ivec2(gl_FragCoord.xy)+ivec2(-1,1), 0);
    pixels[7] = texelFetch(colorTexture, ivec2(gl_FragCoord.xy)+ivec2(0,1), 0);
    pixels[8] = texelFetch(colorTexture, ivec2(gl_FragCoord.xy)+ivec2(1,1), 0);

    sharpenedPixel = pixels[4]*6.8 - (pixels[1]+pixels[3]+pixels[5]+pixels[7]) - (pixels[0]+pixels[2]+pixels[6]+pixels[8])*0.7;

    vec4 minColor = max(vec4(0), pixels[4]-vec4(0.5));
    vec4 maxColor = pixels[4]+vec4(0.5);
    outFragColor = clamp(pixels[4] + sharpenedPixel * params.sharpenIntensity.x, minColor, maxColor);
}
