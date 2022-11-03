#include <array>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  struct persona {
    std::string nombre;
    int edad;
    float altura;
  };
  std::array<persona, 2> personas = {
      {{"Emilia Luginica", 18, 1.60}, {"Rem", 20, 1.64}}};
  for (const auto &individuo : personas) {
    std::cout << "Nombre: " << individuo.nombre << " Edad: " << individuo.edad
              << " Altura: " << individuo.altura << "\n";
  }
  return 0;
}
