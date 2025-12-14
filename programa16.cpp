#include <iostream>
#include <vector>
// Suma los elementos de 'arr' desde el índice 'idx' hasta el final
int sumarArreglo(const std::vector<int>& arr, int idx) {
 // Caso Base: Si el índice está fuera de los límites del vector,
 // significa que no hay más elementos que sumar.
 if (idx >= arr.size()) {
 return 0;
 }
 // Paso Recursivo: Suma el elemento actual (arr[idx])
 // con la suma del resto del arreglo (desde idx + 1).
 else {
 return arr[idx] + sumarArreglo(arr, idx + 1);
 }
}
int main() {
 std::vector<int> misNumeros = {10, 5, 15, 20, 50}; // Suma = 100
 int sumaTotal = sumarArreglo(misNumeros, 0);
 // Empezar desde el índice 0
 std::cout << "La suma recursiva del arreglo es: " << sumaTotal << std::endl;
 
 std::cout << "\n\nGrupo: eshmaluguls" << std::endl;
 std::cout << "Integrantes:" << std::endl;
 std::cout << "Juan David Denker Ortega" << std::endl;
 std::cout << "J. Leonardo Parada Beltran" << std::endl;
 std::cout << "Alexis Camacho Dorado" << std::endl;

 
 return 0;
}
