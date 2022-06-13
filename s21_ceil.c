#include "s21_math.h"

long double s21_ceil(double x) {
  long double res = 0;
  if (S21_ISNAN(x) || S21_ISINF(x)) {
    res = x;
  } else {
    if (x >= 0) {
      long double condition = x - (long long int)x;
      if (condition <= 0.00000001) {
        res = x;
      } else
        res = (long long int)x + 1;
    } else
      res = (long long int)x;
  }
  return res;
}
