#include "s21_math.h"

// Overflow at 18,446,744,073,709,551,615 ~ 21!
unsigned long long s21_factorial(unsigned long long x) {
    unsigned long long result = 1;
    for (unsigned long long i = 2; i <= x; i++)
        result *= i;
    return result;
}