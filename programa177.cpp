#include <iostream>
#include <cmath>
double sumaSerieGeometricaRecursiva(double a, double r, int N) {
    // 1. Caso Base: Si N es 0 o menos, la suma es 0.
    if (N <= 0) {
        return 0.0;
    }

    // 2. Caso Base: Si solo se suma el primer término (N=1).
    if (N == 1) {
        return a;
    }
    // 3. Paso Recursivo: S_N = S_{N-1} + a * r^(N-1)
    // Calcular el término actual (Término N-ésimo)
    // pow(r, N - 1) calcula r elevado a (N - 1)
    double terminoActual = a * std::pow(r, N - 1);
    // Llamada recursiva para obtener la suma de los términos N-1 anteriores
    double sumaAnterior = sumaSerieGeometricaRecursiva(a, r, N - 1);
    // Retornar la suma total
    return sumaAnterior + terminoActual;
}

int main() {
    double primerTermino = 2.0; // a
    double razon = 3.0;          // r
    int numTerminos = 4;         // N

    // La serie es: 2 + 2*3 + 2*3^2 + 2*3^3 = 2 + 6 + 18 + 54 = 80
    
    double resultado = sumaSerieGeometricaRecursiva(primerTermino, razon, numTerminos);

    std::cout << "--- Suma de Serie Geométrica Recursiva" << std::endl;
    std::cout << "Primer término (a): " << primerTermino << std::endl;
    std::cout << "Razón común (r): " << razon << std::endl;
    std::cout << "Número de términos (N): " << numTerminos << std::endl;
    std::cout << "El resultado de la suma es: " << resultado << std::endl;
    
    std::cout << "\n\nNombre: Alexis Camacho Dorado" << std::endl;
    std::cout << "Grupo: eshmaluguls" << std::endl;
    return 0;
}
