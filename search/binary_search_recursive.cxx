/*****************************************************/
// Recursive binary search
// The idea of binary search is to use the information
// that the array is sorted and reduce the time complexity
// O(Log n)
/*****************************************************/
#include <iostream>
using namespace std;

// Returns location of x
int binary_search(int *arr, int l, int r, int x) {

  if (r >= l) { // Checking an array for emptiness
    int mid = l + (r - l) / 2;

    // If x at the middle 
    if (arr[mid] == x)
      return mid;

    // If x is smaller then mid, it in left subarray
    if (arr[mid] > x)
      return binary_search(arr, l, mid - 1, x);

    // Else x in right subarray 
    return binary_search(arr, mid + 1, r, x);
  }

  // Otherwise x is not in array 
  return -1;
}

int main() {

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int x = 2; // Required element
  int n = sizeof(arr) / sizeof(arr[0]);
  int result = binary_search(arr, 0, n - 1, x);
  cout << "x at index " << result;
}
