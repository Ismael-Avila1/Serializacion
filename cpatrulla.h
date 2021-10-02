#ifndef CPATRULLA_H
#define CPATRULLA_H

#include "cauto.h"

class cPatrulla : public cAuto {
protected:
    bool sirena;

public:
    cPatrulla(int sm, int nc, int m, bool s);

    void imprimir() override;
};

#endif // CPATRULLA_H
