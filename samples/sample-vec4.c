#define MATHLIB_IMPLEMENTATION
#include "../mathlib.h"

#include <stdio.h>

static const char	*__vec4_tostr(t_vec4);

int main(void) {
	t_vec4	v0;
	t_vec4	v1;
	t_vec4	v2;

	printf("\n\033[1mSample: vectors\033[0m\n");
	{
		v0 = ml_vec4(8.0f, 16.0f, 32.0f, 64.0f);
		printf("- v0: %s\n", __vec4_tostr(v0));
	}
	printf("\n\033[1mSample: mathematical operations\033[0m\n");
	{
		v1 = ml_vec4_cpy(v0);
		printf("- v1: %s\n", __vec4_tostr(v1));
		v1 = ml_vec4_mulv(v1, 2);
		printf("- v1 * 2: %s\n", __vec4_tostr(v1));
		v1 = ml_vec4_addv(v1, 4);
		printf("- v1 + 2: %s\n", __vec4_tostr(v1));
		v1 = ml_vec4_divv(v1, 3);
		printf("- v1 / 3: %s\n", __vec4_tostr(v1));
		v1 = ml_vec4_subv(v1, 1);
		printf("- v1 - 1: %s\n", __vec4_tostr(v1));
	}
	printf("\n\033[1mSample: other operations\033[0m\n");
	{
		printf("- v0: %s\n", __vec4_tostr(v0));
		v1 = ml_vec4_mulv(v0, 2);
		printf("- v1: %s\n", __vec4_tostr(v1));
		printf("- ml_vec4_lerp: %s\n", __vec4_tostr(ml_vec4_lerp(v0, v1, 0.5f)));
		printf("- ml_vec4_dist: %f\n", ml_vec4_dist(v0, v1));
		printf("- ml_vec4_len: %f\n", ml_vec4_len(v1));
	}
	printf("\n\033[1mSample: compare\033[0m\n");
	{
		v2 = ml_vec4_cpy(v0);
		printf("- v2: %s\n", __vec4_tostr(v2));
		printf("- v2 == v0: %s\n", ml_vec4_eq(v2, v0) ? "true" : "false");
		printf("- v2 == v1: %s\n", ml_vec4_eq(v2, v1) ? "true" : "false");
	}
}

static const char	*__vec4_tostr(t_vec4 v) {
	static char	_str[64];

	for (size_t i = 0; i < 64; i++) {
		_str[i] = 0;
	}
	snprintf(_str, 64, "x.%f, y.%f, z.%f, w.%f", v.x, v.y, v.z, v.w);
	return (_str);
}
