#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double res;
  if (y == 0)
    res = S21_NAN;
  else
    res = x - ((x / y) < 0 ? s21_ceil(x / y) : s21_floor(x / y)) * y;
  return res;
}
