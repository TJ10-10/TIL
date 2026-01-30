#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void handle_sigint(int sig) {
  printf("\nシグナル %d (SIGINT) を受信しました。\n", sig);
  printf("安全に終了するためにクリーンアップを行っています。...\n");

  exit(0);
}

int main(void) {
  if (signal(SIGINT, handle_sigint) == SIG_ERR) {
    perror("シグナルの登録に失敗しました");
    return 1;
  }

  printf("無限ループを開始します。 Ctrl+C を押してみてください。\n");

  while (1) {
    printf("実行中... (終了するには Ctrl+C)\n");
    sleep(1);
  }

  return 0;
}
