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
//  drawItemStatus.frag
//  fragment shader
//
//  Created by Sam Gateau on 6/30/15.
//  Copyright 2015 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

layout(location=0) in vec4 varColor;
layout(location=1) in vec3 varTexcoord;
layout(location=0) out vec4 outFragColor;

LAYOUT(binding=0) uniform sampler2D _icons;
vec2 getIconTexcoord(float icon, vec2 uv) {
    const vec2 ICON_COORD_SIZE = vec2(0.0625, 1.0);
    return vec2((uv.x + icon) * ICON_COORD_SIZE.x, uv.y * ICON_COORD_SIZE.y);
}

void main(void) {
    if (varTexcoord.z < 254.5) {
        outFragColor = texture(_icons, getIconTexcoord(varTexcoord.z, varTexcoord.xy)) * varColor;
    } else {
        vec2 centerDir = varTexcoord.xy * 2.0f - 1.0f;
        outFragColor = vec4(varColor.xyz, 1.0 - step(1.0f, dot(centerDir.xy, centerDir.xy)));
    }
}
