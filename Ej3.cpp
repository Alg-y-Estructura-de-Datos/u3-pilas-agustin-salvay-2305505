#include "pila/pila.h"
#include <iostream>

// Función para eliminar un valor de la pila
void eliminarValor(Pila<int>& pila, int valor) {
    Pila<int> auxiliar; // Pila auxiliar para almacenar los valores temporalmente
    bool encontrado = false; // Bandera para indicar si el valor ha sido encontrado
    bool repetido = false; // Bandera para indicar si el valor está repetido

    // Desapilar todos los elementos de la pila original
    while (!pila.esVacia()) {
        int dato = pila.pop(); // Obtener el elemento superior de la pila
        if (dato == valor) {
            if (!encontrado) {
                encontrado = true; // Marcar que el valor ha sido encontrado
            } else {
                repetido = true; // Marcar que el valor está repetido
            }
        } else {
            auxiliar.push(dato); // Apilar el valor en la pila auxiliar
        }
    }

    // Si el valor no se encuentra en la pila
    if (!encontrado) {
        std::cout << "El valor no se encuentra en la pila." << std::endl;
        // Volver a apilar los elementos en la pila original desde la pila auxiliar
        while (!auxiliar.esVacia()) {
            pila.push(auxiliar.pop());
        }
        return;
    }

    // Si el valor está repetido, volver a apilar los elementos y el valor una vez
    if (repetido) {
        while (!auxiliar.esVacia()) {
            pila.push(auxiliar.pop());
        }
        pila.push(valor);
    } else {
        // Si el valor no está repetido, solo volver a apilar los elementos
        while (!auxiliar.esVacia()) {
            pila.push(auxiliar.pop());
        }
    }

    // Mostrar la pila después de la eliminación
    std::cout << "Pila después de la eliminación: ";
    while (!pila.esVacia()) {
        std::cout << pila.pop() << " "; // Desapilar y mostrar cada elemento
    }
    std::cout << std::endl;
}

int main() {
    Pila<int> pila; // Crear una pila de enteros
    int valor;

    // Pedir al usuario que introduzca los valores de la pila
    std::cout << "Ingrese los valores de la pila (ingrese -1 para terminar):" << std::endl;
    int dato;
    while (true) {
        std::cin >> dato;
        if (dato == -1) {
            break; // Terminar la entrada de datos si el usuario ingresa -1
        }
        pila.push(dato); // Apilar el valor introducido
    }

    // Pedir al usuario que introduzca el valor a eliminar
    std::cout << "Ingrese el valor a eliminar: ";
    std::cin >> valor;

    // Llamar a la función eliminarValor para realizar la eliminación
    eliminarValor(pila, valor);

    return 0;
}