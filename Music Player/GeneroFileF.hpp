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
#include "ArrayList.hpp"
#include <iostream>
using namespace std;

class GeneroFileF : public TDAArchivo {
    
    /*
     Nombre: alfanumerico
     size: 20 bytes
     */
private:
    ArrayList generos;
    int NombreSize = 20;
    
public:
    GeneroFileF();
    GeneroFileF(string);
    ~GeneroFileF();
    void setGeneros(ArrayList);
    ArrayList getGeneros();
    bool agregarGenero(Genero*);
    bool eliminarGenero(Genero*);
    bool modificarGenero(Genero*);
    virtual bool leer();
    virtual bool escribir();
    
};

#endif /* GeneroFileF_hpp */
