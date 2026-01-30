#include <stdio.h>

void callByValue(int n) {
  n = n + 10;
}

void callByReference(int *p) {
  *p = *p + 10;
}

int main(void) {
  int score = 50;

  printf("初期状態: %d\n", score);

  callByValue(score);
  printf("値渡し後: %d (変化なし)\n", score);

  callByReference(&score);
  printf("参照渡し後: %d (値が変わった!)\n", score);

  return 0;
}
