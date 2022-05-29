#include "s21_math.h"

long double s21_log(double x) {
    double alpha = (x - 1) / (x + 1);
    double result = alpha;
    double save = result * alpha * alpha;

    for (int i = 2; i <= 1e7; i++) {
        result += (1.0 / (2 * i - 1)) * save;
        save = save * alpha * alpha;
    }

    return (long double) 2.0 * result;
}
