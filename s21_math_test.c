#include "s21_math.h"
#include <stdlib.h>
#include <check.h>
#include <math.h>
#define DIFF pow(10, -7)

// TESTS DONE FOR CEIL
START_TEST(ceill_1) {
  long double num = -148.803949;
  if (isnan((double)(s21_ceil(num)))) {
    ck_assert_int_eq((isnan(ceill(num)) != 0), 1);
  } else {
    long double condition = (s21_ceil(num) - ceill(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(ceill_2) {
  long double num = -947.970166;
  if (isnan((double)(s21_ceil(num)))) {
    ck_assert_int_eq((isnan(ceill(num)) != 0), 1);
  } else {
    long double condition = (s21_ceil(num) - ceill(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(ceill_3) {
  long double num = -534.577388;
  if (isnan((double)(s21_ceil(num)))) {
    ck_assert_int_eq((isnan(ceill(num)) != 0), 1);
  } else {
    long double condition = (s21_ceil(num) - ceill(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(ceill_4) {
  long double num = -642.161791;
  if (isnan((double)(s21_ceil(num)))) {
    ck_assert_int_eq((isnan(ceill(num)) != 0), 1);
  } else {
    long double condition = (s21_ceil(num) - ceill(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(ceill_5) {
  long double num = -813.222114;
  if (isnan((double)(s21_ceil(num)))) {
    ck_assert_int_eq((isnan(ceill(num)) != 0), 1);
  } else {
    long double condition = (s21_ceil(num) - ceill(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(ceill_6) {
  long double num = 175.931519;
  if (isnan((double)(s21_ceil(num)))) {
    ck_assert_int_eq((isnan(ceill(num)) != 0), 1);
  } else {
    long double condition = (s21_ceil(num) - ceill(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(ceill_7) {
  long double num = 881.031659;
  if (isnan((double)(s21_ceil(num)))) {
    ck_assert_int_eq((isnan(ceill(num)) != 0), 1);
  } else {
    long double condition = (s21_ceil(num) - ceill(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(ceill_8) {
  long double num = -500.900862;
  if (isnan((double)(s21_ceil(num)))) {
    ck_assert_int_eq((isnan(ceill(num)) != 0), 1);
  } else {
    long double condition = (s21_ceil(num) - ceill(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(ceill_9) {
  long double num = -640.780487;
  if (isnan((double)(s21_ceil(num)))) {
    ck_assert_int_eq((isnan(ceill(num)) != 0), 1);
  } else {
    long double condition = (s21_ceil(num) - ceill(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(ceill_10) {
  long double num = 402.356159;
  if (isnan((double)(s21_ceil(num)))) {
    ck_assert_int_eq((isnan(ceill(num)) != 0), 1);
  } else {
    long double condition = (s21_ceil(num) - ceill(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

// TESTS DONE FOR FLOOR
START_TEST(floorl_1)
{
long double num = -145.125555;
if (isnan((double)(s21_floor(num)))) {
    ck_assert_int_eq((isnan(floorl(num)) != 0), 1);
} else {
    long double condition = (s21_floor(num) - floorl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(floorl_2)
{
long double num = 874.790261;
if (isnan((double)(s21_floor(num)))) {
    ck_assert_int_eq((isnan(floorl(num)) != 0), 1);
} else {
    long double condition = (s21_floor(num) - floorl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(floorl_3)
{
long double num = 599.924044;
if (isnan((double)(s21_floor(num)))) {
    ck_assert_int_eq((isnan(floorl(num)) != 0), 1);
} else {
    long double condition = (s21_floor(num) - floorl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(floorl_4)
{
long double num = 923.400213;
if (isnan((double)(s21_floor(num)))) {
    ck_assert_int_eq((isnan(floorl(num)) != 0), 1);
} else {
    long double condition = (s21_floor(num) - floorl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(floorl_5)
{
long double num = -412.620530;
if (isnan((double)(s21_floor(num)))) {
    ck_assert_int_eq((isnan(floorl(num)) != 0), 1);
} else {
    long double condition = (s21_floor(num) - floorl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(floorl_6)
{
long double num = -913.250907;
if (isnan((double)(s21_floor(num)))) {
    ck_assert_int_eq((isnan(floorl(num)) != 0), 1);
} else {
    long double condition = (s21_floor(num) - floorl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(floorl_7)
{
long double num = 992.001280;
if (isnan((double)(s21_floor(num)))) {
    ck_assert_int_eq((isnan(floorl(num)) != 0), 1);
} else {
    long double condition = (s21_floor(num) - floorl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(floorl_8)
{
long double num = 565.516067;
if (isnan((double)(s21_floor(num)))) {
    ck_assert_int_eq((isnan(floorl(num)) != 0), 1);
} else {
    long double condition = (s21_floor(num) - floorl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(floorl_9)
{
long double num = 628.530256;
if (isnan((double)(s21_floor(num)))) {
    ck_assert_int_eq((isnan(floorl(num)) != 0), 1);
} else {
    long double condition = (s21_floor(num) - floorl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(floorl_10)
{
long double num = -291.982749;
if (isnan((double)(s21_floor(num)))) {
    ck_assert_int_eq((isnan(floorl(num)) != 0), 1);
} else {
    long double condition = (s21_floor(num) - floorl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

// TESTS DONE FOR ABS
START_TEST(abs_1) {
  int num = -3;
  if (isnan((s21_abs(num)))) {
    ck_assert_int_eq((isnan(abs(num)) != 0), 1);
  } else {
    int condition = (s21_abs(num) - abs(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(abs_2) {
  int num = 12;
  if (isnan((s21_abs(num)))) {
    ck_assert_int_eq((isnan(abs(num)) != 0), 1);
  } else {
    int condition = (s21_abs(num) - abs(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(abs_3) {
  int num = 11;
  if (isnan((s21_abs(num)))) {
    ck_assert_int_eq((isnan(abs(num)) != 0), 1);
  } else {
    int condition = (s21_abs(num) - abs(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(abs_4) {
  int num = 25;
  if (isnan((s21_abs(num)))) {
    ck_assert_int_eq((isnan(abs(num)) != 0), 1);
  } else {
    int condition = (s21_abs(num) - abs(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(abs_5) {
  int num = 20;
  if (isnan((s21_abs(num)))) {
    ck_assert_int_eq((isnan(abs(num)) != 0), 1);
  } else {
    int condition = (s21_abs(num) - abs(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(abs_6) {
  int num = -7;
  if (isnan((s21_abs(num)))) {
    ck_assert_int_eq((isnan(abs(num)) != 0), 1);
  } else {
    int condition = (s21_abs(num) - abs(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(abs_7) {
  int num = 97;
  if (isnan((s21_abs(num)))) {
    ck_assert_int_eq((isnan(abs(num)) != 0), 1);
  } else {
    int condition = (s21_abs(num) - abs(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(abs_8) {
  int num = 87;
  if (isnan((s21_abs(num)))) {
    ck_assert_int_eq((isnan(abs(num)) != 0), 1);
  } else {
    int condition = (s21_abs(num) - abs(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(abs_9) {
  int num = -82;
  if (isnan((s21_abs(num)))) {
    ck_assert_int_eq((isnan(abs(num)) != 0), 1);
  } else {
    int condition = (s21_abs(num) - abs(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(abs_10) {
  int num = -24;
  if (isnan((s21_abs(num)))) {
    ck_assert_int_eq((isnan(abs(num)) != 0), 1);
  } else {
    int condition = (s21_abs(num) - abs(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sin_1)
{
long double num = -36864579.672396;
if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
} else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(sin_2)
{
long double num = 417009446.032815;
if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
} else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(sin_3)
{
long double num = 677759473.527670;
if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
} else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(sin_4)
{
long double num = -896528420.456000;
if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
} else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(sin_5)
{
long double num = 46837396.010215;
if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
} else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(sin_6)
{
long double num = -803885256.314597;
if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
} else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(sin_7)
{
long double num = 1100497120.572486;
if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
} else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(sin_8)
{
long double num = 55105461.764664;
if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
} else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(sin_9)
{
long double num = -1842504121.289823;
if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
} else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(sin_10)
{
long double num = 1033233481.940456;
if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
} else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(cos_1)
{
long double num = -30071291.155215;
if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
} else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(cos_2)
{
long double num = -1408190445.698886;
if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
} else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(cos_3)
{
long double num = 543179138.816511;
if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
} else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(cos_4)
{
long double num = 1211786089.097981;
if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
} else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(cos_5)
{
long double num = -1511200530.226901;
if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
} else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(cos_6)
{
long double num = 1252688476.467826;
if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
} else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(cos_7)
{
long double num = 1935223994.746443;
if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
} else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(cos_8)
{
long double num = 1309679703.465514;
if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
} else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(cos_9)
{
long double num = -213223855.110455;
if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
} else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

START_TEST(cos_10)
{
long double num = 346667158.578833;
if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
} else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
}
}
END_TEST

int main(void) {
  Suite *s1 = suite_create("Core");
  TCase *tc1_1 = tcase_create("Core");
  SRunner *sr = srunner_create(s1);
  int nf;

  suite_add_tcase(s1, tc1_1);
  // CEIL
  tcase_add_test(tc1_1, ceill_1);
  tcase_add_test(tc1_1, ceill_2);
  tcase_add_test(tc1_1, ceill_3);
  tcase_add_test(tc1_1, ceill_4);
  tcase_add_test(tc1_1, ceill_5);
  tcase_add_test(tc1_1, ceill_6);
  tcase_add_test(tc1_1, ceill_7);
  tcase_add_test(tc1_1, ceill_8);
  tcase_add_test(tc1_1, ceill_9);
  tcase_add_test(tc1_1, ceill_10);
  // FLOOR
  tcase_add_test(tc1_1, floorl_1);
  tcase_add_test(tc1_1, floorl_2);
  tcase_add_test(tc1_1, floorl_3);
  tcase_add_test(tc1_1, floorl_4);
  tcase_add_test(tc1_1, floorl_5);
  tcase_add_test(tc1_1, floorl_6);
  tcase_add_test(tc1_1, floorl_7);
  tcase_add_test(tc1_1, floorl_8);
  tcase_add_test(tc1_1, floorl_9);
  tcase_add_test(tc1_1, floorl_10);
  // ABS
  tcase_add_test(tc1_1, abs_1);
  tcase_add_test(tc1_1, abs_2);
  tcase_add_test(tc1_1, abs_3);
  tcase_add_test(tc1_1, abs_4);
  tcase_add_test(tc1_1, abs_5);
  tcase_add_test(tc1_1, abs_6);
  tcase_add_test(tc1_1, abs_7);
  tcase_add_test(tc1_1, abs_8);
  tcase_add_test(tc1_1, abs_9);
  tcase_add_test(tc1_1, abs_10);
  // SIN
  tcase_add_test(tc1_1, sin_1);
  tcase_add_test(tc1_1, sin_2);
  tcase_add_test(tc1_1, sin_3);
  tcase_add_test(tc1_1, sin_4);
  tcase_add_test(tc1_1, sin_5);
  tcase_add_test(tc1_1, sin_6);
  tcase_add_test(tc1_1, sin_7);
  tcase_add_test(tc1_1, sin_8);
  tcase_add_test(tc1_1, sin_9);
  tcase_add_test(tc1_1, sin_10);
  // COS
  tcase_add_test(tc1_1, cos_1);
  tcase_add_test(tc1_1, cos_2);
  tcase_add_test(tc1_1, cos_3);
  tcase_add_test(tc1_1, cos_4);
  tcase_add_test(tc1_1, cos_5);
  tcase_add_test(tc1_1, cos_6);
  tcase_add_test(tc1_1, cos_7);
  tcase_add_test(tc1_1, cos_8);
  tcase_add_test(tc1_1, cos_9);
  tcase_add_test(tc1_1, cos_10);


  srunner_run_all(sr, CK_ENV);
  nf = srunner_ntests_failed(sr);
  srunner_free(sr);

  return nf == 0 ? 0 : 1;
}
