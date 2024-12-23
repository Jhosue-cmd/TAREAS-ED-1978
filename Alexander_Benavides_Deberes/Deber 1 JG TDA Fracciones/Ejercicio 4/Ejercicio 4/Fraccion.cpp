// Fraccion.cpp
#include "Fraccion.h"
#include <stdexcept>

using namespace std;

Fraccion::Fraccion(int num, int denom) : numerador(num), denominador(denom) {
    if (denominador == 0) {
        throw invalid_argument("El denominador no puede ser cero.");
    }
}

int Fraccion::getNumerador() const {
    return numerador;
}

int Fraccion::getDenominador() const {
    return denominador;
}

float Fraccion::valorDecimal() const {
    return static_cast<float>(numerador) / denominador;
}

Fraccion Fraccion::sumar(const Fraccion& otra) const {
    int nuevoNumerador = numerador * otra.getDenominador() + denominador * otra.getNumerador();
    int nuevoDenominador = denominador * otra.getDenominador();
    return Fraccion(nuevoNumerador, nuevoDenominador);
}

Fraccion Fraccion::elevarCuadrado() const {
    int nuevoNumerador = numerador * numerador;
    int nuevoDenominador = denominador * denominador;
    return Fraccion(nuevoNumerador, nuevoDenominador);
}

