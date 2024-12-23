/*
Universidad de las Fuerzas Armadas ESPE
Programa TDA
Alexis Viteri
Fecha de creacion:  31/10/2024
Ultima fecha de modificacion:   01/11/2024
Estructura de Datos
NRC:  1978
*/
#include<iostream>
#include<conio.h>
#include <iostream> 
using namespace std; 
// **Declaraci�n de la plantilla de la clase Calculo**
template <typename T> 
class Calculo 
{ 
public: 
// **Constructor**
// Este constructor inicializa las 2 variables privadas
// de la clase Calculo, con los valores especificados en
// los valores especificados en los argumentos a y b tipo template
	Calculo(T numero1, T numero2); 
// **Funci�n para sumar los valores de a y b**
    T sumar(); 
// **Funci�n para restar los valores de a y b**
    T restar(); 
// **Funci�n para multiplicar los valores de a y b**
    T multiplicar(); 
private: 
// **Atributos**
// Almacenan los valores de tipo T que se utilizar�n en las operaciones.
    T numero1; 
    T numero2; 
}; 

