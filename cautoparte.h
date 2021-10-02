#ifndef CAUTOPARTE_H
#define CAUTOPARTE_H

#include <iostream>

#include "cobjeto.h"

class cAutoparte : public cObjeto {
protected:
    int serie;

public:
    cAutoparte(int s);
    void imprimir() override;
};

#endif // CAUTOPARTE_H
