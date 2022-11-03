#include <iostream>
#include <stdio.h>

int main(int argc, char *argv[]) {
  // Se Crea el archivo principal
  FILE *stream;
  // Se crea una variable string para escribir datos con fputc()
  int ch;
  // Los caracteres a escribir en el archivo
  std::string words = "abcdefghijklmnopqrstuvwxyz";
  // Se abre el archivo
  stream = fopen("../file.txt", "w");

  // NOTE: Se verifica si el archivo EXISTE, de lo contrario
  // salir del programa mostrando un error mostrando un error
  if (stream == NULL) {
    perror("Error al abrir el fichero");
    return 0;
  }

  // Se realiza un bucke en el cual se inserta cada una de las palabras
  // al fichero, haciendo en recorrido por indice a @words hasta que se complete
  for (int i = 0;
       (i < sizeof(words)) && ((ch = fputc(words[i], stream)) != EOF); ++i)
    ;
  // Se cierra el archivo
  fclose(stream);

  return 0;
}
