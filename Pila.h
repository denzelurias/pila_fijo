/**
* @file Pila.h
 * @author Denzel Urias
 * @date 08/02/26
 * @brief Definición de la clase Pila.
 */

#include <exception>

#ifndef PILACONARREGLOFIJO_PILA_H
#define PILACONARREGLOFIJO_PILA_H

#define TAM_MAX 10

template <typename T, int tam>
class Pila {
    template <typename TT, int ttam>
    friend std::ostream & operator<<(std::ostream &salida, const Pila<TT, ttam> &p);
public:
    Pila();

    void agregar(T valor);
    void eliminar();
    int obtenerTam() const;
    bool estaVacia() const;
    bool estaLlena() const;
    T obtenerTope() const;
    void vaciar();

    void imprimir() const;

    class PilaVacia : public std::exception {
    public:
        PilaVacia() throw();
        virtual const char * what() const throw();
    };
private:
    int _tope;
    T _elemento[tam];
};

#include "Pila.tpp"
#endif //PILACONARREGLOFIJO_PILA_H