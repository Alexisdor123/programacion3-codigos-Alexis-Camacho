#include <string>
#include <iostream>

// Definición de un tipo de dato complejo para el tercer escenario
class PaqueteDeDatos {
public:
    // Podría contener datos binarios, tamaño, hash, etc.
    size_t tamanio;
};

// --- FIRMAS SOBRECARGADAS ---

// 1. Envío Básico (usuario y texto)
void enviarMensaje(const std::string& usuario, const std::string& texto) {
    std::cout << "[basico] Enviado a " << usuario << ". Contenido: " << texto.substr(0, 30) << "..." << std::endl;
}

// 2. Envío con Asunto (usuario, asunto y texto)
void enviarMensaje(const std::string& usuario, const std::string& asunto, const std::string& texto) {
    std::cout << "[email asunto] Enviado a " << usuario << ". Asunto: " << asunto << ". Contenido: " << texto.substr(0, 30) << "..." << std::endl;
}

// 3. Envío de Datos Complejos (URL y paquete de datos)
bool enviarMensaje(const std::string& destinoURL, PaqueteDeDatos& datos) {
    std::cout << "[paquetedatos] Enviando paquete de " << datos.tamanio << " bytes a: " << destinoURL << std::endl;
    // Lógica para enviar y validar el paquete...
    return true; // Asume que el envío fue exitoso y validado
}

int main() {
    PaqueteDeDatos miPaquete{1024};

    // La API es intuitiva: el compilador elige la firma adecuada
    
    // Escenario 1: envio basico
    enviarMensaje("Ana", "Hola, te confirmo la reunión de mañana."); 
    
    // Escenario 2: envio con asunto
    enviarMensaje("Pedro", "Urgente", "Adjunto el informe final de trimestre.");
    
    // Escenario 3: envio de paquete de datos
    bool exito = enviarMensaje("https://api.servidor.com/upload", miPaquete);
    
    
    std::cout << "\n\nNombre: Alexis Camacho Dorado" << std::endl;
    std::cout << "Grupo: eshmaluguls" << std::endl;
    
    return 0;
}
