#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string>

int main(int argc, char *argv[]) {
  // C++11
  std::ifstream ifs("../hello.txt");
  std::ofstream ofs("../hello2.txt");

  // Way 1
  std::string i_fromFile = "";

  while (ifs >> i_fromFile) {
    ofs << i_fromFile << "\n";
  }
  // Way 2
  char c = ifs.get();

  while (ifs.good()) {
    std::cout << c;
    c = ifs.get();
  }
  ifs.close();
  ofs.close();
  return 0;
}
