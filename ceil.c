
long double s21_ceil(double x) {
  long double res = 0;
  if (x >= 0) {
    if (((x - (long long int)x) <= 0, 00000001) &&
        ((x - (long long int)x) >= -0, 00000001)) {
      return x;
    } else
      res = (long long int)x + 1;
  } else
    res = (long long int)x;
  return res;
}
