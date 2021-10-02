#ifndef CMAESTRO_H
#define CMAESTRO_H

#include "cpersona.h"

class cMaestro : public cPersona {
private:
    int codigo;

public:
    cMaestro(std::string n, int c);

    void imprimir() override;
};

#endif // CMAESTRO_H
