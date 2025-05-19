#define MATHLIB_IMPLEMENTATION
#include "../mathlib.h"

#include <stdio.h>

static const char	*__vec3_tostr(t_vec3);

int main(void) {
	t_vec3	v0;
	t_vec3	v1;
	t_vec3	v2;

	printf("\n\033[1mSample: vectors\033[0m\n");
	{
		v0 = ml_vec3(8.0f, 16.0f, 32.0f);
		printf("- v0: %s\n", __vec3_tostr(v0));
	}
	printf("\n\033[1mSample: mathematical operations\033[0m\n");
	{
			v1 = ml_vec3_cpy(v0);
			printf("- v1: %s\n", __vec3_tostr(v1));
			v1 = ml_vec3_mulv(v1, 2);
			printf("- v1 * 2: %s\n", __vec3_tostr(v1));
			v1 = ml_vec3_addv(v1, 4);
			printf("- v1 + 2: %s\n", __vec3_tostr(v1));
			v1 = ml_vec3_divv(v1, 3);
			printf("- v1 / 3: %s\n", __vec3_tostr(v1));
			v1 = ml_vec3_subv(v1, 1);
			printf("- v1 - 1: %s\n", __vec3_tostr(v1));
	}
	printf("\n\033[1mSample: compare\033[0m\n");
	{
		v2 = ml_vec3_cpy(v0);
		printf("- v2: %s\n", __vec3_tostr(v2));
		printf("- v2 == v0: %s\n", ml_vec3_eq(v2, v0) ? "true" : "false");
		printf("- v2 == v1: %s\n", ml_vec3_eq(v2, v1) ? "true" : "false");
	}
}

static const char	*__vec3_tostr(t_vec3 v) {
	static char	_str[48];

	for (size_t i = 0; i < 48; i++) {
		_str[i] = 0;
	}
	snprintf(_str, 48, "x.%f, y.%f, z.%f", v.x, v.y, v.z);
	return (_str);
}
