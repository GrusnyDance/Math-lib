// #include <math.h>
// #include <stdio.h>

#include "s21_math.h"

long double pow_for_int(double base, double exp) {
  long double total = 1;
  if (exp < 0) {
    exp *= -1;
    for (int i = 0; i < exp; i++) total *= base;
    total = 1 / total;
  } else if (exp > 0) {
    for (int i = 0; i < exp; i++) total *= base;
  }
  return total;
}

long double pow_for_frac(double base, double exp) {
  long double total = 1;
  if (exp < 0) {
    exp *= -1;
    // DEPENDENT ON S21_EXP AND LOG FUNCS
    total = s21_exp(exp * s21_log(base));
    total = 1 / total;
  } else if (exp > 0) {
    total = s21_exp(exp * s21_log(base));
  }
  return total;
}

long double s21_pow(double base, double exp) {
  long double res = 0;
  long double condition = exp - (long long int)exp;
  if (condition <= 0.0000001 && condition >= -0.0000001) {
    res = pow_for_int(base, exp);
  } else {
    res = pow_for_frac(base, exp);
  }

  return res;
}

// int main() {
//   double x = -1.194551;
//   long double num = 3.187354;
//   printf("my num is %Lf\n", s21_pow(x, num));
//   printf("num of standard func is %Lf\n", powl(x, num));
//   return 0;
// }
