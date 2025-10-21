#include <cmath>
#include <gtest/gtest.h>

#define LIBMATH_IMPLEMENTATION
#include "./../libmath.h"

TEST(libmath, lm_sin) { for (size_t i = 0; i < 90; i++) { EXPECT_NEAR(lm_sin(lm_deg2rad(i)), sin(lm_deg2rad(i)), 16); } }
TEST(libmath, lm_cos) { for (size_t i = 0; i < 90; i++) { EXPECT_NEAR(lm_cos(lm_deg2rad(i)), cos(lm_deg2rad(i)), 16); } }
TEST(libmath, lm_tan) { for (size_t i = 0; i < 90; i++) { EXPECT_NEAR(lm_tan(lm_deg2rad(i)), tan(lm_deg2rad(i)), 16); } }

TEST(libmath, lm_asin) { for (double d = 0.0; d < 1.0; d += 0.01) { EXPECT_NEAR(lm_asin(d), asin(d), 16); } }
TEST(libmath, lm_acos) { for (double d = 0.0; d < 1.0; d += 0.01) { EXPECT_NEAR(lm_acos(d), acos(d), 16); } }
TEST(libmath, lm_atan) { for (double d = 0.0; d < 1.0; d += 0.01) { EXPECT_NEAR(lm_atan(d), atan(d), 16); } }
