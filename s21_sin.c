#include "s21_math.h"

// Replace pow with s21_pow
long double s21_sin(double x) {
    double result = 0;
    for (int n = 0; n < 13; n++)
        result += (pow((-1), n) * pow(x, 2 * n + 1)) / (s21_factorial(2 * n + 1));
    return result;
}