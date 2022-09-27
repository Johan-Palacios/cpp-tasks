#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  float nota;

  cout << "Introduce la nota:"
       << "\n";
  cin >> nota;

  if (nota >= 61) {
    cout << "Aprobaste el ciclo con: " << nota << "\n";
  } else {
    cout << "Reprobaste el ciclo con: " << nota << "\n";
  }
  return 0;
}
