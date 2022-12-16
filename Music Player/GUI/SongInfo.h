#ifndef SONGINFO_H
#define SONGINFO_H

#include "Object.h"
#include <iostream>

using namespace std;

class SongInfo : public Object {

private:

    string nombre, disco, artista, ruta, genero;

public:

    SongInfo(string,string,string,string,string);
    ~SongInfo();

    //setters y getters
    void setNombre(string);
    string getNombre();
    void setDisco(string);
    string getDisco();
    void setArtista(string);
    string getArtista();
    void setRuta(string);
    string getRuta();
    void setGenero(string);
    string getGenero();

    //metodos polimorficos del objeto
    bool equals(Object*);
    string toString();

};

#endif // SONGINFO_H
