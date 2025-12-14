#include <iostream>

int productoHastaN(int n) {
    if (n <= 1) { 
        return 1;
    }

    return n * productoHastaN(n - 1);
}

int main() {
    int numero = 5;
    // Cálculo: 5 * 4 * 3 * 2 * 1 = 120
    std::cout << "El producto de 1 hasta " << numero << " es:\n";
    long long resultado = productoHastaN(numero);
    std::cout << resultado << std::endl; // Salida: 120
    
    std::cout << "\n\nNombre: Alexis Camacho Dorado" << std::endl;
    std::cout << "Grupo: eshmaluguls" << std::endl;
    
    return 0;
}
