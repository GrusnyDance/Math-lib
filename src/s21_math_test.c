#include <check.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include "s21_math.h"

START_TEST(s21_abs_func) {
    ck_assert_int_eq(s21_abs(-10), abs(-10));
    ck_assert_int_eq(s21_abs(-123), abs(-123));
    for (int i = -1000000; i < 10000; i += 10) {
      ck_assert_int_eq(s21_abs(i), abs(i));
    }
}
END_TEST

START_TEST(s21_acos_func) {
  for (double i = -10.0; i < 10.0; i += 1.0) {
    ck_assert_uint_eq(s21_acos(i), acos(i));
  }
  for (double i = -1; i < 1; i += 0.01) {
    ck_assert_uint_eq(s21_acos(i), acos(i));
  }
}
END_TEST

START_TEST(s21_asin_func) {
  for (double i = 0.0; i < 2.0; i += 1.0) {
    ck_assert_uint_eq(s21_asin(i), asin(i));
  }
  for (double i = -1.0; i < 5.0; i += 0.01) {
    ck_assert_uint_eq(s21_asin(i), asin(i));
  }
}
END_TEST

START_TEST(s21_atan_func) {
  double value0 = 0.123123;
  ck_assert_uint_eq(s21_atan(value0), atan(value0));
  double value1 = 1.0;
  ck_assert_uint_eq(s21_atan(value1), atan(value1));
  double value2 = -1.0;
  ck_assert_uint_eq(s21_atan(value2), atan(value2));
  double value3 = 0.0;
  ck_assert_uint_eq(s21_atan(value3), atan(value3));
  double value4 = 123123;
  ck_assert_uint_eq(s21_atan(value4), atan(value4));
  double value5 = 0.001;
  ck_assert_uint_eq(s21_atan(value5), atan(value5));
  double value6 = -123123;
  ck_assert_uint_eq(s21_atan(value6), atan(value6));
  for (double i = -1.0; i <= 1.0; i += 0.01) {
    ck_assert_uint_eq(s21_atan(i), atan(i));
  }
}
END_TEST

START_TEST(s21_ceil_func) {
  double value0 = -10.2;
  ck_assert_uint_eq(s21_ceil(value0), ceil(value0));
  double value1 = 1.53;
  ck_assert_uint_eq(s21_ceil(value1), ceil(value1));
  double value2 = 23.412345;
  ck_assert_uint_eq(s21_ceil(value2), ceil(value2));
  double value3 = -3.003;
  ck_assert_uint_eq(s21_ceil(value3), ceil(value3));
  double value4 = 0;
  ck_assert_uint_eq(s21_ceil(value4), ceil(value4));
  double value5 = 1234567;
  ck_assert_uint_eq(s21_ceil(value5), ceil(value5));
}
END_TEST

START_TEST(s21_cos_func) {
  ck_assert_uint_eq(s21_cos(-10), cos(-10));
  ck_assert_uint_eq(s21_cos(0.2), cos(0.2));
//  for (double i = -S21_PI; i < S21_PI; i += 0.01) {
//    ck_assert_uint_eq(s21_cos(i), cos(i));
//  }
}
END_TEST

START_TEST(s21_exp_func) {
  ck_assert_uint_eq(s21_exp(5), exp(5));
  ck_assert_uint_eq(s21_exp(-2), exp(-2));
  ck_assert_uint_eq(s21_exp(1234567), exp(1234567));
  ck_assert_uint_eq(s21_exp(-1234567), exp(-1234567));
//  for (double i = -100; i < 100; i++) {
//    ck_assert_uint_eq(s21_exp(i), exp(i));
//  }
}
END_TEST

START_TEST(s21_fabs_func) {
  ck_assert_uint_eq(s21_fabs(-123123.123123), fabs(-123123.123123));
  ck_assert_uint_eq(s21_fabs(-45.567), fabs(-45.567));
  ck_assert_uint_eq(s21_fabs(1.0), fabs(1.0));
}
END_TEST

Suite * s21_math(void) {
  Suite * s;
  s = suite_create("MATH FUNCTION TEST");

  TCase *tc_abs;
  TCase *tc_acos;
  TCase *tc_asin;
  TCase *tc_atan;
  TCase *tc_ceil;
  TCase *tc_cos;
  TCase *tc_exp;
  TCase *tc_fabs;

  tc_abs = tcase_create("____ABS____");
  suite_add_tcase(s, tc_abs);
  tcase_add_test(tc_abs, s21_abs_func);

  tc_acos = tcase_create("____ACOS____");
  suite_add_tcase(s, tc_acos);
  tcase_add_test(tc_acos, s21_acos_func);

  tc_asin = tcase_create("____ASIN____");
  suite_add_tcase(s, tc_asin);
  tcase_add_test(tc_asin, s21_asin_func);

  tc_atan = tcase_create("____ATAN____");
  suite_add_tcase(s, tc_atan);
  tcase_add_test(tc_atan, s21_atan_func);

  tc_ceil = tcase_create("____CEIL____");
  suite_add_tcase(s, tc_ceil);
  tcase_add_test(tc_ceil, s21_ceil_func);

  tc_cos = tcase_create("____COS____");
  suite_add_tcase(s, tc_cos);
  tcase_add_test(tc_cos, s21_cos_func);

  tc_exp = tcase_create("____EXP____");
  suite_add_tcase(s, tc_exp);
  tcase_add_test(tc_exp, s21_exp_func);

  tc_fabs = tcase_create("____FABS____");
  suite_add_tcase(s, tc_fabs);
  tcase_add_test(tc_exp, s21_fabs_func);
  return s;
}

int main(void) {
  setlocale(LC_ALL, "");
  int number_failed;
  Suite * s;
  SRunner *sr;
  s = s21_math();
  sr = srunner_create(s);
  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_VERBOSE);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);
  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
