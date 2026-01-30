#include <stdio.h>

int main(void) {
  int age;

  printf("あなたの年齢を入力してください: ");

  if (scanf("%d", &age) != 1) {
    printf("数字を入力してください。\n");
    return 1;
  }

  printf("あなたは現在 %d 歳ですね。\n", age);
  printf("来年は %d 歳になりますね!\n", age + 1);

  return 0;
}
