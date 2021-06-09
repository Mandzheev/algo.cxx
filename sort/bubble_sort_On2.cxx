/*************************************************
 *  Time: Worst: n^2
 *         Best: n
 *
 * Extra space: O(1)
 *
 * Stable: Yes
 ************************************************/

#include <iostream>

using namespace std;

void swap(int *xp, int *yp) {
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

// An optimized version of Bubble Sort
void bubble_sort(int arr[], int n) {

  bool swapped;
  for (int i = 0; i < n - 1; i++) {

    swapped = false;
    for (int j = 0; j < n - i - 1; j++) {

      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
        swapped = true;
      }
    }
    // If no two elements were swapped by inner loop, then break
    if (swapped == false)
      break;
  }
}

void print_arr(int arr[], int n) {
  for (int i = 0; i < n; i++)
    cout << arr[i] << " | ";
}

int main() {

  int arr[] = {75, 44, 323, 23, 22, 2, 222, 67};
  int n = sizeof(arr) / sizeof(arr[0]);
  bubble_sort(arr, n);
  print_arr(arr, n);
}
