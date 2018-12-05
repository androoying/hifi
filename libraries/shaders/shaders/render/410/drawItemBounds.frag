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
//  Generated on Wed Dec  5 03:18:47 2018
//  drawItemBounds.frag
//  fragment shader
//
//  Created by Sam Gateau on 6/29/15.
//  Copyright 2015 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

layout(location=0) in vec4 varColor;
layout(location=1) in vec2 varTexcoord;
layout(location=0) out vec4 outFragColor;

void main(void) {
    float var = step(fract(varTexcoord.x * varTexcoord.y * 1.0), 0.5);

    if (varColor.a == 0.0) {
        outFragColor = vec4(mix(vec3(0.0), varColor.xyz, var), mix(0.0, 1.0, var));
        
    } else {
        outFragColor = vec4(mix(vec3(1.0), varColor.xyz, var), varColor.a);
    }

}
