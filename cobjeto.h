#ifndef COBJETO_H
#define COBJETO_H


class cObjeto {
public:
    cObjeto();

    virtual void imprimir() = 0;

    virtual ~cObjeto() = 0;
};

#endif // COBJETO_H
