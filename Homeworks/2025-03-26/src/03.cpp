#include <iostream>

void Swap(int& a, int& b) {
  int c = a;
  a = b;
  b = c;
}

void BubbleSort(int a[], int n) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n - 1; ++j) {
      if (a[j] > a[j + 1]) {
        Swap(a[j], a[j + 1]);
      }
    }
  }
}

int main() {
  int n;
  std::cin >> n;
  int* a = new int[n];
  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
  }
  BubbleSort(a, n);
  for (int i = 0; i < n; ++i) {
    std::cout << a[i] << " \n"[i == n - 1];
  }
  delete[] a;
}
