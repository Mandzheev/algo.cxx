/*************************************************
 *  Time: Worst: n^2
 *       Average: n^2
 *
 * Extra space: O(1)
 *
 * Stable: Not(defalt case), but it can be made
 ************************************************/

#include <iostream>

using namespace std;

void swap(int *xp, int *yp) {
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void selection_sort(int arr[], int n) {
  int i, j, min;

  for (i = 0; i < n - 1; i++) {

    // Find the minimum element in unsorted array
    min = i;
    for (j = i + 1; j < n; j++)

      if (arr[j] < arr[min])
        min = j;

    // Swap the found min element with the first element
    swap(&arr[min], &arr[i]);
  }
}

void print_arr(int arr[], int n) {
  for (int i = 0; i < n; i++)
    cout << arr[i] << " | ";
}

int main() {

  int arr[] = {22, 33, 23, 222, 54, 8};
  int n = sizeof(arr) / sizeof(arr[0]);
  selection_sort(arr, n);
  print_arr(arr, n);
}
