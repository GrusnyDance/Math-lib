#include <stdio.h>
#include <math.h>
#include "s21_math.h"

long double s21_log(double x) {
    if (x > -1.00000001 && x < 1.00000001) {
        int i = 2;
        x += 1;
        while (i != 7) {
            x -= (pow(x, i) / i);
            i++;
            x += (pow(x, i) / i);
        }
        return x;
    } else {
        return 2 * s21_log(sqrt(x));
    }
}

long double s21_log2(double x) {
    if (x > -1.00000001 && x < 1.00000001) {
        int i = 2;
        x += 1;
        while (i != 15) {
            x -= (pow(x, i) / i);
            i++;
            x += (pow(x, i) / i);
        }
        return x;
    } else {
        int tmp = 1;
        int n = 0;
        while (tmp < x) {
            tmp *= 2;
            n++;
        }
        if (tmp == x) {
            return n * 0.69314718;
        }
        tmp /= 2;
        x /= tmp;
        return s21_log2(2) * n + s21_log2(x);
    }
}

int main() {
    printf("%Lf\n", s21_log2(7));
    printf("%f", log(7));
    return 0;
}