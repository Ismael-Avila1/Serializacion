#include "cblindado.h"

cBlindado::cBlindado(int sm, int nc, int m, bool s, int b) : cPatrulla(sm, nc, m, s), blindaje(b) {}

void cBlindado::imprimir() {
    std::cout << "\tPatrulla blindada." << "\n" << "\tModelo: " << modelo << std::endl;

    std::cout << "\tDatos del motor." << std::endl;
    motor.imprimir();

    std::cout << "\tLa sirena esta " << ((sirena == true) ? "encendida" : "apagada") << std::endl;

    std::cout << "\tNivel de blindaje: " << blindaje << std::endl;
}

void cBlindado::Salvar(std::fstream &out) {
    motor.Salvar(out);
    out << modelo << std::endl;
    out << sirena << std::endl;
    out << blindaje << std::endl;
}

void cBlindado::Cargar(std::fstream &in) {
    motor.Cargar(in);
    in >> modelo;
    in >> sirena;
    in >> blindaje;
}

int cBlindado::GetCLSID() {
    return CLSID_BLINDADO;
}
