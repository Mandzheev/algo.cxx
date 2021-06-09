/*****************************************************/
// Recursive binary search
// The idea of binary search is to use the information
// that the array is sorted and reduce the time complexity
// O(Log n)
/*****************************************************/
#include <iostream>
using namespace std;

// Returns location of x
int binary_search(int arr[], int l, int r, int x) {

  while (l <= r) { // Checking an array for emptiness
    int mid = l + (r - l) / 2;

    // If x at the middle
    if (arr[mid] == x)
      return mid;

    // If x greater, ignore left half
    if (arr[mid] < x)
      l = mid + 1;

    // If x is smaller, ignore right half
    else
      r = mid - 1;
  }

  // Otherwise x is not in array
  return -1;
}

int main() {
  int arr[] = {3, 4, 5, 6, 7, 8, 33};
  int x = 5; // Required element
  int n = sizeof(arr) / sizeof(arr[0]);
  int result = binary_search(arr, 0, n - 1, x);
  cout << "x at index " << result;
}
