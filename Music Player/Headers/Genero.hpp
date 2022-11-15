//
//  Genero.hpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#ifndef Genero_hpp
#define Genero_hpp

#include "Object.hpp"
#include <iostream>
using namespace std;

class Genero : public Object {
    
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

#endif /* Genero_hpp */
