#include "s21_math.h"

long double s21_sin(double x) {
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