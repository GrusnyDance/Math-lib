#include <check.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

#include "s21_math.h"

START_TEST(s21_asin_func) {
  for (double i = 0.0; i < 2.0; i += 1.0) {
    ck_assert_uint_eq(s21_asin(i), asin(i));
  }
  for (double i = -1.0; i < 5.0; i += 0.01) {
    ck_assert_uint_eq(s21_asin(i), asin(i));
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

START_TEST(s21_atan_func) {
  for (double i = -1; i <= 1; i += 0.01) {
    ck_assert_uint_eq(s21_atan(i), atan(i));
  }
}
END_TEST

Suite *s21_math(void) {
  Suite *s;
  s = suite_create("MATH FUNCTION TEST");

  TCase *tc_atan;
  TCase *tc_acos;
  TCase *tc_asin;

  tc_asin = tcase_create("ASIN: ");
  suite_add_tcase(s, tc_asin);
  tcase_add_test(tc_asin, s21_asin_func);

  tc_acos = tcase_create("ACOS: ");
  suite_add_tcase(s, tc_acos);
  tcase_add_test(tc_acos, s21_acos_func);

  tc_atan = tcase_create("ATAN: ");
  suite_add_tcase(s, tc_atan);
  tcase_add_test(tc_atan, s21_atan_func);

  return s;
}

int main(void) {
  setlocale(LC_ALL, "");
  int number_failed;
  Suite *s;
  SRunner *sr;
  s = s21_math();
  sr = srunner_create(s);
  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_VERBOSE);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);
  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
