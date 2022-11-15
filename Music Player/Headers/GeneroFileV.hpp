//
//  GeneroFileV.hpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#ifndef GeneroFileV_hpp
#define GeneroFileV_hpp

#include "TDAArchivo.hpp"
#include "ArrayList.hpp"
#include <iostream>
using namespace std;

class GeneroFileV : public TDAArchivo {
    
private:
    ArrayList generos;
    
public:
    GeneroFileV();
    ~GeneroFileV();
    void setGeneros(ArrayList);
    ArrayList getGeneros();
    void leer();
    void escribir();
    
};

#endif /* GeneroFileV_hpp */
