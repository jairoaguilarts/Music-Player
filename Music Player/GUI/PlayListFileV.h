#ifndef PLAYLISTFILEV_H
#define PLAYLISTFILEV_H

#include "TDAArchivo.h"
#include "SongInfo.h"
#include "Object.h"
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;

class PlayListFileV : public TDAArchivo {

private:

    string nombrePlaylist;
    vector<Object*> canciones;

public:

    //constructores
    PlayListFileV(string);
    ~PlayListFileV();

    //setters y getters
    void setCanciones(vector<Object*>);
    vector<Object*> getCanciones();

    void setNombre();
    string getNombre();

    //funciones de la clase
    bool agregarCancion(SongInfo*);
    virtual bool leer();
    virtual bool escribir();

};

#endif // PLAYLISTFILEV_H
