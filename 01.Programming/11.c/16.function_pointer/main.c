#include <stdio.h>

int add(int a, int b) {
  return a + b;
}

int multiply(int a, int b) {
  return a * b;
}

void compute(int x, int y, int (*operation)(int , int)) {
  printf("計算結果: %d\n", operation(x, y));
}

int main(void) {
  int (*f)(int, int);

  f = add;
  printf("f = add のとき: %d\n", f(10, 5));

  f = multiply;
  printf("f = multiply のとき: %d\n", f(10, 5));

  printf("\n--- compute関数経由 ---\n");
  compute(20, 3, add);
  compute(20, 3, multiply);

  return 0;
}
