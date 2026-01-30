#include <stdio.h>

int main(void) {
  unsigned char flag = 0;

  printf("初期状態: %d\n", flag);

  flag |= 0x01;
  flag |= 0x04;
  printf("ビットセット後 (1と3ビット目): %d\n", flag);

  if (flag & 0x01) {
    printf("1ビット目はONです。\n");
  }

  unsigned char shifted = 0x01 << 3;
  printf("1を3ビット左シフト: %d\n", shifted);

  flag ^= 0x01;
  printf("1ビット目を反転後: %d\n", flag);

  return 0;
}
