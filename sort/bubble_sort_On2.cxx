#include <iostream>

using namespace std;

void swap(int *xp, int *yp) {
  int temp = *xp;
  *xp = *yp;
  *yp=temp;
}

void bubble_sort(int arr[], int n) {

  for (int i = 0; i < n - 1; i++)
    for (int j = 0; j < n - i - 1; j++)
      if (arr[j] > arr[j + 1])
        swap(&arr[j], &arr[j + 1]);
}

void print_arr(int arr[], int n) {
  for (int i = 0; i < n; i++)
    cout << arr[i] << " | ";
}

int main() {

  int arr[] = {75, 44, 323, 23, 22, 2, 222, 67};
  int n = sizeof(arr) / sizeof(arr[0]);
  bubble_sort(arr,n);
  print_arr(arr,n);
}
