#include <iostream>

int BinarySearch(int* a, int n, int l, int r, int target) {
  if (l > r) {
    return -1;
  }
  int mid = (l + r) / 2;
  if (a[mid] == target) {
    return mid + 1;  // only for 1-indexed output
  }
  if (a[mid] < target) {
    return BinarySearch(a, n, mid + 1, r, target);
  }
  return BinarySearch(a, n, l, mid - 1, target);
}

int main() {
  int n;
  std::cin >> n;
  int* a = new int[n];
  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
  }
  int target;
  std::cin >> target;
  std::cout << BinarySearch(a, n, 0, n - 1, target) << '\n';
  delete[] a;
}
