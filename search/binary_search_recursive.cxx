// Recursive binary search
#include <iostream>

using namespace std;

int search(int arr[], int l, int r, int x) {

  if (r >= l) {
    int mid = l + (r - l) / 2;

    if (arr[mid] == x)
      return mid;

    if (arr[mid] > x)
      return search(arr, l, mid - 1, x);

    return search(arr, mid + 1, r, x);
  }
  return -1;
}

int main() {

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int x = 2;
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << search(arr, 0, n - 1, x);
}
