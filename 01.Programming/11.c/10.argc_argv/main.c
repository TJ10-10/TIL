#include <stdio.h>

/**
 * argc: 引数の個数 (Argument Count)
 * argv: 引数の文字列配列 (Argument Vector)
 */
int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("使用法: %s [名前]\n", argv[0]);
    return 1;
  }

  printf("プログラム名: %s\n", argv[0]);
  printf("こんにちは、%s さん!\n", argv[1]);

  printf("\n--- 全ての引数リスト ---\n");
  for (int i = 0; i < argc; i++) {
    printf("argv[%d]: %s\n", i, argv[i]);
  }

  return 0;
}
