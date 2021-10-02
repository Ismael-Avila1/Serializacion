#include "calumno.h"

cAlumno::cAlumno(std::string n, int c) : cPersona(n), codigo(c) {}

void cAlumno::imprimir() {
    std::cout << "\tSoy " << nombre << ". Mi codigo de alumno es: " << codigo << std::endl;
}
