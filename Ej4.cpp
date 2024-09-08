#include "pila/pila.h"
#include <iostream>

// Función para sumar los elementos de la pila hasta encontrar un valor n
int sumaHastaN(Pila<int>& pila, int n) {
    Pila<int> auxiliar; // Pila auxiliar para almacenar los valores temporalmente
    int suma = 0; // Variable para almacenar la suma de los elementos
    bool encontrado = false; // Bandera para indicar si el valor n ha sido encontrado

    // Desapilar todos los elementos de la pila original
    while (!pila.esVacia()) {
        int dato = pila.pop(); // Obtener el elemento superior de la pila
        auxiliar.push(dato); // Apilar el valor en la pila auxiliar
        if (dato == n) {
            encontrado = true; // Marcar que el valor n ha sido encontrado
            break; // Terminar el bucle si se encuentra el valor n
        }
        suma += dato; // Sumar el valor al total
    }

    // Si el valor n no se encuentra en la pila
    if (!encontrado) {
        suma = 0; // Reiniciar la suma
        // Sumar todos los elementos de la pila auxiliar
        while (!auxiliar.esVacia()) {
            suma += auxiliar.pop();
        }
    } else {
        // Volver a apilar los elementos en la pila original desde la pila auxiliar
        while (!auxiliar.esVacia()) {
            pila.push(auxiliar.pop());
        }
    }

    return suma; // Devolver la suma calculada
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

    // Mostrar los valores de la pila
    std::cout << "Pila: ";
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

    // Pedir al usuario que introduzca el valor n
    std::cout << "Ingrese el número entero n: ";
    std::cin >> n;

    // Llamar a la función sumaHastaN para calcular la suma
    int suma = sumaHastaN(pila, n);
    std::cout << "Suma: " << suma << std::endl; // Mostrar la suma calculada

    return 0;
}