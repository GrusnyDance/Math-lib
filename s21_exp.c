#include <limits.h>

#include "s21_math.h"

long double exp(double x) {
  long double res = 0;
  for (int i = 0; i < 15; i++) {
    res += naturalPow(x, i) / factorial(i);
  }
  return res;
}

long double naturalPow(double x, int n) {
  long double res = 1;
  if (n > 0) {
    res *= naturalPow(x, --n) * x;
  }
  return res;
}

long long factorial(int n) {
  long long res = 1;
  if (n > 0) {
    res *= n * factorial(--n);
  }
  return res;
}