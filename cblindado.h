#ifndef CBLINDADO_H
#define CBLINDADO_H

#include "cpatrulla.h"

class cBlindado : public cPatrulla {
private:
    int blindaje;
public:
    cBlindado(int sm, int nc, int m, bool s, int b);

    void imprimir() override;
};

#endif // CBLINDADO_H
