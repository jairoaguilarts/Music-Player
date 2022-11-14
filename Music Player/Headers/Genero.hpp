//
//  Genero.hpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#ifndef Genero_hpp
#define Genero_hpp

#include <iostream>
#include "Object.hpp"
using namespace std;

class Genero : public Object {
    
private:
    string nombre;
    
public:
    string getNombre();
    void setNombre(string nombre);
    bool equals(Object*);
    string toString();
    
};

#endif /* Genero_hpp */
