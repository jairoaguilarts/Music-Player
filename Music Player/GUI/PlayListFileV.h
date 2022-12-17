#ifndef PLAYLISTFILEV_H
#define PLAYLISTFILEV_H

#include "TDAArchivo.h"
#include "SongInfo.h"
#include "Object.h"
#include "PlayListInfo.h"
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;

class PlayListFileV : public TDAArchivo {

private:

    //string nombrePlaylist;
    vector<Object*> listaCanciones;

public:

    //constructores
    PlayListFileV(string);
    ~PlayListFileV();

    //setters y getters
    void setPlaylists(vector<Object*>);
    vector<Object*> getPlaylists();

    //funciones de la clase
    bool agregarPlayList(PlayListInfo*);
    virtual bool leer();
    virtual bool escribir();

};

#endif // PLAYLISTFILEV_H
