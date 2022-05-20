#include <stdio.h>
#include <math.h>
#include "s21_math.h"

long double s21_fmod(double x, double y) {
    long double res = x;
    if (y == 0 || x == 0)
        res = S21_NAN;
    else
        while (res > 0)
            res -= y;
    if (res < 0)
        res += y;
    return (long double) res;
}

int main() {
    printf("%Lf\n", s21_fmod(12.1, 1));
    printf("%f", fmod(12.1, 1));
    return 0;
}