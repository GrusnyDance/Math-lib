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
  scanf("%s", &test_func);
  printf("Укажи имя ОРИГИНАЛЬНОЙ функции:\n");
  scanf("%s", &original_func);
  printf("Задай НИЖНЮЮ границу тестовых значений:\n");
  scanf("%Lf", &floor);
  printf("Задай ВЕРХНЮЮ границу тестовых значений:\n");
  scanf("%Lf", &ceil);
  long double num;
  int sign;
  srand(time(NULL));

  FILE *ptr;
  if ((ptr = fopen("test.check", "a")) == NULL) {
    printf("File cannot be opened");
  } else {
    fprintf(ptr, "#include <math.h>\n#define DIFF pow(10, -7)\n\n");
  }
  for (int i = 0; i < case_number; i++) {
    num = floor + ((long double)rand() / (RAND_MAX / (ceil - floor)));
    // if (ceil < 0 && floor < 0) {
    //   sign = 1;
    // } else if (ceil < 0 || floor < 0) {
    //   sign = (rand() % 2);
    // } else {
    //   sign = 0;
    // }
    // if (sign) num *= -1;
    fprintf(ptr, "#test %s%d\n", original_func, (i + 1));
    fprintf(ptr, "long double num = %Lf;\n", num);
    fprintf(ptr, "ck_assert_int_eq((%s(num) - %s(num)) <= DIFF, 1)\n\n",
            test_func, original_func);
  }
  fclose(ptr);
  system("checkmk clean_mode=1 test.check > test.c");
  return 0;
}