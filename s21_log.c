#include "s21_math.h"

long double s21_taylor_log(double x) {
  long double result = x, member = x;
  for (int flag = 2; s21_fabs(member) > S21_EPS; flag++) {
    member *= -((flag - 1) * (x / flag));
    result += member;
  }
  return result;
}

// log(d) is found using a Taylor series expanded around x = 1.
// x = 10^n * 2^m * d
// log(x) = n * log(10) + m * log(2) + log(d)
// But base 10 is useless, we have numbers stored as order + mantissa
// Аnd we need to change the order keeping mantissa to get in the range
// from 0 to 1

long double s21_log(double x) {
  long double result;
  if (x <= 0.0 || S21_ISNAN(x)) {
    result = S21_NAN;
  } else if (S21_ISINF(x)) {
    result = S21_INF;
  } else {
    int accuracy = 0;
    while ((int)x >= 2) {
      accuracy++;
      x /= 2;
    }
    result = accuracy * S21_LN2 + s21_taylor_log(x - 1);
  }
  return result;
}
