#include <stdio.h>

#define MATHLIB_IMPLEMENTATION
#include "../mathlib.h"

static void	__mat4_tostr(t_mat4);

int main(void) {
	t_mat4	_mat_zero;
	t_mat4	_mat_identity;
	t_mat4	_mat0;
	t_mat4	_mat1;

	_mat_zero = ml_mat4_zero();
	_mat_identity = ml_mat4_identity();
	_mat0 = (t_mat4) {
		0.0f,  1.0f,  2.0f,  3.0f,
		4.0f,  5.0f,  6.0f,  7.0f,
		8.0f,  9.0f,  10.0f, 11.0f,
		12.0f, 13.0f, 14.0f, 15.0f
	};
	_mat1 = (t_mat4) {
		0.0f, 1.0f, 2.0f, 0.0f,
		1.0f, 0.0f, 0.0f, 2.0f,
		2.0f, 0.0f, 1.0f, 1.0f,
		1.0f, 2.0f, 0.0f, 2.0f
	};
	printf("\n\033[1mSample: matrices\033[0m\n");
	{
		printf("- _mat_zero:\n"); __mat4_tostr(_mat_zero);
		printf("- _mat_identity:\n"); __mat4_tostr(_mat_identity);
		printf("- _mat0:\n"); __mat4_tostr(_mat0);
		printf("- _mat1:\n"); __mat4_tostr(_mat1);
	}
	printf("\n\033[1mSample: mathematical operations\033[0m\n");
	{
		printf("- ml_mat4_add:\n"); __mat4_tostr(ml_mat4_add(_mat0, _mat1));
		printf("- ml_mat4_sub:\n"); __mat4_tostr(ml_mat4_sub(_mat0, _mat1));
		printf("- ml_mat4_mul:\n"); __mat4_tostr(ml_mat4_mul(_mat0, _mat1));
		printf("- ml_mat4_mulv:\n"); __mat4_tostr(ml_mat4_mulv(_mat0, 2.0f));
	}
	printf("\n\033[1mSample: projection\033[0m\n");
	{
		float	_width;
		float	_height;
		float	_fov;
		float	_near;
		float	_far;

		_width = 800.0f;
		_height = 600.0f;
		_fov = 60.0f;
		_near = 1.0f;
		_far = 1000.0f;
		printf("- ml_mat4_ortho:\n"); __mat4_tostr(ml_mat4_ortho(0.0f, _width, 0.0f, _height, _near, _far));
		printf("- ml_mat4_persp:\n"); __mat4_tostr(ml_mat4_persp(_fov, _width / _height, _near, _far));
	}
}

static void	__mat4_tostr(t_mat4 m) {
	for (size_t i = 0; i < 4; i++) {
        printf("[ ");
        for (size_t j = 0; j < 4; j++) {
            printf("%2.4f ", m.ptr[i][j]);
        }
        printf("]\n");
    }
}
