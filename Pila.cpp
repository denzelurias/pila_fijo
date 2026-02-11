//
// Created by Denzel Urias on 10/02/26.
//

#include "Pila.h"

Pila::Pila() {
    _tope = -1;
}
void Pila::agregar(char valor) {
    if (estaLlena()) throw "Pila llena";
    _elemento[++_tope] = valor;
}

void Pila::eliminar() {
    if (estaVacia()) throw "Pila vacía";
    --_tope;
}

int Pila::obtenerTam() const {
    return _tope + 1;

}
bool Pila::estaVacia() const {
    return _tope == -1;
}
bool Pila::estaLlena() const {
    return _tope == TAM_MAX - 1;
}
char Pila::obtenerTope() const {
    if (estaVacia()) throw "Pila vacía";
    return _elemento[_tope];
}
void Pila::vaciar() {
    _tope = -1;
}