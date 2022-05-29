#include <stdio.h>
#include <math.h>

long double s21_tan(double x) {
  x = s21_fmod(x, 2 * S21_PI);
  return s21_sin(x) / s21_cos(x);
}

int main() {
    printf("s21_tan() = %lf\n", s21_tan(543.246735));
    printf("tan() = %lf\n", tan(543.246735));
}
