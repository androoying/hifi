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
//  Generated on Wed Dec  5 03:19:17 2018
//
//  stencil_drawMask.frag
//  fragment shader
//
//  Created by Sam Gateau on 5/31/17.
//  Copyright 2017 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

layout(location=0) in vec2 varTexCoord0;

float aspectRatio = 0.95;

void main(void) {
    vec2 pos = varTexCoord0 * 2.0 - vec2(1.0);
    pos.x =  aspectRatio * (pos.x * (pos.x > 0.0 ? 2.0 : -2.0) - 1.0);
    if (1.0 - dot(pos.xy, pos.xy) > 0.0 ) discard;
}
