#include <iostream>
#include <string>

class Motor {
public:
    int cilindros;
    // Constructor parametrizado
    Motor(int c) : cilindros(c) { 
        std::cout << "Motor(int) creado" << std::endl;
    }
    // Constructor por defecto
    Motor() : cilindros(4) { 
        std::cout << "Motor() por defecto creado" << std::endl;
    }
};

class Auto {
public:
    std::string marca;
    Motor miMotor;  // Objeto miembro de tipo Motor

    // Constructor de Auto que utiliza una lista de inicializadores
    Auto(std::string m, int cil) : marca(m), miMotor(cil) {
        std::cout << "Auto creado" << std::endl;
    }

    // Constructor alternativo de Auto que no usa lista de inicializadores para miMotor
    /*
    Auto(std::string m, int cil) {
        marca = m;
        // miMotor se crea aquí con Motor() por defecto
        // y LUEGO se reasigna o se necesitaría un miMotor.setCi...(cil)
        // lo cual no es ideal si Motor no tuviera setter o fuera const.
        // Si Motor solo tuviera Motor(int), esto daría error.
        miMotor = Motor(cil); // Esto es reasignación, no inicialización directa.
        std::cout << "Auto creado (forma menos eficiente para motor)" << std::endl;
    }
    */
};

int main() {
    // Creando un Auto con lista de inicializadores
    Auto miAuto("Toyota", 6);

    // Imprimiendo los valores de los atributos
    std::cout << "Marca: " << miAuto.marca << ", Cilindrada del Motor: " << miAuto.miMotor.cilindros << std::endl;
    
    std::cout << "\n\nGrupo: eshmaluguls" << std::endl;
    std::cout << "Integrantes:" << std::endl;
    std::cout << "Juan David Denker Ortega" << std::endl;
    std::cout << "J. Leonardo Parada Beltran" << std::endl;
    std::cout << "Alexis Camacho Dorado" << std::endl;
    
    return 0;
}
