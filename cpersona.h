#ifndef CPERSONA_H
#define CPERSONA_H

#include<string>
#include <iostream>

#include "cobjeto.h"

class cPersona : public cObjeto {
protected:
    std::string nombre;

public:
    cPersona(std::string nombre);

    void imprimir() override;
};

#endif // CPERSONA_H
