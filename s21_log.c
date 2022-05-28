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
    if (x > 0.0000000001 && x < 2.0000000001) {
        --x;
    
        int i = 1;
        long double res = 0;
        while (i != 10000000) {
            // res -= (pow(x, i) / i);
            // i++;
            // res += (pow(x, i) / i);
            res += (pow(-1, i - 1) * pow(x, i) / i);
            i++;
            
        }
        // printf("1");
        return res;
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
        n--;
        //printf("%lf ", x);
        return 0.69314718 * n + s21_log2(x);
    }
}

long double s21_log3(double x) {
    double alpha = (x - 1) / (x + 1);
    double result = alpha;
    double save = result * alpha * alpha;

    for (int i = 2; i <= 1e7; i++) {
        result += (1.0 / (2 * i - 1)) * save;
        save = save * alpha * alpha;
    }

    return (long double) 2.0 * result;
}
//int main() {
//    printf("%.12Lf\n", s21_log2(2100000000));
//    printf("%.12f", log(2100000000));
//
//    return 0;
//}