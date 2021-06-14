#include <iostream>
#include <vector>
using namespace std;

// heapify a subtree rooted
void heapify(vector<int> arr, int n, int i) {
  int large = i;     // root
  int l = 2 * i + 1; // left
  int r = 2 * i + 2; // right

  if (l < n && arr[l] > arr[large])
    large = l;

  if (r < n && arr[r] > arr[large])
    large = r;

  if (large != i) {
    swap(arr[i], arr[large]);

    // Recursively heapify the affected sub-tree
    heapify(arr, n, large);
  }
}

void heapSort(vector<int> arr, int n) {
  // build heap
  for (int i = n / 2 - 1; i >= 0; i--)
    heapify(arr, n, i);

  // one by one extract an element from heap
  for (int i = n - 1; i > 0; i--) {

    swap(arr[0], arr[i]);

    heapify(arr, i, 0);
  }
}

void print(vector<int> arr, int n) {
  for (int i = 0; i < n; ++i)
    cout << arr[i] << " ";
  cout << "\n";
}

int main() {
  vector<int> arr{12, 2, 1, 4, 5, 44};
  int n = arr.size();
  heapSort(arr, n);
  print(arr, n);
  cout<<n;
}
