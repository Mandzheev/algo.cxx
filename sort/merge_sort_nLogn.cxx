#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
  int n1 = m - l + 1;
  int n2 = r - m;

  // temp arrays
  int L[n1], R[n2];

  // copy data to temp arrays
  for (int i = 0; i < n1; i++)
    L[i] = arr[l + i];

  for (int j = 0; j < n2; j++)
    R[j] = arr[m + 1 + j];

  int i = 0, j = 0, k = l;

  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

void merge_sort(int arr[], int l, int r) {
  if (l >= r) {
    return;
  }
  int m = l + (r - l) / 2;
merge_sort(arr, l, m);
  merge_sort(arr, m + 1, r);
  merge(arr, l, m, r);
}

void print_array(int A[], int size) {
    for(int i= 0;i<size;i++)
        cout<<A[i] << " | ";
}
int main() {

  int arr[] = {4, 5, 8, 34, 1, 3, 44, 56, 9};
  int arr_size = sizeof(arr) / sizeof(arr[0]);

  merge_sort(arr,0,arr_size-1);
  print_array(arr,arr_size);
}
