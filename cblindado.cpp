#include "cblindado.h"

cBlindado::cBlindado(int sm, int nc, int m, bool s, int b) : cPatrulla(sm, nc, m, s), blindaje(b) {}

void cBlindado::imprimir() {
    std::cout << "\tPatrulla blindada." << "\n" << "\tModelo: " << modelo << std::endl;

    std::cout << "\tDatos del motor." << std::endl;
    motor.imprimir();

    std::cout << "\tLa sirena esta " << ((sirena == true) ? "encendida" : "apagada") << std::endl;

    std::cout << "\tNivel de blindaje: " << blindaje << std::endl;
}
