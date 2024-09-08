#include "pila/pila.h"
#include <iostream>
#include <string>

int main() {
    Pila<std::string> pila; // Crear una pila de cadenas
    int n;

    // Pedir al usuario que introduzca el número de operaciones
    std::cout << "Ingrese el número de operaciones: ";
    std::cin >> n;

    // Realizar las operaciones especificadas por el usuario
    for (int i = 0; i < n; i++) {
        std::string operacion;
        std::string area;

        // Pedir al usuario que introduzca la operación (in/out)
        std::cout << "Ingrese la operación (in/out): ";
        std::cin >> operacion;

        if (operacion == "in") {
            // Si la operación es "in", pedir al usuario que introduzca el área y apilarla
            std::cout << "Ingrese el área: ";
            std::cin >> area;
            pila.push(area);
        } else if (operacion == "out") {
            // Si la operación es "out", desapilar un área si la pila no está vacía
            if (!pila.esVacia()) {
                pila.pop();
            } else {
                // Mostrar un mensaje si no hay áreas para desapilar
                std::cout << "No hay áreas para salir." << std::endl;
            }
        }
    }

    // Mostrar el recorrido de las áreas en la pila
    std::cout << "Recorrido: ";
    while (!pila.esVacia()) {
        std::cout << pila.pop() << std::endl; // Desapilar y mostrar cada área
    }

    return 0;
}