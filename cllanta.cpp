#include "cllanta.h"

cLlanta::cLlanta(int s, int r) : cAutoparte(s), rodado(r) {}

void cLlanta::imprimir() {
    std::cout << "\tNumero de serie de la llanta: " << serie << "\n" << "\tRodado: " << rodado << std::endl;
}
