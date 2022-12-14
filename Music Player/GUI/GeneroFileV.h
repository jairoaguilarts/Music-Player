#ifndef GENEROFILEV_H
#define GENEROFILEV_H

#include "TDAArchivo.h"
#include "Genero.h"
#include <iostream>
#include <vector>
using namespace std;

class GeneroFileV : public TDAArchivo {

private:
    bool open;
    vector<Object*> generos;

public:
    GeneroFileV(string);
    ~GeneroFileV();
    void setGeneros(vector<Object*>);
    vector<Object*> getGeneros();
    bool agregarGenero(Genero*);
    virtual bool leer();
    virtual bool escribir();

};


#endif // GENEROFILEV_H
