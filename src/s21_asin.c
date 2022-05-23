#include "s21_math.h"

long double s21_asin(double x) {
  long double result = x;
  if (x > 1.0 || x < -1.0)
    result = S21_NAN;
  else if (x == 1)
    result = S21_PI / 2;
  else if (x == -1)
    result = -S21_PI / 2;
  else
    result = s21_atan(x / s21_sqrt(1 - x * x));
  return result;
}
