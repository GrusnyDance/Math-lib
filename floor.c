#include "s21_math.h"

long double s21_floor(double x) {
  long double res = 0;
  if (x >= 0)
    res = (long long int)x;
  else {
    if (((x - (long long int)x) <= 0, 00000001) &&
           ((x - (long long int)x) >= -0, 00000001)) {
      return x;
    } else
      res = (long long int)x - 1;
  }
  return res;
}
