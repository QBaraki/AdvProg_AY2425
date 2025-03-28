// Đề bài không định nghĩa cụ thể các ô xung quanh là các ô như thế nào...
// Có thể là 8 ô xung quanh sao cho abs(x0 - x) <= 1 và abs(y0 - y) <= 1 hoặc là 4 ô xung quanh tạo thành dấu cộng...
#include <iostream>
#include <vector>

int main() {
  int n, m, k, q;
  std::cin >> n >> m >> k >> q;
  std::vector<std::vector<int>> a(n + 2, std::vector<int>(m + 2, 0));
  while (k--) {
    int x, y, v;
    std::cin >> x >> y >> v;
    a[x][y] = v;
  }
  while (q--) {
    int x, y;
    std::cin >> x >> y;
    std::cout << a[x - 1][y - 1] + a[x - 1][y] + a[x - 1][y + 1]
        + a[x][y - 1] + a[x][y] + a[x][y + 1]
        + a[x + 1][y - 1] + a[x + 1][y] + a[x + 1][y + 1] << '\n';
    // std::cout << a[x - 1][y]
    //     + a[x][y - 1] + a[x][y] + a[x][y + 1]
    //     + a[x + 1][y] << '\n';
  }
}
