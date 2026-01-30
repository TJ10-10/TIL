#include <stdio.h>

/**
 * 階乗を計算する再帰関数
 * n! = n * (n-1) * (n-2) * ... * 1
 */
long factorial(int n) {
  if (n <= 1) {
    return 1;
  }

  return n * factorial(n - 1);
}

int main(void) {
  int num = 5;
  printf("%d の階乗は %ld です。\n", num, factorial(num));

  return 0;
}
