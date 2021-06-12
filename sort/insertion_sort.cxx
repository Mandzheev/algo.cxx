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

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i]; // current element
    int j = i - 1;    // previous

    /* Move elements of arr[0..i-1], that are
    greater than key, to one position ahead
    of their current position */
    while (j >= 0 && arr[j] > key) {
      swap(&arr[j], &arr[j + 1]);
      j=j-1;
    }
  }
}
void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main() {
  int arr[] = {12, 11, 13, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);

  insertionSort(arr, n);
  printArray(arr, n);
}
