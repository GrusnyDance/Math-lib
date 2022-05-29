#include "s21_math.h"

long double asin_calc(double x) {
    long double result = x, asin = x, n = 1;
    while (s21_fabs(asin) > S21_EPS) {
        asin *= x * x * (2 * n - 1) * (2 * n - 1) * (2 * n);
        asin /= (2 * n + 1) * 4 * n * n;
        n++;
        result += asin;
    }
    return result;
}

long double s21_asin(double x) {
    long double result = x;
    if (x > 1.0 || x < -1.0 || x != x)
        result = S21_NAN;
    else if (x == 1.0)
        result = S21_PI / 2;
    else if (x == -1.0)
        result = -S21_PI / 2;
    else
        result = asin_calc(x);
    return result;
}
