/**
* @file main.cpp
 * @author Denzel Urias
 * @date 11/02/26
 * @brief Cliente de prueba para la clase Pila.
 */

#include <iostream>
#include "Pila.h"


int main() {
    try {
        Pila p;
        p.imprimir();

        p.agregar('q');
        p.imprimir();

        p.agregar('w');
        p.imprimir();

        p.agregar('e');
        p.imprimir();

        p.agregar('r');
        p.imprimir();

        while (!p.estaVacia()) {
            p.eliminar();
            p.imprimir();
        }

        p.eliminar();

    }
    catch (const char *error) {
        std::cerr << "Error: " << error << '\n';
    }
    catch (Pila::PilaVacia &error) {
        std::cerr << "Error en la pila: " << error.what();
    }
    catch (std::exception &error) {
        std::cerr << "Error: " << error.what();
    }
    catch (...) {
        std::cerr << "Error: Ha ocurrido un error inesperado.\n";
    }
}