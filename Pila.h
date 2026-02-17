/**
* @file Matriz.h
 * @author Denzel Urias - Angel Ortega
 * @date 08/02/26
 * @brief Definición de la clase Pila.
 */

#include <exception>

#ifndef PILACONARREGLOFIJO_PILA_H
#define PILACONARREGLOFIJO_PILA_H

#define TAM_MAX 10

class Pila {
public:
    Pila();

    void agregar(char valor);
    void eliminar();
    int obtenerTam() const;
    bool estaVacia() const;
    bool estaLlena() const;
    char obtenerTope() const;
    void vaciar();

    void imprimir() const;

    class PilaVacia : public std::exception {
    public:
        PilaVacia() throw();
        virtual const char * what() const throw();
    };
private:
    int _tope;
    char _elemento[TAM_MAX];
};

//#include ""
#endif //PILACONARREGLOFIJO_PILA_H