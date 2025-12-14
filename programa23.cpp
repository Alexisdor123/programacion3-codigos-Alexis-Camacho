#include <iostream>
#include <string>

class Coche {
public: 
    // ATRIBUTOS (variables miembro)
    std::string marca;
    std::string modelo;
    int anio;
    int velocidadActual = 0; // iniciando va a ser 0 por defecto
    // METODOS (funciones Miembro)
    // 1er metodo: arranca
    void arrancar() {
        std::cout << marca << " " << modelo << ": Motor encendido. ¡Listo para conducir!" << std::endl;
    }
    // 2do metodo: acelera (modificando el atributo "velocidadActual")
    void acelerar(int aumento) {
        velocidadActual += aumento;
        std::cout << marca << " " << modelo << " acelerando. Velocidad actual: " << velocidadActual << " km/h." << std::endl;
    }
    // 3er metodo: Frenar (la velocidad va a ser 0)
    void frenar() {
        velocidadActual = 0;
        std::cout << marca << " " << modelo << " ha frenado completamente. Velocidad: 0 km/h." << std::endl;
    }
    // 4to metodo: muestra el estado del coche
    void mostrarEstado() {
        std::cout << "\n--- Estado del Coche ---" << std::endl;
        std::cout << "Marca: " << marca << std::endl;
        std::cout << "Modelo: " << modelo << std::endl;
        std::cout << "Año: " << anio << std::endl;
        std::cout << "Velocidad: " << velocidadActual << " km/h" << std::endl;
        std::cout << "------------------------" << std::endl;
    }
}; // punto y coma al final de la clase

int main() {
    // 1) crear objetos
    Coche cocheDeportivo;
    Coche cocheFamiliar;
    
    // 2) ASIGNAR VALORES A ATRIBUTOS del Coche Deportivo
    cocheDeportivo.marca = "Ferrari";
    cocheDeportivo.modelo = "F40";
    cocheDeportivo.anio = 1987;
    
    // 3) ASIGNAR VALORES A ATRIBUTOS del Coche Familiar
    cocheFamiliar.marca = "Toyota";
    cocheFamiliar.modelo = "Corolla";
    cocheFamiliar.anio = 2020;

    std::cout << "Simulación de Conducción" << std::endl;
    
    // 4) USANDO LOS METODOS del Coche Deportivo
    cocheDeportivo.arrancar();
    cocheDeportivo.acelerar(100);
    cocheDeportivo.acelerar(50);
    cocheDeportivo.mostrarEstado(); // muestra velocidad a 150
    cocheDeportivo.frenar();
    
    std::cout << "\n------------------------------------" << std::endl;

    // 5. USANDO LOS METODOS del Coche Familiar
    cocheFamiliar.arrancar();
    cocheFamiliar.acelerar(40);
    cocheFamiliar.acelerar(20);
    cocheFamiliar.mostrarEstado(); // muestra velocidad a 60
    
    std::cout << "\n\nNombre: Alexis Camacho Dorado" << std::endl;
    std::cout << "Grupo: eshmaluguls" << std::endl;
    
    return 0;
}
