#ifndef CTAXI_H
#define CTAXI_H

#include "cauto.h"

class cTaxi : public cAuto {
private:
    int sitio;
public:
    cTaxi(int sm, int nc, int m, int s);

    void imprimir() override;
};

#endif // CTAXI_H
