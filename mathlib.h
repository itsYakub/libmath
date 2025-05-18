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

union u_vec2 {
	float		ptr[2];
	struct {
		float	x;
		float	y;
	};
};

typedef union u_vec2	t_vec2;

ML_API t_vec2	ml_vec2(float, float);
ML_API t_vec2	ml_vec2_add(t_vec2, t_vec2);
ML_API t_vec2	ml_vec2_addv(t_vec2, float);
ML_API t_vec2	ml_vec2_sub(t_vec2, t_vec2);
ML_API t_vec2	ml_vec2_subv(t_vec2, float);
ML_API t_vec2	ml_vec2_mul(t_vec2, t_vec2);
ML_API t_vec2	ml_vec2_mulv(t_vec2, float);
ML_API t_vec2	ml_vec2_div(t_vec2, t_vec2);
ML_API t_vec2	ml_vec2_divv(t_vec2, float);

ML_API bool		ml_vec2_eq(t_vec2, t_vec2);

# if defined (MATHLIB_IMPLEMENTATION)

ML_API t_vec2	ml_vec2(float x, float y) { return ((t_vec2) { x, y } ); }
ML_API t_vec2	ml_vec2_add(t_vec2 a, t_vec2 b) { return ((t_vec2) { a.x + b.x, a.y + b.y } ); }
ML_API t_vec2	ml_vec2_addv(t_vec2 v, float f) { return ((t_vec2) { v.x + f, v.y + f } ); }
ML_API t_vec2	ml_vec2_sub(t_vec2 a, t_vec2 b) { return ((t_vec2) { a.x - b.x, a.y - b.y } ); }
ML_API t_vec2	ml_vec2_subv(t_vec2 v, float f) { return ((t_vec2) { v.x - f, v.y - f } ); }
ML_API t_vec2	ml_vec2_mul(t_vec2 a, t_vec2 b) { return ((t_vec2) { a.x * b.x, a.y * b.y } ); }
ML_API t_vec2	ml_vec2_mulv(t_vec2 v, float f) { return ((t_vec2) { v.x * f, v.y * f } ); }
ML_API t_vec2	ml_vec2_div(t_vec2 a, t_vec2 b) { return ((t_vec2) { a.x / b.x, a.y / b.y } ); }
ML_API t_vec2	ml_vec2_divv(t_vec2 v, float f) { return ((t_vec2) { v.x / f, v.y / f } ); }

ML_API bool		ml_vec2_eq(t_vec2 a, t_vec2 b) { return (a.x == b.x && a.y == b.y); }

# endif
#endif 
