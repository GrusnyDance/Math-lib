#include <stdio.h>
#include <stdlib.h>

int main() {
  int case_number = 0;
  printf("Enter the number of test cases:\n");
  scanf("%d", &case_number);
  FILE *ptr;
  if ((ptr = fopen("test.check", "a")) == NULL) {
    printf("File cannot be opened");
  } else {
    fprintf(ptr, "#include <math.h>\n#define DIFF pow(10, -7)\n\n");
  }
  for (int i = 0; i < case_number; i++) {
    fprintf(ptr, "#test pow%d\n", (i + 1));
    fprintf(ptr, "int num = ;\n");
    fprintf(ptr, "ck_assert_int_eq((s21_pow(num) - pow(num)) <= DIFF, 1)\n\n");
  }
  fclose(ptr);
  system("checkmk clean_mode=1 test.check > test.c");
  return 0;
}