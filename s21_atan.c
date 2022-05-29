#include "s21_math.h"

long double atan_calc(double x) {
  long double result = x, atan = x, n = 1;
  while (s21_fabs(atan) > S21_EPS) {
    atan = -1 * atan * x * x * (2 * n - 1) / (2 * n + 1);
    n += 1;
    result += atan;
  }
  return result;
}

long double s21_atan(double x) {
  long double result = 0;
  if (x < 1.0 && x > -1.0) {
    result = atan_calc(x);
  } else if (x == 1.0) {
    result = S21_PI / 4;
  } else if (x == -1.0) {
    result = -S21_PI / 4;
  } else if (x == 0) {
    result = 0;
  } else if (x > 1.0) {
    result = S21_PI / 2 - atan_calc(1 / x);
  } else if (x < -1.0) {
    result = -S21_PI / 2 - atan_calc(1 / x);
  }
  return result;
}
