#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int *items;
  int capacity;
  int size;
} Vector;

Vector* createVector(int initialCapacity) {
  Vector *v = (Vector *)malloc(sizeof(Vector));
  v->capacity = initialCapacity;
  v->size = 0;
  v->items = (int *)malloc(sizeof(int) * v->capacity);
  return v;
}

void pushBack(Vector *v, int value) {
  if (v->size == v->capacity) {
    v->capacity *= 2;
    v->items = (int *)realloc(v->items, sizeof(int) * v->capacity);
    printf("--- Capacity increased to %d ---\n", v->capacity);
  }
  v->items[v->size++] = value;
}

int main(void) {
  Vector *v = createVector(2);

  pushBack(v, 10);
  pushBack(v, 20);
  pushBack(v, 30);
  pushBack(v, 40);
  pushBack(v, 50);

  printf("Vector elements: ");
  for (int i = 0; i < v->size; i++) {
    printf("%d ", v->items[i]);
  }
  printf("\nFinal Size: %d, Capacity: %d\n", v->size, v->capacity);

  free(v->items);
  free(v);
  return 0;
}
