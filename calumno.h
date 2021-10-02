#ifndef CALUMNO_H
#define CALUMNO_H

#include "cpersona.h"

class cAlumno : public cPersona {
private:
    int codigo;

public:
    cAlumno(std::string n, int c);

    void imprimir() override;
};

#endif // CALUMNO_H
