#include <array>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  // // Escribir en archivos
  // std::ifstream ifs("../hello.txt");
  // std::ofstream ofs("../hello2.txt");
  // std::string i_fromFile = "";

  // while (ifs >> i_fromFile) {
  //   ofs << i_fromFile << "\n";
  // }
  // // Way 2
  // char c = ifs.get();

  // while (ifs.good()) {
  //   std::cout << c;
  //   c = ifs.get();
  // }
  // ifs.close();
  // ofs.close();

  // Variable para leer el archivo
  // std::string line;
  // // Abrir el archo
  // std::ifstream file("../example.txt");
  // // Error si se falla al abrir el archivo
  // if (!file.is_open()) {
  //   std::cout << "Error";
  //   exit(1);
  // }
  // // Si se puede leer una línea mostrarla en pantalla
  // while (file >> line) {
  //   std::cout << line << "\n";
  // }
  // file.close();
  // return 0;
  // Se abre el archivo
  std::ofstream file("../writeexample.txt");
  // Si falla al abrir se cierra
  if (!file.is_open()) {
    std::cout << "Error";
    std::exit(1);
  }
  // Se crea un array de nombres
  std::array<std::string, 4> names = {"Hola", "Escribiendo", "En", "Archivo"};
  // Se escribe en el archivo el contenido del array
  for (std::string name : names) {
    file << name << "\n";
  }
  return 0;
}
