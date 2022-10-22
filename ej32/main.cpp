#include <array>
#include <iostream>
#include <string.h>

int main() {
  int opcion, telefono;
  std::string nombre;
  bool userNoExist;

  struct directorio {
    std::string nombre;
    int telefono;
  };
  std::array<directorio, 2> usuarios = {
      {{"Mario Mendoza", 78899632}, {"Luisa Morales", 12457823}}};
  do {
    std::cout << "\n***** DIRECTORIO TELEFÓNICO *****";
    std::cout << "\n1. Búsqueda por nombre.";
    std::cout << "\n2. Busqueda por teléfono.";
    std::cout << "\n3. Salir.";
    std::cout << "\n¿Qué desea hacer ";
    std::cin >> opcion;

    switch (opcion) {
    case 1:
      std::cout << "\nIngrese un nombre: ";
      std::cin.ignore();
      getline(std::cin, nombre);

      userNoExist = true;
      for (const auto &usuario : usuarios) {
        if (nombre.compare(usuario.nombre) == 0) {
          std::cout << "Su teléfono es: " << usuario.telefono;
          userNoExist = false;
        }
      }
      if (userNoExist) {
        std::cout << "No encontrado\n";
      }
      break;
    case 2:
      std::cout << "Ingrese un teléfono: ";
      std::cin >> telefono;
      userNoExist = true;
      for (const auto &usuario : usuarios) {
        if (telefono == usuario.telefono) {
          std::cout << "Pertenece a: " << usuario.nombre;
          userNoExist = false;
        }
      }
      if (userNoExist) {
        std::cout << "No encontrado\n";
      }
      break;
    case 3:
      std::cout << "... \n";
      break;
    default:
      std::cout << "Opción incorrecta!\n";
      break;
    }
  } while (opcion != 3);
}
