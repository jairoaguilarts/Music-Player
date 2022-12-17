//
//  GeneroFileV.hpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#ifndef GeneroFileV_hpp
#define GeneroFileV_hpp

#include "TDAArchivo.hpp"
#include "Genero.hpp"
#include <iostream>
#include <vector>
using namespace std;

class GeneroFileV : public TDAArchivo {
    
private:
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

#endif /* GeneroFileV_hpp */
