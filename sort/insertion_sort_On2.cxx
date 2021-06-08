#include <iostream>

using namespace std;

void swap(int *xp, int *yp) {
  int temp = *xp;
  *yp = *xp;
  *yp = temp;
}

void insertio_sort(int *arr, int *n) {
  for (int *i = arr + 1; i < n; i++) {
    int *j = i;
    while (j > arr && *(j - 1) > *j) {
      swap(*(j - 1), *j);
      j--;
    }
  }
}

void print_a(int arr[], int n) {
  for (int i; i < n; i++)
    cout << arr[i];
}

int main() {

  int arr[] = {2, 1, 21, 434, 6, 7, 43, 11};
  int n = sizeof(arr) / sizeof(arr[0]);
  insertio_sort(arr, &n);
  print_a(arr,n);
}
