#include "s21_math.h"

long double s21_cos(double x) {
    x = s21_fmod(x, 2 * S21_PI);
    long double result = 0;
    long double temp = 1;
    unsigned flag = 0;
    while (flag < 1000) {
        result += temp;
        flag += 2;
        temp *= -(x * x) / ((flag - 1) * flag);
    }
    return result;
}
