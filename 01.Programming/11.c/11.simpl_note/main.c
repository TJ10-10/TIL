#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int id;
  char content[100];
} Note;

int main(void) {
  Note *myNote = (Note *)malloc(sizeof(Note));
  if (myNote == NULL) return 1;

  myNote->id = 1;
  printf("メモを入力してください: ");
  fgets(myNote->content, sizeof(myNote->content), stdin);
  myNote->content[strcspn(myNote->content, "\n")] = 0;

  FILE *fp = fopen("note.txt", "a");
  if (fp != NULL) {
    fprintf(fp, "[ID: %d] %s\n", myNote->id, myNote->content);
    fclose(fp);
    printf("ファイルに保存しました。\n");
  }

  printf("\n--- 現在のメモの内容 ---\n");
  char line[150];
  fp = fopen("note.txt", "r");
  while (fgets(line, sizeof(line), fp)) {
    printf("%s", line);
  }
  fclose(fp);

  free(myNote);
  return 0;
}
