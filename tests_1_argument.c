#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int case_number = 0;
  char test_func[100];
  char original_func[100];
  long double floor = 0;
  long double ceil = 0;

  printf("Задай количество тестовых кейсов:\n");
  scanf("%d", &case_number);
  printf("Укажи имя СВОЕЙ функции:\n");
  scanf("%s", test_func);
  printf("Укажи имя ОРИГИНАЛЬНОЙ функции:\n");
  scanf("%s", original_func);
  printf("Задай НИЖНЮЮ границу тестовых значений:\n");
  scanf("%Lf", &floor);
  printf("Задай ВЕРХНЮЮ границу тестовых значений:\n");
  scanf("%Lf", &ceil);
  long double num;
  srand(time(NULL));

  FILE *ptr;
  if ((ptr = fopen("test.check", "a")) == NULL) {
    printf("File cannot be opened");
  } else {
    fprintf(ptr, "#include \"s21_math.h\"\n");
    fprintf(ptr, "#include <math.h>\n#define DIFF pow(10, -7)\n\n");
  }
  for (int i = 0; i < case_number; i++) {
    num = floor + ((long double)rand() / (RAND_MAX / (ceil - floor)));
    fprintf(ptr, "#test %s_%d\n", original_func, (i + 1));
    fprintf(ptr, "long double num = %Lf;\n", num);
    fprintf(ptr, "if (isnan((double)(%s(num)))) {\n", test_func);
    fprintf(ptr, "    ck_assert_int_eq((isnan(%s(num)) != 0), 1);\n",
            original_func);
    fprintf(ptr, "} else {\n");
    fprintf(ptr, "    long double condition = (%s(num) - %s(num));\n",
            test_func, original_func);
    fprintf(ptr,
            "    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);\n",
            test_func, original_func);
    fprintf(ptr, "}\n");
  }
  fclose(ptr);
  system("checkmk clean_mode=1 test.check > test.c");
  return 0;
}