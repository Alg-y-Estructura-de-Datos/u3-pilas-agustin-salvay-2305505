#include <iostream>
#include "pila/pila.h" // Incluir la definición de la clase Pila
using namespace std;

// Función para reemplazar todas las ocurrencias de un valor en la pila por otro valor
void Reemplazar(Pila<int>& pila, int nuevo, int viejo) {
    Pila<int> auxiliar; // Pila auxiliar para almacenar los valores temporalmente

    // Desapilar todos los elementos de la pila original
    while (!pila.esVacia()) {
        int dato = pila.pop(); // Obtener el elemento superior de la pila
        if (dato == viejo) {
            auxiliar.push(nuevo); // Si el elemento es igual al valor viejo, apilar el nuevo valor
        } else {
            auxiliar.push(dato); // Si no, apilar el valor original
        }
    }

    // Volver a apilar los elementos en la pila original desde la pila auxiliar
    while (!auxiliar.esVacia()) {
        pila.push(auxiliar.pop()); // Desapilar de la auxiliar y apilar en la original
    }
}

int main() {
    Pila<int> pila; // Crear una pila de enteros
    int n, valor, nuevo, viejo;

    // Pedir al usuario que introduzca el número de elementos en la pila
    cout << "Introduce el número de elementos en la pila: ";
    cin >> n;

    // Pedir al usuario que introduzca los valores de la pila
    for (int i = 0; i < n; ++i) {
        cout << "Introduce el valor " << i + 1 << ": ";
        cin >> valor;
        pila.push(valor); // Apilar el valor introducido
    }

    // Pedir al usuario que introduzca el valor a reemplazar y el nuevo valor
    cout << "Introduce el valor a reemplazar: ";
    cin >> viejo;
    cout << "Introduce el nuevo valor: ";
    cin >> nuevo;

    // Llamar a la función Reemplazar para realizar el reemplazo
    Reemplazar(pila, nuevo, viejo);

    // Mostrar la pila después del reemplazo
    cout << "Pila después de reemplazar:" << endl;
    while (!pila.esVacia()) {
        cout << pila.pop() << endl; // Desapilar y mostrar cada elemento
    }

    return 0;
}