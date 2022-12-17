#ifndef PLAYLISTINFO_H
#define PLAYLISTINFO_H
#include "Object.h"
#include "SongInfo.h"
#include <vector>
#include <iostream>
#include <cstring>

using namespace std;

class PlayListInfo : public Object {
private:
    string nombre;
    vector<Object*> canciones;

public:
    PlayListInfo(string);
    ~PlayListInfo();

    //set y get canciones dentro del vector
    void setCanciones(vector<Object*>);
    vector<Object*> getCanciones();

    //funcion para añadir canciones
    bool addCancion(Object*);

    //gette y setter
    void setNombre(string);
    string getNombre();

    bool equals(Object*);
    string toString();
};

#endif // PLAYLISTINFO_H
