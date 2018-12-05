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
//  Generated on Wed Dec  5 03:19:21 2018
//
//  texture_particle.vert
//
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
// Shader includes portions of webgl-noise:
// Description : Array and textureless GLSL 2D/3D/4D simplex
//               noise functions.
//      Author : Ian McEwan, Ashima Arts.
//  Maintainer : ijm
//     Lastmod : 20110822 (ijm)
//     License : Copyright (C) 2011 Ashima Arts. All rights reserved.
//               Distributed under the MIT License. See LICENSE file.
//               https://github.com/ashima/webgl-noise
//

float mod289(float x) {
    return x - floor(x * (1.0 / 289.0)) * 289.0;
}

vec2 mod289(vec2 x) {
    return x - floor(x * (1.0 / 289.0)) * 289.0;
}

vec3 mod289(vec3 x) {
    return x - floor(x * (1.0 / 289.0)) * 289.0;
}

vec4 mod289(vec4 x) {
    return x - floor(x * (1.0 / 289.0)) * 289.0;
}

float permute(float x) {
    return mod289(((x*34.0)+1.0)*x);
}

vec3 permute(vec3 x) {
    return mod289(((x*34.0)+1.0)*x);
}

vec4 permute(vec4 x) {
    return mod289(((x*34.0)+1.0)*x);
}

float taylorInvSqrt(float r) {
    return 1.79284291400159 - 0.85373472095314 * r;
}

vec4 taylorInvSqrt(vec4 r) {
    return 1.79284291400159 - 0.85373472095314 * r;
}

vec4 grad4(float j, vec4 ip) {
    const vec4 ones = vec4(1.0, 1.0, 1.0, -1.0);
    vec4 p, s;

    p.xyz = floor(fract(vec3(j) * ip.xyz) * 7.0) * ip.z - 1.0;
    p.w = 1.5 - dot(abs(p.xyz), ones.xyz);
    s = vec4(lessThan(p, vec4(0.0)));
    p.xyz = p.xyz + (s.xyz * 2.0 - 1.0) * s.www;

    return p;
}

// (sqrt(5) - 1)/4 = F4, used once below
#define F4 0.309016994374947451

float snoise(vec4 v) {
    const vec4 C = vec4(0.138196601125011,  // (5 - sqrt(5))/20  G4
            0.276393202250021,  // 2 * G4
            0.414589803375032,  // 3 * G4
            -0.447213595499958); // -1 + 4 * G4

    // First corner
    vec4 i = floor(v + dot(v, vec4(F4)));
    vec4 x0 = v - i + dot(i, C.xxxx);

    // Other corners

    // Rank sorting originally contributed by Bill Licea-Kane, AMD (formerly ATI)
    vec4 i0;
    vec3 isX = step(x0.yzw, x0.xxx);
    vec3 isYZ = step(x0.zww, x0.yyz);
    i0.x = isX.x + isX.y + isX.z;
    i0.yzw = 1.0 - isX;
    i0.y += isYZ.x + isYZ.y;
    i0.zw += 1.0 - isYZ.xy;
    i0.z += isYZ.z;
    i0.w += 1.0 - isYZ.z;

    // i0 now contains the unique values 0,1,2,3 in each channel
    vec4 i3 = clamp(i0, 0.0, 1.0);
    vec4 i2 = clamp(i0 - 1.0, 0.0, 1.0);
    vec4 i1 = clamp(i0 - 2.0, 0.0, 1.0);

    vec4 x1 = x0 - i1 + C.xxxx;
    vec4 x2 = x0 - i2 + C.yyyy;
    vec4 x3 = x0 - i3 + C.zzzz;
    vec4 x4 = x0 + C.wwww;

    // Permutations
    i = mod289(i);
    float j0 = permute(permute(permute(permute(i.w) + i.z) + i.y) + i.x);
    vec4 j1 = permute(
            permute(
                    permute(
                            permute(i.w + vec4(i1.w, i2.w, i3.w, 1.0)) + i.z
                                    + vec4(i1.z, i2.z, i3.z, 1.0)) + i.y
                            + vec4(i1.y, i2.y, i3.y, 1.0)) + i.x
                    + vec4(i1.x, i2.x, i3.x, 1.0));

    // Gradients: 7x7x6 points over a cube, mapped onto a 4-cross polytope
    // 7*7*6 = 294, which is close to the ring size 17*17 = 289.
    vec4 ip = vec4(1.0 / 294.0, 1.0 / 49.0, 1.0 / 7.0, 0.0);

    vec4 p0 = grad4(j0, ip);
    vec4 p1 = grad4(j1.x, ip);
    vec4 p2 = grad4(j1.y, ip);
    vec4 p3 = grad4(j1.z, ip);
    vec4 p4 = grad4(j1.w, ip);

    // Normalise gradients
    vec4 norm = taylorInvSqrt(
            vec4(dot(p0, p0), dot(p1, p1), dot(p2, p2), dot(p3, p3)));
    p0 *= norm.x;
    p1 *= norm.y;
    p2 *= norm.z;
    p3 *= norm.w;
    p4 *= taylorInvSqrt(dot(p4, p4));

    // Mix contributions from the five corners
    vec3 m0 = max(0.6 - vec3(dot(x0, x0), dot(x1, x1), dot(x2, x2)), 0.0);
    vec2 m1 = max(0.6 - vec2(dot(x3, x3), dot(x4, x4)), 0.0);
    m0 = m0 * m0;
    m1 = m1 * m1;
    return 49.0
            * (dot(m0 * m0, vec3(dot(p0, x0), dot(p1, x1), dot(p2, x2)))
                    + dot(m1 * m1, vec2(dot(p3, x3), dot(p4, x4))));

}

float snoise(vec3 v) {
    const vec2 C = vec2(1.0 / 6.0, 1.0 / 3.0);
    const vec4 D = vec4(0.0, 0.5, 1.0, 2.0);

    // First corner
    vec3 i = floor(v + dot(v, C.yyy));
    vec3 x0 = v - i + dot(i, C.xxx);

    // Other corners
    vec3 g = step(x0.yzx, x0.xyz);
    vec3 l = 1.0 - g;
    vec3 i1 = min(g.xyz, l.zxy);
    vec3 i2 = max(g.xyz, l.zxy);

    vec3 x1 = x0 - i1 + C.xxx;
    vec3 x2 = x0 - i2 + C.yyy; // 2.0*C.x = 1/3 = C.y
    vec3 x3 = x0 - D.yyy;      // -1.0+3.0*C.x = -0.5 = -D.y

    // Permutations
    i = mod289(i);
    vec4 p = permute(
            permute(
                    permute(i.z + vec4(0.0, i1.z, i2.z, 1.0)) + i.y
                            + vec4(0.0, i1.y, i2.y, 1.0)) + i.x
                    + vec4(0.0, i1.x, i2.x, 1.0));

    // Gradients: 7x7 points over a square, mapped onto an octahedron.
    // The ring size 17*17 = 289 is close to a multiple of 49 (49*6 = 294)
    float n_ = 0.142857142857; // 1.0/7.0
    vec3 ns = n_ * D.wyz - D.xzx;

    vec4 j = p - 49.0 * floor(p * ns.z * ns.z);  //  mod(p,7*7)

    vec4 x_ = floor(j * ns.z);
    vec4 y_ = floor(j - 7.0 * x_);    // mod(j,N)

    vec4 x = x_ * ns.x + ns.yyyy;
    vec4 y = y_ * ns.x + ns.yyyy;
    vec4 h = 1.0 - abs(x) - abs(y);

    vec4 b0 = vec4(x.xy, y.xy);
    vec4 b1 = vec4(x.zw, y.zw);

    //vec4 s0 = vec4(lessThan(b0,0.0))*2.0 - 1.0;
    //vec4 s1 = vec4(lessThan(b1,0.0))*2.0 - 1.0;
    vec4 s0 = floor(b0) * 2.0 + 1.0;
    vec4 s1 = floor(b1) * 2.0 + 1.0;
    vec4 sh = -step(h, vec4(0.0));

    vec4 a0 = b0.xzyw + s0.xzyw * sh.xxyy;
    vec4 a1 = b1.xzyw + s1.xzyw * sh.zzww;

    vec3 p0 = vec3(a0.xy, h.x);
    vec3 p1 = vec3(a0.zw, h.y);
    vec3 p2 = vec3(a1.xy, h.z);
    vec3 p3 = vec3(a1.zw, h.w);

    //Normalise gradients
    vec4 norm = taylorInvSqrt(
            vec4(dot(p0, p0), dot(p1, p1), dot(p2, p2), dot(p3, p3)));
    p0 *= norm.x;
    p1 *= norm.y;
    p2 *= norm.z;
    p3 *= norm.w;

    // Mix final noise value
    vec4 m = max(0.6 - vec4(dot(x0, x0), dot(x1, x1), dot(x2, x2), dot(x3, x3)),
            0.0);
    m = m * m;
    return 42.0
            * dot(m * m, vec4(dot(p0, x0), dot(p1, x1), dot(p2, x2), dot(p3, x3)));
}

float snoise(vec2 v) {
    const vec4 C = vec4(0.211324865405187,  // (3.0-sqrt(3.0))/6.0
            0.366025403784439,  // 0.5*(sqrt(3.0)-1.0)
            -0.577350269189626,  // -1.0 + 2.0 * C.x
            0.024390243902439); // 1.0 / 41.0
    // First corner
    vec2 i = floor(v + dot(v, C.yy));
    vec2 x0 = v - i + dot(i, C.xx);

    // Other corners
    vec2 i1;
    i1 = (x0.x > x0.y) ? vec2(1.0, 0.0) : vec2(0.0, 1.0);
    vec4 x12 = x0.xyxy + C.xxzz;
    x12.xy -= i1;

    // Permutations
    i = mod289(i); // Avoid truncation effects in permutation
    vec3 p = permute(
            permute(i.y + vec3(0.0, i1.y, 1.0)) + i.x + vec3(0.0, i1.x, 1.0));

    vec3 m = max(0.5 - vec3(dot(x0, x0), dot(x12.xy, x12.xy), dot(x12.zw, x12.zw)),
            0.0);
    m = m * m;
    m = m * m;

    // Gradients: 41 points uniformly over a line, mapped onto a diamond.
    // The ring size 17*17 = 289 is close to a multiple of 41 (41*7 = 287)

    vec3 x = 2.0 * fract(p * C.www) - 1.0;
    vec3 h = abs(x) - 0.5;
    vec3 ox = floor(x + 0.5);
    vec3 a0 = x - ox;

    // Normalise gradients implicitly by scaling m
    // Approximation of: m *= inversesqrt( a0*a0 + h*h );
    m *= 1.79284291400159 - 0.85373472095314 * (a0 * a0 + h * h);

    // Compute final noise value at P
    vec3 g;
    g.x = a0.x * x0.x + h.x * x0.y;
    g.yz = a0.yz * x12.xz + h.yz * x12.yw;
    return 130.0 * dot(m, g);
}

// https://www.shadertoy.com/view/lsfGRr
float hifi_hash(float n) {
    return fract(sin(n) * 43758.5453);
}

float hifi_noise(in vec2 x) {
    vec2 p = floor(x);
    vec2 f = fract(x);

    f = f * f * (3.0 - 2.0 * f);

    float n = p.x + p.y * 57.0;

    return mix(mix(hifi_hash(n +  0.0), hifi_hash(n +  1.0), f.x),
               mix(hifi_hash(n + 57.0), hifi_hash(n + 58.0), f.x), f.y);
}

// https://www.shadertoy.com/view/MdX3Rr
// https://en.wikipedia.org/wiki/Fractional_Brownian_motion
float hifi_fbm(in vec2 p) {
    const mat2 m2 = mat2(0.8, -0.6, 0.6, 0.8);
    float f = 0.0;
    f += 0.5000 * hifi_noise(p); p = m2 * p * 2.02;
    f += 0.2500 * hifi_noise(p); p = m2 * p * 2.03;
    f += 0.1250 * hifi_noise(p); p = m2 * p * 2.01;
    f += 0.0625 * hifi_noise(p);

    return f / 0.9375;
}

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




struct Radii {
    float start;
    float middle;
    float finish;
    float spread;
};
struct Colors {
    vec4 start;
    vec4 middle;
    vec4 finish;
    vec4 spread;
};
struct Spin {
    float start;
    float middle;
    float finish;
    float spread;
};

struct ParticleUniforms {
    Radii radius;
    Colors color;
    Spin spin;
    float lifespan;
    int rotateWithEntity;
    vec2 spare;
};

LAYOUT_STD140(binding=0) uniform particleBuffer {
    ParticleUniforms particle;
};

layout(location=0) in vec3 inPosition;
layout(location=2) in vec2 inColor; // This is actual Lifetime + Seed

layout(location=0) out vec4 varColor;
layout(location=1) out vec2 varTexcoord;

float bezierInterpolate(float y1, float y2, float y3, float u) {
    // https://en.wikipedia.org/wiki/Bezier_curve
    return (1.0 - u) * (1.0 - u) * y1 + 2.0 * (1.0 - u) * u * y2 + u * u * y3;
}

float interpolate3Points(float y1, float y2, float y3, float u) {
    // Makes the interpolated values intersect the middle value.

    if ((u <= 0.5f && y1 == y2) || (u >= 0.5f && y2 == y3)) {
        // Flat line.
        return y2;
    }

    float halfSlope;
    if ((y2 >= y1 && y2 >= y3) || (y2 <= y1 && y2 <= y3)) {
        // U or inverted-U shape.
        // Make the slope at y2 = 0, which means that the control points half way between the value points have the value y2.
        halfSlope = 0.0f;

    } else {
        // L or inverted and/or mirrored L shape.
        // Make the slope at y2 be the slope between y1 and y3, up to a maximum of double the minimum of the slopes between y1
        // and y2, and y2 and y3. Use this slope to calculate the control points half way between the value points.
        // Note: The maximum ensures that the control points and therefore the interpolated values stay between y1 and y3.
        halfSlope = (y3 - y1) / 2.0f;
        float slope12 = y2 - y1;
        float slope23 = y3 - y2;
        if (abs(halfSlope) > abs(slope12)) {
            halfSlope = slope12;
        } else if (abs(halfSlope) > abs(slope23)) {
            halfSlope = slope23;
        }
    }

    float stepU = step(0.5f, u);  // 0.0 if u < 0.5, 1.0 otherwise.
    float slopeSign = 2.0f * stepU - 1.0f; // -1.0 if u < 0.5, 1.0 otherwise
    float start = (1.0f - stepU) * y1 + stepU * y2;  // y1 if u < 0.5, y2 otherwise
    float middle = y2 + slopeSign * halfSlope;
    float finish = (1.0f - stepU) * y2 + stepU * y3; // y2 if u < 0.5, y3 otherwise
    float v = 2.0f * u - step(0.5f, u);  // 0.0-0.5 -> 0.0-1.0 and 0.5-1.0 -> 0.0-1.0
    return bezierInterpolate(start, middle, finish, v);
}

vec4 interpolate3Vec4(vec4 y1, vec4 y2, vec4 y3, float u) {
    return vec4(interpolate3Points(y1.x, y2.x, y3.x, u),
                interpolate3Points(y1.y, y2.y, y3.y, u),
                interpolate3Points(y1.z, y2.z, y3.z, u),
                interpolate3Points(y1.w, y2.w, y3.w, u));
}

const int NUM_VERTICES_PER_PARTICLE = 4;
const vec2 TEX_COORDS[NUM_VERTICES_PER_PARTICLE] = vec2[NUM_VERTICES_PER_PARTICLE](
    vec2(-1.0, 0.0),
    vec2(-1.0, 1.0),
    vec2(0.0, 0.0),
    vec2(0.0, 1.0)
);


void main(void) {
    TransformCamera cam = getTransformCamera();
    TransformObject obj = getTransformObject();
    
    // Which icon are we dealing with ?
    int particleID = gl_VertexID / NUM_VERTICES_PER_PARTICLE;
    // Which quad vertex pos?
    int twoTriID = gl_VertexID - particleID * NUM_VERTICES_PER_PARTICLE;

    // Particle properties
    float age = inColor.x / particle.lifespan;
    float seed = inColor.y;

    // Pass the texcoord
    varTexcoord = TEX_COORDS[twoTriID].xy;
    varColor = interpolate3Vec4(particle.color.start, particle.color.middle, particle.color.finish, age);
    vec3 colorSpread = 2.0 * vec3(hifi_hash(seed), hifi_hash(seed * 2.0), hifi_hash(seed * 3.0)) - 1.0;
    varColor.rgb = clamp(varColor.rgb + colorSpread * particle.color.spread.rgb, vec3(0), vec3(1));
    float alphaSpread = 2.0 * hifi_hash(seed * 4.0) - 1.0;
    varColor.a = clamp(varColor.a + alphaSpread * particle.color.spread.a, 0.0, 1.0);

    float spin = interpolate3Points(particle.spin.start, particle.spin.middle, particle.spin.finish, age);
    float spinSpread = 2.0 * hifi_hash(seed * 5.0) - 1.0;
    spin = spin + spinSpread * particle.spin.spread;

    // anchor point in eye space
    float radius = interpolate3Points(particle.radius.start, particle.radius.middle, particle.radius.finish, age);
    float radiusSpread = 2.0 * hifi_hash(seed * 6.0) - 1.0;
    radius = max(radius + radiusSpread * particle.radius.spread, 0.0);

    // inPosition is in world space
    vec4 anchorPoint = cam._view * vec4(inPosition, 1.0);

    mat3 view3 = mat3(cam._view);
    vec3 UP = vec3(0, 1, 0);
    vec3 modelUpWorld;
    { // transformModelToWorldDir
        vec3 mr0 = obj._modelInverse[0].xyz;
        vec3 mr1 = obj._modelInverse[1].xyz;
        vec3 mr2 = obj._modelInverse[2].xyz;
        modelUpWorld = vec3(dot(mr0, UP), dot(mr1, UP), dot(mr2, UP));
    }

    vec3 upWorld = mix(UP, normalize(modelUpWorld), float(particle.rotateWithEntity));
    vec3 upEye = normalize(view3 * upWorld);
    vec3 FORWARD = vec3(0, 0, -1);
    vec3 particleRight = normalize(cross(FORWARD, upEye));
    vec3 particleUp = cross(particleRight, FORWARD);     // don't need to normalize
    // This ordering ensures that un-rotated particles render upright in the viewer.
    vec3 UNIT_QUAD[NUM_VERTICES_PER_PARTICLE] = vec3[NUM_VERTICES_PER_PARTICLE](
        normalize(-particleRight + particleUp),
        normalize(-particleRight - particleUp),
        normalize(particleRight + particleUp),
        normalize(particleRight - particleUp)
    );
    float c = cos(spin);
    float s = sin(spin);
    mat4 rotation = mat4(
        c, -s, 0, 0,
        s, c, 0, 0,
        0, 0, 1, 0,
        0, 0, 0, 1
    );
    vec4 quadPos = radius * vec4(UNIT_QUAD[twoTriID], 0.0);
    vec4 eyePos = anchorPoint + rotation * quadPos;
    { // transformEyeToClipPos
        gl_Position = cam._projection * vec4(eyePos.xyz, 1.0);

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

}
