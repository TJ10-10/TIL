#include <stdio.h>
#include <stdarg.h>

/**
 * 渡されたすべての整数の合計を計算する関数
 * @param count 引数の個数
 * @param ... 可変長引数
 */
int sum_all(int count, ...) {
  va_list args;
  int total = 0;

  va_start(args, count);

  for (int i = 0; i < count; i++) {
    total += va_arg(args, int);
  }

  va_end(args);

  return total;
}

int main(void) {
  printf("3つの合計: %d\n", sum_all(3, 10, 20, 30));
  printf("5つの合計: %d\n", sum_all(5, 1, 2, 3, 4, 5));
  printf("1つの合計: %d\n", sum_all(1, 100));

  return 0;
}
