//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
// POGRAMA:
// AUTOR: Arana Iza Estefania de los Angeles
// FECHA DE CREACIÓN:
// FECHA DE MODIFICACIÓN:
// NRC:
// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





#include <iostream>
#include "Fraccion.h"

using namespace std;

int main() {
    int num1, denom1, num2, denom2;

    cout << "Ingrese el numerador de la primera fraccion: ";
    cin >> num1;
    cout << "Ingrese el denominador de la primera fraccion: ";
    cin >> denom1;

    cout << "Ingrese el numerador de la segunda fraccion: ";
    cin >> num2;
    cout << "Ingrese el denominador de la segunda fraccion: ";
    cin >> denom2;

    try {
        Fraccion fraccion1(num1, denom1);
        Fraccion fraccion2(num2, denom2);

        // Elevar al cuadrado ambas fracciones
        Fraccion fraccion1Cuadrado = fraccion1.elevarCuadrado();
        Fraccion fraccion2Cuadrado = fraccion2.elevarCuadrado();

        // Sumar las fracciones elevadas al cuadrado
        Fraccion resultado = fraccion1Cuadrado.sumar(fraccion2Cuadrado);

        cout << "El resultado de la suma de las fracciones al cuadrado es: " << resultado.valorDecimal() << endl;
    }
    catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
