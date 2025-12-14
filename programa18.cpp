#include <iostream>
#include <string>
#include <algorithm> // Para std::reverse (solo para comparar)
std::string invertirRecursiva(const std::string& s) {
    if (s.length() <= 1) {
        return s;
    }
    else {
        char primerCaracter = s[0];
        std::string restoDeLaCadena = s.substr(1);
        std::string restoInvertido = invertirRecursiva(restoDeLaCadena);
        return restoInvertido + primerCaracter;
    }
}
 
 
int main()
{
    std::string original = "recursividad";
    std::string invertida = invertirRecursiva(original);
    std::cout << "Original: " << original << std::endl;
    std::cout << "Invertida (Recursiva): " << invertida << std::endl;
    // Para comparar (no es parte de la solución recursiva)
    std::string comparacion = original;
    std::reverse(comparacion.begin(), comparacion.end());
    std::cout << "Invertida (con std::reverse): " << comparacion << std::endl;
    std::cout << "Probando con 'abc': " << invertirRecursiva("abc") << std::endl;
    std::cout << "Probando con 'a': " << invertirRecursiva("a") << std::endl;
    std::cout << "Probando con \"\": " << invertirRecursiva("") << std::endl;
    
    std::cout << "\n\nGrupo: eshmaluguls" << std::endl;
    std::cout << "Integrantes:" << std::endl;
    std::cout << "Juan David Denker Ortega" << std::endl;
    std::cout << "J. Leonardo Parada Beltran" << std::endl;
    std::cout << "Alexis Camacho Dorado" << std::endl;



    return 0;
}
