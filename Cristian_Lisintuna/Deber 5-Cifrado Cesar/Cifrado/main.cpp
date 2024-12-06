/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  
 * Proposito:                      Cifrado Cesar                      
 * Autor:                          Cristian Lisintua�a                                 
 * Fecha de creacion:              06/12/2024                                           
 * Fecha de modificacion:          06/12/2024                                           
 * Materia:                        Estructura de datos                                 
 * NRC :                           1978                                                
 **************************************************************************************/

#include "CifradoCesar.h"
#include <iostream>

using namespace std;

int main() {
    string texto;
    int desplazamiento = 3; // Desplazamiento quemado en el c�digo
    
    // Solicitar el texto a cifrar
    cout << "Introduce el texto a cifrar (incluye letras y n�meros): ";
    getline(cin, texto);
    
    // Cifrar el texto con el desplazamiento quemado
    string textoCifrado = cifrarCesar(texto, desplazamiento);
    cout << "Texto cifrado: " << textoCifrado << endl;

    // Solicitar clave y cifrar
    solicitarClaveYDescifrar(textoCifrado, desplazamiento);

    return 0;
}

