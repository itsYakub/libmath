# libmath.h

**libmath** is a simple single-header library for handling mathematical operations. It targets simple math operations,
trigonometric and cyclometric functions, linear algebra, vector and matrix math etc. It is written in C programming language. 

## Configuration

```c
/*
 *  #define LIBMATH_IMPLEMENTATION:
 *      Include the implementation section of the header into the source file.
 *      NOTE: This macro should defined only ONCE in your program. Otherwise we'd cause a "multiple definition of..." error.
 *
 *  #define LIBMATH_USE_STDLIB:
 *      If defined, some libmath functions will default back to the standard library's math module.
 */
```

## API

### Constants:

```c
#define LM_PI 3.14159265358979323846
#define LM_EPSILON 1e-6f
#define LM_NAN (0.0 / 0.0)
#define LM_INF 1e10000f
#define lm_deg2rad(a) (a * (LM_PI / 180.0))
#define lm_rad2deg(a) (a * (180.0 / LM_PI))
```

### Standard utilities:

```c
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
```

### Trigonometry:

```c
LM_API double   lm_sin(double);
LM_API double   lm_cos(double);
LM_API double   lm_tan(double);
LM_API double   lm_cot(double);
LM_API double   lm_asin(double);
LM_API double   lm_acos(double);
LM_API double   lm_atan(double);
LM_API double   lm_acot(double);
LM_API double   lm_atan2(double, double);
```

### Vector2:

```c
/* ... */

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
```

### Vector3:

```c
/* ... */

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
```

### Vector4:

```c
/* ... */

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
```

### Rectangle:

```c
/* ... */

typedef t_vec4  t_rect;

LM_API t_rect   lm_rect(double, double, double, double);
LM_API t_rect   lm_rect_zero(void);
LM_API t_rect   lm_rect_vec2(t_vec2, t_vec2);
LM_API bool     lm_rect_aabb(t_rect, t_rect);
LM_API bool     lm_rect_aabb_vec2(t_rect, t_vec2);

LM_API bool     lm_rect_eq(t_rect, t_rect);
```

### Color:

```c
/* ... */

typedef t_vec4  t_col;


LM_API t_col    lm_col(double, double, double, double);
LM_API t_col    lm_col_uc(unsigned char, unsigned char, unsigned char, unsigned char);

LM_API t_col    lm_int2col(int);
LM_API int      lm_col2int(t_col);

LM_API bool     lm_col_eq(t_col, t_col);
```

### Matrix2D:

```c
/* ... */

typedef union u_mat2    t_mat2;

LM_API t_mat2   lm_mat2_zero(void);
LM_API t_mat2   lm_mat2_identity(void);
LM_API t_mat2   lm_mat2_add(t_mat2, t_mat2);
LM_API t_mat2   lm_mat2_sub(t_mat2, t_mat2);
LM_API t_mat2   lm_mat2_mul(t_mat2, t_mat2);
LM_API t_mat2   lm_mat2_mulv(t_mat2, double);

LM_API double   lm_mat2_det(t_mat2);

LM_API bool     lm_mat2_eq(t_mat2, t_mat2);
```

### Matrix3D:

```c
/* ... */

typedef union u_mat3    t_mat3;

LM_API t_mat3   lm_mat3_zero(void);
LM_API t_mat3   lm_mat3_identity(void);
LM_API t_mat3   lm_mat3_add(t_mat3, t_mat3);
LM_API t_mat3   lm_mat3_sub(t_mat3, t_mat3);
LM_API t_mat3   lm_mat3_mul(t_mat3, t_mat3);
LM_API t_mat3   lm_mat3_mulv(t_mat3, double);

LM_API double   lm_mat3_det(t_mat3);

LM_API bool     lm_mat3_eq(t_mat3, t_mat3);
```

### Matrix4D:

```c
/* ... */

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
```

## Licence

This project is licenced under the [lgpl](./LICENCE) licence.
