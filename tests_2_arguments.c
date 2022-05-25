#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int case_number = 0;
  char test_func[100];
  char original_func[100];
  long double floor1 = 0;
  long double ceil1 = 0;
  long double floor2 = 0;
  long double ceil2 = 0;

  printf("Задай количество тестовых кейсов:\n");
  scanf("%d", &case_number);
  printf("Укажи имя СВОЕЙ функции:\n");
  scanf("%s", test_func);
  printf("Укажи имя ОРИГИНАЛЬНОЙ функции:\n");
  scanf("%s", original_func);
  printf("Задай НИЖНЮЮ границу 1го аргумента:\n");
  scanf("%Lf", &floor1);
  printf("Задай ВЕРХНЮЮ границу 1го аргумента:\n");
  scanf("%Lf", &ceil1);
  printf("Задай НИЖНЮЮ границу 2го аргумента:\n");
  scanf("%Lf", &floor2);
  printf("Задай ВЕРХНЮЮ границу 2го аргумента:\n");
  scanf("%Lf", &ceil2);
  long double num1;
  long double num2;
  srand(time(NULL));

  FILE *ptr;
  if ((ptr = fopen("test.check", "a")) == NULL) {
    printf("File cannot be opened");
  } else {
    fprintf(ptr, "#include \"s21_math.h\"\n");
    fprintf(ptr, "#include <math.h>\n#define DIFF pow(10, -7)\n\n");
  }
  for (int i = 0; i < case_number; i++) {
    num1 = floor1 + ((long double)rand() / (RAND_MAX / (ceil1 - floor1)));
    num2 = floor2 + ((long double)rand() / (RAND_MAX / (ceil2 - floor2)));
    fprintf(ptr, "#test %s_%d\n", original_func, (i + 1));
    fprintf(ptr, "long double num1 = %Lf;\n", num1);
    fprintf(ptr, "long double num2 = %Lf;\n", num2);
    fprintf(ptr, "long double condition = (%s(num1, num2) - %s(num1, num2));\n",
            test_func, original_func);
    fprintf(ptr, "if (isnan((double)(%s(num1, num2)))) {\n", test_func);
    fprintf(ptr, "    ck_assert_int_eq((isnan(%s(num1, num2)) != 0), 1);\n",
            original_func);
    fprintf(ptr, "} else\n");
    fprintf(ptr,
            "    ck_assert_int_eq((condition <= DIFF && condition >= -DIFF), "
            "1);\n");
  }
  fclose(ptr);
  system("checkmk clean_mode=1 test.check > test.c");
  return 0;
}