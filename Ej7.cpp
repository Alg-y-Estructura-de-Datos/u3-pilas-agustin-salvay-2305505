#include "pila/pila.h"
#include <iostream>
#include <string>

int main() {
    Pila<std::string> pila; // Crear una pila de cadenas
    std::string texto = ""; // Inicializar una cadena vacía para almacenar el texto

    int n;
    std::cout << "Ingrese el número de acciones: ";
    std::cin >> n; // Pedir al usuario que introduzca el número de acciones

    for (int i = 0; i < n; i++) {
        std::string accion;
        std::string palabra;

        std::cout << "Ingrese la acción (escribir, borrar, deshacer): ";
        std::cin >> accion; // Pedir al usuario que introduzca la acción

        if (accion == "escribir") {
            std::cout << "Ingrese la palabra: ";
            std::cin >> palabra; // Pedir al usuario que introduzca la palabra
            texto += palabra + " "; // Añadir la palabra al texto
            pila.push("Escribir " + palabra); // Registrar la acción en la pila
        } else if (accion == "borrar") {
            std::cout << "Ingrese la palabra: ";
            std::cin >> palabra; // Pedir al usuario que introduzca la palabra a borrar
            size_t pos = texto.find(palabra); // Buscar la palabra en el texto
            if (pos != std::string::npos) {
                texto.erase(pos, palabra.length()); // Borrar la palabra del texto
                pila.push("Borrar " + palabra); // Registrar la acción en la pila
            } else {
                std::cout << "La palabra no se encuentra en el texto." << std::endl;
            }
        } else if (accion == "deshacer") {
            if (!pila.esVacia()) {
                std::string accionRevertida = pila.pop(); // Obtener la última acción de la pila
                size_t pos = accionRevertida.find(" ");
                std::string tipoAccion = accionRevertida.substr(0, pos); // Obtener el tipo de acción
                std::string palabra = accionRevertida.substr(pos + 1); // Obtener la palabra asociada

                if (tipoAccion == "Escribir") {
                    size_t pos = texto.find(palabra);
                    if (pos != std::string::npos) {
                        texto.erase(pos, palabra.length() + 1); // Deshacer la acción de escribir
                    }
                } else if (tipoAccion == "Borrar") {
                    texto += palabra + " "; // Deshacer la acción de borrar
                }

                std::cout << "Acción revertida: " << accionRevertida << std::endl;
            } else {
                std::cout << "No hay acciones para deshacer." << std::endl;
            }
        }

        std::cout << "Texto actual: " << texto << std::endl; // Mostrar el texto actual
    }

    return 0;
}