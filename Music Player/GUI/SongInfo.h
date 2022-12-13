#ifndef SONGINFO_H
#define SONGINFO_H

#include "Object.h"
#include <iostream>
using namespace std;

class SongInfo : public Object {

private:
    string nombre, disco, artista, ruta;

public:
    SongInfo(string,string,string,string);
    ~SongInfo();
    void setNombre(string);
    string getNombre();
    void setDisco(string);
    string getDisco();
    void setArtista(string);
    string getArtista();
    void setRuta(string);
    string getRuta();
    bool equals(Object*);
    string toString();

};

#endif // SONGINFO_H
