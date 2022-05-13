#include "s21_math.h"

long double s21_cos(double x) {
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