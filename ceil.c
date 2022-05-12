#include <math.h>
#include <stdio.h>

long double s21_ceil(double x) {
  long double res = 0;
  if (x >= 0)
    res = (long long int)x + 1;
  else
    res = (long long int)x;
  return res;
}

int main() {
  double x = -123.3456;
  long double num = s21_ceil(x);
  printf("my num is %Lf\n", num);
  printf("num of standard func is %Lf\n", ceill(x));
  return 0;
}