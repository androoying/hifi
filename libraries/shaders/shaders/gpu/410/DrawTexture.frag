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
//  Generated on Wed Dec  5 03:18:45 2018
//
//  DrawTexture.frag
//
//  Draw texture 0 fetched at texcoord.xy
//
//  Created by Sam Gateau on 6/22/2015
//  Copyright 2015 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//


LAYOUT(binding=0) uniform sampler2D colorMap;

layout(location=0) in vec2 varTexCoord0;
layout(location=0) out vec4 outFragColor;

void main(void) {
    outFragColor = texture(colorMap, varTexCoord0);
}
