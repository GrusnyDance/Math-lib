#include "s21_math.h"

long double s21_taylor_log(double x) {
    long double result = x, member = x;
    for (int i = 2; s21_fabs(member) > S21_EPS; i++) {
        member *= -1 * (i - 1) * (x / i);
        result += member;
    }
    return result;
}

long double s21_log(double x) {
    long double result;
    if (x <= 0.0) {
        result = S21_NAN;
    } else {
        int first_part = 0;
        while ((int) x >= 10) {
            first_part++;
            x /= 10;
        }
        int second_part = 0;
        while ((int) x >= 2) {
            second_part++;
            x /= 2;
        }
        result = s21_taylor_log(x - 1) + first_part * S21_LN10 + second_part * S21_LN2;
    }
    return result;
}
