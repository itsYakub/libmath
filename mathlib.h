#if defined (__cplusplus)
# pragma once
#endif
#if !defined _mathlib_h_
# define _mathlib_h_
# if !defined (__cplusplus)
#  include <stdbool.h>
# endif
# if !defined (ML_API)
#  if defined (__cplusplus)
#   define ML_API extern "C"
#  else
#   define ML_API extern
#  endif
# endif

/*	SECTION: utils
 * */

# if !defined (ml_min)
#  define ml_min(a, b) (a < b ? a : b)
# endif
# if !defined (ml_max)
#  define ml_max(a, b) (a > b ? a : b)
# endif
# if !defined (ml_abs)
#  define ml_abs(a) (a * ((a <= 0) - (a > 0)))
# endif
# if !defined (ml_round)
#  define ml_round(a) ((a - (int) a >= 0.5f) ? (int) a + 1 : (int) a)
# endif
# if !defined(ml_floor)
#  define ml_floor(a) ((int) a)
# endif
# if !defined (ml_ceil)
#  define ml_ceil(a) ((a - (int) a == 0.0f) ? a : (int) a + 1)
# endif

ML_API float	ml_clampf(float, float, float);
ML_API float	ml_clampf_zo(float);
ML_API float	ml_lerpf(float, float, float);
ML_API float	ml_lerpf_zo(float, float, float);
ML_API void		ml_swapf(float *, float *);

ML_API int		ml_clampi(int, int, int);
ML_API int		ml_lerpi(int, int, float);
ML_API int		ml_lerpi_zo(int, int, float);
ML_API void		ml_swapi(int *, int *);

ML_API int		ml_randi(int, int);
ML_API float	ml_randf(float, float);

/*	SECTION: t_vec2
 * */

union u_vec2 {
	float		ptr[2];
	struct {
		float	x;
		float	y;
	};
};

typedef union u_vec2	t_vec2;

ML_API t_vec2	ml_vec2(float, float);
ML_API t_vec2	ml_vec2_cpy(t_vec2);
ML_API t_vec2	ml_vec2_add(t_vec2, t_vec2);
ML_API t_vec2	ml_vec2_addv(t_vec2, float);
ML_API t_vec2	ml_vec2_sub(t_vec2, t_vec2);
ML_API t_vec2	ml_vec2_subv(t_vec2, float);
ML_API t_vec2	ml_vec2_mul(t_vec2, t_vec2);
ML_API t_vec2	ml_vec2_mulv(t_vec2, float);
ML_API t_vec2	ml_vec2_div(t_vec2, t_vec2);
ML_API t_vec2	ml_vec2_divv(t_vec2, float);

ML_API bool		ml_vec2_eq(t_vec2, t_vec2);

/*	SECTION: t_vec3
 * */

union u_vec3 {
	float		ptr[3];
	struct {
		float	x;
		float	y;
		float	z;
	};
	struct {
		float	r;
		float	g;
		float	b;
	};
};

typedef union u_vec3	t_vec3;
typedef union u_vec3	t_col3;

ML_API t_vec3	ml_vec3(float, float, float);
ML_API t_vec3	ml_vec3_cpy(t_vec3);
ML_API t_vec3	ml_vec3_add(t_vec3, t_vec3);
ML_API t_vec3	ml_vec3_addv(t_vec3, float);
ML_API t_vec3	ml_vec3_sub(t_vec3, t_vec3);
ML_API t_vec3	ml_vec3_subv(t_vec3, float);
ML_API t_vec3	ml_vec3_mul(t_vec3, t_vec3);
ML_API t_vec3	ml_vec3_mulv(t_vec3, float);
ML_API t_vec3	ml_vec3_div(t_vec3, t_vec3);
ML_API t_vec3	ml_vec3_divv(t_vec3, float);

ML_API bool		ml_vec3_eq(t_vec3, t_vec3);

/*	SECTION: t_vec4
 * */

union u_vec4 {
	float		ptr[4];
	struct {
		float	x;
		float	y;
		float	z;
		float	w;
	};
	struct {
		float	r;
		float	g;
		float	b;
		float	a;
	};
};

typedef union u_vec4	t_vec4;
typedef union u_vec4	t_rect;
typedef union u_vec4	t_col4;
typedef union u_vec4	t_col;

ML_API t_vec4	ml_vec4(float, float, float, float);
ML_API t_vec4	ml_vec4_cpy(t_vec4);
ML_API t_vec4	ml_vec4_add(t_vec4, t_vec4);
ML_API t_vec4	ml_vec4_addv(t_vec4, float);
ML_API t_vec4	ml_vec4_sub(t_vec4, t_vec4);
ML_API t_vec4	ml_vec4_subv(t_vec4, float);
ML_API t_vec4	ml_vec4_mul(t_vec4, t_vec4);
ML_API t_vec4	ml_vec4_mulv(t_vec4, float);
ML_API t_vec4	ml_vec4_div(t_vec4, t_vec4);
ML_API t_vec4	ml_vec4_divv(t_vec4, float);

ML_API bool		ml_vec4_eq(t_vec4, t_vec4);

/*	SECTION: t_mat4
 * */

union u_mat4 {
	float		ptr[4][4];
	t_vec4		vec[4];
	struct {
		float	m0,  m1,  m2,  m3;
		float	m4,  m5,  m6,  m7;
		float	m8,  m9,  m10, m11;
		float	m12, m13, m14, m15;
	};
};

typedef union u_mat4	t_mat4;

ML_API t_mat4	ml_mat4_zero(void);
ML_API t_mat4	ml_mat4_identity(void);
ML_API t_mat4	ml_mat4_add(t_mat4, t_mat4);
ML_API t_mat4	ml_mat4_sub(t_mat4, t_mat4);
ML_API t_mat4	ml_mat4_mul(t_mat4, t_mat4);
ML_API t_mat4	ml_mat4_mulv(t_mat4, float);
ML_API t_mat4	ml_mat4_ortho(float, float, float, float, float, float);
ML_API t_mat4	ml_mat4_persp(float, float, float, float);

ML_API bool		ml_mat4_eq(t_mat4, t_mat4);

# if defined (MATHLIB_IMPLEMENTATION)
#  include <math.h>
#  include <time.h>
#  include <stdlib.h>

/*	SECTION: utils
 * */

ML_API float	ml_clampf(float a, float min, float max) { return (ml_min(ml_max(a, min), max)); }
ML_API float	ml_clampf_zo(float a) { return (ml_clampf(a, 0.0f, 1.0f)); }
ML_API float	ml_lerpf(float a, float b, float t) { return (a + t * (b - a)); }
ML_API float	ml_lerpf_zo(float a, float b, float t) { return (ml_lerpf(a, b, ml_clampf_zo(t))); }

ML_API void	ml_swapf(float *a, float *b) {
	float	_t;

	_t = *a;
	*a = *b;
	*b = _t;
}

ML_API int	ml_clampi(int a, int min, int max) { return (ml_min(ml_max(a, min), max)); }
ML_API int	ml_lerpi(int a, int b, float t) { return (a + t * (b - a)); }
ML_API int	ml_lerpi_zo(int a, int b, float t) { return (ml_lerpi(a, b, ml_clampf_zo(t))); }

ML_API void	ml_swapi(int *a, int *b) {
	int	_t;
	_t = *a;
	*a = *b;
	*b = _t;
}

ML_API int	ml_randi(int min, int max) {
	return (min + (rand() % (max + 1 - min)));
}

ML_API float	ml_randf(float min, float max) {
	return (min + ((float) rand() / (float) RAND_MAX) * (max - min));
}

/*	SECTION: t_vec2
 * */

ML_API t_vec2	ml_vec2(float x, float y) { return ((t_vec2) { x, y } ); }
ML_API t_vec2	ml_vec2_cpy(t_vec2 v) { return ((t_vec2) { v.x, v.y } ); }
ML_API t_vec2	ml_vec2_add(t_vec2 a, t_vec2 b) { return ((t_vec2) { a.x + b.x, a.y + b.y } ); }
ML_API t_vec2	ml_vec2_addv(t_vec2 v, float f) { return ((t_vec2) { v.x + f, v.y + f } ); }
ML_API t_vec2	ml_vec2_sub(t_vec2 a, t_vec2 b) { return ((t_vec2) { a.x - b.x, a.y - b.y } ); }
ML_API t_vec2	ml_vec2_subv(t_vec2 v, float f) { return ((t_vec2) { v.x - f, v.y - f } ); }
ML_API t_vec2	ml_vec2_mul(t_vec2 a, t_vec2 b) { return ((t_vec2) { a.x * b.x, a.y * b.y } ); }
ML_API t_vec2	ml_vec2_mulv(t_vec2 v, float f) { return ((t_vec2) { v.x * f, v.y * f } ); }
ML_API t_vec2	ml_vec2_div(t_vec2 a, t_vec2 b) { return ((t_vec2) { a.x / b.x, a.y / b.y } ); }
ML_API t_vec2	ml_vec2_divv(t_vec2 v, float f) { return ((t_vec2) { v.x / f, v.y / f } ); }

ML_API bool		ml_vec2_eq(t_vec2 a, t_vec2 b) { return (a.x == b.x && a.y == b.y); }

/*	SECTION: t_vec3
 * */

ML_API t_vec3	ml_vec3(float x, float y, float z) { return ((t_vec3) { x, y, z } ); }
ML_API t_vec3	ml_vec3_cpy(t_vec3 v) { return ((t_vec3) { v.x, v.y, v.z } ); }
ML_API t_vec3	ml_vec3_add(t_vec3 a, t_vec3 b) { return ((t_vec3) { a.x + b.x, a.y + b.y, a.z + b.z } ); }
ML_API t_vec3	ml_vec3_addv(t_vec3 v, float f) { return ((t_vec3) { v.x + f, v.y + f, v.z + f } ); }
ML_API t_vec3	ml_vec3_sub(t_vec3 a, t_vec3 b) { return ((t_vec3) { a.x - b.x, a.y - b.y, a.z - b.z } ); }
ML_API t_vec3	ml_vec3_subv(t_vec3 v, float f) { return ((t_vec3) { v.x - f, v.y - f, v.z - f} ); }
ML_API t_vec3	ml_vec3_mul(t_vec3 a, t_vec3 b) { return ((t_vec3) { a.x * b.x, a.y * b.y, a.z * b.z } ); }
ML_API t_vec3	ml_vec3_mulv(t_vec3 v, float f) { return ((t_vec3) { v.x * f, v.y * f, v.z * f } ); }
ML_API t_vec3	ml_vec3_div(t_vec3 a, t_vec3 b) { return ((t_vec3) { a.x / b.x, a.y / b.y, a.z / b.z } ); }
ML_API t_vec3	ml_vec3_divv(t_vec3 v, float f) { return ((t_vec3) { v.x / f, v.y / f, v.z / f } ); }

ML_API bool		ml_vec3_eq(t_vec3 a, t_vec3 b) { return (a.x == b.x && a.y == b.y && a.z == b.z); }

/*	SECTION: t_vec4
 * */

ML_API t_vec4	ml_vec4(float x, float y, float z, float w) { return ((t_vec4) { x, y, z, w } ); }
ML_API t_vec4	ml_vec4_cpy(t_vec4 v) { return ((t_vec4) { v.x, v.y, v.z, v.w } ); }
ML_API t_vec4	ml_vec4_add(t_vec4 a, t_vec4 b) { return ((t_vec4) { a.x + b.x, a.y + b.y, a.z + b.z, a.z + b.z } ); }
ML_API t_vec4	ml_vec4_addv(t_vec4 v, float f) { return ((t_vec4) { v.x + f, v.y + f, v.z + f, v.z + f } ); }
ML_API t_vec4	ml_vec4_sub(t_vec4 a, t_vec4 b) { return ((t_vec4) { a.x - b.x, a.y - b.y, a.z - b.z, a.z - b.z } ); }
ML_API t_vec4	ml_vec4_subv(t_vec4 v, float f) { return ((t_vec4) { v.x - f, v.y - f, v.z - f, v.z - f} ); }
ML_API t_vec4	ml_vec4_mul(t_vec4 a, t_vec4 b) { return ((t_vec4) { a.x * b.x, a.y * b.y, a.z * b.z, a.z * b.z } ); }
ML_API t_vec4	ml_vec4_mulv(t_vec4 v, float f) { return ((t_vec4) { v.x * f, v.y * f, v.z * f, v.z * f } ); }
ML_API t_vec4	ml_vec4_div(t_vec4 a, t_vec4 b) { return ((t_vec4) { a.x / b.x, a.y / b.y, a.z / b.z, a.z / b.z } ); }
ML_API t_vec4	ml_vec4_divv(t_vec4 v, float f) { return ((t_vec4) { v.x / f, v.y / f, v.z / f, v.z / f } ); }

ML_API bool		ml_vec4_eq(t_vec4 a, t_vec4 b) { return (a.x == b.x && a.y == b.y && a.z == b.z && a.w == b.w); }

/*	SECTION: t_mat4
 * */

ML_API t_mat4	ml_mat4_zero(void) { return ((t_mat4) { 0 } ); }

ML_API t_mat4	ml_mat4_identity(void) {
	t_mat4	_result;

	_result = (t_mat4) {
		1.0f, 0.0f, 0.0f, 0.0f,
		0.0f, 1.0f, 0.0f, 0.0f,
		0.0f, 0.0f, 1.0f, 0.0f,
		0.0f, 0.0f, 0.0f, 1.0f,
	};
	return (_result);
}

/*	[a b] [e f] | [a+e b+f]
 *	[c d] [g h] | [c+g d+h]
 * */

ML_API t_mat4	ml_mat4_add(t_mat4 a, t_mat4 b) {
	t_mat4	_result;

	/* 1st. row */
	_result.m0 = a.m0 + b.m0;
	_result.m1 = a.m1 + b.m1;
	_result.m2 = a.m2 + b.m2;
	_result.m3 = a.m3 + b.m3;
	
	/* 2nd. row */
	_result.m4 = a.m4 + b.m4;
	_result.m5 = a.m5 + b.m5;
	_result.m6 = a.m6 + b.m6;
	_result.m7 = a.m7 + b.m7;
	
	/* 3rd. row */
	_result.m8 = a.m8 + b.m8;
	_result.m9 = a.m9 + b.m9;
	_result.m10 = a.m10 + b.m10;
	_result.m11 = a.m11 + b.m11;
	
	/* 4th. row */
	_result.m12 = a.m12 + b.m12;
	_result.m13 = a.m13 + b.m13;
	_result.m14 = a.m14 + b.m14;
	_result.m15 = a.m15 + b.m15;
	return (_result);
}

/*	[a b] [e f] | [a-e b-f]
 *	[c d] [g h] | [c-g d-h]
 * */
ML_API t_mat4	ml_mat4_sub(t_mat4 a, t_mat4 b) {
	t_mat4	_result;

	/* 1st. row */
	_result.m0 = a.m0 - b.m0;
	_result.m1 = a.m1 - b.m1;
	_result.m2 = a.m2 - b.m2;
	_result.m3 = a.m3 - b.m3;
	
	/* 2nd. row */
	_result.m4 = a.m4 - b.m4;
	_result.m5 = a.m5 - b.m5;
	_result.m6 = a.m6 - b.m6;
	_result.m7 = a.m7 - b.m7;
	
	/* 3rd. row */
	_result.m8 = a.m8 - b.m8;
	_result.m9 = a.m9 - b.m9;
	_result.m10 = a.m10 - b.m10;
	_result.m11 = a.m11 - b.m11;
	
	/* 4th. row */
	_result.m12 = a.m12 - b.m12;
	_result.m13 = a.m13 - b.m13;
	_result.m14 = a.m14 - b.m14;
	_result.m15 = a.m15 - b.m15;
	return (_result);
}

/*	[a b] [e f] | [ae+bg af+bh]
 *	[c d] [g h] | [ce+dg cf+dh]
 * */
ML_API t_mat4	ml_mat4_mul(t_mat4 a, t_mat4 b) {
	t_mat4	_result;

	/* 1st. row */
	_result.m0  = a.m0*b.m0 + a.m1*b.m4 + a.m2*b.m8 + a.m3*b.m12;
	_result.m1  = a.m0*b.m1 + a.m1*b.m5 + a.m2*b.m9 + a.m3*b.m13;
	_result.m2  = a.m0*b.m2 + a.m1*b.m6 + a.m2*b.m10 + a.m3*b.m14;
	_result.m3  = a.m0*b.m3 + a.m1*b.m7 + a.m2*b.m11 + a.m3*b.m15;

	/* 2nd. row */
	_result.m4  = a.m4*b.m0 + a.m5*b.m4 + a.m6*b.m8 + a.m7*b.m12;
	_result.m5  = a.m4*b.m1 + a.m5*b.m5 + a.m6*b.m9 + a.m7*b.m13;
	_result.m6  = a.m4*b.m2 + a.m5*b.m6 + a.m6*b.m10 + a.m7*b.m14;
	_result.m7  = a.m4*b.m3 + a.m5*b.m7 + a.m6*b.m11 + a.m7*b.m15;

	/* 3rd. row */
	_result.m8  = a.m8*b.m0 + a.m9*b.m4 + a.m10*b.m8 + a.m11*b.m12;
	_result.m9  = a.m8*b.m1 + a.m9*b.m5 + a.m10*b.m9 + a.m11*b.m13;
	_result.m10 = a.m8*b.m2 + a.m9*b.m6 + a.m10*b.m10 + a.m11*b.m14;
	_result.m11 = a.m8*b.m3 + a.m9*b.m7 + a.m10*b.m11 + a.m11*b.m15;

	/* 4th. row */
	_result.m12 = a.m12*b.m0 + a.m13*b.m4 + a.m14*b.m8 + a.m15*b.m12;
	_result.m13 = a.m12*b.m1 + a.m13*b.m5 + a.m14*b.m9 + a.m15*b.m13;
	_result.m14 = a.m12*b.m2 + a.m13*b.m6 + a.m14*b.m10 + a.m15*b.m14;
	_result.m15 = a.m12*b.m3 + a.m13*b.m7 + a.m14*b.m11 + a.m15*b.m15;
	return (_result);
}

/*	v * [a b] | [av bv]
 *		[c d] | [cv dv]
 * */
ML_API t_mat4	ml_mat4_mulv(t_mat4 m, float v) {
	t_mat4	_result;

	_result.vec[0] = ml_vec4_mulv(m.vec[0], v);
	_result.vec[1] = ml_vec4_mulv(m.vec[1], v);
	_result.vec[2] = ml_vec4_mulv(m.vec[2], v);
	_result.vec[3] = ml_vec4_mulv(m.vec[3], v);
	return (_result);
}

ML_API t_mat4	ml_mat4_ortho(float left, float right, float top, float down, float near, float far) {
	t_mat4	_result;
	float	_rl;
	float	_td;
	float	_nf;

	_rl = 1.0f / (right - left);
	_td = 1.0f / (top - down);
	_nf = 1.0f / (far - near) * -1.0f;
	_result = ml_mat4_zero();
	_result.ptr[0][0] = 2.0f * _rl;
	_result.ptr[1][1] = 2.0f * _td;
	_result.ptr[2][2] = 2.0f * _nf * -1.0f;
	_result.ptr[3][0] = (right + left) * _rl * -1.0f;
	_result.ptr[3][1] = (top + down) * _td * -1.0f;
	_result.ptr[3][2] = (near + far) * _nf;
	_result.ptr[3][3] = 1.0f;
	return (_result);
}

ML_API t_mat4	ml_mat4_persp(float fov, float aspect, float near, float far) {
	t_mat4	_result;
	float	_f;
	float	_fn;
	
	_f = 1.0f / tanf(fov * 0.5f);
	_fn = 1.0f / (near - far);
	_result = ml_mat4_zero();
	_result.ptr[0][0] = _f / aspect;
	_result.ptr[1][1] = _f;
	_result.ptr[2][2] = (near - far) * _fn * -1;;
	_result.ptr[2][3] = 1.0f;
	_result.ptr[3][2] = 2.0f * near * far * _fn;
	return (_result);
}

ML_API bool		ml_mat4_eq(t_mat4 a, t_mat4 b) {
	return (ml_vec4_eq(a.vec[0], b.vec[0]) &&
			ml_vec4_eq(a.vec[1], b.vec[1]) &&
			ml_vec4_eq(a.vec[2], b.vec[2]) &&
			ml_vec4_eq(a.vec[3], b.vec[3])
		);
}

# endif
#endif 
