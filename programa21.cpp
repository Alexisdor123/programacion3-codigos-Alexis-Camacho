#include <iostream>

int maximo_comun_divisor(int a, int b) {
    // 1. CASO BASE: Si b es 0, el MCD es a.
    if (b == 0) {
        return a;
    }

    // 2. PASO RECURSIVO: 
    // Llamamos a la función con el segundo número (b) y el resto de la división (a % b).
    return maximo_comun_divisor(b, a % b);
}

int main() {
    int num1 = 48;
    int num2 = 18;
    
    std::cout << "Maximo Comun Divisor (MCD)\n";
    
    int resultado = maximo_comun_divisor(num1, num2);
    
    std::cout << "El MCD de " << num1 << " y " << num2 << " es: " << resultado << std::endl;
    
    // Ejemplo de un problema más complejo: MCD(270, 192) = 6
    num1 = 270;
    num2 = 192;
    resultado = maximo_comun_divisor(num1, num2);
    std::cout << "El MCD de " << num1 << " y " << num2 << " es: " << resultado << std::endl;
    
    std::cout << "\n\nNombre: Alexis Camacho Dorado" << std::endl;
    std::cout << "Grupo: eshmaluguls" << std::endl;

    return 0;
}
