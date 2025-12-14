#include <iostream>
long long factorial(int n) {
std::cout << "Calculando factorial(" << n << ")..." << std::endl;
// Caso Base
if (n == 0 || n == 1) {
 std::cout << " factorial(" << n << ") -> Caso Base! Retorna 1." << std::endl;
 return 1;
 }
 // Paso Recursivo
 else {
 std::cout << " factorial(" << n << ") -> Paso Recursivo. Llama a factorial(" << n - 1 << ")." << std::endl;
long long resultadoRecursion = factorial(n - 1); // ¡Auto-llamada!
 long long resultadoFinal = n * resultadoRecursion;
 std::cout << " factorial(" << n << ") -> Retornando " << n << " * "
 << resultadoRecursion << " = " << resultadoFinal << std::endl;
 return resultadoFinal;
 }
}
int main() {
 int numero = 4; // Probemos con 4!
 std::cout << "Iniciando calculo del factorial de " << numero << "." << std::endl;
 long long resultado = factorial(numero);
 std::cout << "\nEl factorial de " << numero << " es: " << resultado << std::endl;
 
 std::cout << "\n\nNombre: Alexis Camacho Dorado" << std::endl;
 std::cout << "Grupo: eshmaluguls" << std::endl;


 return 0;
}
