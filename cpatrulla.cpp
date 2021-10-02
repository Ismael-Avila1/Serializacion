#include "cpatrulla.h"

cPatrulla::cPatrulla(int sm, int nc, int m, bool s) : cAuto(sm, nc, m), sirena(s) {}

void cPatrulla::imprimir() {
    std::cout << "\tPatrulla." << "\n" << "\tModelo: " << modelo << std::endl;

    std::cout << "\tDatos del motor." << std::endl;
    motor.imprimir();

    std::cout << "\tLa sirena esta " << ((sirena == true) ? "encendida" : "apagada") << std::endl;
}
