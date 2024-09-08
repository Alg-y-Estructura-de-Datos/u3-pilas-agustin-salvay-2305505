#include "pila/pila.h"
#include <iostream>

// Función para sumar un número n a cada elemento de la pila
Pila<int> sumarNro(Pila<int>& pila, int n) {
    Pila<int> nuevaPila; // Pila para almacenar los nuevos valores
    Pila<int> auxiliar; // Pila auxiliar para almacenar los valores temporalmente

    // Desapilar todos los elementos de la pila original
    while (!pila.esVacia()) {
        int dato = pila.pop(); // Obtener el elemento superior de la pila
        auxiliar.push(dato); // Apilar el valor en la pila auxiliar
        nuevaPila.push(dato + n); // Apilar el valor incrementado en la nueva pila
    }

    // Volver a apilar los elementos en la pila original desde la pila auxiliar
    while (!auxiliar.esVacia()) {
        pila.push(auxiliar.pop());
    }

    return nuevaPila; // Devolver la nueva pila con los valores incrementados
}

int main() {
    Pila<int> pila; // Crear una pila de enteros
    int n;

    // Pedir al usuario que introduzca los valores de la pila
    std::cout << "Ingrese los números enteros de la pila (ingrese -1 para terminar):" << std::endl;
    int dato;
    while (true) {
        std::cin >> dato;
        if (dato == -1) {
            break; // Terminar la entrada de datos si el usuario ingresa -1
        }
        pila.push(dato); // Apilar el valor introducido
    }

    // Mostrar los valores de la pila original
    std::cout << "Pila original: ";
    Pila<int> auxiliar;
    while (!pila.esVacia()) {
        int dato = pila.pop(); // Obtener el elemento superior de la pila
        auxiliar.push(dato); // Apilar el valor en la pila auxiliar
        std::cout << dato << " "; // Mostrar el valor
    }
    std::cout << std::endl;

    // Volver a apilar los elementos en la pila original desde la pila auxiliar
    while (!auxiliar.esVacia()) {
        pila.push(auxiliar.pop());
    }

    // Pedir al usuario que introduzca el número entero n
    std::cout << "Ingrese el número entero n: ";
    std::cin >> n;

    // Llamar a la función sumarNro para obtener la nueva pila con los valores incrementados
    Pila<int> nuevaPila = sumarNro(pila, n);

    // Mostrar los valores de la pila original después de la operación
    std::cout << "Pila original: ";
    while (!pila.esVacia()) {
        int dato = pila.pop(); // Obtener el elemento superior de la pila
        std::cout << dato << " "; // Mostrar el valor
    }
    std::cout << std::endl;

    // Mostrar los valores de la nueva pila con los valores incrementados
    std::cout << "Pila resultante: ";
    while (!nuevaPila.esVacia()) {
        int dato = nuevaPila.pop(); // Obtener el elemento superior de la nueva pila
        std::cout << dato << " "; // Mostrar el valor
    }
    std::cout << std::endl;

    return 0;
}