#include "s21_math.h"

long double s21_tan(double x) {
    return (s21_cos(x) <= 1e-6) ? 0.0 / 0.0 : s21_sin(x) / s21_cos(x);
}
