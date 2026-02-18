//
// Created by Denzel Urias on 10/02/26.
//

#include <iostream>
#include "Pila.h"

template <typename TT, int ttam>
std::ostream & operator<<(std::ostream &salida, const Pila<TT, ttam> &p) {
    salida << "Tope -> ";
    for (int i{p._tope}; i >= 0; --i) {
        salida << "[" << p._elemento[i] << "] ";
    }
    salida << "\n";

    return salida;
}

template <typename T, int tam>
Pila<T, tam>::Pila() {
    _tope = -1;
}

template <typename T, int tam>
void Pila<T, tam>::agregar(T valor) {
    if (estaLlena()) throw "Pila llena";
    _elemento[++_tope] = valor;
}

template <typename T, int tam>
void Pila<T, tam>::eliminar() {
    if (estaVacia()) throw PilaVacia();
    --_tope;
}

template <typename T, int tam>
int Pila<T, tam>::obtenerTam() const {
    return _tope + 1;
}

template <typename T, int tam>
bool Pila<T, tam>::estaVacia() const {
    return _tope == -1;
}

template <typename T, int tam>
bool Pila<T, tam>::estaLlena() const {
    return _tope == TAM_MAX - 1;
}

template <typename T, int tam>
T Pila<T, tam>::obtenerTope() const {
    if (estaVacia()) throw PilaVacia();
    return _elemento[_tope];
}

template <typename T, int tam>
void Pila<T, tam>::vaciar() {
    _tope = -1;
}

template <typename T, int tam>
void Pila<T, tam>::imprimir() const {
    std::cout << "Tope -> ";
    for (int i{_tope}; i >= 0; --i) {
        std::cout << "[" << _elemento[i] << "] ";
    }
    std::cout << "\n";
}

// Definición de PilaVacia

template <typename T, int tam>
Pila<T, tam>::PilaVacia::PilaVacia() throw(){}

template <typename T, int tam>
const char* Pila<T, tam>::PilaVacia::what() const throw() {
    return "La pila se encuentra vacía";
}
