#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  int *array;

  printf("いくつの要素を確保しますか?: ");
  if (scanf("%d", &n) != 1) return 1;

  array = (int *)malloc(n * sizeof(int));

  if (array == NULL) {
    printf("メモリの確保に失敗しました\n");
    return 1;
  }

  for (int i = 0; i < n; i++) {
    array[i] = i * 10;
  }

  printf("%d個の要素をメモリに確保し、代入しました。\n", n);
  for (int i = 0; i < n; i++) {
    printf("array[%d] = %d\n", i, array[i]);
  }

  free(array);
  printf("メモリを解放しました。\n");

  return 0;
}
