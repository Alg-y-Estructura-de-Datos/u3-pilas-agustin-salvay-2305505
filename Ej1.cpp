#include <iostream>
#include "pila/nodo.h"
#include "pila/pila.h"

// Función para invertir una palabra utilizando una pila
std::string invertirPalabra(const std::string& palabra) {
    Pila<char> pila;
    std::string palabraInvertida;

    // Apilar los caracteres de la palabra
    for (char c : palabra) {
        pila.push(c);
    }

    // Desapilar los caracteres y construir la palabra invertida
    while (!pila.esVacia()) {
        palabraInvertida += pila.pop();
    }

    return palabraInvertida;
}

int main() {
    std::string palabra;

    // Pedir al usuario que introduzca una palabra
    std::cout << "Introduce una palabra: ";
    std::cin >> palabra;

    // Invertir la palabra utilizando la función
    std::string palabraInvertida = invertirPalabra(palabra);

    // Mostrar la palabra invertida
    std::cout << "La palabra invertida es: " << palabraInvertida << std::endl;

    return 0;
}
