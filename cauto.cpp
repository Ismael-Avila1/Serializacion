#include "cauto.h"

cAuto::cAuto(int sm, int nc, int m) : motor(sm, nc), modelo(m) {}

void cAuto::imprimir() {
    std::cout << "\tAuto." << "\n" << "\tModelo: " << modelo << std::endl;

    std::cout <<"\tDatos del motor." << std::endl;
    motor.imprimir();
}
