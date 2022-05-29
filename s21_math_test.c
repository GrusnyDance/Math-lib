#include "s21_math.h"

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
  // POW


  srunner_run_all(sr, CK_ENV);
  nf = srunner_ntests_failed(sr);
  srunner_free(sr);

  return nf == 0 ? 0 : 1;
}