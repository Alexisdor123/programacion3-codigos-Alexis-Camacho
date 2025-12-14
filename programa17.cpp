#include <vector>
#include <iostream>

// Función iterativa usando un bucle 'for'
int sumarArregloIterativo(const std::vector<int>& arr) {
    int suma = 0;
    
    // Recorre todos los elementos del arreglo de principio a fin
    for (int elemento : arr) {
        suma += elemento; // Acumula la suma
    }
    
    return suma;
}

int main() {
    std::vector<int> misNumeros = {10, 5, 15, 20, 50}; 
    int sumaTotal = sumarArregloIterativo(misNumeros);
    
    std::cout << "Suma Iterativa: " << sumaTotal << std::endl;
    
    
    std::cout << "\n\nGrupo: eshmaluguls" << std::endl;
   std::cout << "Integrantes:" << std::endl;
   std::cout << "Juan David Denker Ortega" << std::endl;
   std::cout << "J. Leonardo Parada Beltran" << std::endl;
   std::cout << "Alexis Camacho Dorado" << std::endl;

    
    return 0;
}
