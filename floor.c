#include <math.h>
#include <stdio.h>

long double s21_floor(double x) {
  long double res = 0;
  if (x >= 0)
    res = (long long int)x;
  else
    res = (long long int)x - 1;
  return res;
}

int main() {
  double x = -0.234;
  long double num = s21_floor(x);
  printf("my num is %Lf\n", num);
  printf("num of standard func is %Lf\n", floorl(x));
  return 0;
}