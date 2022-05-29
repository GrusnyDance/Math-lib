//#include "s21_math.h"
//#include <math.h>
//#include <stdio.h>
//
// long double s21_tan(double x) {
//    // return (s21_cos(x) <= 1e-6) ? 0.0 / 0.0 : s21_sin(x) / s21_cos(x);
//    return s21_sin(x) / s21_cos(x);
//}
//
// int main() {
//    int passed = 0, all = 0;
//    for (double test = -21 * M_PI; test <= 21 * M_PI; test += M_PI / 10) {
//        all++;
//        long double my_tan = s21_tan(fmod(test, 2 * S21_PI));
//        long double math_tan = tan(fmod(test, 2 * S21_PI));
//        if (fabsl(my_tan - math_tan) <= 1e-13) {
//            printf("SUCCESS\n");
//            passed++;
//        } else {
//            printf("FAIL\n");
//
//        }
//        printf("my_tan = %.14Lf\n", my_tan);
//        printf("math_tan = %.14Lf\n\n", math_tan);
//    }
//    printf("success = %d\n", passed);
//    printf("all = %d", all);
//}

#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// #include "s21_math.h"
double RandomReal(double low, double high);

long double s21_sin(long double x) {
  x = fmod(x, 2 * M_PI);
  long double result = 0;
  long double temp = x;
  unsigned flag = 1;
  while (flag < 44) {
    result += temp;
    flag += 2;
    temp *= -(x * x) / ((flag - 1) * flag);
  }
  return result;
}
long double s21_cos(long double x) {
  x = fmod(x, 2 * M_PI);
  long double result = 0;
  long double temp = 1;
  unsigned flag = 0;
  while (flag < 44) {
    result += temp;
    flag += 2;
    temp *= -(x * x) / ((flag - 1) * flag);
  }
  return result;
}
long double s21_tan(long double x) {
  x = fmod(x, 2 * M_PI);
  return s21_sin(x) / s21_cos(x);
}

int main(void) {
  for (int i = 0; i < 1000; i++) {
    // long double x = RandomReal(-(M_PI * 2), (M_PI * 2));
    long double x = RandomReal(-1e7, 1e7);
    long double a = s21_tan(x);
    long double b = tan(x);

    if (fabsl(a - b) > 1e-6) {
      printf("X : %Lf\n", x);
      printf("A : %6Lf\n", a);
      printf("B : %6Lf\n\n", b);
      printf("FAIL\n");
    }
  }
  return 0;
}

double RandomReal(double low, double high) {
  double d;

  d = (double)rand() / ((double)RAND_MAX + 1);
  return (low + d * (high - low));
}
