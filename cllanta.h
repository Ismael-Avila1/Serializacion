#ifndef CLLANTA_H
#define CLLANTA_H

#include "cautoparte.h"

class cLlanta : public cAutoparte {
private:
    int rodado;

public:
    cLlanta(int s, int r);

    void imprimir() override;
};

#endif // CLLANTA_H
