#include <iostream>
#include <string>

class Estudiante {
private: // DATOS PROTEGIDOS
 std::string nombre;
 int edad;
 std::string matricula;
 double promedio;
 std::string carrera; // ¡NUEVO! Atributo para la carrera
public:
 // Constructor
 Estudiante(std::string nom, int ed, std::string matr, std::string carr = "No Asignada") { // ¡MODIFICADO! Añadir 'carr' y valor por defecto
 nombre = nom;
 // Usamos el setter para edad para aprovechar la validación
 setEdad(ed); // ¡Llamando a nuestro propio setter!
 matricula = matr;
 promedio = 0.0; // Promedio inicial
 carrera = carr; // ¡NUEVO! Inicializar la carrera
 std::cout << "Estudiante '" << nombre << "' creado." << std::endl;
 }

 // Getters
 std::string getNombre() const { return nombre; }
 int getEdad() const { return edad; }
 std::string getMatricula() const { return matricula; }
 double getPromedio() const { return promedio; }
 std::string getCarrera() const { return carrera; } // ¡NUEVO! Getter para la carrera

 // Setters (con validación donde aplique)
 void setNombre(const std::string& nuevoNombre) {
 if (!nuevoNombre.empty()) {
 nombre = nuevoNombre;
 } else {
 std::cout << "Error: El nombre no puede estar vacio." << std::endl;
 }
 }
 
 void setEdad(int nuevaEdad) {
 if (nuevaEdad >= 5 && nuevaEdad <= 100) { // Ejemplo de validación
 edad = nuevaEdad;
 } else {
 std::cout << "Error: Edad '" << nuevaEdad << "' invalida para el estudiante "
 << nombre << ". Edad no modificada." << std::endl;
 }
 }
 
 // No ponemos un setter para matricula, asumiendo que no cambia.
 // Pero podríamos tener uno si fuera necesario.
 void setPromedio(double nuevoPromedio) {
 if (nuevoPromedio >= 0.0 && nuevoPromedio <= 10.0) { // Asumiendo escala 0-10
 promedio = nuevoPromedio;
 } else {
 std::cout << "Error: Promedio '" << nuevoPromedio << "' invalido para "
 << nombre << ". Promedio no modificado." << std::endl;
 }
 }

 void setCarrera(const std::string& nuevaCarrera) { // ¡NUEVO! Setter para la carrera
 if (!nuevaCarrera.empty()) {
 carrera = nuevaCarrera;
 } else {
 std::cout << "Error: La carrera no puede estar vacia." << std::endl;
 }
 }
 
 // Otros métodos públicos
 void mostrarInformacion() const {
 std::cout << "-----------------------------" << std::endl;
 std::cout << "Nombre: " << nombre << std::endl;
 std::cout << "Edad: " << edad << " anios" << std::endl;
 std::cout << "Matricula: " << matricula << std::endl;
 std::cout << "Carrera: " << carrera << std::endl; // ¡NUEVO! Mostrar la carrera
 std::cout << "Promedio: " << promedio << std::endl;
 std::cout << "-----------------------------" << std::endl;
 }
}; // Fin de la clase Estudiante

int main() {
 // ¡MODIFICADO! Se agrega la carrera en el constructor
 Estudiante estudiante1("Juaquin Soliz", 20, "A123", "Ingenieria de Software"); 
 estudiante1.mostrarInformacion();

 // Intentando modificar datos
 // estudiante1.edad = 21; // ¡ERROR! 'edad' es private.
 std::cout << "\nIntentando actualizar edad, promedio y carrera..." << std::endl;
 estudiante1.setEdad(21); // Uso correcto del setter
 estudiante1.setPromedio(8.5);
 estudiante1.setCarrera("Licenciatura en Administracion"); // ¡NUEVO! Cambiar carrera
 
 estudiante1.setEdad(150); // Intentando edad inválida
 estudiante1.setPromedio(-2.0); // Intentando promedio inválido
 estudiante1.setCarrera(""); // ¡NUEVO! Intentando carrera vacía

 std::cout << "\nInformacion actualizada de " << estudiante1.getNombre() << ":" << std::endl;
 estudiante1.mostrarInformacion();

 // ¡MODIFICADO! Se agrega la carrera al constructor, aunque se usará la validación de edad
 Estudiante estudiante2("Priscila Vaca", -10, "B456", "Derecho"); 
 estudiante2.mostrarInformacion(); // Veremos qué edad tiene Priscila

 // Prueba de un estudiante sin especificar la carrera (usa el valor por defecto)
 std::cout << "\nCreando Estudiante 3 sin especificar carrera..." << std::endl;
 Estudiante estudiante3("Andres Lima", 19, "C789"); 
 estudiante3.mostrarInformacion();
 
 std::cout << "\n\nNombre: Alexis Camacho Dorado" << std::endl;
 std::cout << "Grupo: eshmaluguls" << std::endl;

 
 return 0;
}
