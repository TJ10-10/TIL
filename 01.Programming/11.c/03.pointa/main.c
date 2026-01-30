#include <stdio.h>

int main(void) {
  int num = 42;
  int *p = &num;

  printf("変数 num の値: %d\n", num);
  printf("変数 num の場所 (アドレス) : %p\n", (void *)&num);
  printf("ポインタ p が持っている値 (アドレス) : %p\n", (void *)p);

  *p = 100;

  printf("書き換え後の num の値: %d\n", num);

  return 0;
}
