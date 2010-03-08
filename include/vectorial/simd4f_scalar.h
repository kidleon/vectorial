#ifndef VECTORIAL_SIMD4F_SCALAR_H
#define VECTORIAL_SIMD4F_SCALAR_H

#ifdef __cplusplus
extern "C" {
#endif


struct simd4f { 
    float x;
    float y; 
    float z; 
    float w;
};

static simd4f simd4f_create(float x, float y, float z, float w) {
    simd4f s = { x, y, z, w };
    return s;
}

static float simd4f_getX(simd4f s) { return s.x; }
static float simd4f_getY(simd4f s) { return s.y; }
static float simd4f_getZ(simd4f s) { return s.z; }
static float simd4f_getW(simd4f s) { return s.w; }

/*

simd4f simd4f_add(simd4f, simd4f);


simd4f simd4f_dot4(simd4f, simd4f);
simd4f simd4f_dot3(simd4f, simd4f);

float simd4f_dot4_float(simd4f, simd4f);
float simd4f_dot3_float(simd4f, simd4f);
*/

#ifdef __cplusplus
}
#endif


#endif

