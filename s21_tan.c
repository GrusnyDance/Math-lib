#include "s21_math.h"

long double s21_tan(double x) {
  x = s21_fmod(x, 2 * M_PI);
  return s21_sin(x) / s21_cos(x);
}
