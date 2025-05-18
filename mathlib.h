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

# if defined (MATHLIB_IMPLEMENTATION)

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

# endif
#endif 
