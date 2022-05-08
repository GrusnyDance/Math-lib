// Я тут наговнокодил, меня заставили, не обращайте внимания, но оно +- норм работает

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long long factorial(long long number) {
    long long result = 1;
    for (int i = 2; i <= number; i++)
        result *= i;
    return result;
}

long double s21_abs(long double x) {
    return (x < 0) ? -x : x;
}

long double s21_trunc(long double x) {
    return x < 0 ? ceil(x) : floor(x);
}

double s21_fmod(double x, double y) {
    return x - s21_trunc(x / y) * y;
}

long double s21_sin(double x) {
    double result = 0;
    for (int n = 0; n < 13; n++) {
        result += (pow((-1), n) * pow(x, 2 * n + 1)) / (factorial((long long) 2 * n + 1));
    }
    return result;
}

long double s21_cos(double x) {
    double result = 0;
    for (int n = 0; n < 13; n++) {
        result += (pow((-1), n) * pow(x, 2 * n)) / (factorial((long long) 2 * n));
    }
    return result;
}

int main() {
//    long double my_sin;
//    long double c_sin;
//
//    printf("asdasd = %lf\n", s21_fmod(2 * M_PI, 2 * M_PI));
//
//    my_sin = s21_sin(M_PI);
//    c_sin = sin(M_PI);
//    if (s21_abs(my_sin - c_sin) <= 0.000001)
//        printf("SUCCES\n");
//    else
//        printf("FAIL\n");
//
//    my_sin = s21_sin(2 * M_PI);
//    c_sin = sin(2 * M_PI);
//    if (s21_abs(my_sin - c_sin) <= 0.000001)
//        printf("SUCCES\n");
//    else
//        printf("FAIL\n");
//
//
//    my_sin = s21_sin(2 * M_PI / 3);
//    c_sin = sin(2 * M_PI / 3);
//    if (s21_abs(my_sin - c_sin) <= 0.000001)
//        printf("SUCCES\n");
//    else
//        printf("FAIL\n");
//
//    my_sin = s21_sin(M_PI / 3);
//    c_sin = sin(M_PI / 3);
//    if (s21_abs(my_sin - c_sin) <= 0.000001)
//        printf("SUCCES\n");
//    else
//        printf("FAIL\n");
//
//    my_sin = s21_sin(M_PI / 4);
//    c_sin = sin(M_PI / 4);
//    if (s21_abs(my_sin - c_sin) <= 0.000001)
//        printf("SUCCES\n");
//    else
//        printf("FAIL\n");
//
//    my_sin = s21_sin(-M_PI);
//    c_sin = sin(-M_PI);
//    if (s21_abs(my_sin - c_sin) <= 0.000001)
//        printf("SUCCES\n");
//    else
//        printf("FAIL\n");
//
//    my_sin = s21_sin(100 * M_PI / 99);
//    c_sin = sin(100 * M_PI / 99);
//    if (s21_abs(my_sin - c_sin) <= 0.000001)
//        printf("SUCCES\n");
//    else
//        printf("FAIL\n");

    long double my_cos;
    long double c_cos;

    printf("asdasd = %lf\n", s21_fmod(2 * M_PI, 2 * M_PI));

    my_cos = s21_cos(M_PI);
    c_cos = cos(M_PI);
    if (s21_abs(my_cos - c_cos) <= 0.000001)
        printf("SUCCES\n");
    else
        printf("FAIL\n");

    my_cos = s21_cos(2 * M_PI);
    c_cos = cos(2 * M_PI);
    if (s21_abs(my_cos - c_cos) <= 0.000001)
        printf("SUCCES\n");
    else
        printf("FAIL\n");

    my_cos = s21_cos(2 * M_PI / 3);
    c_cos = cos(2 * M_PI / 3);
    if (s21_abs(my_cos - c_cos) <= 0.000001)
        printf("SUCCES\n");
    else
        printf("FAIL\n");

    my_cos = s21_cos(M_PI / 3);
    c_cos = cos(M_PI / 3);
    if (s21_abs(my_cos - c_cos) <= 0.000001)
        printf("SUCCES\n");
    else
        printf("FAIL\n");

    my_cos = s21_cos(M_PI / 4);
    c_cos = cos(M_PI / 4);
    if (s21_abs(my_cos - c_cos) <= 0.000001)
        printf("SUCCES\n");
    else
        printf("FAIL\n");

    my_cos = s21_cos(-M_PI);
    c_cos = cos(-M_PI);
    if (s21_abs(my_cos - c_cos) <= 0.000001)
        printf("SUCCES\n");
    else
        printf("FAIL\n");

    my_cos = s21_cos(100 * M_PI / 99);
    c_cos = cos(100 * M_PI / 99);
    if (s21_abs(my_cos - c_cos) <= 0.000001)
        printf("SUCCES\n");
    else
        printf("FAIL\n");
}