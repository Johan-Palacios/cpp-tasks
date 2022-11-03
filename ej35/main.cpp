#include <iostream>
#include <stdio.h>

int main(int argc, char *argv[]) {
  // Se Crea el archivo principal
  FILE *fp;
  // Se crea una variable string para leer los datos con fgetc()
  std::string c;

  // Se abre el archivo
  fp = fopen("../file.txt", "r");

  // NOTE: Se verifica si el archivo EXISTE, de lo contrario
  // salir del programa mostrando un error mostrando un error
  if (fp == NULL) {
    perror("Error al abrir el fichero");
    return 0;
  }
  do {
    // Se lee cada línea del archivo
    c = fgetc(fp);
    // Indica si se llego al final del fichero, para finalizar
    if (feof(fp)) {
      break;
    }
    std::cout << c;
  } while (true);

  // Cerrar
  fclose(fp);
  return 0;
}
