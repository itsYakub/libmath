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

/* SECTION: constants
 * */

# if !defined (ML_PI)
#  define ML_PI 3.1415926535
# endif

/* SECTION: utils
 * */

# if !defined (ml_min)
#  define ml_min(a, b) ((int) (a) < (int) (b) ? a : b)
# endif
# if !defined (ml_max)
#  define ml_max(a, b) ((int) (a) > (int) (b) ? a : b)
# endif
# if !defined (ml_abs)
#  define ml_abs(a) (a > 0 ? a : -a)
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
# if !defined (ml_deg2rad)
#  define ml_deg2rad(a) (a * (ML_PI / 180.0))
# endif
# if !defined (ml_rad2deg)
#  define ml_rad2deg(a) (a * (180.0 / ML_PI))
# endif
# if defined (__cplusplus)

extern "C" {

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

/* SECTION: t_vec2
 * */

union u_vec2 {
	struct {
		float	x;
		float	y;
	};
	struct {
		float	w;
		float	h;
	};
	float		ptr[2];
};

typedef union u_vec2	t_vec2;

ML_API t_vec2	ml_vec2(float, float);
ML_API t_vec2	ml_vec2_zero(void);
ML_API t_vec2	ml_vec2_cpy(t_vec2);
ML_API t_vec2	ml_vec2_add(t_vec2, t_vec2);
ML_API t_vec2	ml_vec2_addv(t_vec2, float);
ML_API t_vec2	ml_vec2_sub(t_vec2, t_vec2);
ML_API t_vec2	ml_vec2_subv(t_vec2, float);
ML_API t_vec2	ml_vec2_mul(t_vec2, t_vec2);
ML_API t_vec2	ml_vec2_mulv(t_vec2, float);
ML_API t_vec2	ml_vec2_div(t_vec2, t_vec2);
ML_API t_vec2	ml_vec2_divv(t_vec2, float);

ML_API t_vec2	ml_vec2_clamp(t_vec2, t_vec2, t_vec2);
ML_API t_vec2	ml_vec2_clamp_zo(t_vec2);
ML_API t_vec2	ml_vec2_clamp_val(t_vec2, float, float);
ML_API t_vec2	ml_vec2_lerp(t_vec2, t_vec2, float);
ML_API t_vec2	ml_vec2_lerp_zo(t_vec2, t_vec2, float);
ML_API t_vec2	ml_vec2_dir(t_vec2, t_vec2);
ML_API t_vec2	ml_vec2_move_towards(t_vec2, t_vec2, float);
ML_API t_vec2	ml_vec2_normalize(t_vec2);

ML_API float	ml_vec2_dist(t_vec2, t_vec2);
ML_API float	ml_vec2_dist_sqr(t_vec2, t_vec2);
ML_API float	ml_vec2_len(t_vec2);
ML_API float	ml_vec2_len_sqr(t_vec2);
ML_API float	ml_vec2_ang(t_vec2, t_vec2);

ML_API bool		ml_vec2_eq(t_vec2, t_vec2);

/* SECTION: t_vec3
 * */

union u_vec3 {
	struct {
		float	x;
		float	y;
		float	z;
	};
	struct {
		float	w;
		float	h;
		float	l;
	};
	struct {
		float	r;
		float	g;
		float	b;
	};
	float		ptr[3];
};

typedef union u_vec3	t_vec3;

ML_API t_vec3	ml_vec3(float, float, float);
ML_API t_vec3	ml_vec3_zero(void);
ML_API t_vec3	ml_vec3_cpy(t_vec3);
ML_API t_vec3	ml_vec3_add(t_vec3, t_vec3);
ML_API t_vec3	ml_vec3_addv(t_vec3, float);
ML_API t_vec3	ml_vec3_sub(t_vec3, t_vec3);
ML_API t_vec3	ml_vec3_subv(t_vec3, float);
ML_API t_vec3	ml_vec3_mul(t_vec3, t_vec3);
ML_API t_vec3	ml_vec3_mulv(t_vec3, float);
ML_API t_vec3	ml_vec3_div(t_vec3, t_vec3);
ML_API t_vec3	ml_vec3_divv(t_vec3, float);

ML_API t_vec3	ml_vec3_clamp(t_vec3, t_vec3, t_vec3);
ML_API t_vec3	ml_vec3_clamp_zo(t_vec3);
ML_API t_vec3	ml_vec3_clamp_val(t_vec3, float, float);
ML_API t_vec3	ml_vec3_lerp(t_vec3, t_vec3, float);
ML_API t_vec3	ml_vec3_lerp_zo(t_vec3, t_vec3, float);
ML_API t_vec3	ml_vec3_move_towards(t_vec3, t_vec3, float);
ML_API t_vec3	ml_vec3_cross(t_vec3, t_vec3);
ML_API t_vec3	ml_vec3_normalize(t_vec3);

ML_API float	ml_vec3_dist(t_vec3, t_vec3);
ML_API float	ml_vec3_dist_sqr(t_vec3, t_vec3);
ML_API float	ml_vec3_len(t_vec3);
ML_API float	ml_vec3_len_sqr(t_vec3);
ML_API float	ml_vec3_ang(t_vec3, t_vec3);
ML_API float	ml_vec3_dot(t_vec3, t_vec3);

ML_API bool		ml_vec3_eq(t_vec3, t_vec3);

/* SECTION: t_vec4
 * */

union u_vec4 {
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
	struct {
		t_vec2	pos;
		t_vec2	siz;
	};
	float		ptr[4];
};

typedef union u_vec4	t_vec4;

ML_API t_vec4	ml_vec4(float, float, float, float);
ML_API t_vec4	ml_vec4_zero(void);
ML_API t_vec4	ml_vec4_cpy(t_vec4);
ML_API t_vec4	ml_vec4_add(t_vec4, t_vec4);
ML_API t_vec4	ml_vec4_addv(t_vec4, float);
ML_API t_vec4	ml_vec4_sub(t_vec4, t_vec4);
ML_API t_vec4	ml_vec4_subv(t_vec4, float);
ML_API t_vec4	ml_vec4_mul(t_vec4, t_vec4);
ML_API t_vec4	ml_vec4_mulv(t_vec4, float);
ML_API t_vec4	ml_vec4_div(t_vec4, t_vec4);
ML_API t_vec4	ml_vec4_divv(t_vec4, float);

ML_API t_vec4	ml_vec4_clamp(t_vec4, t_vec4, t_vec4);
ML_API t_vec4	ml_vec4_clamp_zo(t_vec4);
ML_API t_vec4	ml_vec4_clamp_val(t_vec4, float, float);
ML_API t_vec4	ml_vec4_lerp(t_vec4, t_vec4, float);
ML_API t_vec4	ml_vec4_lerp_zo(t_vec4, t_vec4, float);
ML_API t_vec4	ml_vec4_dir(t_vec4, t_vec4);
ML_API t_vec4	ml_vec4_move_towards(t_vec4, t_vec4, float);
ML_API t_vec4	ml_vec4_normalize(t_vec4);

ML_API float	ml_vec4_dist(t_vec4, t_vec4);
ML_API float	ml_vec4_dist_sqr(t_vec4, t_vec4);
ML_API float	ml_vec4_len(t_vec4);
ML_API float	ml_vec4_len_sqr(t_vec4);

ML_API bool		ml_vec4_eq(t_vec4, t_vec4);

/* SECTION: t_rect
 * */

typedef union u_vec4	t_rect;

ML_API t_rect	ml_rect(float, float, float, float);
ML_API t_rect	ml_rect_zero(void);
ML_API t_rect	ml_rect_vec2(t_vec2, t_vec2);
ML_API bool		ml_rect_aabb(t_rect, t_rect);
ML_API bool		ml_rect_aabb_vec2(t_rect, t_vec2);

ML_API bool		ml_rect_eq(t_rect, t_rect);

/* SECTION: t_col
 * */

typedef union u_vec4	t_col;

ML_API t_col	ml_colorf(float, float, float, float);
ML_API t_col	ml_colorc(unsigned char, unsigned char, unsigned char, unsigned char);
ML_API t_col	ml_colori(int);

ML_API int		ml_col2int(t_col);

ML_API bool		ml_vec4_eq(t_col, t_col);

/* SECTION: t_mat2
 * */

union u_mat2 {
	struct {
		float	m0, m1,
                m2, m3;
	};
	float		ptr[2][2];
	t_vec2		vec[2];
};

typedef union u_mat2	t_mat2;

ML_API t_mat2	ml_mat2_zero(void);
ML_API t_mat2	ml_mat2_identity(void);
ML_API t_mat2	ml_mat2_add(t_mat2, t_mat2);
ML_API t_mat2	ml_mat2_sub(t_mat2, t_mat2);
ML_API t_mat2	ml_mat2_mul(t_mat2, t_mat2);
ML_API t_mat2	ml_mat2_mulv(t_mat2, float);

ML_API bool		ml_mat2_eq(t_mat2, t_mat2);

/* SECTION: t_mat3
 * */

union u_mat3 {
	struct {
		float	m0, m1, m2,
                m3, m4, m5,
                m6, m7, m8;
	};
	float		ptr[3][3];
	t_vec3		vec[3];
};

typedef union u_mat3	t_mat3;

ML_API t_mat3	ml_mat3_zero(void);
ML_API t_mat3	ml_mat3_identity(void);
ML_API t_mat3	ml_mat3_add(t_mat3, t_mat3);
ML_API t_mat3	ml_mat3_sub(t_mat3, t_mat3);
ML_API t_mat3	ml_mat3_mul(t_mat3, t_mat3);
ML_API t_mat3	ml_mat3_mulv(t_mat3, float);
ML_API t_mat3	ml_mat3_ortho(float, float, float, float, float, float);
ML_API t_mat3	ml_mat3_persp(float, float, float, float);
ML_API t_mat3	ml_mat3_lookat(t_vec3, t_vec3, t_vec3);

ML_API bool		ml_mat3_eq(t_mat3, t_mat3);

/* SECTION: t_mat4
 * */

union u_mat4 {
	struct {
		float	m0,  m1,  m2,  m3,
				m4,  m5,  m6,  m7,
				m8,  m9,  m10, m11,
				m12, m13, m14, m15;
	};
	float		ptr[4][4];
	t_vec4		vec[4];
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
ML_API t_mat4	ml_mat4_lookat(t_vec3, t_vec3, t_vec3);

ML_API bool		ml_mat4_eq(t_mat4, t_mat4);

# if defined (MATHLIB_IMPLEMENTATION)
#  include <math.h>
#  include <time.h>
#  include <stdlib.h>

/* SECTION: utils
 * */

ML_API float	ml_clampf(float a, float min, float max) { return (ml_min(ml_max(a, min), max)); }
ML_API float	ml_clampf_zo(float a) { return (ml_clampf(a, 0.0f, 1.0f)); }
ML_API float	ml_lerpf(float a, float b, float t) { return (a + t * (b - a)); }
ML_API float	ml_lerpf_zo(float a, float b, float t) { return (ml_lerpf(a, b, ml_clampf_zo(t))); }

ML_API void	ml_swapf(float *a, float *b) {
	float	t;

	t = *a;
	*a = *b;
	*b = t;
}

ML_API int	ml_clampi(int a, int min, int max) { return (ml_min(ml_max(a, min), max)); }
ML_API int	ml_lerpi(int a, int b, float t) { return (a + t * (b - a)); }
ML_API int	ml_lerpi_zo(int a, int b, float t) { return (ml_lerpi(a, b, ml_clampf_zo(t))); }

ML_API void	ml_swapi(int *a, int *b) {
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

ML_API int	ml_randi(int min, int max) {
	return (min + (rand() % (max + 1 - min)));
}

ML_API float	ml_randf(float min, float max) {
	return (min + ((float) rand() / (float) RAND_MAX) * (max - min));
}

/* SECTION: t_vec2
 * */

ML_API t_vec2	ml_vec2(float x, float y) { return ((t_vec2) { .x = x, .y = y } ); }
ML_API t_vec2	ml_vec2_zero(void) { return (ml_vec2(0.0f, 0.0f)); }
ML_API t_vec2	ml_vec2_cpy(t_vec2 v) { return (ml_vec2(v.x, v.y)); }
ML_API t_vec2	ml_vec2_add(t_vec2 a, t_vec2 b) { return (ml_vec2(a.x + b.x, a.y + b.y)); }
ML_API t_vec2	ml_vec2_addv(t_vec2 v, float f) { return (ml_vec2(v.x + f, v.y + f)); }
ML_API t_vec2	ml_vec2_sub(t_vec2 a, t_vec2 b) { return (ml_vec2(a.x - b.x, a.y - b.y)); }
ML_API t_vec2	ml_vec2_subv(t_vec2 v, float f) { return (ml_vec2(v.x - f, v.y - f)); }
ML_API t_vec2	ml_vec2_mul(t_vec2 a, t_vec2 b) { return (ml_vec2(a.x * b.x, a.y * b.y)); }
ML_API t_vec2	ml_vec2_mulv(t_vec2 v, float f) { return (ml_vec2(v.x * f, v.y * f)); }
ML_API t_vec2	ml_vec2_div(t_vec2 a, t_vec2 b) { return (ml_vec2(a.x / b.x, a.y / b.y)); }
ML_API t_vec2	ml_vec2_divv(t_vec2 v, float f) { return (ml_vec2(v.x / f, v.y / f)); }

ML_API t_vec2	ml_vec2_clamp(t_vec2 v, t_vec2 min, t_vec2 max) {
	return ((t_vec2) {
			.x = ml_clampf(v.x, min.x, max.y),
			.y = ml_clampf(v.y, min.y, max.y)
		}
	);
}

ML_API t_vec2	ml_vec2_clamp_zo(t_vec2 v) {
	return (ml_vec2_clamp(v, ml_vec2(0.0f, 0.0f), ml_vec2(1.0f, 1.0f)));
}

ML_API t_vec2	ml_vec2_clamp_val(t_vec2 v, float min, float max) {
	return (ml_vec2_clamp(v, ml_vec2(min, min), ml_vec2(max, max)));
}

ML_API t_vec2	ml_vec2_lerp(t_vec2 a, t_vec2 b, float t) {
	return ((t_vec2) {
			.x = ml_lerpf(a.x, b.x, t),
			.y = ml_lerpf(a.y, b.y, t)
		}
	);
}
ML_API t_vec2	ml_vec2_lerp_zo(t_vec2 a, t_vec2 b, float t) {
	return ((t_vec2) {
			.x = ml_lerpf_zo(a.x, b.x, t),
			.y = ml_lerpf_zo(a.y, b.y, t)
		}
	);
}

ML_API t_vec2	ml_vec2_dir(t_vec2 a, t_vec2 b) {
	return ((t_vec2) {
			.x = cosf(atan2(a.y - b.y, a.x - b.x)) * -1,
			.y = sinf(atan2(a.y - b.y, a.x - b.x)) * -1
		}
	);
}

ML_API t_vec2	ml_vec2_move_towards(t_vec2 start, t_vec2 target, float t) {
	t_vec2	result, delta;
	float	val, dist;

	delta = ml_vec2_sub(target, start);
	val = ml_vec2_len_sqr(delta);

	if (val == 0.0f || ((t >= 0) && (val <= t * t))) {
		return (target);
	}
	dist = sqrtf(val);
	result.x = start.x + delta.x / dist * t;
	result.y = start.y + delta.y / dist * t;
	return (result);
}

ML_API t_vec2	ml_vec2_normalize(t_vec2 v) {
	t_vec2	result;
	float	len, leninv;

	result = ml_vec2(0, 0);
	len = ml_vec2_len(v);
	if (len > 0) {
		leninv = 1.0f / len;
		result.x = v.x * leninv;
		result.y = v.y * leninv;
	}
	return (result);
}

ML_API float	ml_vec2_dist(t_vec2 a, t_vec2 b) { return (sqrtf((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y))); }
ML_API float	ml_vec2_dist_sqr(t_vec2 a, t_vec2 b) { return ((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y)); }
ML_API float	ml_vec2_len(t_vec2 a) { return (sqrtf((a.x * a.x) + (a.y * a.y))); }
ML_API float	ml_vec2_len_sqr(t_vec2 a) { return ((a.x * a.x) + (a.y * a.y)); }
ML_API float	ml_vec2_ang(t_vec2 a, t_vec2 b) {
	float	dot, det;

	dot = a.x * b.x + a.y * b.y;
	det = a.x * b.y - a.y * b.x;
	return (atan2(dot, det));
}

ML_API bool		ml_vec2_eq(t_vec2 a, t_vec2 b) { return (a.x == b.x && a.y == b.y); }

/* SECTION: t_vec3
 * */

ML_API t_vec3	ml_vec3(float x, float y, float z) { return ((t_vec3) { .x = x, .y = y, .z = z } ); }
ML_API t_vec3	ml_vec3_zero(void) { return (ml_vec3(0.0f, 0.0f, 0.0f)); }
ML_API t_vec3	ml_vec3_cpy(t_vec3 v) { return (ml_vec3(v.x, v.y, v.z)); }
ML_API t_vec3	ml_vec3_add(t_vec3 a, t_vec3 b) { return (ml_vec3(a.x + b.x, a.y + b.y, a.z + b.z)); }
ML_API t_vec3	ml_vec3_addv(t_vec3 v, float f) { return (ml_vec3(v.x + f, v.y + f, v.z + f)); }
ML_API t_vec3	ml_vec3_sub(t_vec3 a, t_vec3 b) { return (ml_vec3(a.x - b.x, a.y - b.y, a.z - b.z)); }
ML_API t_vec3	ml_vec3_subv(t_vec3 v, float f) { return (ml_vec3(v.x - f, v.y - f, v.z - f)); }
ML_API t_vec3	ml_vec3_mul(t_vec3 a, t_vec3 b) { return (ml_vec3(a.x * b.x, a.y * b.y, a.z * b.z)); }
ML_API t_vec3	ml_vec3_mulv(t_vec3 v, float f) { return (ml_vec3(v.x * f, v.y * f, v.z * f)); }
ML_API t_vec3	ml_vec3_div(t_vec3 a, t_vec3 b) { return (ml_vec3(a.x / b.x, a.y / b.y, a.z / b.z)); }
ML_API t_vec3	ml_vec3_divv(t_vec3 v, float f) { return (ml_vec3(v.x / f, v.y / f, v.z / f)); }

ML_API t_vec3	ml_vec3_clamp(t_vec3 v, t_vec3 min, t_vec3 max) {
	return ((t_vec3) {
			.x = ml_clampf(v.x, min.x, max.y),
			.y = ml_clampf(v.y, min.y, max.y),
			.z = ml_clampf(v.z, min.z, max.z)
		}
	);
}

ML_API t_vec3	ml_vec3_clamp_zo(t_vec3 v) {
	return (ml_vec3_clamp(v, ml_vec3(0.0f, 0.0f, 0.0f), ml_vec3(1.0f, 1.0f, 1.0f)));
}

ML_API t_vec3	ml_vec3_clamp_val(t_vec3 v, float min, float max) {
	return (ml_vec3_clamp(v, ml_vec3(min, min, min), ml_vec3(max, max, max)));
}

ML_API t_vec3	ml_vec3_lerp(t_vec3 a, t_vec3 b, float t) {
	return ((t_vec3) {
			.x = ml_lerpf(a.x, b.x, t),
			.y = ml_lerpf(a.y, b.y, t),
			.z = ml_lerpf(a.z, b.z, t)
		}
	);
}
ML_API t_vec3	ml_vec3_lerp_zo(t_vec3 a, t_vec3 b, float t) {
	return ((t_vec3) {
			.x = ml_lerpf_zo(a.x, b.x, t),
			.y = ml_lerpf_zo(a.y, b.y, t),
			.z = ml_lerpf_zo(a.z, b.z, t)
		}
	);
}

ML_API t_vec3	ml_vec3_move_towards(t_vec3 start, t_vec3 target, float t) {
	t_vec3	result, delta;
	float	val, dist;

	delta = ml_vec3_sub(target, start);
	val = ml_vec3_len_sqr(delta);

	if (val == 0.0f || ((t >= 0) && (val <= t * t))) {
		return (target);
	}
	dist = sqrtf(val);
	result.x = start.x + delta.x / dist * t;
	result.y = start.y + delta.y / dist * t;
	result.z = start.z + delta.z / dist * t;
	return (result);
}

ML_API t_vec3	ml_vec3_cross(t_vec3 a, t_vec3 b) {
	t_vec3	result;
	
	result.x = a.y * b.z - a.z * b.y;
	result.y = a.z * b.x - a.x * b.z;
	result.z = a.x * b.y - a.y * b.x;
	return (result);
}

ML_API t_vec3	ml_vec3_normalize(t_vec3 v) {
	t_vec3	result;
	float	len, leninv;

	result = ml_vec3(0, 0, 0);
	len = ml_vec3_len(v);
	if (len > 0) {
		leninv = 1.0f / len;
		result.x = v.x * leninv;
		result.y = v.y * leninv;
		result.z = v.z * leninv;
	}
	return (result);
}

ML_API float	ml_vec3_dist(t_vec3 a, t_vec3 b) { return (sqrtf((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z))); }
ML_API float	ml_vec3_dist_sqr(t_vec3 a, t_vec3 b) { return ((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z)); }
ML_API float	ml_vec3_len(t_vec3 a) { return (sqrtf((a.x * a.x) + (a.y * a.y) + (a.z * a.z))); }
ML_API float	ml_vec3_len_sqr(t_vec3 a) { return ((a.x * a.x) + (a.y * a.y) + (a.z * a.z)); }
ML_API float	ml_vec3_ang(t_vec3 a, t_vec3 b) {
	t_vec3	cross;
	float	dot, len;

	cross = ml_vec3_cross(a, b);
	len = ml_vec3_len_sqr(cross);
	dot = ml_vec3_len(cross);
	return (atan2(len, dot));
}
ML_API float	ml_vec3_dot(t_vec3 a, t_vec3 b) {
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}

ML_API bool		ml_vec3_eq(t_vec3 a, t_vec3 b) { return (a.x == b.x && a.y == b.y && a.z == b.z); }

/* SECTION: t_vec4
 * */

ML_API t_vec4	ml_vec4(float x, float y, float z, float w) { return ((t_vec4) { .x = x, .y = y, .z = z, .w = w } ); }
ML_API t_vec4	ml_vec4_zero(void) { return (ml_vec4(0.0f, 0.0f, 0.0f, 0.0f)); }
ML_API t_vec4	ml_vec4_cpy(t_vec4 v) { return (ml_vec4(v.x, v.y, v.z, v.w)); }
ML_API t_vec4	ml_vec4_add(t_vec4 a, t_vec4 b) { return (ml_vec4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w)); }
ML_API t_vec4	ml_vec4_addv(t_vec4 v, float f) { return (ml_vec4(v.x + f, v.y + f, v.z + f, v.w + f)); }
ML_API t_vec4	ml_vec4_sub(t_vec4 a, t_vec4 b) { return (ml_vec4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w)); }
ML_API t_vec4	ml_vec4_subv(t_vec4 v, float f) { return (ml_vec4(v.x - f, v.y - f, v.z - f, v.w - f)); }
ML_API t_vec4	ml_vec4_mul(t_vec4 a, t_vec4 b) { return (ml_vec4(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w)); }
ML_API t_vec4	ml_vec4_mulv(t_vec4 v, float f) { return (ml_vec4(v.x * f, v.y * f, v.z * f, v.w * f)); }
ML_API t_vec4	ml_vec4_div(t_vec4 a, t_vec4 b) { return (ml_vec4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w)); }
ML_API t_vec4	ml_vec4_divv(t_vec4 v, float f) { return (ml_vec4(v.x / f, v.y / f, v.z / f, v.w / f)); }

ML_API t_vec4	ml_vec4_clamp(t_vec4 v, t_vec4 min, t_vec4 max) {
	return ((t_vec4) {
			.x = ml_clampf(v.x, min.x, max.y),
			.y = ml_clampf(v.y, min.y, max.y),
			.z = ml_clampf(v.z, min.z, max.z),
			.w = ml_clampf(v.w, min.w, max.w)
		}
	);
}

ML_API t_vec4	ml_vec4_clamp_zo(t_vec4 v) {
	return (ml_vec4_clamp(v, ml_vec4(0.0f, 0.0f, 0.0f, 0.0f), ml_vec4(1.0f, 1.0f, 1.0f, 1.0f)));
}

ML_API t_vec4	ml_vec4_clamp_val(t_vec4 v, float min, float max) {
	return (ml_vec4_clamp(v, ml_vec4(min, min, min, min), ml_vec4(max, max, max, max)));
}

ML_API t_vec4	ml_vec4_lerp(t_vec4 a, t_vec4 b, float t) {
	return ((t_vec4) {
			.x = ml_lerpf(a.x, b.x, t),
			.y = ml_lerpf(a.y, b.y, t),
			.z = ml_lerpf(a.z, b.z, t),
			.w = ml_lerpf(a.w, b.w, t)
		}
	);
}
ML_API t_vec4	ml_vec4_lerp_zo(t_vec4 a, t_vec4 b, float t) {
	return ((t_vec4) {
			.x = ml_lerpf_zo(a.x, b.x, t),
			.y = ml_lerpf_zo(a.y, b.y, t),
			.z = ml_lerpf_zo(a.z, b.z, t),
			.w = ml_lerpf_zo(a.w, b.w, t)
		}
	);
}

ML_API t_vec4	ml_vec4_move_towards(t_vec4 start, t_vec4 target, float t) {
	t_vec4	result, delta;
	float	val, dist;

	delta = ml_vec4_sub(target, start);
	val = ml_vec4_len_sqr(delta);

	if (val == 0.0f || ((t >= 0) && (val <= t * t))) {
		return (target);
	}
	dist = sqrtf(val);
	result.x = start.x + delta.x / dist * t;
	result.y = start.y + delta.y / dist * t;
	result.z = start.z + delta.z / dist * t;
	result.w = start.w + delta.w / dist * t;
	return (result);
}

ML_API t_vec4	ml_vec4_normalize(t_vec4 v) {
	t_vec4	result;
	float	len, leninv;

	result = ml_vec4(0, 0, 0, 0);
	len = ml_vec4_len(v);
	if (len > 0) {
		leninv = 1.0f / len;
		result.x = v.x * leninv;
		result.y = v.y * leninv;
		result.z = v.z * leninv;
		result.w = v.w * leninv;
	}
	return (result);
}

ML_API float	ml_vec4_dist(t_vec4 a, t_vec4 b) { return (sqrtf((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z) + (a.w - b.w) * (a.w - b.w))); }
ML_API float	ml_vec4_dist_sqr(t_vec4 a, t_vec4 b) { return ((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z) + (a.w - b.w) * (a.w - b.w)); }
ML_API float	ml_vec4_len(t_vec4 a) { return (sqrtf((a.x * a.x) + (a.y * a.y) + (a.z * a.z) + (a.w * a.w))); }
ML_API float	ml_vec4_len_sqr(t_vec4 a) { return ((a.x * a.x) + (a.y * a.y) + (a.z * a.z) + (a.w * a.w)); }

ML_API bool		ml_vec4_eq(t_vec4 a, t_vec4 b) { return (a.x == b.x && a.y == b.y && a.z == b.z && a.w == b.w); }

/* SECTION: rect
 * */

ML_API t_rect	ml_rect(float x, float y, float w, float h) { return ((t_rect) { .x = x, .y = y, .z = w, .w = h } ); }
ML_API t_rect	ml_rect_zero(void) { return (ml_vec4_zero()); }
ML_API t_rect	ml_rect_vec2(t_vec2 pos, t_vec2 siz) { return (ml_rect(pos.x, pos.y, siz.w, siz.h)); }

ML_API bool		ml_rect_aabb(t_rect a, t_rect b) {
	return ((a.x < b.x + b.z && a.x + a.z > b.x) &&
			(a.y < b.y + b.w && a.y + a.w > b.y) 
		);
}

ML_API bool		ml_rect_aabb_vec2(t_rect r, t_vec2 v) {
	return ((r.x < v.x && r.x + r.z > v.x) &&
			(r.y < v.y && r.y + r.w > v.y) 
		);
}

ML_API bool		ml_rect_eq(t_rect a, t_rect b) { return (ml_vec4_eq(a, b)); }

/* SECTION: t_col
 * */

ML_API t_col	ml_colorf(float r, float g, float b, float a) { return (ml_vec4(r, g, b, a)); }
ML_API t_col	ml_colorc(unsigned char r, unsigned char g, unsigned char b, unsigned char a) { return (ml_colorf(r / 255.0f, g / 255.0f, b / 255.0f, a / 255.0f)); }
ML_API t_col	ml_colori(int i) {
	unsigned char	r, g, b, a;

	r = (i >> (8 * 0)) & 0xff;
	g = (i >> (8 * 1)) & 0xff;
	b = (i >> (8 * 2)) & 0xff;
	a = (i >> (8 * 3)) & 0xff;
	return (ml_colorc(r, g, b, a));
}

ML_API int		ml_col2int(t_col col) {
	return ((int) (col.r * 255.0f) << 0 | (int) (col.g * 255.0f) << 8 | (int) (col.b * 255.0f) << 16 | (int) (col.a * 255.0f) << 24);
}

ML_API bool		ml_col_eq(t_col a, t_col b) { return (ml_vec4_eq(a, b)); }

/* SECTION: t_mat2
 * */

ML_API t_mat2	ml_mat2_zero(void) {
	t_mat2	result;

    result.vec[0] = ml_vec2_zero();
    result.vec[1] = ml_vec2_zero();
	return (result);
}

ML_API t_mat2	ml_mat2_identity(void) {
	t_mat2	result;

    result.vec[0] = ml_vec2(1.0, 0.0);
    result.vec[1] = ml_vec2(0.0, 1.0);
    return (result);
}

/*	[a b] + [e f] = [a+e b+f]
 *	[c d]   [g h]   [c+g d+h]
 * */

ML_API t_mat2	ml_mat2_add(t_mat2 a, t_mat2 b) {
	t_mat2	result;

    result.vec[0] = ml_vec2_add(a.vec[0], b.vec[0]);
    result.vec[1] = ml_vec2_add(a.vec[1], b.vec[1]);
	return (result);
}

/*	[a b] - [e f] = [a-e b-f]
 *	[c d]   [g h]   [c-g d-h]
 * */
ML_API t_mat2	ml_mat2_sub(t_mat2 a, t_mat2 b) {
	t_mat2	result;

    result.vec[0] = ml_vec2_sub(a.vec[0], b.vec[0]);
    result.vec[1] = ml_vec2_sub(a.vec[1], b.vec[1]);
	return (result);
}

/*	[a b] * [e f] = [ae+bg af+bh]
 *	[c d]   [g h]   [ce+dg cf+dh]
 * */
ML_API t_mat2	ml_mat2_mul(t_mat2 a, t_mat2 b) {
	t_mat2	result;

    result.m0 = a.m0 * b.m0 + a.m1 * b.m2;
    result.m1 = a.m0 * b.m1 + a.m1 * b.m3;
    
    result.m2 = a.m2 * b.m0 + a.m3 * b.m2;
    result.m3 = a.m2 * b.m1 + a.m3 * b.m3;
	return (result);
}

/*	v * [a b] = [av bv]
 *		[c d] = [cv dv]
 * */
ML_API t_mat2	ml_mat2_mulv(t_mat2 m, float v) {
	t_mat2	result;

	result.vec[0] = ml_vec2_mulv(m.vec[0], v);
	result.vec[1] = ml_vec2_mulv(m.vec[1], v);
	return (result);
}

ML_API bool		ml_mat2_eq(t_mat2 a, t_mat2 b) {
	return (ml_vec2_eq(a.vec[0], b.vec[0]) &&
			ml_vec2_eq(a.vec[1], b.vec[1])
		);
}

/* SECTION: t_mat3
 * */

ML_API t_mat3	ml_mat3_zero(void) {
	t_mat3	result;

    result.vec[0] = ml_vec3_zero();
    result.vec[1] = ml_vec3_zero();
    result.vec[2] = ml_vec3_zero();
	return (result);
}

ML_API t_mat3	ml_mat3_identity(void) {
	t_mat3	result;

    result.vec[0] = ml_vec3(1.0, 0.0, 0.0);
    result.vec[1] = ml_vec3(0.0, 1.0, 0.0);
    result.vec[2] = ml_vec3(0.0, 0.0, 1.0);
    return (result);
}

/*	[a b] + [e f] = [a+e b+f]
 *	[c d]   [g h]   [c+g d+h]
 * */

ML_API t_mat3	ml_mat3_add(t_mat3 a, t_mat3 b) {
	t_mat3	result;

    result.vec[0] = ml_vec3_add(a.vec[0], b.vec[0]);
    result.vec[1] = ml_vec3_add(a.vec[1], b.vec[1]);
    result.vec[2] = ml_vec3_add(a.vec[2], b.vec[2]);
	return (result);
}

/*	[a b] - [e f] = [a-e b-f]
 *	[c d]   [g h]   [c-g d-h]
 * */
ML_API t_mat3	ml_mat3_sub(t_mat3 a, t_mat3 b) {
	t_mat3	result;

    result.vec[0] = ml_vec3_sub(a.vec[0], b.vec[0]);
    result.vec[1] = ml_vec3_sub(a.vec[1], b.vec[1]);
    result.vec[2] = ml_vec3_sub(a.vec[2], b.vec[2]);
	return (result);
}

/*	[a b] * [e f] = [ae+bg af+bh]
 *	[c d]   [g h]   [ce+dg cf+dh]
 * */
ML_API t_mat3	ml_mat3_mul(t_mat3 a, t_mat3 b) {
	t_mat3	result;

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

/*	v * [a b] = [av bv]
 *		[c d] = [cv dv]
 * */
ML_API t_mat3	ml_mat3_mulv(t_mat3 m, float v) {
	t_mat3	result;

	result.vec[0] = ml_vec3_mulv(m.vec[0], v);
	result.vec[1] = ml_vec3_mulv(m.vec[1], v);
	result.vec[2] = ml_vec3_mulv(m.vec[2], v);
	return (result);
}

ML_API bool		ml_mat3_eq(t_mat3 a, t_mat3 b) {
	return (ml_vec3_eq(a.vec[0], b.vec[0]) &&
			ml_vec3_eq(a.vec[1], b.vec[1]) &&
			ml_vec3_eq(a.vec[2], b.vec[2])
		);
}

/* SECTION: t_mat4
 * */

ML_API t_mat4	ml_mat4_zero(void) {
	t_mat4	result;

    result.vec[0] = ml_vec4_zero();
    result.vec[1] = ml_vec4_zero();
    result.vec[2] = ml_vec4_zero();
    result.vec[3] = ml_vec4_zero();
	return (result);
}

ML_API t_mat4	ml_mat4_identity(void) {
	t_mat4	result;

    result.vec[0] = ml_vec4(1.0, 0.0, 0.0, 0.0);
    result.vec[1] = ml_vec4(0.0, 1.0, 0.0, 0.0);
    result.vec[2] = ml_vec4(0.0, 0.0, 1.0, 0.0);
    result.vec[3] = ml_vec4(0.0, 0.0, 0.0, 1.0);
    return (result);
}

/*	[a b] + [e f] = [a+e b+f]
 *	[c d]   [g h]   [c+g d+h]
 * */

ML_API t_mat4	ml_mat4_add(t_mat4 a, t_mat4 b) {
	t_mat4	result;

	result.vec[0] = ml_vec4_add(a.vec[0], b.vec[0]);
	result.vec[1] = ml_vec4_add(a.vec[1], b.vec[1]);
	result.vec[2] = ml_vec4_add(a.vec[2], b.vec[2]);
	result.vec[3] = ml_vec4_add(a.vec[3], b.vec[3]);
    return (result);
}

/*	[a b] - [e f] = [a-e b-f]
 *	[c d]   [g h]   [c-g d-h]
 * */
ML_API t_mat4	ml_mat4_sub(t_mat4 a, t_mat4 b) {
	t_mat4	result;

	result.vec[0] = ml_vec4_sub(a.vec[0], b.vec[0]);
	result.vec[1] = ml_vec4_sub(a.vec[1], b.vec[1]);
	result.vec[2] = ml_vec4_sub(a.vec[2], b.vec[2]);
	result.vec[3] = ml_vec4_sub(a.vec[3], b.vec[3]);
	return (result);
}

/*	[a b] * [e f] = [ae+bg af+bh]
 *	[c d]   [g h]   [ce+dg cf+dh]
 * */
ML_API t_mat4	ml_mat4_mul(t_mat4 a, t_mat4 b) {
	t_mat4	result;

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

/*	v * [a b] = [av bv]
 *		[c d] = [cv dv]
 * */
ML_API t_mat4	ml_mat4_mulv(t_mat4 m, float v) {
	t_mat4	result;

	result.vec[0] = ml_vec4_mulv(m.vec[0], v);
	result.vec[1] = ml_vec4_mulv(m.vec[1], v);
	result.vec[2] = ml_vec4_mulv(m.vec[2], v);
	result.vec[3] = ml_vec4_mulv(m.vec[3], v);
	return (result);
}

ML_API t_mat4	ml_mat4_ortho(float left, float right, float top, float down, float near, float far) {
	t_mat4	result;

	result = ml_mat4_zero();
    result.ptr[0][0] = 2.0f / (right - left);
	
    result.ptr[1][1] = 2.0f / (top - down);
	
    result.ptr[2][2] = 2.0f / (far - near);
	
    result.ptr[3][0] = -(left + right) / (right - left);
	result.ptr[3][1] = -(top + down) / (top - down);
	result.ptr[3][2] = -(far + near) / (far - near);
	result.ptr[3][3] = 1.0f;
	return (result);
}

ML_API t_mat4	ml_mat4_persp(float fov, float aspect, float near, float far) {
	t_mat4	result;
	double	top, bottom, left, right;
	float	rl, tb, fn;

	top = near * tan(fov * 0.5);
	bottom = -top;
	right = top * aspect;
	left = -right;

	rl = (float) (right - left);
	tb = (float) (top - bottom);
	fn = (float) (far - near);

	result = ml_mat4_zero();
	result.ptr[0][0] = (near * 2.0f) / rl; 
	
    result.ptr[1][1] = (near * 2.0f) / tb;
	
    result.ptr[2][0] = (right + left) / rl;
	result.ptr[2][1] = (top + bottom) / tb;
	result.ptr[2][2] = -(far + near) / fn;
	result.ptr[2][3] = -1.0f;
	
    result.ptr[3][2] = -(far * near * 2.0f) / fn;
	return (result);
}

ML_API t_mat4	ml_mat4_lookat(t_vec3 eye, t_vec3 center, t_vec3 up) {
	t_mat4	result;
	t_vec3	f, u, s;

	f = ml_vec3_sub(center, eye);
	f = ml_vec3_normalize(f);
	s = ml_vec3_cross(up, f);
	s = ml_vec3_normalize(s);
	u = ml_vec3_cross(f, s);

	result = ml_mat4_zero();
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
	
    result.ptr[3][0] = -ml_vec3_dot(s, eye);
	result.ptr[3][1] = -ml_vec3_dot(u, eye);
	result.ptr[3][2] = -ml_vec3_dot(f, eye);
	result.ptr[3][3] = 1.0;
	return (result);
}

ML_API bool		ml_mat4_eq(t_mat4 a, t_mat4 b) {
	return (ml_vec4_eq(a.vec[0], b.vec[0]) &&
			ml_vec4_eq(a.vec[1], b.vec[1]) &&
			ml_vec4_eq(a.vec[2], b.vec[2]) &&
			ml_vec4_eq(a.vec[3], b.vec[3])
		);
}

# endif
# if defined (__cplusplus)

}

# endif
#endif 
