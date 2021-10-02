#include "cautoparte.h"

cAutoparte::cAutoparte(int s) : cObjeto(), serie(s) {}

void cAutoparte::imprimir() {
    std::cout << "\tAutoparte." << "\n" << "\tNumero de serie: " << serie << std::endl;
}
