#include "s21_math.h"

int s21_abs(int x) {
  if (x == -2147483648) return x;
  return (x < 0) ? -x : x;
}