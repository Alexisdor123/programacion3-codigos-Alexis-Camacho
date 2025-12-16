#include <iostream>
#include <string>
class Libro {
public:
    std::string titulo;
    std::string autor;
    int anioPublicacion;
    std::string isbn;

    // Métodos (Funciones Miembro)

    // Método para mostrar la información completa del libro
    void mostrarInfo() {
        std::cout << "Titulo: \"" << titulo << "\"" << std::endl;
        std::cout << "Autor: " << autor << std::endl;
        std::cout << "Anio: " << anioPublicacion << std::endl;
        std::cout << "ISBN: " << isbn << std::endl;
    }

    // Método que simula una acción del libro (como ser leido)
    void serLeido() {
        std::cout << "El libro \"" << titulo << "\" esta siendo leido. ¡Disfruta la lectura!" << std::endl;
    }
}; // punto y coma al final de la clase

int main()
{
    // Creación de OBJETOS (Instancias de la clase Libro)
    Libro libroA;
    Libro libroB;

    // Asignando valores a los atributos de libroA
    libroA.titulo = "Cien Anios de Soledad";
    libroA.autor = "Gabriel Garcia Marquez";
    libroA.anioPublicacion = 1967;
    libroA.isbn = "978-0307474728";

    // Asignando valores a los atributos de libroB
    libroB.titulo = "El Principito";
    libroB.autor = "Antoine de Saint-Exupery";
    libroB.anioPublicacion = 1943;
    libroB.isbn = "978-3791520621";

    std::cout << "Nuestra Coleccion de Libros" << std::endl;

    std::cout << "\n** Primer Libro **" << std::endl;
    libroA.mostrarInfo(); // Llamando a los métodos del objeto libroA
    libroA.serLeido();

    std::cout << "\n** Segundo Libro **" << std::endl;
    libroB.mostrarInfo(); // Llamando a los métodos del objeto libroB
    libroB.serLeido();

    std::cout << "\n\nNombre: Alexis Camacho Dorado" << std::endl;
    std::cout << "Grupo: eshmaluguls" << std::endl;
    
    return 0;
}