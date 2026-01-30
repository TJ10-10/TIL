#include <stdio.h>
#include <string.h>

struct Student {
  char name[50];
  int score;
};

int main(void) {
  struct Student s1;

  strcpy(s1.name, "Sato");
  s1.score = 85;

  struct Student *ptr = &s1;

  printf("--- ドット演算子 (.) でアクセス ---\n");
  printf("Name: %s, Score: %d\n", s1.name, s1.score);

  printf("\n--- アロー演算子 (->) でアクセス ---\n");
  printf("Name: %s, Score: %d\n", ptr->name, ptr->score);

  ptr->score = 95;
  printf("\n更新後のスコア: %d\n", s1.score);

  return 0;
}

