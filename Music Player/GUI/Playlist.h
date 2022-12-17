#ifndef PLAYLIST_H
#define PLAYLIST_H

#endif // PLAYLIST_H

#include "Object.h"
#include <iostream>
#include <vector>
using namespace std;

class Playlist : public Object {

private:
    string nombre;


public:
    Genero(string);
    ~Genero();
    void setNombre(string);
    string getNombre();
    bool equals(Object*);
    string toString();

};
#endif // GENERO_H
