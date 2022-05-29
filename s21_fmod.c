#include "s21_math.h"

long double s21_fmod(double x, double y) {
  return x - ((x / y) < 0 ? s21_ceil(x / y) : s21_floor(x / y)) * y;
}
