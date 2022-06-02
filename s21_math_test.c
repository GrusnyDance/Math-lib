#include "s21_math.h"

#include <check.h>
#include <math.h>
#include <stdlib.h>
#define DIFF pow(10, -7)

// TESTS DONE FOR CEIL
START_TEST(ceill_1) {
  long double num = -148.803949;
  if (isnan((double)(s21_ceil(num)))) {
    ck_assert_int_eq((isnan(ceill(num)) != 0), 1);
  } else {
    long double condition = (s21_ceil(num) - ceill(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(ceill_2) {
  long double num = -947.970166;
  if (isnan((double)(s21_ceil(num)))) {
    ck_assert_int_eq((isnan(ceill(num)) != 0), 1);
  } else {
    long double condition = (s21_ceil(num) - ceill(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(ceill_3) {
  long double num = -534.577388;
  if (isnan((double)(s21_ceil(num)))) {
    ck_assert_int_eq((isnan(ceill(num)) != 0), 1);
  } else {
    long double condition = (s21_ceil(num) - ceill(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(ceill_4) {
  long double num = -642.161791;
  if (isnan((double)(s21_ceil(num)))) {
    ck_assert_int_eq((isnan(ceill(num)) != 0), 1);
  } else {
    long double condition = (s21_ceil(num) - ceill(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(ceill_5) {
  long double num = -813.222114;
  if (isnan((double)(s21_ceil(num)))) {
    ck_assert_int_eq((isnan(ceill(num)) != 0), 1);
  } else {
    long double condition = (s21_ceil(num) - ceill(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(ceill_6) {
  long double num = 175.931519;
  if (isnan((double)(s21_ceil(num)))) {
    ck_assert_int_eq((isnan(ceill(num)) != 0), 1);
  } else {
    long double condition = (s21_ceil(num) - ceill(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(ceill_7) {
  long double num = 881.031659;
  if (isnan((double)(s21_ceil(num)))) {
    ck_assert_int_eq((isnan(ceill(num)) != 0), 1);
  } else {
    long double condition = (s21_ceil(num) - ceill(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(ceill_8) {
  long double num = -500.900862;
  if (isnan((double)(s21_ceil(num)))) {
    ck_assert_int_eq((isnan(ceill(num)) != 0), 1);
  } else {
    long double condition = (s21_ceil(num) - ceill(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(ceill_9) {
  long double num = -640.780487;
  if (isnan((double)(s21_ceil(num)))) {
    ck_assert_int_eq((isnan(ceill(num)) != 0), 1);
  } else {
    long double condition = (s21_ceil(num) - ceill(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(ceill_10) {
  long double num = 402.356159;
  if (isnan((double)(s21_ceil(num)))) {
    ck_assert_int_eq((isnan(ceill(num)) != 0), 1);
  } else {
    long double condition = (s21_ceil(num) - ceill(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

// TESTS DONE FOR FLOOR
START_TEST(floorl_1) {
  long double num = -145.125555;
  if (isnan((double)(s21_floor(num)))) {
    ck_assert_int_eq((isnan(floorl(num)) != 0), 1);
  } else {
    long double condition = (s21_floor(num) - floorl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(floorl_2) {
  long double num = 874.790261;
  if (isnan((double)(s21_floor(num)))) {
    ck_assert_int_eq((isnan(floorl(num)) != 0), 1);
  } else {
    long double condition = (s21_floor(num) - floorl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(floorl_3) {
  long double num = 599.924044;
  if (isnan((double)(s21_floor(num)))) {
    ck_assert_int_eq((isnan(floorl(num)) != 0), 1);
  } else {
    long double condition = (s21_floor(num) - floorl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(floorl_4) {
  long double num = 923.400213;
  if (isnan((double)(s21_floor(num)))) {
    ck_assert_int_eq((isnan(floorl(num)) != 0), 1);
  } else {
    long double condition = (s21_floor(num) - floorl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(floorl_5) {
  long double num = -412.620530;
  if (isnan((double)(s21_floor(num)))) {
    ck_assert_int_eq((isnan(floorl(num)) != 0), 1);
  } else {
    long double condition = (s21_floor(num) - floorl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(floorl_6) {
  long double num = -913.250907;
  if (isnan((double)(s21_floor(num)))) {
    ck_assert_int_eq((isnan(floorl(num)) != 0), 1);
  } else {
    long double condition = (s21_floor(num) - floorl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(floorl_7) {
  long double num = 992.001280;
  if (isnan((double)(s21_floor(num)))) {
    ck_assert_int_eq((isnan(floorl(num)) != 0), 1);
  } else {
    long double condition = (s21_floor(num) - floorl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(floorl_8) {
  long double num = 565.516067;
  if (isnan((double)(s21_floor(num)))) {
    ck_assert_int_eq((isnan(floorl(num)) != 0), 1);
  } else {
    long double condition = (s21_floor(num) - floorl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(floorl_9) {
  long double num = 628.530256;
  if (isnan((double)(s21_floor(num)))) {
    ck_assert_int_eq((isnan(floorl(num)) != 0), 1);
  } else {
    long double condition = (s21_floor(num) - floorl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(floorl_10) {
  long double num = -291.982749;
  if (isnan((double)(s21_floor(num)))) {
    ck_assert_int_eq((isnan(floorl(num)) != 0), 1);
  } else {
    long double condition = (s21_floor(num) - floorl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

// ACOS
START_TEST(acos_1) {
  long double num = -0.652056;
  if (isnan((double)(s21_acos(num)))) {
    ck_assert_int_eq((isnan(acos(num)) != 0), 1);
  } else {
    long double condition = (s21_acos(num) - acos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(acos_2) {
  long double num = 40.901828;
  if (isnan((double)(s21_acos(num)))) {
    ck_assert_int_eq((isnan(acos(num)) != 0), 1);
  } else {
    long double condition = (s21_acos(num) - acos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(acos_3) {
  long double num = 37.018012;
  if (isnan((double)(s21_acos(num)))) {
    ck_assert_int_eq((isnan(acos(num)) != 0), 1);
  } else {
    long double condition = (s21_acos(num) - acos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(acos_4) {
  long double num = -38.276342;
  if (isnan((double)(s21_acos(num)))) {
    ck_assert_int_eq((isnan(acos(num)) != 0), 1);
  } else {
    long double condition = (s21_acos(num) - acos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(acos_5) {
  long double num = 89.515404;
  if (isnan((double)(s21_acos(num)))) {
    ck_assert_int_eq((isnan(acos(num)) != 0), 1);
  } else {
    long double condition = (s21_acos(num) - acos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(acos_6) {
  long double num = 85.393896;
  if (isnan((double)(s21_acos(num)))) {
    ck_assert_int_eq((isnan(acos(num)) != 0), 1);
  } else {
    long double condition = (s21_acos(num) - acos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(acos_7) {
  long double num = 15.215444;
  if (isnan((double)(s21_acos(num)))) {
    ck_assert_int_eq((isnan(acos(num)) != 0), 1);
  } else {
    long double condition = (s21_acos(num) - acos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(acos_8) {
  long double num = -74.034820;
  if (isnan((double)(s21_acos(num)))) {
    ck_assert_int_eq((isnan(acos(num)) != 0), 1);
  } else {
    long double condition = (s21_acos(num) - acos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(acos_9) {
  long double num = 96.787762;
  if (isnan((double)(s21_acos(num)))) {
    ck_assert_int_eq((isnan(acos(num)) != 0), 1);
  } else {
    long double condition = (s21_acos(num) - acos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(acos_10) {
  long double num = -88.079564;
  if (isnan((double)(s21_acos(num)))) {
    ck_assert_int_eq((isnan(acos(num)) != 0), 1);
  } else {
    long double condition = (s21_acos(num) - acos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

// ASIN
START_TEST(asin_1) {
  long double num = 2651.948949;
  if (isnan((double)(s21_asin(num)))) {
    ck_assert_int_eq((isnan(asin(num)) != 0), 1);
  } else {
    long double condition = (s21_asin(num) - asin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(asin_2) {
  long double num = 571305.980706;
  if (isnan((double)(s21_asin(num)))) {
    ck_assert_int_eq((isnan(asin(num)) != 0), 1);
  } else {
    long double condition = (s21_asin(num) - asin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(asin_3) {
  long double num = -60382.269817;
  if (isnan((double)(s21_asin(num)))) {
    ck_assert_int_eq((isnan(asin(num)) != 0), 1);
  } else {
    long double condition = (s21_asin(num) - asin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(asin_4) {
  long double num = -844808.808456;
  if (isnan((double)(s21_asin(num)))) {
    ck_assert_int_eq((isnan(asin(num)) != 0), 1);
  } else {
    long double condition = (s21_asin(num) - asin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(asin_5) {
  long double num = -701643.713611;
  if (isnan((double)(s21_asin(num)))) {
    ck_assert_int_eq((isnan(asin(num)) != 0), 1);
  } else {
    long double condition = (s21_asin(num) - asin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

// SIN
START_TEST(sin_1) {
  long double num = -36864579.672396;
  if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
  } else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sin_2) {
  long double num = 417009446.032815;
  if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
  } else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sin_3) {
  long double num = 677759473.527670;
  if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
  } else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sin_4) {
  long double num = -896528420.456000;
  if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
  } else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sin_5) {
  long double num = 46837396.010215;
  if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
  } else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sin_6) {
  long double num = -803885256.314597;
  if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
  } else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sin_7) {
  long double num = 1100497120.572486;
  if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
  } else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sin_8) {
  long double num = 55105461.764664;
  if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
  } else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sin_9) {
  long double num = -1842504121.289823;
  if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
  } else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sin_10) {
  long double num = 1033233481.940456;
  if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
  } else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

// COS
START_TEST(cos_1) {
  long double num = -30071291.155215;
  if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
  } else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(cos_2) {
  long double num = -1408190445.698886;
  if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
  } else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(cos_3) {
  long double num = 543179138.816511;
  if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
  } else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(cos_4) {
  long double num = 1211786089.097981;
  if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
  } else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(cos_5) {
  long double num = -1511200530.226901;
  if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
  } else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(cos_6) {
  long double num = 1252688476.467826;
  if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
  } else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(cos_7) {
  long double num = 1935223994.746443;
  if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
  } else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(cos_8) {
  long double num = 1309679703.465514;
  if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
  } else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(cos_9) {
  long double num = -213223855.110455;
  if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
  } else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(cos_10) {
  long double num = 346667158.578833;
  if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
  } else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

// TAN
START_TEST(tan_1) {
  long double num = 180765.325288;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(tan_2) {
  long double num = -1877177.889402;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(tan_3) {
  long double num = 10271212.826609;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(tan_4) {
  long double num = -11726023.178420;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(tan_5) {
  long double num = 728440.294381;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(tan_6) {
  long double num = 2896027.668796;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(tan_7) {
  long double num = -6462970.537349;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(tan_8) {
  long double num = 16854178.773637;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(tan_9) {
  long double num = -11817351.482724;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(tan_10) {
  long double num = -14226370.134496;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

// ASIN
START_TEST(asin_6) {
  long double num = -525894.660282;
  if (isnan((double)(s21_asin(num)))) {
    ck_assert_int_eq((isnan(asin(num)) != 0), 1);
  } else {
    long double condition = (s21_asin(num) - asin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(asin_7) {
  long double num = -711555.357888;
  if (isnan((double)(s21_asin(num)))) {
    ck_assert_int_eq((isnan(asin(num)) != 0), 1);
  } else {
    long double condition = (s21_asin(num) - asin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(asin_8) {
  long double num = 889099.974134;
  if (isnan((double)(s21_asin(num)))) {
    ck_assert_int_eq((isnan(asin(num)) != 0), 1);
  } else {
    long double condition = (s21_asin(num) - asin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(asin_9) {
  long double num = -896734.736812;
  if (isnan((double)(s21_asin(num)))) {
    ck_assert_int_eq((isnan(asin(num)) != 0), 1);
  } else {
    long double condition = (s21_asin(num) - asin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(asin_10) {
  long double num = 579278.405560;
  if (isnan((double)(s21_asin(num)))) {
    ck_assert_int_eq((isnan(asin(num)) != 0), 1);
  } else {
    long double condition = (s21_asin(num) - asin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

// ATAN
START_TEST(atan_1) {
  long double num = 8.114755;
  if (isnan((double)(s21_atan(num)))) {
    ck_assert_int_eq((isnan(atan(num)) != 0), 1);
  } else {
    long double condition = (s21_atan(num) - atan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(atan_2) {
  long double num = 384.682105;
  if (isnan((double)(s21_atan(num)))) {
    ck_assert_int_eq((isnan(atan(num)) != 0), 1);
  } else {
    long double condition = (s21_atan(num) - atan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(atan_3) {
  long double num = -647.867378;
  if (isnan((double)(s21_atan(num)))) {
    ck_assert_int_eq((isnan(atan(num)) != 0), 1);
  } else {
    long double condition = (s21_atan(num) - atan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(atan_4) {
  long double num = -707.016726;
  if (isnan((double)(s21_atan(num)))) {
    ck_assert_int_eq((isnan(atan(num)) != 0), 1);
  } else {
    long double condition = (s21_atan(num) - atan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(atan_5) {
  long double num = -830.112000;
  if (isnan((double)(s21_atan(num)))) {
    ck_assert_int_eq((isnan(atan(num)) != 0), 1);
  } else {
    long double condition = (s21_atan(num) - atan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(atan_6) {
  long double num = 307.617397;
  if (isnan((double)(s21_atan(num)))) {
    ck_assert_int_eq((isnan(atan(num)) != 0), 1);
  } else {
    long double condition = (s21_atan(num) - atan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(atan_7) {
  long double num = 125.586760;
  if (isnan((double)(s21_atan(num)))) {
    ck_assert_int_eq((isnan(atan(num)) != 0), 1);
  } else {
    long double condition = (s21_atan(num) - atan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(atan_8) {
  long double num = 736.672348;
  if (isnan((double)(s21_atan(num)))) {
    ck_assert_int_eq((isnan(atan(num)) != 0), 1);
  } else {
    long double condition = (s21_atan(num) - atan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(atan_9) {
  long double num = -747.843463;
  if (isnan((double)(s21_atan(num)))) {
    ck_assert_int_eq((isnan(atan(num)) != 0), 1);
  } else {
    long double condition = (s21_atan(num) - atan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(atan_10) {
  long double num = 994.919772;
  if (isnan((double)(s21_atan(num)))) {
    ck_assert_int_eq((isnan(atan(num)) != 0), 1);
  } else {
    long double condition = (s21_atan(num) - atan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

// EXP VLAD
START_TEST(s21_exp_1) {
  double num = 2545.378460;
  if (isnan(exp(num))) {
    ck_assert_double_nan((double)s21_exp(num));
  } else if (isinf(exp(num))) {
    ck_assert_double_infinite((double)s21_exp(num));
  } else {
    double res_custom = s21_exp(num);
    double res_orig = exp(num);
    if (res_custom > 1e10) {
      while (res_custom < 1e16) {
        res_custom *= 10;
        res_orig *= 10;
      }
      while (res_custom > 1e17) {
        res_custom /= 10;
        res_orig /= 10;
      }
      ck_assert_double_eq_tol(res_custom, res_orig, 1);
    } else {
      ck_assert_double_eq_tol(res_custom, res_orig, 1e-6);
    }
  }
}
END_TEST

START_TEST(s21_exp_2) {
  double num = 575.783669;
  if (isnan(exp(num))) {
    ck_assert_double_nan((double)s21_exp(num));
  } else if (isinf(exp(num))) {
    ck_assert_double_infinite((double)s21_exp(num));
  } else {
    double res_custom = s21_exp(num);
    double res_orig = exp(num);
    if (res_custom > 1e10) {
      while (res_custom < 1e16) {
        res_custom *= 10;
        res_orig *= 10;
      }
      while (res_custom > 1e17) {
        res_custom /= 10;
        res_orig /= 10;
      }
      ck_assert_double_eq_tol(res_custom, res_orig, 1);
    } else {
      ck_assert_double_eq_tol(res_custom, res_orig, 1e-6);
    }
  }
}
END_TEST

START_TEST(s21_exp_3) {
  double num = 5396.117940;
  if (isnan(exp(num))) {
    ck_assert_double_nan((double)s21_exp(num));
  } else if (isinf(exp(num))) {
    ck_assert_double_infinite((double)s21_exp(num));
  } else {
    double res_custom = s21_exp(num);
    double res_orig = exp(num);
    if (res_custom > 1e10) {
      while (res_custom < 1e16) {
        res_custom *= 10;
        res_orig *= 10;
      }
      while (res_custom > 1e17) {
        res_custom /= 10;
        res_orig /= 10;
      }
      ck_assert_double_eq_tol(res_custom, res_orig, 1);
    } else {
      ck_assert_double_eq_tol(res_custom, res_orig, 1e-6);
    }
  }
}
END_TEST

START_TEST(s21_exp_4) {
  double num = 8654.213406;
  if (isnan(exp(num))) {
    ck_assert_double_nan((double)s21_exp(num));
  } else if (isinf(exp(num))) {
    ck_assert_double_infinite((double)s21_exp(num));
  } else {
    double res_custom = s21_exp(num);
    double res_orig = exp(num);
    if (res_custom > 1e10) {
      while (res_custom < 1e16) {
        res_custom *= 10;
        res_orig *= 10;
      }
      while (res_custom > 1e17) {
        res_custom /= 10;
        res_orig /= 10;
      }
      ck_assert_double_eq_tol(res_custom, res_orig, 1);
    } else {
      ck_assert_double_eq_tol(res_custom, res_orig, 1e-6);
    }
  }
}
END_TEST

START_TEST(s21_exp_5) {
  double num = 5264.714382;
  if (isnan(exp(num))) {
    ck_assert_double_nan((double)s21_exp(num));
  } else if (isinf(exp(num))) {
    ck_assert_double_infinite((double)s21_exp(num));
  } else {
    double res_custom = s21_exp(num);
    double res_orig = exp(num);
    if (res_custom > 1e10) {
      while (res_custom < 1e16) {
        res_custom *= 10;
        res_orig *= 10;
      }
      while (res_custom > 1e17) {
        res_custom /= 10;
        res_orig /= 10;
      }
      ck_assert_double_eq_tol(res_custom, res_orig, 1);
    } else {
      ck_assert_double_eq_tol(res_custom, res_orig, 1e-6);
    }
  }
}
END_TEST

START_TEST(s21_exp_6) {
  double num = 1954.624764;
  if (isnan(exp(num))) {
    ck_assert_double_nan((double)s21_exp(num));
  } else if (isinf(exp(num))) {
    ck_assert_double_infinite((double)s21_exp(num));
  } else {
    double res_custom = s21_exp(num);
    double res_orig = exp(num);
    if (res_custom > 1e10) {
      while (res_custom < 1e16) {
        res_custom *= 10;
        res_orig *= 10;
      }
      while (res_custom > 1e17) {
        res_custom /= 10;
        res_orig /= 10;
      }
      ck_assert_double_eq_tol(res_custom, res_orig, 1);
    } else {
      ck_assert_double_eq_tol(res_custom, res_orig, 1e-6);
    }
  }
}
END_TEST

START_TEST(s21_exp_7) {
  double num = 78.413939;
  if (isnan(exp(num))) {
    ck_assert_double_nan((double)s21_exp(num));
  } else if (isinf(exp(num))) {
    ck_assert_double_infinite((double)s21_exp(num));
  } else {
    double res_custom = s21_exp(num);
    double res_orig = exp(num);
    if (res_custom > 1e10) {
      while (res_custom < 1e16) {
        res_custom *= 10;
        res_orig *= 10;
      }
      while (res_custom > 1e17) {
        res_custom /= 10;
        res_orig /= 10;
      }
      ck_assert_double_eq_tol(res_custom, res_orig, 1);
    } else {
      ck_assert_double_eq_tol(res_custom, res_orig, 1e-6);
    }
  }
}
END_TEST

START_TEST(s21_exp_8) {
  double num = 8903.064952;
  if (isnan(exp(num))) {
    ck_assert_double_nan((double)s21_exp(num));
  } else if (isinf(exp(num))) {
    ck_assert_double_infinite((double)s21_exp(num));
  } else {
    double res_custom = s21_exp(num);
    double res_orig = exp(num);
    if (res_custom > 1e10) {
      while (res_custom < 1e16) {
        res_custom *= 10;
        res_orig *= 10;
      }
      while (res_custom > 1e17) {
        res_custom /= 10;
        res_orig /= 10;
      }
      ck_assert_double_eq_tol(res_custom, res_orig, 1);
    } else {
      ck_assert_double_eq_tol(res_custom, res_orig, 1e-6);
    }
  }
}
END_TEST

START_TEST(s21_exp_9) {
  double num = 6312.642795;
  if (isnan(exp(num))) {
    ck_assert_double_nan((double)s21_exp(num));
  } else if (isinf(exp(num))) {
    ck_assert_double_infinite((double)s21_exp(num));
  } else {
    double res_custom = s21_exp(num);
    double res_orig = exp(num);
    if (res_custom > 1e10) {
      while (res_custom < 1e16) {
        res_custom *= 10;
        res_orig *= 10;
      }
      while (res_custom > 1e17) {
        res_custom /= 10;
        res_orig /= 10;
      }
      ck_assert_double_eq_tol(res_custom, res_orig, 1);
    } else {
      ck_assert_double_eq_tol(res_custom, res_orig, 1e-6);
    }
  }
}
END_TEST

START_TEST(s21_exp_10) {
  double num = 87.449188;
  if (isnan(exp(num))) {
    ck_assert_double_nan((double)s21_exp(num));
  } else if (isinf(exp(num))) {
    ck_assert_double_infinite((double)s21_exp(num));
  } else {
    double res_custom = s21_exp(num);
    double res_orig = exp(num);
    if (res_custom > 1e10) {
      while (res_custom < 1e16) {
        res_custom *= 10;
        res_orig *= 10;
      }
      while (res_custom > 1e17) {
        res_custom /= 10;
        res_orig /= 10;
      }
      ck_assert_double_eq_tol(res_custom, res_orig, 1);
    } else {
      ck_assert_double_eq_tol(res_custom, res_orig, 1e-6);
    }
  }
}
END_TEST

// ABS VLAD
START_TEST(s21_abs_1) {
  int num = -4657;
  ck_assert_int_eq(abs(num), s21_abs(num));
}
END_TEST

START_TEST(s21_abs_2) {
  int num = -3425;
  ck_assert_int_eq(abs(num), s21_abs(num));
}
END_TEST

START_TEST(s21_abs_3) {
  int num = 1106;
  ck_assert_int_eq(abs(num), s21_abs(num));
}
END_TEST

START_TEST(s21_abs_4) {
  int num = 2419;
  ck_assert_int_eq(abs(num), s21_abs(num));
}
END_TEST

START_TEST(s21_abs_5) {
  int num = -9641;
  ck_assert_int_eq(abs(num), s21_abs(num));
}
END_TEST

START_TEST(s21_abs_6) {
  int num = -7500;
  ck_assert_int_eq(abs(num), s21_abs(num));
}
END_TEST

START_TEST(s21_abs_7) {
  int num = 1692;
  ck_assert_int_eq(abs(num), s21_abs(num));
}
END_TEST

START_TEST(s21_abs_8) {
  int num = -1808;
  ck_assert_int_eq(abs(num), s21_abs(num));
}
END_TEST

START_TEST(s21_abs_9) {
  int num = -1144;
  ck_assert_int_eq(abs(num), s21_abs(num));
}
END_TEST

START_TEST(s21_abs_10) {
  int num = -6051;
  ck_assert_int_eq(abs(num), s21_abs(num));
}
END_TEST

// FABS
START_TEST(fabsl_1) {
  long double num = 57733.935797;
  if (isnan((double)(s21_fabs(num)))) {
    ck_assert_int_eq((isnan(fabsl(num)) != 0), 1);
  } else {
    long double condition = (s21_fabs(num) - fabsl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(fabsl_2) {
  long double num = 334258.932310;
  if (isnan((double)(s21_fabs(num)))) {
    ck_assert_int_eq((isnan(fabsl(num)) != 0), 1);
  } else {
    long double condition = (s21_fabs(num) - fabsl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(fabsl_3) {
  long double num = -110124.661173;
  if (isnan((double)(s21_fabs(num)))) {
    ck_assert_int_eq((isnan(fabsl(num)) != 0), 1);
  } else {
    long double condition = (s21_fabs(num) - fabsl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(fabsl_4) {
  long double num = -865180.331220;
  if (isnan((double)(s21_fabs(num)))) {
    ck_assert_int_eq((isnan(fabsl(num)) != 0), 1);
  } else {
    long double condition = (s21_fabs(num) - fabsl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(fabsl_5) {
  long double num = 914173.193236;
  if (isnan((double)(s21_fabs(num)))) {
    ck_assert_int_eq((isnan(fabsl(num)) != 0), 1);
  } else {
    long double condition = (s21_fabs(num) - fabsl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(fabsl_6) {
  long double num = 508858.716818;
  if (isnan((double)(s21_fabs(num)))) {
    ck_assert_int_eq((isnan(fabsl(num)) != 0), 1);
  } else {
    long double condition = (s21_fabs(num) - fabsl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(fabsl_7) {
  long double num = 388453.559665;
  if (isnan((double)(s21_fabs(num)))) {
    ck_assert_int_eq((isnan(fabsl(num)) != 0), 1);
  } else {
    long double condition = (s21_fabs(num) - fabsl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(fabsl_8) {
  long double num = 738977.293362;
  if (isnan((double)(s21_fabs(num)))) {
    ck_assert_int_eq((isnan(fabsl(num)) != 0), 1);
  } else {
    long double condition = (s21_fabs(num) - fabsl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(fabsl_9) {
  long double num = -8630.458735;
  if (isnan((double)(s21_fabs(num)))) {
    ck_assert_int_eq((isnan(fabsl(num)) != 0), 1);
  } else {
    long double condition = (s21_fabs(num) - fabsl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(fabsl_10) {
  long double num = 947880.037105;
  if (isnan((double)(s21_fabs(num)))) {
    ck_assert_int_eq((isnan(fabsl(num)) != 0), 1);
  } else {
    long double condition = (s21_fabs(num) - fabsl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

// LOG
START_TEST(logl_1) {
  long double num = -388008.329732;
  if (isnan((double)(s21_log(num)))) {
    ck_assert_int_eq((isnan(logl(num)) != 0), 1);
  } else {
    long double condition = (s21_log(num) - logl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(logl_2) {
  long double num = 394082.209745;
  if (isnan((double)(s21_log(num)))) {
    ck_assert_int_eq((isnan(logl(num)) != 0), 1);
  } else {
    long double condition = (s21_log(num) - logl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(logl_3) {
  long double num = -587873.587193;
  if (isnan((double)(s21_log(num)))) {
    ck_assert_int_eq((isnan(logl(num)) != 0), 1);
  } else {
    long double condition = (s21_log(num) - logl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(logl_4) {
  long double num = -480856.789966;
  if (isnan((double)(s21_log(num)))) {
    ck_assert_int_eq((isnan(logl(num)) != 0), 1);
  } else {
    long double condition = (s21_log(num) - logl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(logl_5) {
  long double num = -898426.342708;
  if (isnan((double)(s21_log(num)))) {
    ck_assert_int_eq((isnan(logl(num)) != 0), 1);
  } else {
    long double condition = (s21_log(num) - logl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(logl_6) {
  long double num = -883932.859583;
  if (isnan((double)(s21_log(num)))) {
    ck_assert_int_eq((isnan(logl(num)) != 0), 1);
  } else {
    long double condition = (s21_log(num) - logl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(logl_7) {
  long double num = 801351.957862;
  if (isnan((double)(s21_log(num)))) {
    ck_assert_int_eq((isnan(logl(num)) != 0), 1);
  } else {
    long double condition = (s21_log(num) - logl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(logl_8) {
  long double num = 529017.954845;
  if (isnan((double)(s21_log(num)))) {
    ck_assert_int_eq((isnan(logl(num)) != 0), 1);
  } else {
    long double condition = (s21_log(num) - logl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(logl_9) {
  long double num = 558955.234270;
  if (isnan((double)(s21_log(num)))) {
    ck_assert_int_eq((isnan(logl(num)) != 0), 1);
  } else {
    long double condition = (s21_log(num) - logl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(logl_10) {
  long double num = 35975.402703;
  if (isnan((double)(s21_log(num)))) {
    ck_assert_int_eq((isnan(logl(num)) != 0), 1);
  } else {
    long double condition = (s21_log(num) - logl(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

// SQRT
START_TEST(sqrt_1) {
  long double num = -44.723864;
  if (isnan((double)(s21_sqrt(num)))) {
    ck_assert_int_eq((isnan(sqrt(num)) != 0), 1);
  } else {
    long double condition = (s21_sqrt(num) - sqrt(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sqrt_2) {
  long double num = -60.153192;
  if (isnan((double)(s21_sqrt(num)))) {
    ck_assert_int_eq((isnan(sqrt(num)) != 0), 1);
  } else {
    long double condition = (s21_sqrt(num) - sqrt(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sqrt_3) {
  long double num = 9.804416;
  if (isnan((double)(s21_sqrt(num)))) {
    ck_assert_int_eq((isnan(sqrt(num)) != 0), 1);
  } else {
    long double condition = (s21_sqrt(num) - sqrt(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sqrt_4) {
  long double num = 41.776372;
  if (isnan((double)(s21_sqrt(num)))) {
    ck_assert_int_eq((isnan(sqrt(num)) != 0), 1);
  } else {
    long double condition = (s21_sqrt(num) - sqrt(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sqrt_5) {
  long double num = 96.103688;
  if (isnan((double)(s21_sqrt(num)))) {
    ck_assert_int_eq((isnan(sqrt(num)) != 0), 1);
  } else {
    long double condition = (s21_sqrt(num) - sqrt(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sqrt_6) {
  long double num = -25.378398;
  if (isnan((double)(s21_sqrt(num)))) {
    ck_assert_int_eq((isnan(sqrt(num)) != 0), 1);
  } else {
    long double condition = (s21_sqrt(num) - sqrt(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sqrt_7) {
  long double num = 22.770364;
  if (isnan((double)(s21_sqrt(num)))) {
    ck_assert_int_eq((isnan(sqrt(num)) != 0), 1);
  } else {
    long double condition = (s21_sqrt(num) - sqrt(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sqrt_8) {
  long double num = -18.867546;
  if (isnan((double)(s21_sqrt(num)))) {
    ck_assert_int_eq((isnan(sqrt(num)) != 0), 1);
  } else {
    long double condition = (s21_sqrt(num) - sqrt(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sqrt_9) {
  long double num = -23.165603;
  if (isnan((double)(s21_sqrt(num)))) {
    ck_assert_int_eq((isnan(sqrt(num)) != 0), 1);
  } else {
    long double condition = (s21_sqrt(num) - sqrt(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sqrt_10) {
  long double num = -38.569138;
  if (isnan((double)(s21_sqrt(num)))) {
    ck_assert_int_eq((isnan(sqrt(num)) != 0), 1);
  } else {
    long double condition = (s21_sqrt(num) - sqrt(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

// POWL
START_TEST(powl_1) {
  long double num1 = -8.574862;
  long double num2 = 7.993099;
  long double condition = (s21_pow(num1, num2) - powl(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(powl(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= DIFF && condition >= -DIFF), 1);
  }
}
END_TEST

START_TEST(powl_2) {
  long double num1 = 8.181928;
  long double num2 = -1.950393;
  long double condition = (s21_pow(num1, num2) - powl(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(powl(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= DIFF && condition >= -DIFF), 1);
  }
}
END_TEST

START_TEST(powl_3) {
  long double num1 = -8.140663;
  long double num2 = -6.153770;
  long double condition = (s21_pow(num1, num2) - powl(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(powl(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= DIFF && condition >= -DIFF), 1);
  }
}
END_TEST

START_TEST(powl_4) {
  long double num1 = -8.190569;
  long double num2 = 4.068785;
  long double condition = (s21_pow(num1, num2) - powl(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(powl(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= DIFF && condition >= -DIFF), 1);
  }
}
END_TEST

START_TEST(powl_5) {
  long double num1 = -3.313375;
  long double num2 = -0.682443;
  long double condition = (s21_pow(num1, num2) - powl(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(powl(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= DIFF && condition >= -DIFF), 1);
  }
}
END_TEST

START_TEST(powl_6) {
  long double num1 = -7.730617;
  long double num2 = 1.083946;
  long double condition = (s21_pow(num1, num2) - powl(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(powl(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= DIFF && condition >= -DIFF), 1);
  }
}
END_TEST

START_TEST(powl_7) {
  long double num1 = -3.049562;
  long double num2 = 8.660237;
  long double condition = (s21_pow(num1, num2) - powl(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(powl(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= DIFF && condition >= -DIFF), 1);
  }
}
END_TEST

START_TEST(powl_8) {
  long double num1 = -9.647734;
  long double num2 = 2.021467;
  long double condition = (s21_pow(num1, num2) - powl(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(powl(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= DIFF && condition >= -DIFF), 1);
  }
}
END_TEST

START_TEST(powl_9) {
  long double num1 = -1.321712;
  long double num2 = 2.457203;
  long double condition = (s21_pow(num1, num2) - powl(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(powl(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= DIFF && condition >= -DIFF), 1);
  }
}
END_TEST

START_TEST(powl_10) {
  long double num1 = 6.233734;
  long double num2 = -0.349780;
  long double condition = (s21_pow(num1, num2) - powl(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(powl(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= DIFF && condition >= -DIFF), 1);
  }
}
END_TEST

int main(void) {
  Suite *s1 = suite_create("Core");
  TCase *tc1_1 = tcase_create("Core");
  SRunner *sr = srunner_create(s1);
  int nf;

  suite_add_tcase(s1, tc1_1);
  // CEIL
  tcase_add_test(tc1_1, ceill_1);
  tcase_add_test(tc1_1, ceill_2);
  tcase_add_test(tc1_1, ceill_3);
  tcase_add_test(tc1_1, ceill_4);
  tcase_add_test(tc1_1, ceill_5);
  tcase_add_test(tc1_1, ceill_6);
  tcase_add_test(tc1_1, ceill_7);
  tcase_add_test(tc1_1, ceill_8);
  tcase_add_test(tc1_1, ceill_9);
  tcase_add_test(tc1_1, ceill_10);
  // FLOOR
  tcase_add_test(tc1_1, floorl_1);
  tcase_add_test(tc1_1, floorl_2);
  tcase_add_test(tc1_1, floorl_3);
  tcase_add_test(tc1_1, floorl_4);
  tcase_add_test(tc1_1, floorl_5);
  tcase_add_test(tc1_1, floorl_6);
  tcase_add_test(tc1_1, floorl_7);
  tcase_add_test(tc1_1, floorl_8);
  tcase_add_test(tc1_1, floorl_9);
  tcase_add_test(tc1_1, floorl_10);
  // ACOS
  tcase_add_test(tc1_1, acos_1);
  tcase_add_test(tc1_1, acos_2);
  tcase_add_test(tc1_1, acos_3);
  tcase_add_test(tc1_1, acos_4);
  tcase_add_test(tc1_1, acos_5);
  tcase_add_test(tc1_1, acos_6);
  tcase_add_test(tc1_1, acos_7);
  tcase_add_test(tc1_1, acos_8);
  tcase_add_test(tc1_1, acos_9);
  tcase_add_test(tc1_1, acos_10);
  // SIN
  tcase_add_test(tc1_1, sin_1);
  tcase_add_test(tc1_1, sin_2);
  tcase_add_test(tc1_1, sin_3);
  tcase_add_test(tc1_1, sin_4);
  tcase_add_test(tc1_1, sin_5);
  tcase_add_test(tc1_1, sin_6);
  tcase_add_test(tc1_1, sin_7);
  tcase_add_test(tc1_1, sin_8);
  tcase_add_test(tc1_1, sin_9);
  tcase_add_test(tc1_1, sin_10);
  // COS
  tcase_add_test(tc1_1, cos_1);
  tcase_add_test(tc1_1, cos_2);
  tcase_add_test(tc1_1, cos_3);
  tcase_add_test(tc1_1, cos_4);
  tcase_add_test(tc1_1, cos_5);
  tcase_add_test(tc1_1, cos_6);
  tcase_add_test(tc1_1, cos_7);
  tcase_add_test(tc1_1, cos_8);
  tcase_add_test(tc1_1, cos_9);
  tcase_add_test(tc1_1, cos_10);
  // TAN
  tcase_add_test(tc1_1, tan_1);
  tcase_add_test(tc1_1, tan_2);
  tcase_add_test(tc1_1, tan_3);
  tcase_add_test(tc1_1, tan_4);
  tcase_add_test(tc1_1, tan_5);
  tcase_add_test(tc1_1, tan_6);
  tcase_add_test(tc1_1, tan_7);
  tcase_add_test(tc1_1, tan_8);
  tcase_add_test(tc1_1, tan_9);
  tcase_add_test(tc1_1, tan_10);
  // ASIN
  tcase_add_test(tc1_1, asin_1);
  tcase_add_test(tc1_1, asin_2);
  tcase_add_test(tc1_1, asin_3);
  tcase_add_test(tc1_1, asin_4);
  tcase_add_test(tc1_1, asin_5);
  tcase_add_test(tc1_1, asin_6);
  tcase_add_test(tc1_1, asin_7);
  tcase_add_test(tc1_1, asin_8);
  tcase_add_test(tc1_1, asin_9);
  tcase_add_test(tc1_1, asin_10);
  // ATAN
  tcase_add_test(tc1_1, atan_1);
  tcase_add_test(tc1_1, atan_2);
  tcase_add_test(tc1_1, atan_3);
  tcase_add_test(tc1_1, atan_4);
  tcase_add_test(tc1_1, atan_5);
  tcase_add_test(tc1_1, atan_6);
  tcase_add_test(tc1_1, atan_7);
  tcase_add_test(tc1_1, atan_8);
  tcase_add_test(tc1_1, atan_9);
  tcase_add_test(tc1_1, atan_10);
  // EXP VLAD
  tcase_add_test(tc1_1, s21_exp_1);
  tcase_add_test(tc1_1, s21_exp_2);
  tcase_add_test(tc1_1, s21_exp_3);
  tcase_add_test(tc1_1, s21_exp_4);
  tcase_add_test(tc1_1, s21_exp_5);
  tcase_add_test(tc1_1, s21_exp_6);
  tcase_add_test(tc1_1, s21_exp_7);
  tcase_add_test(tc1_1, s21_exp_8);
  tcase_add_test(tc1_1, s21_exp_9);
  tcase_add_test(tc1_1, s21_exp_10);
  // ABS VLAD
  tcase_add_test(tc1_1, s21_abs_1);
  tcase_add_test(tc1_1, s21_abs_2);
  tcase_add_test(tc1_1, s21_abs_3);
  tcase_add_test(tc1_1, s21_abs_4);
  tcase_add_test(tc1_1, s21_abs_5);
  tcase_add_test(tc1_1, s21_abs_6);
  tcase_add_test(tc1_1, s21_abs_7);
  tcase_add_test(tc1_1, s21_abs_8);
  tcase_add_test(tc1_1, s21_abs_9);
  tcase_add_test(tc1_1, s21_abs_10);
  // FABS
  tcase_add_test(tc1_1, fabsl_1);
  tcase_add_test(tc1_1, fabsl_2);
  tcase_add_test(tc1_1, fabsl_3);
  tcase_add_test(tc1_1, fabsl_4);
  tcase_add_test(tc1_1, fabsl_5);
  tcase_add_test(tc1_1, fabsl_6);
  tcase_add_test(tc1_1, fabsl_7);
  tcase_add_test(tc1_1, fabsl_8);
  tcase_add_test(tc1_1, fabsl_9);
  tcase_add_test(tc1_1, fabsl_10);
  // LOG
  tcase_add_test(tc1_1, logl_1);
  tcase_add_test(tc1_1, logl_2);
  tcase_add_test(tc1_1, logl_3);
  tcase_add_test(tc1_1, logl_4);
  tcase_add_test(tc1_1, logl_5);
  tcase_add_test(tc1_1, logl_6);
  tcase_add_test(tc1_1, logl_7);
  tcase_add_test(tc1_1, logl_8);
  tcase_add_test(tc1_1, logl_9);
  tcase_add_test(tc1_1, logl_10);
  // SQRT
  tcase_add_test(tc1_1, sqrt_1);
  tcase_add_test(tc1_1, sqrt_2);
  tcase_add_test(tc1_1, sqrt_3);
  tcase_add_test(tc1_1, sqrt_4);
  tcase_add_test(tc1_1, sqrt_5);
  tcase_add_test(tc1_1, sqrt_6);
  tcase_add_test(tc1_1, sqrt_7);
  tcase_add_test(tc1_1, sqrt_8);
  tcase_add_test(tc1_1, sqrt_9);
  tcase_add_test(tc1_1, sqrt_10);
  // POW
  tcase_add_test(tc1_1, powl_1);
  tcase_add_test(tc1_1, powl_2);
  tcase_add_test(tc1_1, powl_3);
  tcase_add_test(tc1_1, powl_4);
  tcase_add_test(tc1_1, powl_5);
  tcase_add_test(tc1_1, powl_6);
  tcase_add_test(tc1_1, powl_7);
  tcase_add_test(tc1_1, powl_8);
  tcase_add_test(tc1_1, powl_9);
  tcase_add_test(tc1_1, powl_10);

  srunner_run_all(sr, CK_ENV);
  nf = srunner_ntests_failed(sr);
  srunner_free(sr);

  return nf == 0 ? 0 : 1;
}
