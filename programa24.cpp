#include <iostream>
using namespace std;

// TAREA MEJORAR CODIGO
// Función recursiva para contar dígitos
int contarDigitos(int n) {
    // Caso especial para 0
    if (n == 0) {
        return 1;
    }
    // CASO BASE: un solo dígito
    if (n < 10 && n > -10) {
        return 1;
    }
    // PASO RECURSIVO: contar 1 y dividir el número
    return 1 + contarDigitos(n / 10);
}

int main() {
    int numero;
    cout << "Ingrese un número entero: ";
    
    // Validar entrada
    if (!(cin >> numero)) {
        cout << "Error: Debe ingresar un número entero válido." << endl;
        return 1; // Código de error
    }
    // Manejar el caso del 0 explícitamente
    if (numero == 0) {
        cout << "El número tiene 1 dígito." << endl;
        return 0;
    }
    // Asegurar que sea positivo para el conteo
    if (numero < 0) {
        numero = -numero;
    }
    int cantidadDigitos = contarDigitos(numero);
    cout << "El número tiene " << cantidadDigitos << " dígito";
    // Plural correcto
    if (cantidadDigitos != 1) {
        cout << "s";
    }
    cout << "." << endl;
    std::cout << "\n\nNombre: Alexis Camacho Dorado" << std::endl;
    std::cout << "Grupo: eshmaluguls" << std::endl;
    
    return 0;
}