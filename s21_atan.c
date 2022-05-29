//#include "s21_math.h"
#include <stdio.h>
#include <math.h>
#define S21_PI 3.14159265358979323846
#define S21_NAN 0.0 / 0.0
#define S21_EPS 1e-17
long double s21_fabs(long double x) {
  return x < 0 ? x *= -1. : x;
}

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


int main () {
  for (double i = -1; i <= 1; i += 0.01) {
    printf("%f: %.17Lf - %.17lf\n",i, s21_atan(i), atan(i));
  }
}
