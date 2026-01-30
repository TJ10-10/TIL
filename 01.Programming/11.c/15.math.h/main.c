#include <stdio.h>
#include <math.h>

int main(void) {
  double x = 16.0;
  double result = sqrt(x);

  printf("%.1f の平方根は %.1f です。\n", x, result);
  printf("2 の 10乗は %.1f です。\n", pow(2.0, 10.0));

  return 0;
}
