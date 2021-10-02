#include "ctaxi.h"

cTaxi::cTaxi(int sm, int nc, int m, int s) : cAuto(sm, nc, m), sitio(s) {}

void cTaxi::imprimir() {
    std::cout << "\tTaxi." << "\n" << "\tModelo: " << modelo << std::endl;

    std::cout << "\tDatos del motor." << std::endl;
    motor.imprimir();

    std::cout << "\tTaxi del sitio: " << sitio << std::endl;
}
