//
// Created by Denzel Urias on 10/02/26.
//

#ifndef PILACONARREGLOFIJO_PILA_H
#define PILACONARREGLOFIJO_PILA_H

#define TAM_MAX 10

class Pila {
public:
    int obtenerTam() const;
    bool estaVacia() const;
    bool estaLlena() const;
    char obtenerTope() const;
    void vaciar();
private:
    int _tope;
    char _elemento[TAM_MAX];
};


#endif //PILACONARREGLOFIJO_PILA_H