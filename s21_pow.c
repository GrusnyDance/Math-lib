#include "s21_math.h"

long double pow_for_int(double base, double exp) {
  long double total = 1;
  if (exp < 0) {
    exp *= -1;
    for (int i = 0; i < exp; i++) total *= base;
    total = 1 / total;
  } else if (exp > 0) {
    for (int i = 0; i < exp; i++) total *= base;
  }
  return total;
}

long double pow_for_frac(double base, double exp) {
  long double total = 1;
  if (base == 0 && exp != -S21_INF) {
    total = 0;
  } else if (base == 0) {
    total = S21_INF;
  } else if (exp == S21_INF && (S21_ISNAN(base) || s21_fabs(base) > 1)) {
    total = S21_INF;
  } else if (exp == -S21_INF && (s21_fabs(base) > 1 || S21_ISNAN(base))) {
    total = 0;
  } else if (exp < 0) {
    exp *= -1;
    total = s21_exp(exp * s21_log(base));
    total = 1 / total;
  } else if (exp > 0) {
    total = s21_exp(s21_log(base) * exp);
  } else if (exp != 0 && base != 1) {
    total = S21_NAN;
  }
  return total;
}

long double s21_pow(double base, double exp) {
  long double res = 0;
  long double condition = exp - (long long int)exp;
  if (condition <= 0.0000001 && condition >= -0.0000001 && !S21_ISNAN(exp) &&
      !S21_ISNAN(base)) {
    res = pow_for_int(base, exp);
  } else {
    res = pow_for_frac(base, exp);
  }

  return res;
}
