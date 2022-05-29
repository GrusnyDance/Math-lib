// #include <math.h>
// #include <stdio.h>

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
#include "s21_math.h"

long double pow_for_frac(double base, double exp) {
  long double total = 1;
  if (exp < 0) {
    exp *= -1;
    // DEPENDENT ON S21_EXP AND LOG FUNCS
    total = s21_exp(exp * s21_log(base));
    total = 1 / total;
  } else if (exp > 0) {
    total = expl(exp * log(base));
  }
  return total;
}

long double s21_pow(double base, double exp) {
  long double res = 0;
  if (exp - (long long int)exp == 0) {
    res = pow_for_int(base, exp);
  } else {
    res = pow_for_frac(base, exp);
  }

  return res;
}

// int main() {
//   int nan = 0x7F800001;
//   printf("%Lf\n", *(long double*)&nan);
//   // return *(float*)&nan;
//   double x = -4.322007;
//   long double num = 0.022283;
//   long double dif = powl(10, -7);
//   printf("my num is %Lf\n", s21_pow(x, num));
//   printf("num of standard func is %Lf\n", powl(x, num));
//   printf("%d", ((s21_pow(x, num) - powl(x, num) == nan)));
//   return 0;
// }
