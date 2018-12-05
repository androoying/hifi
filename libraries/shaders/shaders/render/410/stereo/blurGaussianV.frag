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
#define GPU_PIXEL_SHADER
//PC 410 core
//  Generated on Wed Dec  5 03:18:47 2018
//
//  blurGaussianV.frag
//
//  Created by Sam Gateau on 6/7/16.
//  Copyright 2016 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//
//  Generated on Wed Dec  5 03:18:47 2018
//
//  Created by Sam Gateau on 6/7/16.
//  Copyright 2016 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

//  Generated on Wed Dec  5 03:18:47 2018
//
//  Created by Olivier Prat on 09/25/17.
//  Copyright 2017 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

#define BLUR_MAX_NUM_TAPS 33
struct BlurParameters {
    vec4 resolutionInfo;
    vec4 texcoordTransform;
    vec4 filterInfo;
    vec4 depthInfo;
    vec4 stereoInfo;
    vec4 linearDepthInfo;
    vec2 taps[BLUR_MAX_NUM_TAPS];
};

LAYOUT(binding=0) uniform blurParamsBuffer {
    BlurParameters parameters;
};

vec2 getInvWidthHeight() {
    return parameters.resolutionInfo.zw;
}

vec2 evalTexcoordTransformed(vec2 texcoord) {
    return (texcoord * parameters.texcoordTransform.zw + parameters.texcoordTransform.xy);
}

float getFilterScale() {
    return parameters.filterInfo.x;
}

int getFilterNumTaps() {
    return int(parameters.filterInfo.y);
}

float getOutputAlpha() {
    return parameters.filterInfo.z;
}

vec2 getFilterTap(int index) {
    return parameters.taps[index];
}

float getFilterTapOffset(vec2 tap) {
    return tap.x;
}

float getFilterTapWeight(vec2 tap) {
    return tap.y;
}

float getDepthThreshold() {
    return parameters.depthInfo.x;
}

float getDepthPerspective() {
    return parameters.depthInfo.w;
}

float getPosLinearDepthFar() {
    return parameters.linearDepthInfo.x;
}



LAYOUT(binding=0) uniform sampler2D sourceMap;

vec4 pixelShaderGaussian(vec2 texcoord, vec2 direction, vec2 pixelStep) {
    texcoord = evalTexcoordTransformed(texcoord);

    vec2 finalStep = getFilterScale() * direction * pixelStep;
    vec4 srcBlurred = vec4(0.0);
    float totalWeight = 0.f;
    int numTaps = getFilterNumTaps();
    
    for(int i = 0; i < numTaps; i++) {
        vec2 tapInfo = getFilterTap(i);
        // Fetch color for current sample.
        vec2 sampleCoord = texcoord + (getFilterTapOffset(tapInfo) * finalStep);
        if (all(greaterThanEqual(sampleCoord, vec2(0,0))) && all(lessThanEqual(sampleCoord, vec2(1.0,1.0)))) {
            vec4 srcSample = texture(sourceMap, sampleCoord);
            float weight = getFilterTapWeight(tapInfo);
            // Accumulate.
            srcBlurred += srcSample * weight;
            totalWeight += weight;
        }
    }
    
    if (totalWeight>0.0) {
        srcBlurred /= totalWeight;
    }
    srcBlurred.a = getOutputAlpha();
    return srcBlurred;
}




layout(location=0) in vec2 varTexCoord0;

layout(location=0) out vec4 outFragColor;

void main(void) {
    outFragColor = pixelShaderGaussian(varTexCoord0, vec2(0.0, 1.0), getInvWidthHeight());
}

