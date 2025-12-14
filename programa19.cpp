#include <iostream>
#include <string>
// Función recursiva que imprime los caracteres en orden inverso
void imprimirReverso(const std::string& texto, int indice) {
 if (indice < 0) return;
 std::cout << texto[indice]; // Imprime el carácter actual
 imprimirReverso(texto, indice - 1); // Llamada recursiva
}
int main() {
 std::string numero;
 std::cout << "Ingrese un número: ";
 std::cin >> numero;
 std::cout << "\nImprimiendo caracter por caracter en orden inverso:\n";
 imprimirReverso(numero, numero.length() - 1);
 std::cout << std::endl;
 
 std::cout << "\n\nNombre: Alexis Camacho Dorado" << std::endl;
 std::cout << "Grupo: eshmaluguls" << std::endl;
 
 return 0;
}
