#if defined (__cplusplus)
# pragma once
#endif /* __cplusplus */
#if !defined _libmath_h_
# define _libmath_h_
#
# include <stddef.h>
# if !defined (__cplusplus)
#  include <stdbool.h>
# endif /* __cplusplus */
#
# if !defined (LM_API)
#  if defined (__cplusplus)
#   define LM_API extern "C"
#  else
#   define LM_API extern
#  endif /* __cplusplus */
# endif /* LM_API */



/* SECTION: constants
 * * * * * * * * * * */

# if !defined (LM_PI)
#  define LM_PI 3.14159265358979323846
# endif /* LM_PI */
# if !defined (LM_EPSILON)
#  define LM_EPSILON 1e-6f
# endif /* LM_EPSILON */
# if !defined (LM_NAN)
#  define LM_NAN (0.0 / 0.0)
# endif /* LM_NAN */
# if !defined (LM_INF)
#  define LM_INF 1e10000f
# endif /* */
# if !defined (lm_deg2rad)
#  define lm_deg2rad(a) (a * (LM_PI / 180.0))
# endif /* lm_deg2rad */
# if !defined (lm_rad2deg)
#  define lm_rad2deg(a) (a * (180.0 / LM_PI))
# endif /* lm_rad2deg */
# if defined (__cplusplus)

extern "C" {

# endif /* __cplusplus */



/* SECTION: Standard Utilities
 * * * * * * * * * * * * * * */

LM_API double   lm_min(double, double);
LM_API double   lm_max(double, double);
LM_API double   lm_abs(double);
LM_API double   lm_ceil(double);
LM_API double   lm_floor(double);
LM_API double   lm_round(double);
LM_API double   lm_clamp(double, double, double);
LM_API double   lm_clampf_zo(double);
LM_API double   lm_lerp(double, double, double);
LM_API double   lm_lerpf_zo(double, double, double);
LM_API double   lm_pow(double, size_t);
LM_API double   lm_sqr(double);
LM_API double   lm_sqrt(double);
LM_API double   lm_fmod(double, double);
LM_API double   lm_frac(double);

LM_API size_t   lm_fact(size_t);

LM_API void     lm_swap(double *, double *);



/* SECTION: Trigonometric
 * * * * * * * * * * * * */

LM_API double   lm_sin(double);
LM_API double   lm_cos(double);
LM_API double   lm_tan(double);
LM_API double   lm_cot(double);
LM_API double   lm_asin(double);
LM_API double   lm_acos(double);
LM_API double   lm_atan(double);
LM_API double   lm_acot(double);
LM_API double   lm_atan2(double, double);



/* SECTION: t_vec2
 * * * * * * * * */

union u_vec2 {
    struct {
        double  x;
        double  y;
    };
    struct {
        double  w;
        double  h;
    };
    double      ptr[2];
};

typedef union u_vec2    t_vec2;

LM_API t_vec2   lm_vec2(double, double);
LM_API t_vec2   lm_vec2_zero(void);
LM_API t_vec2   lm_vec2_cpy(t_vec2);
LM_API t_vec2   lm_vec2_add(t_vec2, t_vec2);
LM_API t_vec2   lm_vec2_addv(t_vec2, double);
LM_API t_vec2   lm_vec2_sub(t_vec2, t_vec2);
LM_API t_vec2   lm_vec2_subv(t_vec2, double);
LM_API t_vec2   lm_vec2_mul(t_vec2, t_vec2);
LM_API t_vec2   lm_vec2_mulv(t_vec2, double);
LM_API t_vec2   lm_vec2_div(t_vec2, t_vec2);
LM_API t_vec2   lm_vec2_divv(t_vec2, double);

LM_API t_vec2   lm_vec2_clamp(t_vec2, t_vec2, t_vec2);
LM_API t_vec2   lm_vec2_clamp_zo(t_vec2);
LM_API t_vec2   lm_vec2_clamp_val(t_vec2, double, double);
LM_API t_vec2   lm_vec2_lerp(t_vec2, t_vec2, double);
LM_API t_vec2   lm_vec2_lerp_zo(t_vec2, t_vec2, double);
LM_API t_vec2   lm_vec2_dir(t_vec2, t_vec2);
LM_API t_vec2   lm_vec2_move_towards(t_vec2, t_vec2, double);
LM_API t_vec2   lm_vec2_normalize(t_vec2);

LM_API double   lm_vec2_dist(t_vec2, t_vec2);
LM_API double   lm_vec2_dist_sqr(t_vec2, t_vec2);
LM_API double   lm_vec2_len(t_vec2);
LM_API double   lm_vec2_len_sqr(t_vec2);
LM_API double   lm_vec2_ang(t_vec2, t_vec2);

LM_API bool     lm_vec2_eq(t_vec2, t_vec2);



/* SECTION: t_vec3
 * * * * * * * * */

union u_vec3 {
    struct {
        double  x;
        double  y;
        double  z;
    };
    struct {
        double  w;
        double  h;
        double  l;
    };
    struct {
        double  r;
        double  g;
        double  b;
    };
    double      ptr[3];
};

typedef union u_vec3    t_vec3;

LM_API t_vec3   lm_vec3(double, double, double);
LM_API t_vec3   lm_vec3_zero(void);
LM_API t_vec3   lm_vec3_cpy(t_vec3);
LM_API t_vec3   lm_vec3_add(t_vec3, t_vec3);
LM_API t_vec3   lm_vec3_addv(t_vec3, double);
LM_API t_vec3   lm_vec3_sub(t_vec3, t_vec3);
LM_API t_vec3   lm_vec3_subv(t_vec3, double);
LM_API t_vec3   lm_vec3_mul(t_vec3, t_vec3);
LM_API t_vec3   lm_vec3_mulv(t_vec3, double);
LM_API t_vec3   lm_vec3_div(t_vec3, t_vec3);
LM_API t_vec3   lm_vec3_divv(t_vec3, double);

LM_API t_vec3   lm_vec3_clamp(t_vec3, t_vec3, t_vec3);
LM_API t_vec3   lm_vec3_clamp_zo(t_vec3);
LM_API t_vec3   lm_vec3_clamp_val(t_vec3, double, double);
LM_API t_vec3   lm_vec3_lerp(t_vec3, t_vec3, double);
LM_API t_vec3   lm_vec3_lerp_zo(t_vec3, t_vec3, double);
LM_API t_vec3   lm_vec3_move_towards(t_vec3, t_vec3, double);
LM_API t_vec3   lm_vec3_cross(t_vec3, t_vec3);
LM_API t_vec3   lm_vec3_normalize(t_vec3);

LM_API double   lm_vec3_dist(t_vec3, t_vec3);
LM_API double   lm_vec3_dist_sqr(t_vec3, t_vec3);
LM_API double   lm_vec3_len(t_vec3);
LM_API double   lm_vec3_len_sqr(t_vec3);
LM_API double   lm_vec3_ang(t_vec3, t_vec3);
LM_API double   lm_vec3_dot(t_vec3, t_vec3);

LM_API bool     lm_vec3_eq(t_vec3, t_vec3);



/* SECTION: t_vec4
 * * * * * * * * */

union u_vec4 {
    struct {
        double  x;
        double  y;
        double  z;
        double  w;
    };
    struct {
        double  r;
        double  g;
        double  b;
        double  a;
    };
    struct {
        t_vec2  pos;
        t_vec2  siz;
    };
    double      ptr[4];
};

typedef union u_vec4    t_vec4;

LM_API t_vec4   lm_vec4(double, double, double, double);
LM_API t_vec4   lm_vec4_zero(void);
LM_API t_vec4   lm_vec4_cpy(t_vec4);
LM_API t_vec4   lm_vec4_add(t_vec4, t_vec4);
LM_API t_vec4   lm_vec4_addv(t_vec4, double);
LM_API t_vec4   lm_vec4_sub(t_vec4, t_vec4);
LM_API t_vec4   lm_vec4_subv(t_vec4, double);
LM_API t_vec4   lm_vec4_mul(t_vec4, t_vec4);
LM_API t_vec4   lm_vec4_mulv(t_vec4, double);
LM_API t_vec4   lm_vec4_div(t_vec4, t_vec4);
LM_API t_vec4   lm_vec4_divv(t_vec4, double);

LM_API t_vec4   lm_vec4_clamp(t_vec4, t_vec4, t_vec4);
LM_API t_vec4   lm_vec4_clamp_zo(t_vec4);
LM_API t_vec4   lm_vec4_clamp_val(t_vec4, double, double);
LM_API t_vec4   lm_vec4_lerp(t_vec4, t_vec4, double);
LM_API t_vec4   lm_vec4_lerp_zo(t_vec4, t_vec4, double);
LM_API t_vec4   lm_vec4_dir(t_vec4, t_vec4);
LM_API t_vec4   lm_vec4_move_towards(t_vec4, t_vec4, double);
LM_API t_vec4   lm_vec4_normalize(t_vec4);

LM_API double   lm_vec4_dist(t_vec4, t_vec4);
LM_API double   lm_vec4_dist_sqr(t_vec4, t_vec4);
LM_API double   lm_vec4_len(t_vec4);
LM_API double   lm_vec4_len_sqr(t_vec4);

LM_API bool     lm_vec4_eq(t_vec4, t_vec4);



/* SECTION: t_rect
 * * * * * * * * */

typedef union u_vec4    t_rect;

LM_API t_rect   lm_rect(double, double, double, double);
LM_API t_rect   lm_rect_zero(void);
LM_API t_rect   lm_rect_vec2(t_vec2, t_vec2);
LM_API bool     lm_rect_aabb(t_rect, t_rect);
LM_API bool     lm_rect_aabb_vec2(t_rect, t_vec2);

LM_API bool     lm_rect_eq(t_rect, t_rect);



/* SECTION: t_col
 * * * * * * * * */

typedef union u_vec4    t_col;

LM_API t_col    lm_col(double, double, double, double);
LM_API t_col    lm_col_uc(unsigned char, unsigned char, unsigned char, unsigned char);

LM_API t_col    lm_int2col(int);
LM_API int      lm_col2int(t_col);

LM_API bool     lm_col_eq(t_col, t_col);



/* SECTION: t_mat2
 * * * * * * * * */

union u_mat2 {
    struct {
        double  m0, m1,
                m2, m3;
    };
    double      ptr[2][2];
    t_vec2      vec[2];
};

typedef union u_mat2    t_mat2;

LM_API t_mat2   lm_mat2_zero(void);
LM_API t_mat2   lm_mat2_identity(void);
LM_API t_mat2   lm_mat2_add(t_mat2, t_mat2);
LM_API t_mat2   lm_mat2_sub(t_mat2, t_mat2);
LM_API t_mat2   lm_mat2_mul(t_mat2, t_mat2);
LM_API t_mat2   lm_mat2_mulv(t_mat2, double);

/*
LM_API t_mat2   lm_mat2_translate(t_vec2);
LM_API t_mat2   lm_mat2_rotate(t_vec2, double);
LM_API t_mat2   lm_mat2_scale(t_vec2);
*/
LM_API double   lm_mat2_det(t_mat2);

LM_API bool     lm_mat2_eq(t_mat2, t_mat2);



/* SECTION: t_mat3
 * * * * * * * * */

union u_mat3 {
    struct {
        double  m0, m1, m2,
                m3, m4, m5,
                m6, m7, m8;
    };
    double      ptr[3][3];
    t_vec3      vec[3];
};

typedef union u_mat3    t_mat3;

LM_API t_mat3   lm_mat3_zero(void);
LM_API t_mat3   lm_mat3_identity(void);
LM_API t_mat3   lm_mat3_add(t_mat3, t_mat3);
LM_API t_mat3   lm_mat3_sub(t_mat3, t_mat3);
LM_API t_mat3   lm_mat3_mul(t_mat3, t_mat3);
LM_API t_mat3   lm_mat3_mulv(t_mat3, double);

/*
LM_API t_mat3   lm_mat3_translate(t_vec3);
LM_API t_mat3   lm_mat3_rotate(t_vec3, double);
LM_API t_mat3   lm_mat3_scale(t_vec3);
*/
LM_API double   lm_mat3_det(t_mat3);

LM_API bool     lm_mat3_eq(t_mat3, t_mat3);



/* SECTION: t_mat4
 * * * * * * * * */

union u_mat4 {
    struct {
        double  m0,  m1,  m2,  m3,
                m4,  m5,  m6,  m7,
                m8,  m9,  m10, m11,
                m12, m13, m14, m15;
    };
    double      ptr[4][4];
    t_vec4      vec[4];
};

typedef union u_mat4    t_mat4;

LM_API t_mat4   lm_mat4_zero(void);
LM_API t_mat4   lm_mat4_identity(void);
LM_API t_mat4   lm_mat4_add(t_mat4, t_mat4);
LM_API t_mat4   lm_mat4_sub(t_mat4, t_mat4);
LM_API t_mat4   lm_mat4_mul(t_mat4, t_mat4);
LM_API t_mat4   lm_mat4_mulv(t_mat4, double);

LM_API t_mat4   lm_mat4_translate(t_vec3);
LM_API t_mat4   lm_mat4_rotate(t_vec3, double);
LM_API t_mat4   lm_mat4_scale(t_vec3);
LM_API double   lm_mat4_det(t_mat4);

LM_API t_mat4   lm_mat4_ortho(double, double, double, double, double, double);
LM_API t_mat4   lm_mat4_persp(double, double, double, double);
LM_API t_mat4   lm_mat4_lookat(t_vec3, t_vec3, t_vec3);

LM_API bool     lm_mat4_eq(t_mat4, t_mat4);



# if defined (LIBMATH_IMPLEMENTATION)
#  if defined (LIBMATH_USE_STDLIB)
#   include <math.h>
#  endif /* LIBMATH_USE_STDLIB */


/* SECTION: Standard Utilities
 * * * * * * * * * * * * * * */

LM_API double   lm_min(double a, double b) {

#  if defined (LIBMATH_USE_STDLIB)
    return (fmin(a, b));
#  endif /* LIBMATH_USE_STDLIB */

    return (a < b ? a : b);
}

LM_API double   lm_max(double a, double b) {

#  if defined (LIBMATH_USE_STDLIB)
    return (fmax(a, b));
#  endif /* LIBMATH_USE_STDLIB */

    return (a > b ? a : b);
}

LM_API double   lm_abs(double f) {

#  if defined (LIBMATH_USE_STDLIB)
    return (fabs(f));
#  endif /* LIBMATH_USE_STDLIB */

    return (f < 0.0 ? -f : f);
}

LM_API double   lm_ceil(double f) {

#  if defined (LIBMATH_USE_STDLIB)
    return (ceil(f));
#  endif /* LIBMATH_USE_STDLIB */

    return (lm_floor(f) + 1.0);
}

LM_API double   lm_floor(double f) {

#  if defined (LIBMATH_USE_STDLIB)
    return (floor(f));
#  endif /* LIBMATH_USE_STDLIB */

    return (f - lm_frac(f));
}

LM_API double   lm_round(double f) {

#  if defined (LIBMATH_USE_STDLIB)
    return (round(f));
#  endif /* LIBMATH_USE_STDLIB */

    return ((f - (int) f) < 0.5 ? lm_floor(f) : lm_ceil(f));
}

LM_API double   lm_clamp(double a, double min, double max) { return (lm_min(lm_max(a, min), max)); }

LM_API double   lm_clampf_zo(double a) { return (lm_clamp(a, 0.0, 1.0)); }

LM_API double   lm_lerp(double a, double b, double t) { return (a + t * (b - a)); }

LM_API double   lm_lerpf_zo(double a, double b, double t) { return (lm_lerp(a, b, lm_clampf_zo(t))); }

LM_API double   lm_pow(double base, size_t exp) {

#  if defined (LIBMATH_USE_STDLIB)
    return (pow(base, exp));
#  endif /* LIBMATH_USE_STDLIB */

    double  result;

    if (!exp) { return (1); }
    result = base;
    for (size_t i = 1; i < exp; i++) {
        result *= base;
    }
    return (result);
}

LM_API double   lm_sqr(double base) {

#  if defined (LIBMATH_USE_STDLIB)
    return (sqr(base));
#  endif /* LIBMATH_USE_STDLIB */

    return (lm_pow(base, 2));
}

LM_API double   lm_sqrt(double value) {

#  if defined (LIBMATH_USE_STDLIB)
    return (sqrt(value));
#  endif /* LIBMATH_USE_STDLIB */

float   low, high, middle;

    /* imaginary-number scenario... */
    if (value < 0.0) { return (LM_NAN); }
    low = lm_min(1.0, value);
    high = lm_max(1.0, value);

    while (100.0 * low * low < value) { low *= 10; }
    while (0.01 * high * high > value) { high *= 0.1; }

    for (size_t i = 0; i < 100; i++) {
        middle = (low + high) / 2.0;
        if (middle * middle == value) { return (middle); }

        if (middle * middle > value) { high = middle; }
        else { low = middle; }
    }
    return (middle);
}

LM_API double   lm_fmod(double a, double b) { return (a - (int) (a / b) * b); }

LM_API double   lm_frac(double value) { return (value - (int) value); }



LM_API size_t   lm_fact(size_t value) {
    size_t  result;

    if ((long long) value < 0) { return (0); }
    else if (!value) { return (1); }

    result = 1.0;
    while (value) { result *= value, value--; }

    return (result);
}



LM_API void lm_swap(double *a, double *b) {
    double  temp;

    if (a == b) { return; }
    temp = *a;
    *a = *b;
    *b = temp;
}



/* SECTION: Trigonometric
 * * * * * * * * * * * * */

LM_API double   lm_sin(double x) {

#  if defined (LIBMATH_USE_STDLIB)
    return (sin(x));
#  endif /* LIBMATH_USE_STDLIB */

    double  result, sign;
    
    sign = 1.0;
    while (x < -LM_PI / 2.0) { x += LM_PI, sign *= -1.0; }
    while (x > LM_PI / 2.0) { x -= LM_PI, sign *= -1.0; }
    
    result = 0.0;
    for (size_t n = 0 ;; n++) {
        double  term;

        term = (lm_pow(-1, n) / lm_fact(2 * n + 1)) * lm_pow(x, 2 * n + 1);
        if (lm_abs(term) < LM_EPSILON) {
            break;
        }

        result += term;
    }
    return (result * sign);
}

LM_API double   lm_cos(double x) {

#  if defined (LIBMATH_USE_STDLIB)
    return (cos(x));
#  endif /* LIBMATH_USE_STDLIB */

    return (lm_sin(LM_PI / 2.0 - x));
}

LM_API double   lm_tan(double x) {

#  if defined (LIBMATH_USE_STDLIB)
    return (tan(x));
#  endif /* LIBMATH_USE_STDLIB */

    return (lm_sin(x) / lm_cos(x));
}

LM_API double   lm_cot(double x) {

#  if defined (LIBMATH_USE_STDLIB)
    return (tan(x));
#  endif /* LIBMATH_USE_STDLIB */

    return (1 / lm_tan(x));
}

LM_API double   lm_asin(double x) {

#  if defined (LIBMATH_USE_STDLIB)
    return (asin(x));
#  endif /* LIBMATH_USE_STDLIB */

    double  result, sign;

    x = lm_abs(x);
    sign = (x < 0.0) ? 1.0 : 0.0;
    result = -0.0187293;
    result *= x;
    result += 0.0742610;
    result *= x;
    result -= 0.2121144;
    result *= x;
    result += 1.5707288;
    result = LM_PI / 2.0 - lm_sqrt(1.0 - x) * result;
    return (result - 2.0 * sign* result);
}

LM_API double   lm_acos(double x) {

#  if defined (LIBMATH_USE_STDLIB)
    return (acos(x));
#  endif /* LIBMATH_USE_STDLIB */

    return (LM_PI / 2.0 - lm_asin(x));
}

LM_API double   lm_atan(double x) {

#  if defined (LIBMATH_USE_STDLIB)
    return (atan(x));
#  endif /* LIBMATH_USE_STDLIB */

    return (lm_asin(x / lm_sqrt(1 + x * x)));
}

LM_API double   lm_acot(double x) {

#  if defined (LIBMATH_USE_STDLIB)
    return (acot(x));
#  endif /* LIBMATH_USE_STDLIB */

    return (LM_PI / 2.0 - lm_atan(x));
}

LM_API double   lm_atan2(double y, double x) {

#  if defined (LIBMATH_USE_STDLIB)
    return (atan2(y, x));
#  endif /* LIBMATH_USE_STDLIB */

    if (x > 0.0) { return (lm_atan(y / x)); }
    else if (x < 0.0) {
        if (y >= 0.0) { return (lm_atan(y / x) + LM_PI); }
        if (y < 0.0) { return (lm_atan(y / x) - LM_PI); }
    }
    else if (x == 0.0) {
        if (y > 0.0) { return (LM_PI / 2.0); }
        if (y < 0.0) { return (-LM_PI / 2.0); }
    }
    return (LM_NAN);
}



/* SECTION: t_vec2
 * * * * * * * * */

LM_API t_vec2   lm_vec2(double x, double y) { return ((t_vec2) { .x = x, .y = y } ); }

LM_API t_vec2   lm_vec2_zero(void) { return (lm_vec2(0.0, 0.0)); }

LM_API t_vec2   lm_vec2_cpy(t_vec2 v) { return (lm_vec2(v.x, v.y)); }

LM_API t_vec2   lm_vec2_add(t_vec2 a, t_vec2 b) { return (lm_vec2(a.x + b.x, a.y + b.y)); }

LM_API t_vec2   lm_vec2_addv(t_vec2 v, double f) { return (lm_vec2(v.x + f, v.y + f)); }

LM_API t_vec2   lm_vec2_sub(t_vec2 a, t_vec2 b) { return (lm_vec2(a.x - b.x, a.y - b.y)); }

LM_API t_vec2   lm_vec2_subv(t_vec2 v, double f) { return (lm_vec2(v.x - f, v.y - f)); }

LM_API t_vec2   lm_vec2_mul(t_vec2 a, t_vec2 b) { return (lm_vec2(a.x * b.x, a.y * b.y)); }

LM_API t_vec2   lm_vec2_mulv(t_vec2 v, double f) { return (lm_vec2(v.x * f, v.y * f)); }

LM_API t_vec2   lm_vec2_div(t_vec2 a, t_vec2 b) { return (lm_vec2(a.x / b.x, a.y / b.y)); }

LM_API t_vec2   lm_vec2_divv(t_vec2 v, double f) { return (lm_vec2(v.x / f, v.y / f)); }

LM_API t_vec2   lm_vec2_clamp(t_vec2 v, t_vec2 min, t_vec2 max) {
    return ((t_vec2) {
            .x = lm_clamp(v.x, min.x, max.y),
            .y = lm_clamp(v.y, min.y, max.y)
        }
    );
}

LM_API t_vec2   lm_vec2_clamp_zo(t_vec2 v) {
    return (lm_vec2_clamp(v, lm_vec2(0.0, 0.0), lm_vec2(1.0, 1.0)));
}

LM_API t_vec2   lm_vec2_clamp_val(t_vec2 v, double min, double max) {
    return (lm_vec2_clamp(v, lm_vec2(min, min), lm_vec2(max, max)));
}

LM_API t_vec2   lm_vec2_lerp(t_vec2 a, t_vec2 b, double t) {
    return ((t_vec2) {
            .x = lm_lerp(a.x, b.x, t),
            .y = lm_lerp(a.y, b.y, t)
        }
    );
}
LM_API t_vec2   lm_vec2_lerp_zo(t_vec2 a, t_vec2 b, double t) {
    return ((t_vec2) {
            .x = lm_lerpf_zo(a.x, b.x, t),
            .y = lm_lerpf_zo(a.y, b.y, t)
        }
    );
}

LM_API t_vec2   lm_vec2_dir(t_vec2 a, t_vec2 b) {
    return ((t_vec2) {
            .x = lm_cos(lm_atan2(a.y - b.y, a.x - b.x)) * -1,
            .y = lm_sin(lm_atan2(a.y - b.y, a.x - b.x)) * -1
        }
    );
}

LM_API t_vec2   lm_vec2_move_towards(t_vec2 start, t_vec2 target, double t) {
    t_vec2  result, delta;
    double  val, dist;

    delta = lm_vec2_sub(target, start);
    val = lm_vec2_len_sqr(delta);

    if (val == 0.0 || ((t >= 0) && (val <= t * t))) {
        return (target);
    }
    dist = lm_sqrt(val);
    result.x = start.x + delta.x / dist * t;
    result.y = start.y + delta.y / dist * t;
    return (result);
}

LM_API t_vec2   lm_vec2_normalize(t_vec2 v) {
    t_vec2  result;
    double  len, leninv;

    result = lm_vec2(0, 0);
    len = lm_vec2_len(v);
    if (len > 0) {
        leninv = 1.0 / len;
        result.x = v.x * leninv;
        result.y = v.y * leninv;
    }
    return (result);
}

LM_API double   lm_vec2_dist(t_vec2 a, t_vec2 b) { return (lm_sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y))); }

LM_API double   lm_vec2_dist_sqr(t_vec2 a, t_vec2 b) { return ((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y)); }

LM_API double   lm_vec2_len(t_vec2 a) { return (lm_sqrt((a.x * a.x) + (a.y * a.y))); }

LM_API double   lm_vec2_len_sqr(t_vec2 a) { return ((a.x * a.x) + (a.y * a.y)); }

LM_API double   lm_vec2_ang(t_vec2 a, t_vec2 b) {
    double  dot, det;

    dot = a.x * b.x + a.y * b.y;
    det = a.x * b.y - a.y * b.x;
    return (lm_atan2(dot, det));
}

LM_API bool     lm_vec2_eq(t_vec2 a, t_vec2 b) { return (a.x == b.x && a.y == b.y); }



/* SECTION: t_vec3
 * * * * * * * * */

LM_API t_vec3   lm_vec3(double x, double y, double z) { return ((t_vec3) { .x = x, .y = y, .z = z } ); }

LM_API t_vec3   lm_vec3_zero(void) { return (lm_vec3(0.0, 0.0, 0.0)); }

LM_API t_vec3   lm_vec3_cpy(t_vec3 v) { return (lm_vec3(v.x, v.y, v.z)); }

LM_API t_vec3   lm_vec3_add(t_vec3 a, t_vec3 b) { return (lm_vec3(a.x + b.x, a.y + b.y, a.z + b.z)); }

LM_API t_vec3   lm_vec3_addv(t_vec3 v, double f) { return (lm_vec3(v.x + f, v.y + f, v.z + f)); }

LM_API t_vec3   lm_vec3_sub(t_vec3 a, t_vec3 b) { return (lm_vec3(a.x - b.x, a.y - b.y, a.z - b.z)); }

LM_API t_vec3   lm_vec3_subv(t_vec3 v, double f) { return (lm_vec3(v.x - f, v.y - f, v.z - f)); }

LM_API t_vec3   lm_vec3_mul(t_vec3 a, t_vec3 b) { return (lm_vec3(a.x * b.x, a.y * b.y, a.z * b.z)); }

LM_API t_vec3   lm_vec3_mulv(t_vec3 v, double f) { return (lm_vec3(v.x * f, v.y * f, v.z * f)); }

LM_API t_vec3   lm_vec3_div(t_vec3 a, t_vec3 b) { return (lm_vec3(a.x / b.x, a.y / b.y, a.z / b.z)); }

LM_API t_vec3   lm_vec3_divv(t_vec3 v, double f) { return (lm_vec3(v.x / f, v.y / f, v.z / f)); }

LM_API t_vec3   lm_vec3_clamp(t_vec3 v, t_vec3 min, t_vec3 max) {
    return ((t_vec3) {
            .x = lm_clamp(v.x, min.x, max.y),
            .y = lm_clamp(v.y, min.y, max.y),
            .z = lm_clamp(v.z, min.z, max.z)
        }
    );
}

LM_API t_vec3   lm_vec3_clamp_zo(t_vec3 v) {
    return (lm_vec3_clamp(v, lm_vec3(0.0, 0.0, 0.0), lm_vec3(1.0, 1.0, 1.0)));
}

LM_API t_vec3   lm_vec3_clamp_val(t_vec3 v, double min, double max) {
    return (lm_vec3_clamp(v, lm_vec3(min, min, min), lm_vec3(max, max, max)));
}

LM_API t_vec3   lm_vec3_lerp(t_vec3 a, t_vec3 b, double t) {
    return ((t_vec3) {
            .x = lm_lerp(a.x, b.x, t),
            .y = lm_lerp(a.y, b.y, t),
            .z = lm_lerp(a.z, b.z, t)
        }
    );
}
LM_API t_vec3   lm_vec3_lerp_zo(t_vec3 a, t_vec3 b, double t) {
    return ((t_vec3) {
            .x = lm_lerpf_zo(a.x, b.x, t),
            .y = lm_lerpf_zo(a.y, b.y, t),
            .z = lm_lerpf_zo(a.z, b.z, t)
        }
    );
}

LM_API t_vec3   lm_vec3_move_towards(t_vec3 start, t_vec3 target, double t) {
    t_vec3  result, delta;
    double  val, dist;

    delta = lm_vec3_sub(target, start);
    val = lm_vec3_len_sqr(delta);

    if (val == 0.0 || ((t >= 0) && (val <= t * t))) {
        return (target);
    }
    dist = lm_sqrt(val);
    result.x = start.x + delta.x / dist * t;
    result.y = start.y + delta.y / dist * t;
    result.z = start.z + delta.z / dist * t;
    return (result);
}

LM_API t_vec3   lm_vec3_cross(t_vec3 a, t_vec3 b) {
    t_vec3  result;
    
    result.x = a.y * b.z - a.z * b.y;
    result.y = a.z * b.x - a.x * b.z;
    result.z = a.x * b.y - a.y * b.x;
    return (result);
}

LM_API t_vec3   lm_vec3_normalize(t_vec3 v) {
    t_vec3  result;
    double  len, leninv;

    result = lm_vec3(0, 0, 0);
    len = lm_vec3_len(v);
    if (len > 0) {
        leninv = 1.0 / len;
        result.x = v.x * leninv;
        result.y = v.y * leninv;
        result.z = v.z * leninv;
    }
    return (result);
}

LM_API double   lm_vec3_dist(t_vec3 a, t_vec3 b) { return (lm_sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z))); }

LM_API double   lm_vec3_dist_sqr(t_vec3 a, t_vec3 b) { return ((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z)); }

LM_API double   lm_vec3_len(t_vec3 a) { return (lm_sqrt((a.x * a.x) + (a.y * a.y) + (a.z * a.z))); }

LM_API double   lm_vec3_len_sqr(t_vec3 a) { return ((a.x * a.x) + (a.y * a.y) + (a.z * a.z)); }

LM_API double   lm_vec3_ang(t_vec3 a, t_vec3 b) {
    t_vec3  cross;
    double  dot, len;

    cross = lm_vec3_cross(a, b);
    len = lm_vec3_len_sqr(cross);
    dot = lm_vec3_len(cross);
    return (lm_atan2(len, dot));
}
LM_API double   lm_vec3_dot(t_vec3 a, t_vec3 b) {
    return (a.x * b.x + a.y * b.y + a.z * b.z);
}

LM_API bool     lm_vec3_eq(t_vec3 a, t_vec3 b) { return (a.x == b.x && a.y == b.y && a.z == b.z); }



/* SECTION: t_vec4
 * * * * * * * * */

LM_API t_vec4   lm_vec4(double x, double y, double z, double w) { return ((t_vec4) { .x = x, .y = y, .z = z, .w = w } ); }

LM_API t_vec4   lm_vec4_zero(void) { return (lm_vec4(0.0, 0.0, 0.0, 0.0)); }

LM_API t_vec4   lm_vec4_cpy(t_vec4 v) { return (lm_vec4(v.x, v.y, v.z, v.w)); }

LM_API t_vec4   lm_vec4_add(t_vec4 a, t_vec4 b) { return (lm_vec4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w)); }

LM_API t_vec4   lm_vec4_addv(t_vec4 v, double f) { return (lm_vec4(v.x + f, v.y + f, v.z + f, v.w + f)); }

LM_API t_vec4   lm_vec4_sub(t_vec4 a, t_vec4 b) { return (lm_vec4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w)); }

LM_API t_vec4   lm_vec4_subv(t_vec4 v, double f) { return (lm_vec4(v.x - f, v.y - f, v.z - f, v.w - f)); }

LM_API t_vec4   lm_vec4_mul(t_vec4 a, t_vec4 b) { return (lm_vec4(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w)); }

LM_API t_vec4   lm_vec4_mulv(t_vec4 v, double f) { return (lm_vec4(v.x * f, v.y * f, v.z * f, v.w * f)); }

LM_API t_vec4   lm_vec4_div(t_vec4 a, t_vec4 b) { return (lm_vec4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w)); }

LM_API t_vec4   lm_vec4_divv(t_vec4 v, double f) { return (lm_vec4(v.x / f, v.y / f, v.z / f, v.w / f)); }

LM_API t_vec4   lm_vec4_clamp(t_vec4 v, t_vec4 min, t_vec4 max) {
    return ((t_vec4) {
            .x = lm_clamp(v.x, min.x, max.y),
            .y = lm_clamp(v.y, min.y, max.y),
            .z = lm_clamp(v.z, min.z, max.z),
            .w = lm_clamp(v.w, min.w, max.w)
        }
    );
}

LM_API t_vec4   lm_vec4_clamp_zo(t_vec4 v) {
    return (lm_vec4_clamp(v, lm_vec4(0.0, 0.0, 0.0, 0.0), lm_vec4(1.0, 1.0, 1.0, 1.0)));
}

LM_API t_vec4   lm_vec4_clamp_val(t_vec4 v, double min, double max) {
    return (lm_vec4_clamp(v, lm_vec4(min, min, min, min), lm_vec4(max, max, max, max)));
}

LM_API t_vec4   lm_vec4_lerp(t_vec4 a, t_vec4 b, double t) {
    return ((t_vec4) {
            .x = lm_lerp(a.x, b.x, t),
            .y = lm_lerp(a.y, b.y, t),
            .z = lm_lerp(a.z, b.z, t),
            .w = lm_lerp(a.w, b.w, t)
        }
    );
}
LM_API t_vec4   lm_vec4_lerp_zo(t_vec4 a, t_vec4 b, double t) {
    return ((t_vec4) {
            .x = lm_lerpf_zo(a.x, b.x, t),
            .y = lm_lerpf_zo(a.y, b.y, t),
            .z = lm_lerpf_zo(a.z, b.z, t),
            .w = lm_lerpf_zo(a.w, b.w, t)
        }
    );
}

LM_API t_vec4   lm_vec4_move_towards(t_vec4 start, t_vec4 target, double t) {
    t_vec4  result, delta;
    double  val, dist;

    delta = lm_vec4_sub(target, start);
    val = lm_vec4_len_sqr(delta);

    if (val == 0.0 || ((t >= 0) && (val <= t * t))) {
        return (target);
    }
    dist = lm_sqrt(val);
    result.x = start.x + delta.x / dist * t;
    result.y = start.y + delta.y / dist * t;
    result.z = start.z + delta.z / dist * t;
    result.w = start.w + delta.w / dist * t;
    return (result);
}

LM_API t_vec4   lm_vec4_normalize(t_vec4 v) {
    t_vec4  result;
    double  len, leninv;

    result = lm_vec4(0, 0, 0, 0);
    len = lm_vec4_len(v);
    if (len > 0) {
        leninv = 1.0 / len;
        result.x = v.x * leninv;
        result.y = v.y * leninv;
        result.z = v.z * leninv;
        result.w = v.w * leninv;
    }
    return (result);
}

LM_API double   lm_vec4_dist(t_vec4 a, t_vec4 b) { return (lm_sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z) + (a.w - b.w) * (a.w - b.w))); }

LM_API double   lm_vec4_dist_sqr(t_vec4 a, t_vec4 b) { return ((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z) + (a.w - b.w) * (a.w - b.w)); }

LM_API double   lm_vec4_len(t_vec4 a) { return (lm_sqrt((a.x * a.x) + (a.y * a.y) + (a.z * a.z) + (a.w * a.w))); }

LM_API double   lm_vec4_len_sqr(t_vec4 a) { return ((a.x * a.x) + (a.y * a.y) + (a.z * a.z) + (a.w * a.w)); }

LM_API bool     lm_vec4_eq(t_vec4 a, t_vec4 b) { return (a.x == b.x && a.y == b.y && a.z == b.z && a.w == b.w); }



/* SECTION: rect
 * * * * * * * */

LM_API t_rect   lm_rect(double x, double y, double w, double h) { return ((t_rect) { .x = x, .y = y, .z = w, .w = h } ); }

LM_API t_rect   lm_rect_zero(void) { return (lm_vec4_zero()); }

LM_API t_rect   lm_rect_vec2(t_vec2 pos, t_vec2 siz) { return (lm_rect(pos.x, pos.y, siz.w, siz.h)); }

LM_API bool     lm_rect_aabb(t_rect a, t_rect b) {
    return ((a.x < b.x + b.z && a.x + a.z > b.x) &&
            (a.y < b.y + b.w && a.y + a.w > b.y) 
        );
}

LM_API bool     lm_rect_aabb_vec2(t_rect r, t_vec2 v) {
    return ((r.x < v.x && r.x + r.z > v.x) &&
            (r.y < v.y && r.y + r.w > v.y) 
        );
}

LM_API bool     lm_rect_eq(t_rect a, t_rect b) { return (lm_vec4_eq(a, b)); }



/* SECTION: t_col
 * * * * * * * * */

LM_API t_col    lm_col(double r, double g, double b, double a) { return (lm_vec4(r, g, b, a)); }

LM_API t_col    lm_col_uc(unsigned char r, unsigned char g, unsigned char b, unsigned char a) { return (lm_col(r / 255.0, g / 255.0, b / 255.0, a / 255.0)); }

LM_API t_col    lm_int2col(int i) {
    unsigned char   r, g, b, a;

    r = (i >> (8 * 0)) & 0xff;
    g = (i >> (8 * 1)) & 0xff;
    b = (i >> (8 * 2)) & 0xff;
    a = (i >> (8 * 3)) & 0xff;
    return (lm_col_uc(r, g, b, a));
}

LM_API int      lm_col2int(t_col col) {
    return ((int) (col.r * 255.0) << 0 | (int) (col.g * 255.0) << 8 | (int) (col.b * 255.0) << 16 | (int) (col.a * 255.0) << 24);
}

LM_API bool     lm_col_eq(t_col a, t_col b) { return (lm_vec4_eq(a, b)); }



/* SECTION: t_mat2
 * * * * * * * * */

LM_API t_mat2   lm_mat2_zero(void) {
    t_mat2  result;

    result.vec[0] = lm_vec2_zero();
    result.vec[1] = lm_vec2_zero();
    return (result);
}

LM_API t_mat2   lm_mat2_identity(void) {
    t_mat2  result;

    result.vec[0] = lm_vec2(1.0, 0.0);
    result.vec[1] = lm_vec2(0.0, 1.0);
    return (result);
}

/*  [a b] + [e f] = [a+e b+f]
 *  [c d]   [g h]   [c+g d+h]
 * * * * * * * * * * * * * * */
LM_API t_mat2   lm_mat2_add(t_mat2 a, t_mat2 b) {
    t_mat2  result;

    result.vec[0] = lm_vec2_add(a.vec[0], b.vec[0]);
    result.vec[1] = lm_vec2_add(a.vec[1], b.vec[1]);
    return (result);
}

/*  [a b] - [e f] = [a-e b-f]
 *  [c d]   [g h]   [c-g d-h]
 * * * * * * * * * * * * * * */
LM_API t_mat2   lm_mat2_sub(t_mat2 a, t_mat2 b) {
    t_mat2  result;

    result.vec[0] = lm_vec2_sub(a.vec[0], b.vec[0]);
    result.vec[1] = lm_vec2_sub(a.vec[1], b.vec[1]);
    return (result);
}

/*  [a b] * [e f] = [ae+bg af+bh]
 *  [c d]   [g h]   [ce+dg cf+dh]
 * * * * * * * * * * * * * * * * */
LM_API t_mat2   lm_mat2_mul(t_mat2 a, t_mat2 b) {
    t_mat2  result;

    result.m0 = a.m0 * b.m0 + a.m1 * b.m2;
    result.m1 = a.m0 * b.m1 + a.m1 * b.m3;
    
    result.m2 = a.m2 * b.m0 + a.m3 * b.m2;
    result.m3 = a.m2 * b.m1 + a.m3 * b.m3;
    return (result);
}

/*  v * [a b] = [av bv]
 *      [c d] = [cv dv]
 * * * * * * * * * * * */
LM_API t_mat2   lm_mat2_mulv(t_mat2 m, double v) {
    t_mat2  result;

    result.vec[0] = lm_vec2_mulv(m.vec[0], v);
    result.vec[1] = lm_vec2_mulv(m.vec[1], v);
    return (result);
}

/* A = [a b]
 *     [c d]
 *
 * det(A) = ad - cb
 * */
LM_API double   lm_mat2_det(t_mat2 m) {
    double  result;

    result = m.m0 * m.m3;
    result -= m.m1 * m.m2;
    return (result);
}

LM_API bool     lm_mat2_eq(t_mat2 a, t_mat2 b) {
    return (lm_vec2_eq(a.vec[0], b.vec[0]) &&
            lm_vec2_eq(a.vec[1], b.vec[1])
        );
}



/* SECTION: t_mat3
 * * * * * * * * */

LM_API t_mat3   lm_mat3_zero(void) {
    t_mat3  result;

    result.vec[0] = lm_vec3_zero();
    result.vec[1] = lm_vec3_zero();
    result.vec[2] = lm_vec3_zero();
    return (result);
}

LM_API t_mat3   lm_mat3_identity(void) {
    t_mat3  result;

    result.vec[0] = lm_vec3(1.0, 0.0, 0.0);
    result.vec[1] = lm_vec3(0.0, 1.0, 0.0);
    result.vec[2] = lm_vec3(0.0, 0.0, 1.0);
    return (result);
}

/*  [a b] + [e f] = [a+e b+f]
 *  [c d]   [g h]   [c+g d+h]
 * * * * * * * * * * * * * * */
LM_API t_mat3   lm_mat3_add(t_mat3 a, t_mat3 b) {
    t_mat3  result;

    result.vec[0] = lm_vec3_add(a.vec[0], b.vec[0]);
    result.vec[1] = lm_vec3_add(a.vec[1], b.vec[1]);
    result.vec[2] = lm_vec3_add(a.vec[2], b.vec[2]);
    return (result);
}

/*  [a b] - [e f] = [a-e b-f]
 *  [c d]   [g h]   [c-g d-h]
 * * * * * * * * * * * * * * */
LM_API t_mat3   lm_mat3_sub(t_mat3 a, t_mat3 b) {
    t_mat3  result;

    result.vec[0] = lm_vec3_sub(a.vec[0], b.vec[0]);
    result.vec[1] = lm_vec3_sub(a.vec[1], b.vec[1]);
    result.vec[2] = lm_vec3_sub(a.vec[2], b.vec[2]);
    return (result);
}

/*  [a b] * [e f] = [ae+bg af+bh]
 *  [c d]   [g h]   [ce+dg cf+dh]
 * * * * * * * * * * * * * * * * */
LM_API t_mat3   lm_mat3_mul(t_mat3 a, t_mat3 b) {
    t_mat3  result;

    result.m0 = a.m0 * b.m0 + a.m1 * b.m3 + a.m2 * b.m6;
    result.m1 = a.m0 * b.m1 + a.m1 * b.m4 + a.m2 * b.m7;
    result.m2 = a.m0 * b.m2 + a.m1 * b.m5 + a.m2 * b.m8;
    
    result.m3 = a.m3 * b.m0 + a.m4 * b.m3 + a.m5 * b.m6;
    result.m4 = a.m3 * b.m1 + a.m4 * b.m4 + a.m5 * b.m7;
    result.m5 = a.m3 * b.m2 + a.m4 * b.m5 + a.m5 * b.m8;
    
    result.m6 = a.m6 * b.m0 + a.m7 * b.m3 + a.m8 * b.m6;
    result.m7 = a.m6 * b.m1 + a.m7 * b.m4 + a.m8 * b.m7;
    result.m8 = a.m6 * b.m2 + a.m7 * b.m5 + a.m8 * b.m8;
    return (result);
}

/*  v * [a b] = [av bv]
 *      [c d] = [cv dv]
 * * * * * * * * * * * */
LM_API t_mat3   lm_mat3_mulv(t_mat3 m, double v) {
    t_mat3  result;

    result.vec[0] = lm_vec3_mulv(m.vec[0], v);
    result.vec[1] = lm_vec3_mulv(m.vec[1], v);
    result.vec[2] = lm_vec3_mulv(m.vec[2], v);
    return (result);
}

/* A = [a b c]
 *     [d e f]
 *     [g h i]
 *
 * det(A) = aei + bfg + cdh - gec - hfa - idb
 * */
LM_API double   lm_mat3_det(t_mat3 m) {
    double  result;

    result = m.m0 * m.m4 * m.m8;
    result += m.m1 * m.m5 * m.m6;
    result += m.m2 * m.m3 * m.m7;

    result -= m.m6 * m.m4 * m.m2;
    result -= m.m7 * m.m5 * m.m0;
    result -= m.m8 * m.m3 * m.m1;
    return (result);
}

LM_API bool     lm_mat3_eq(t_mat3 a, t_mat3 b) {
    return (lm_vec3_eq(a.vec[0], b.vec[0]) &&
            lm_vec3_eq(a.vec[1], b.vec[1]) &&
            lm_vec3_eq(a.vec[2], b.vec[2])
        );
}



/* SECTION: t_mat4
 * * * * * * * * * */

LM_API t_mat4   lm_mat4_zero(void) {
    t_mat4  result;

    result.vec[0] = lm_vec4_zero();
    result.vec[1] = lm_vec4_zero();
    result.vec[2] = lm_vec4_zero();
    result.vec[3] = lm_vec4_zero();
    return (result);
}

LM_API t_mat4   lm_mat4_identity(void) {
    t_mat4  result;

    result.vec[0] = lm_vec4(1.0, 0.0, 0.0, 0.0);
    result.vec[1] = lm_vec4(0.0, 1.0, 0.0, 0.0);
    result.vec[2] = lm_vec4(0.0, 0.0, 1.0, 0.0);
    result.vec[3] = lm_vec4(0.0, 0.0, 0.0, 1.0);
    return (result);
}

/*  [a b] + [e f] = [a+e b+f]
 *  [c d]   [g h]   [c+g d+h]
 * * * * * * * * * * * * * * */
LM_API t_mat4   lm_mat4_add(t_mat4 a, t_mat4 b) {
    t_mat4  result;

    result.vec[0] = lm_vec4_add(a.vec[0], b.vec[0]);
    result.vec[1] = lm_vec4_add(a.vec[1], b.vec[1]);
    result.vec[2] = lm_vec4_add(a.vec[2], b.vec[2]);
    result.vec[3] = lm_vec4_add(a.vec[3], b.vec[3]);
    return (result);
}

/*  [a b] - [e f] = [a-e b-f]
 *  [c d]   [g h]   [c-g d-h]
 * * * * * * * * * * * * * * */
LM_API t_mat4   lm_mat4_sub(t_mat4 a, t_mat4 b) {
    t_mat4  result;

    result.vec[0] = lm_vec4_sub(a.vec[0], b.vec[0]);
    result.vec[1] = lm_vec4_sub(a.vec[1], b.vec[1]);
    result.vec[2] = lm_vec4_sub(a.vec[2], b.vec[2]);
    result.vec[3] = lm_vec4_sub(a.vec[3], b.vec[3]);
    return (result);
}

/*  [a b] * [e f] = [ae+bg af+bh]
 *  [c d]   [g h]   [ce+dg cf+dh]
 * * * * * * * * * * * * * * * * */
LM_API t_mat4   lm_mat4_mul(t_mat4 a, t_mat4 b) {
    t_mat4  result;

    /* 1st. row */
    result.m0  = a.m0 * b.m0 + a.m1 * b.m4 + a.m2 * b.m8  + a.m3 * b.m12;
    result.m1  = a.m0 * b.m1 + a.m1 * b.m5 + a.m2 * b.m9  + a.m3 * b.m13;
    result.m2  = a.m0 * b.m2 + a.m1 * b.m6 + a.m2 * b.m10 + a.m3 * b.m14;
    result.m3  = a.m0 * b.m3 + a.m1 * b.m7 + a.m2 * b.m11 + a.m3 * b.m15;

    /* 2nd. row */
    result.m4  = a.m4 * b.m0 + a.m5 * b.m4 + a.m6 * b.m8  + a.m7 * b.m12;
    result.m5  = a.m4 * b.m1 + a.m5 * b.m5 + a.m6 * b.m9  + a.m7 * b.m13;
    result.m6  = a.m4 * b.m2 + a.m5 * b.m6 + a.m6 * b.m10 + a.m7 * b.m14;
    result.m7  = a.m4 * b.m3 + a.m5 * b.m7 + a.m6 * b.m11 + a.m7 * b.m15;

    /* 3rd. row */
    result.m8  = a.m8 * b.m0 + a.m9 * b.m4 + a.m10 * b.m8  + a.m11 * b.m12;
    result.m9  = a.m8 * b.m1 + a.m9 * b.m5 + a.m10 * b.m9  + a.m11 * b.m13;
    result.m10 = a.m8 * b.m2 + a.m9 * b.m6 + a.m10 * b.m10 + a.m11 * b.m14;
    result.m11 = a.m8 * b.m3 + a.m9 * b.m7 + a.m10 * b.m11 + a.m11 * b.m15;

    /* 4th. row */
    result.m12 = a.m12 * b.m0 + a.m13 * b.m4 + a.m14 * b.m8  + a.m15 * b.m12;
    result.m13 = a.m12 * b.m1 + a.m13 * b.m5 + a.m14 * b.m9  + a.m15 * b.m13;
    result.m14 = a.m12 * b.m2 + a.m13 * b.m6 + a.m14 * b.m10 + a.m15 * b.m14;
    result.m15 = a.m12 * b.m3 + a.m13 * b.m7 + a.m14 * b.m11 + a.m15 * b.m15;
    return (result);
}

/*  v * [a b] = [av bv]
 *      [c d] = [cv dv]
 * * * * * * * * * * * */
LM_API t_mat4   lm_mat4_mulv(t_mat4 m, double v) {
    t_mat4  result;

    result.vec[0] = lm_vec4_mulv(m.vec[0], v);
    result.vec[1] = lm_vec4_mulv(m.vec[1], v);
    result.vec[2] = lm_vec4_mulv(m.vec[2], v);
    result.vec[3] = lm_vec4_mulv(m.vec[3], v);
    return (result);
}

LM_API t_mat4   lm_mat4_translate(t_vec3 v) {
    t_mat4  result;

    result = lm_mat4_identity();
    result.m3 = v.x;
    result.m7 = v.y;
    result.m11 = v.z;
    return (result);
}

LM_API t_mat4   lm_mat4_rotate(t_vec3 v, double angle) {
    /* TODO */
    (void) v;
    (void) angle;
    return (lm_mat4_zero());
}

LM_API t_mat4   lm_mat4_scale(t_vec3 v) {
    t_mat4  result;

    result = lm_mat4_identity();
    result.m0 = v.x;
    result.m5 = v.y;
    result.m10 = v.z;
    return (result);
}

/* A = [a b c d]
 *     [e f g h]
 *     [i j k l]
 *     [m n o p]
 *
 * det(A) = a * det([f g h]) - b * det([e g h]) + c * det([e f h]) - d * det([e f g])
 *                  [j k l]            [i k l]            [i j l]            [i j k]
 *                  [n o p]            [m o p]            [m n p]            [m n o]
 * */
LM_API double   lm_mat4_det(t_mat4 m) {
    t_mat3  m0, m1, m2, m3;
    double  result;

    m0 = (t_mat3) { { m.m5,  m.m6,  m.m7,
                      m.m9,  m.m10, m.m11,
                      m.m13, m.m14, m.m15 } };
    m1 = (t_mat3) { { m.m4,  m.m6,  m.m7,
                      m.m8,  m.m10, m.m11,
                      m.m12, m.m14, m.m15 } };
    m2 = (t_mat3) { { m.m4,  m.m5,  m.m7,
                      m.m8,  m.m9,  m.m11,
                      m.m12, m.m13, m.m15 } };
    m3 = (t_mat3) { { m.m4,  m.m5,  m.m6,
                      m.m8,  m.m9,  m.m10,
                      m.m12, m.m13, m.m14 } };
    result = m.m0 * lm_mat3_det(m0) - m.m1 * lm_mat3_det(m1) + m.m2 * lm_mat3_det(m2) - m.m3 * lm_mat3_det(m3);
    return (result);
}

LM_API t_mat4   lm_mat4_ortho(double left, double right, double top, double down, double near, double far) {
    t_mat4  result;

    result = lm_mat4_zero();
    result.ptr[0][0] = 2.0 / (right - left);
    
    result.ptr[1][1] = 2.0 / (top - down);
    
    result.ptr[2][2] = 2.0 / (far - near);
    
    result.ptr[3][0] = -(left + right) / (right - left);
    result.ptr[3][1] = -(top + down) / (top - down);
    result.ptr[3][2] = -(far + near) / (far - near);
    result.ptr[3][3] = 1.0;
    return (result);
}

LM_API t_mat4   lm_mat4_persp(double fov, double aspect, double near, double far) {
    t_mat4  result;
    double  top, bottom, left, right;
    double  rl, tb, fn;

    top = near * lm_tan(fov * 0.5);
    bottom = -top;
    right = top * aspect;
    left = -right;

    rl = (double) (right - left);
    tb = (double) (top - bottom);
    fn = (double) (far - near);

    result = lm_mat4_zero();
    result.ptr[0][0] = (near * 2.0) / rl; 
    
    result.ptr[1][1] = (near * 2.0) / tb;
    
    result.ptr[2][0] = (right + left) / rl;
    result.ptr[2][1] = (top + bottom) / tb;
    result.ptr[2][2] = -(far + near) / fn;
    result.ptr[2][3] = -1.0;
    
    result.ptr[3][2] = -(far * near * 2.0) / fn;
    return (result);
}

LM_API t_mat4   lm_mat4_lookat(t_vec3 eye, t_vec3 center, t_vec3 up) {
    t_mat4  result;
    t_vec3  f, u, s;

    f = lm_vec3_sub(center, eye);
    f = lm_vec3_normalize(f);
    s = lm_vec3_cross(up, f);
    s = lm_vec3_normalize(s);
    u = lm_vec3_cross(f, s);

    result = lm_mat4_zero();
    result.ptr[0][0] = s.x;
    result.ptr[0][1] = u.x;
    result.ptr[0][2] = f.x;
    result.ptr[0][3] = 0.0;
    
    result.ptr[1][0] = s.y;
    result.ptr[1][1] = u.y;
    result.ptr[1][2] = f.y;
    result.ptr[1][3] = 0.0;
    
    result.ptr[2][0] = s.z;
    result.ptr[2][1] = u.z;
    result.ptr[2][2] = f.z;
    result.ptr[2][3] = 0.0;
    
    result.ptr[3][0] = -lm_vec3_dot(s, eye);
    result.ptr[3][1] = -lm_vec3_dot(u, eye);
    result.ptr[3][2] = -lm_vec3_dot(f, eye);
    result.ptr[3][3] = 1.0;
    return (result);
}

LM_API bool     lm_mat4_eq(t_mat4 a, t_mat4 b) {
    return (lm_vec4_eq(a.vec[0], b.vec[0]) &&
            lm_vec4_eq(a.vec[1], b.vec[1]) &&
            lm_vec4_eq(a.vec[2], b.vec[2]) &&
            lm_vec4_eq(a.vec[3], b.vec[3])
        );
}



# endif /* LIBMATH_IMPLEMENTATION */
# if defined (__cplusplus)

}

# endif /* __cplusplus */
#endif /* _libmath_h_ */
