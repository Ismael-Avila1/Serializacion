#ifndef CAUTO_H
#define CAUTO_H

#include <iostream>

#include "cobjeto.h"
#include "cmotor.h"

class cAuto : public cObjeto {
protected:
    cMotor motor;
    int modelo;

public:
    cAuto(int sm, int nc, int m);

    void imprimir() override;
};

#endif // CAUTO_H
