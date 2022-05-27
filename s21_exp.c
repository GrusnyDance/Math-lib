#include <limits.h>
#include <math.h>
#include <stdio.h>

#include "s21_math.h"

long double s21_exp(double x) {
  int sign = x < 0;
  x = x < 0 ? -x : x;
  long double res = 0;
  long long i = 1;
  long double raw = 1;
  while (fabsl(raw) > 1e-200) {
    res += raw;
    raw = (raw * x) / i++;
  }
  return sign ? 1 / res : res;
}

// int main() {
//   long double num = 1000;
//   printf("%.50Lf\n%.50Lf", s21_exp(num), expl(num));
//   return 0;
// }