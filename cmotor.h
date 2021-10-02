#ifndef CMOTOR_H
#define CMOTOR_H

#include "cautoparte.h"

class cMotor : public cAutoparte {
private:
    int numCilindros;

public:
    cMotor(int s, int n);

    void imprimir() override;
};

#endif // CMOTOR_H
