#include <iostream>

void imprimirHastaUno(int n) {
    // caso base
    if (n <= 0) {
        return;
    }

    std::cout << n << " ";
    imprimirHastaUno(n - 1);
}

int main() {
    int numero = 5;
    std::cout << "imprimiendo desde " << numero << " hasta 1:\n";
    imprimirHastaUno(numero);
    std::cout << std::endl;
    
    std::cout << "\n\nNombre: Alexis Camacho Dorado" << std::endl;
    std::cout << "Grupo: eshmaluguls" << std::endl;

    
    return 0;
}
