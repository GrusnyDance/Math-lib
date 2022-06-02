#include "s21_math.h"

long double s21_taylor_log(double x) {
    long double result = x, member = x;
    for (int i = 2; s21_fabs(member) > S21_EPS; i++) {
        member *= -((i - 1) * (x / i));
        result += member;
    }
    return result;
}

long double s21_log(double x) {
    long double result;
    if (x <= 0.0) {
        result = S21_NAN;
    } else {
        int accuracy = 0;
        while ((int) x >= 2) {
            accuracy++;
            x /= 2;
        }
        result = accuracy * S21_LN2 + s21_taylor_log(x - 1);
    }
    return result;
}
