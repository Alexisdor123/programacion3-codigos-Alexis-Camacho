#include <iostream>


int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        int resultado = fibonacci(n - 1) + fibonacci(n - 2);
        return resultado;
    }
    
}

int main()
{
    int numero = 7;
    for (int i = 0; i <= numero; ++i) {
        std::cout << "F de " << i << " = " << fibonacci(i) << std::endl;
    }
    
    std::cout << "\n\nNombre: Alexis Camacho Dorado" << std::endl;
    std::cout << "Grupo: eshmaluguls" << std::endl;

    return 0;
}
