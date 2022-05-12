#include <math.h>
#include <stdio.h>

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
    // TO BE REPLACED WITH S21_LOG + S21_EXP FUNCTIONS
    total = expl(exp * log(base));
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

int main() {
  double x = -0.234;
  long double num = s21_pow(x, -1.2);
  printf("my num is %Lf\n", num);
  printf("num of standard func is %Lf\n", powl(x, -1.2));
  return 0;
}
