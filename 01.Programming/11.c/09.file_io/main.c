#include <stdio.h>
int main(void) {
  FILE *fp;
  char buffer[255];

  fp = fopen("test.txt", "w");
  if (fp == NULL) {
    printf("ファイルを開けませんでした。\n");
    return 1;
  }

  fprintf(fp, "Hello, C File I/O!\n");
  fprintf(fp, "This is step 09.\n");
  fclose(fp);
  printf("ファイル 'test.txt' に書き込みました。\n");

  fp = fopen("test.txt", "r");
  if (fp == NULL) {
    printf("ファイルが見つかりません。\n");
    return 1;
  }

  printf("\n--- ファイルの内容を表示 ---\n");
  while (fgets(buffer, 255, fp) != NULL) {
    printf("%s", buffer);
  }
  fclose(fp);

  return 0;
}
