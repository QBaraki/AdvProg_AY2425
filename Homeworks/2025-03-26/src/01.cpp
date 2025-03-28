#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int* a = new int[n];
  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
  }
  int k;
  std::cin >> k;
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (a[i] + a[j] == k) {
        std::cout << i + 1 << ' ' << j + 1 << '\n';
      }
    }
  }
  delete[] a;
  return 0;
}
