#include <stdio.h>

typedef union {
  int i;
  float f;
  char str[4];
} Data;

typedef struct {
  unsigned char power : 1;
  unsigned char mode  : 2;
  unsigned char level : 5;
} DeviceStatus;

int main(void) {
  Data d;
  d.i = 10;
  printf("d.i = %d\n", d.i);

  d.f = 3.14f;
  printf("d.f = %.2f\n", d.f);
  printf("d.i (上書き後) = %d (意味不明な値になる)\n", d.i);
  printf("Size of union: %lu bytes\n\n", sizeof(Data));

  DeviceStatus status = {1, 3, 15};
  printf("Device Status:\n");
  printf("Power: %d\n", status.power);
  printf("Mode : %d\n", status.mode);
  printf("Level: %d\n", status.level);
  printf("Size of struct: %lu byte\n", sizeof(DeviceStatus));

  return 0;
}

