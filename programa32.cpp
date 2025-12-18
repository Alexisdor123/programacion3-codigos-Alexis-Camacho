#include <iostream>
#include <string>

// Definición de la CLASE 'Perro'
class Perro {
private:
    // Atributos (ahora PRIVADOS)
    std::string nombre;
    std::string raza;
    int edad;

public:
    // ===== SETTERS =====
    void setNombre(std::string n) {
        nombre = n;
    }

    void setRaza(std::string r) {
        raza = r;
    }

    void setEdad(int e) {
        edad = e;
    }

    // ===== GETTERS =====
    std::string getNombre() {
        return nombre;
    }

    std::string getRaza() {
        return raza;
    }

    int getEdad() {
        return edad;
    }

    // Métodos
    void ladrar() {
        std::cout << nombre << " dice: ¡Guau! ¡Guau!" << std::endl;
    }

    void presentar() {
        std::cout << "Hola, soy " << nombre << ", un " << raza
                  << " de " << edad << " anios." << std::endl;
    }
};

int main() {
    // Creación de objetos
    Perro perro1;
    Perro perro2;

    // Asignando valores usando SETTERS
    perro1.setNombre("Firulais");
    perro1.setRaza("Mestizo Jugueton");
    perro1.setEdad(3);

    perro2.setNombre("Rex");
    perro2.setRaza("Pastor Aleman");
    perro2.setEdad(5);

    std::cout << "--- Conozcamos a nuestras mascotas ---" << std::endl;

    perro1.presentar();
    perro1.ladrar();

    std::cout << std::endl;

    perro2.presentar();
    perro2.ladrar();

    std::cout << "\n\nNombre: Alexis Camacho Dorado" << std::endl;
    std::cout << "Grupo: eshmaluguls" << std::endl;

    return 0;
}
