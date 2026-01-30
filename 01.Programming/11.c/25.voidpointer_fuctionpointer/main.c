#include <stdio.h>
#include <string.h>

typedef int (*compare_func)(const void *, const void *);

void generic_sort(void *base, size_t num, size_t size, compare_func cmp) {
  char temp[size];
  char *arr = (char *)base;

  for (size_t i = 0; i < num - 1; i++) {
    for (size_t j = 0; j < num - i -1; j++) {
      if (cmp(arr + j * size, arr + (j + 1) * size) > 0) {
        memcpy(temp, arr + j * size, size);
        memcpy(arr + j * size, arr + (j + 1) * size, size);
        memcpy(arr + (j + 1) * size, temp, size);
      }
    }
  }
}
int compare_ints(const void *a, const void *b) {
  return (*(int *)a - *(int *)b);
}

int main(void) {
  int data[] = {45, 12, 89, 3, 27};
  size_t n = sizeof(data) / sizeof(data[0]);

  printf("ソート前: ");
  for (size_t i = 0; i < n; i++) printf("%d ", data[i]);

  generic_sort(data, n, sizeof(int), compare_ints);

  printf("\nソート後: ");
  for (size_t i = 0; i < n; i++) printf("%d ", data[i]);
  printf("\n");

  return 0;
}
