//
//  GeneroFileF.hpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#ifndef GeneroFileF_hpp
#define GeneroFileF_hpp

#include "TDAArchivo.hpp"
#include "Genero.hpp"
#include <iostream>
#include <vector>
using namespace std;

class GeneroFileF : public TDAArchivo {
    
    /*
     Nombre: alfanumerico
     size: 20 bytes
     */
private:
    vector<Object*> generos;
    int SizeNombre = 20;
    
public:
    GeneroFileF(string);
    ~GeneroFileF();
    void setGeneros(vector<Object*>);
    vector<Object*> getGeneros();
    bool agregarGenero(Genero*);
    bool eliminarGenero(Genero*);
    bool modificarGenero(string,int);
    virtual bool leer();
    virtual bool escribir();
    
};

#endif /* GeneroFileF_hpp */
