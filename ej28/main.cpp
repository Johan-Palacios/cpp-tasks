#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int numbers[] = {1, 2, 7, 9, 0};
  for (int j = 0; j < 4; j++) {
    for (int i = 0; i < 4; i++) {
      if (numbers[i] < numbers[i + 1]) {
        int newMaxNumber = numbers[i];
        numbers[i] = numbers[i + 1];
        numbers[i + 1] = newMaxNumber;
      }
    }
  }
  for (int i = 0; i < 4; i++) {
    cout << numbers[i] << ",";
  }
  return 0;
}
