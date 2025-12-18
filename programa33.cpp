#include <iostream>
#include <string>
#include <vector>

class Videojuego {
// Atributos privados: Nadie puede tocarlos desde fuera directamente
private:
    std::string titulo;
    std::string genero;
    std::string calificacionESRB;
    int anioLanzamiento;
    double puntuacionMedia;

    // Método privado de ayuda para validar ESRB
    bool esCalificacionValida(std::string calif) {
        std::vector<std::string> validas = {"E", "E10+", "T", "M"};
        for (const std::string& v : validas) {
            if (v == calif) return true;
        }
        return false;
    }

public:
    // Constructor
    Videojuego(std::string t, std::string g, std::string esrb, int anio, double puntos) {
        titulo = t;
        genero = g;
        anioLanzamiento = anio;
        setCalificacionESRB(esrb); 
        setPuntuacionMedia(puntos);
    }

    // Getters
    std::string getTitulo() const { return titulo; }
    double getPuntuacionMedia() const { return puntuacionMedia; }

    // Setters con validación
    void setCalificacionESRB(std::string nuevaCalif) {
        if (esCalificacionValida(nuevaCalif)) {
            calificacionESRB = nuevaCalif;
        } else {
            calificacionESRB = "Pendiente"; // Valor por defecto si falla
            std::cout << "Error: '" << nuevaCalif << "' no es valida. Asignado: Pendiente." << std::endl;
        }
    }

    void setPuntuacionMedia(double nuevaPunt) {
        if (nuevaPunt >= 0.0 && nuevaPunt <= 10.0) {
            puntuacionMedia = nuevaPunt;
        } else {
            puntuacionMedia = 0.0;
            std::cout << "Error: Puntuacion " << nuevaPunt << " fuera de rango (0-10). Asignado: 0.0" << std::endl;
        }
    }
};

// (Punto de ejecución)
int main() {
    std::cout << "Creando Videojuego 1 (Datos Correctos)" << std::endl;
    Videojuego juego1("Zelda", "Aventura", "E10+", 2023, 9.5);
    std::cout << "Juego: " << juego1.getTitulo() << " | Puntos: " << juego1.getPuntuacionMedia() << "\n\n";

    std::cout << "Creando Videojuego 2 (Datos Incorrectos)" << std::endl;
    // Intentamos crear un juego con puntuación 15.0 y calificación ESRB inexistente
    Videojuego juego2("Juego Error", "Accion", "Nivel-X", 2024, 15.0);
    
    std::cout << "Resultado final Juego 2 -> Puntos: " << juego2.getPuntuacionMedia() << std::endl;
    
    std::cout << "\n\nGrupo: eshmaluguls" << std::endl;
    std::cout << "Integrantes:" << std::endl;
    std::cout << "Juan David Denker Ortega" << std::endl;
    std::cout << "J. Leonardo Parada Beltran" << std::endl;
    std::cout << "Alexis Camacho Dorado" << std::endl;


    return 0;
}