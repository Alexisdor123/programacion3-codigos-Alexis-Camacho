#include <iostream>
#include <string>

void torres_hanoi(int n, const std::string& origen, 
                    const std::string& destino, const std::string& auxiliar) {
    
    // 1. CASO BASE: Si solo hay un disco (n=1), se mueve directamente.
    if (n == 1) {
        std::cout << "Mover disco 1 de " << origen << " a " << destino << std::endl;
        return;
    }
    // 2. PASO RECURSIVO:
    
    // a) Mover N-1 discos de Origen a Auxiliar, usando Destino como auxiliar.
    torres_hanoi(n - 1, origen, auxiliar, destino);
    
    // b) Mover el disco más grande (n-ésimo) de Origen a Destino.
    std::cout << "Mover disco " << n << " de " << origen << " a " << destino << std::endl;
    
    // c) Mover N-1 discos de Auxiliar a Destino, usando Origen como auxiliar.
    torres_hanoi(n - 1, auxiliar, destino, origen);
}

int main() {
    int num_discos = 3;
    
    std::cout << "Torres de Hanoi (N=" << num_discos << " discos)\n";
    std::cout << "Objetivo: Mover de A a C\n";
    
    // N, Origen='A', Destino='C', Auxiliar='B'
    torres_hanoi(num_discos, "A", "C", "B");
    
    std::cout << "\nTotal de movimientos: " << (1 << num_discos) - 1 << std::endl;
    
    std::cout << "\n\nNombre: Alexis Camacho Dorado" << std::endl;
    std::cout << "Grupo: eshmaluguls" << std::endl;

    return 0;
}
