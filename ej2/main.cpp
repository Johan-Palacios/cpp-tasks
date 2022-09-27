#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  float salary;

  cout << "Introduce tu salario: ";

  cin >> salary;

  if (salary < 1000) {
    salary *= 1.15;
  }

  cout << "Tu nuevo salario es: " << salary << "\n";
  return 0;
}
