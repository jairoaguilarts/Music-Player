//
//  GeneroFileF.hpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#ifndef GeneroFileF_hpp
#define GeneroFileF_hpp

#include "TDAArchivo.hpp"
#include "ArrayList.hpp"
#include <iostream>
using namespace std;

class GeneroFileF : public TDAArchivo {
    
private:
    ArrayList generos;
    
public:
    GeneroFileF();
    ~GeneroFileF();
    void setGeneros(ArrayList);
    ArrayList getGeneros();
    void leer();
    void escribir();
    
};

#endif /* GeneroFileF_hpp */
