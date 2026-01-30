#include <stdio.h>

int main(void) {
  int *p = NULL;
  printf("デバッグ開始\n");

  *p = 100;

  printf("値: %d\n", *p);
  return 0;
}
