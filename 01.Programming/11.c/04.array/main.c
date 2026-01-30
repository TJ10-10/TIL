#include <stdio.h>

int main(void) {
  int numbers[3] = {10, 20, 30};

  int *ptr = numbers;

  printf("配列の各要素の値をポインタで表示:\n");

  for (int i = 0; i < 3; i++) {
    printf("Index %d: Address = %p, Value = %d\n", i, (void *)(ptr + i), *(ptr + i));
  }

  printf("\nポインタを配列のように扱う:\n");
  printf("ptr[1] の値: %d\n", ptr[1]);

  return 0;
}
