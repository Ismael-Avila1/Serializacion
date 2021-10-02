#include "cmotor.h"

cMotor::cMotor(int s, int n) : cAutoparte(s), numCilindros(n) {}

void cMotor::imprimir() {
    std::cout << "\tNumero de serie del motor: " << serie << "\n" << "\tNumero de cilindros: " << numCilindros << std::endl;
}
