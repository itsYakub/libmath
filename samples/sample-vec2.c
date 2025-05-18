#define MATHLIB_IMPLEMENTATION
#include "../mathlib.h"

#include <stdio.h>

static const char	*__vec2_tostr(t_vec2);

int main(void) {
	t_vec2	v0;
	t_vec2	v1;
	t_vec2	v2;

	puts("---");

	v0 = ml_vec2(8.0f, 16.0f);
	printf("v0: %s\n", __vec2_tostr(v0));

	puts("---");

	v1 = ml_vec2_cpy(v0);
	printf("v1: %s\n", __vec2_tostr(v1));
	v1 = ml_vec2_mulv(v1, 2);
	printf("v1 * 2: %s\n", __vec2_tostr(v1));
	v1 = ml_vec2_addv(v1, 4);
	printf("v1 + 2: %s\n", __vec2_tostr(v1));
	v1 = ml_vec2_divv(v1, 3);
	printf("v1 / 3: %s\n", __vec2_tostr(v1));
	v1 = ml_vec2_subv(v1, 1);
	printf("v1 - 1: %s\n", __vec2_tostr(v1));

	puts("---");

	v2 = ml_vec2_cpy(v0);
	printf("v2: %s\n", __vec2_tostr(v2));
	printf("v2 == v0: %s\n", ml_vec2_eq(v2, v0) ? "true" : "false");
	printf("v2 == v1: %s\n", ml_vec2_eq(v2, v1) ? "true" : "false");

	puts("---");
}

static const char	*__vec2_tostr(t_vec2 v) {
	static char	_str[32];

	for (size_t i = 0; i < 32; i++) {
		_str[i] = 0;
	}
	snprintf(_str, 32, "x.%f, y.%f", v.x, v.y);
	return (_str);
}
