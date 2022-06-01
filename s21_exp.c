#include "s21_math.h"

long double s21_exp(double x) {
    long double result = 1;
    long double temp = x;
    unsigned flag = 1;
    while (flag < 1000) {
        result += temp;
        flag += 1;
        temp *= (x / flag);
    }
    return result;
}
