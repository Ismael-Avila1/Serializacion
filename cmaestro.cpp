#include "cmaestro.h"

cMaestro::cMaestro(std::string n, int c) : cPersona(n), codigo(c) {}

void cMaestro::imprimir() {
    std::cout << "\tSoy " << nombre << ". Mi codigo de maestro es: " << codigo << std::endl;
}
