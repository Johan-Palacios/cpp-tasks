#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

  float speed;

  cout << "Introduce tu velocidad: \n";
  cin >> speed;

  if (speed > 80) {
    cout << "Reduzca la velocidad !!\n";
  } else {
    cout << "Continúe su viaje \n";
  }
  return 0;
}
