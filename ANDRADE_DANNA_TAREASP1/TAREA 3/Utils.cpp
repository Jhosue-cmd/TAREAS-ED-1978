/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Eliminar letra del nombre y apellido                *
 * Autor:                          Andrade Danna                                       *
 * Fecha de creacion:              26/11/2024                                          *
 * Fecha de modificacion:          30/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/ 

#include "Utils.h"
#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

string ingresarLetras(const string& mensaje) {
    string input;
    bool valido = false;

    do {
        cout << mensaje << ": ";
        getline(cin, input);

        // Verificar que solo contenga letras y espacios
        valido = all_of(input.begin(), input.end(), [](char c) {
            return isalpha(c) || isspace(c);
            });

        if (!valido) {
            cout << "Error: Solo se permiten letras. Intente nuevamente." << endl;
        }
    } while (!valido);

    // Preguntar al usuario si desea eliminar alguna letra
    char letraEliminar;
    cout << "¿Desea eliminar alguna letra del " << mensaje << "? (s/n): ";
    char opcion;
    cin >> opcion;

    if (tolower(opcion) == 's') {
        cout << "Ingrese la letra que desea eliminar: ";
        cin >> letraEliminar;

        input.erase(remove_if(input.begin(), input.end(),
            [letraEliminar](char c) {
                return tolower(c) == tolower(letraEliminar);
            }),
            input.end());

        cout << "Resultado despues de eliminar la letra '" << letraEliminar << "': " << input << endl;
    }

    cin.ignore(); 
    return input;
}

string ingresar(const string& mensaje) {
    cout << mensaje << ": ";
    string input;
    cin >> input;
    cin.ignore(); 
    return input;
}

bool validarCedulaEcuatoriana(const string& cedula) {
    if (cedula.length() != 10) return false;
    int suma = 0;
    for (size_t i = 0; i < 9; ++i) {
        int digito = cedula[i] - '0';
        if (i % 2 == 0) {
            digito *= 2;
            if (digito > 9) digito -= 9;
        }
        suma += digito;
    }
    int ultimoDigito = cedula[9] - '0';
    int verificador = (10 - (suma % 10)) % 10;
    return verificador == ultimoDigito;
}
