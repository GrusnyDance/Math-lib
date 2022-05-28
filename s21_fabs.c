#include <stdio.h>
#include <math.h>
#include "s21_math.h"


long double s21_fabs(double x) {
    return x >= 0 ? x : -x;
}

int main() {
//    printf("%.12Lf\n", s21_log3(0.000001));
//    printf("%.12f", log(0.000001));
    printf("%.12Lf\n", s21_fabs(124.124124));
    printf("%.12f", fabs(124.124124));

    return 0;
}