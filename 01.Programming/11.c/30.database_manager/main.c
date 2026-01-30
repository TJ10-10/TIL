#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int id;
  char name[50];
  int score;
} Record;

typedef struct {
  Record *data;
  int size;
  int capacity;
} DB;

DB* init_db(int cap) {
  DB *db = malloc(sizeof(DB));
  db->capacity = cap;
  db->size = 0;
  db->data = malloc(sizeof(Record) * cap);
  return db;
}

void add_record(DB *db, int id, const char *name, int score) {
  if (db->size >= db->capacity) {
    db->capacity *= 2;
    db->data = realloc(db->data, sizeof(Record) * db->capacity);
  }
  db->data[db->size].id = id;
  strncpy(db->data[db->size].name, name, 49);
  db->data[db->size].score = score;
  db->size++;
}

void save_db(DB *db, const char *filename) {
  FILE *fp = fopen(filename, "wb");
  if (!fp) return;
  fwrite(&db->size, sizeof(int), 1, fp);
  fwrite(db->data, sizeof(Record), db->size, fp);
  fclose(fp);
  printf("DBを %s に保存しました。\n", filename);
}

void show_db(DB *db) {
  printf("\n--- Current DB Status ---\n");
  for (int i = 0; i < db->size; i++) {
    printf("ID: %03d | Name: %-10s | Score: %d\n",
        db->data[i].id, db->data[i].name, db->data[i].score);
  }
}

int main(int argc, char *argv[]) {
  DB *my_db = init_db(2);
  char *filename = "database.bin";

  if (argc > 1) filename = argv[1];

  add_record(my_db, 1, "Alice", 95);
  add_record(my_db, 2, "Bob", 82);
  add_record(my_db, 3, "Charlie", 88);

  show_db(my_db);
  save_db(my_db, filename);

  free(my_db->data);
  free(my_db);
  return 0;
}
