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
    SongInfoFileV(string);
    ~SongInfoFileV();
    void setCanciones(vector<Object*>);
    vector<Object*> getCanciones();
    bool agregarCancion(SongInfo*);
    virtual bool leer();
    virtual bool
    escribir();

};

#endif // SONGINFOFILEV_H
