#ifndef SONGINFOFILEV_H
#define SONGINFOFILEV_H

#include "TDAArchivo.h"
#include "SongInfo.h"
#include "Object.h"
#include <vector>
#include <iostream>

using namespace std;

class SongInfoFileV : public TDAArchivo {

private:

    vector<Object*> canciones;

public:

    //constructores
    SongInfoFileV(string);
    ~SongInfoFileV();

    //setters y getters
    void setCanciones(vector<Object*>);
    vector<Object*> getCanciones();

    //funciones de la clase SonInfoFile
    bool agregarCancion(SongInfo*);
    virtual bool leer();
    virtual bool escribir();

};

#endif // SONGINFOFILEV_H
