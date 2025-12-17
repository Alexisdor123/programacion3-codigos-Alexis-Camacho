#include <iostream>
// 1. Interfaz de la Base de Datos
// Define el contrato que cualquier base de datos debe cumplir.
class IBaseDatos {
public:
    virtual ~IBaseDatos() {}
    virtual void guardar() = 0; 
};

// 2. Clase de Negocio (Servicio)
// Esta clase depende de la interfaz, no de una implementación real.
class Servicio {
private:
    IBaseDatos* _db;

public:
    Servicio(IBaseDatos* db) : _db(db) {}

    void ejecutar() {
        // Lógica de negocio...
        _db->guardar(); // Se llama a la dependencia
    }
};

// 3. Objeto Mock
// Simula la base de datos y registra si sus métodos fueron utilizados.
class MockBaseDatos : public IBaseDatos {
public:
    bool fueLlamado = false;

    void guardar() override {
        fueLlamado = true; // Registra la interacción
    }
};

// 4. Ejecución de la Prueba
int main() {
    // Preparación (Setup)
    MockBaseDatos mockBD;
    Servicio servicio(&mockBD);

    // Actuación (Act)
    servicio.ejecutar();

    // Verificación (Assert)
    if (mockBD.fueLlamado) {
        std::cout << "Prueba exitosa: El servicio interactuo con la BD." << std::endl;
    } else {
        std::cout << "Prueba fallida: El servicio no llamo a la BD." << std::endl;
    }
    
    std::cout << "\n\nGrupo: eshmaluguls" << std::endl;
 std::cout << "Integrantes:" << std::endl;
 std::cout << "Juan David Denker Ortega" << std::endl;
 std::cout << "J. Leonardo Parada Beltran" << std::endl;
 std::cout << "Alexis Camacho Dorado" << std::endl;

    return 0;
}