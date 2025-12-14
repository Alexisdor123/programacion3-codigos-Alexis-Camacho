#include <iostream>

int sumarNumerosHasta(int n) {
    // 1. Caso Base
    if (n <= 0) {
        return 0;
    }

    // 2. Paso Recursivo
    return n + sumarNumerosHasta(n - 1);
}

int main() {
    int numero = 5;
    // 5 + 4 + 3 + 2 + 1 = 15
    std::cout << "La suma de 1 hasta " << numero << " es:\n";
    int resultado = sumarNumerosHasta(numero);
    std::cout << resultado << std::endl; // Salida: 15
    
    std::cout << "\n\nNombre: Alexis Camacho Dorado" << std::endl;
    std::cout << "Grupo: eshmaluguls" << std::endl;
    
    return 0;
}
