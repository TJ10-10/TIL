#include <stdio.h>

/**
 * 二分探索関数
 * @param arr ソート済みの配列
 * @param size 配列のサイズ
 * @param target 探したい値
 * @return 見つかった場合はインデックス、見つからない場合は -1
 */
int binarySearch(int arr[], int size, int target) {
  int left = 0;
  int right = size - 1;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
      return mid;
    }

    if (arr[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1;
}

int main(void) {
  int data[] = {10, 23, 35, 47, 72, 81, 95};
  int n = sizeof(data) / sizeof(data[0]);
  int target = 72;

  int result = binarySearch(data, n, target);

  if (result != -1) {
    printf("値 %d はインデックス %d に見つかりました。\n", target, result);
  } else {
    printf("値 %d は見つかりませんでした。\n", target);
  }

  return 0;
}
