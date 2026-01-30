#include <stdio.h>
#include "math_utils.h"

int main(void) {
  int x = 10, y = 20;
  printf("%d + %d = %d\n", x, y, add(x, y));
  return 0;
}
