#include <stdio.h>

#define MATHLIB_IMPLEMENTATION
#include "../mathlib.h"

int main() {
	printf("\033[1mSample: floating-point\033[0m\n");
	{
		float	f1;
		float	f2;
		
		f1 = 3.7f;
		f2 = 1.2f;
	
		{
			printf("- ml_min(%.2f, %.2f) = %.2f\n", f1, f2, ml_min(f1, f2));
			printf("- ml_abs(%.2f) = %.2f\n", -f1, ml_abs(-f1));
			printf("- ml_round(%.2f) = %d\n", f1, ml_round(f1));
			printf("- ml_floor(%.2f) = %d\n", f1, ml_floor(f1));
			printf("- ml_ceil(%.2f) = %f\n", f1, ml_ceil(f1));
		}

		{
			float	min_val, max_val;
			float	clamped;
		   
			min_val = 2.0f;
			max_val = 5.0f;
			clamped = ml_clampf(f1, min_val, max_val);
			printf("- ml_clampf(%.2f, %.2f, %.2f) = %.2f\n", f1, min_val, max_val, clamped);
		}

		{
			float	zero_one;
			
			zero_one = ml_clampf_zo(f1 / 5.0f);
			printf("- ml_clampf_zo(%.2f) = %.2f\n", f1/5.0f, zero_one);
		}
		{
			float	lerp;
			
			lerp = ml_lerpf(f1, f2, 0.3f);
			printf("- ml_lerpf(%.2f, %.2f, 0.3) = %.2f\n", f1, f2, lerp);
		}
		{
			float	lerp_clamped;
			
			lerp_clamped = ml_lerpf_zo(f1, f2, 1.5f);
			printf("- ml_lerpf_zo(%.2f, %.2f, 1.5) = %.2f\n", f1, f2, lerp_clamped);
		}
		{
			printf("- Before ml_swapf: f1 = %.2f, f2 = %.2f\n", f1, f2);
			ml_swapf(&f1, &f2);
			printf("- After ml_swapf: f1 = %.2f, f2 = %.2f\n", f1, f2);
		}
	}
	printf("\n\033[1mSample: integer\033[0m\n");
	{
		int i1;
		int	i2;

		i1 = 7;
		i2 = 2;
		
		{
			int	min_int;
			int	max_int;
			int	clamped_int;
			
			min_int = 3;
			max_int = 6;
			clamped_int = ml_clampi(i1, min_int, max_int);
			printf("- ml_clampi(%d, %d, %d) = %d\n", i1, min_int, max_int, clamped_int);
		}
		{
			int	lerp_int;

			lerp_int = ml_lerpi(i1, i2, 0.4f);
			printf("- ml_lerpi(%d, %d, 0.4) = %d\n", i1, i2, lerp_int);
		}
		{
			int	lerp_int_clamped;

			lerp_int_clamped = ml_lerpi_zo(i1, i2, 1.8f);
			printf("- ml_lerpi_zo(%d, %d, 1.8) = %d\n", i1, i2, lerp_int_clamped);
		}
		{
			printf("- Before ml_swapi: i1 = %d, i2 = %d\n", i1, i2);
			ml_swapi(&i1, &i2);
			printf("- After ml_swapi: i1 = %d, i2 = %d\n", i1, i2);
		}
	} 
	printf("\n\033[1mSample: RNG\033[0m\n");
	{
		for (size_t i = 0; i < 8; i++) {
			printf("- ml_randi [ -16, 16 ]: %d\n", ml_randi(-16, 16));
		}
		for (size_t i = 0; i < 8; i++) {
			printf("- ml_randf [ -16.0f, 16.0f ]: %f\n", ml_randf(-16, 16));
		}
	}
    return (0);
}
