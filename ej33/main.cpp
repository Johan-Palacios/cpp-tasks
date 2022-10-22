#include <algorithm>
#include <array>
#include <cstdio>
#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<int> vector1 = {1, 2, 3, 5};
  const int n = 4;
  std::array<int, n> arry = {100, 22, 4, 5};
  std::sort(arry.begin(), arry.end());
  for (const auto s : arry) {
    std::cout << s << " ";
    std::cout << &s << "\n";
  }
  for (const auto &s : arry) {
    std::cout << s << " ";
    std::cout << &s << "\n";
  }
  for (const auto &s : arry) {
    std::cout << s << " ";
    std::cout << &s << "\n";
  }
  return 0;
}
