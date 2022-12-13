#ifndef GENERO_H
#define GENERO_H

#include "Object.h"
#include <iostream>
using namespace std;

class Genero : public Object {

private:
    string nombre; //Limitado a 20 bytes

public:
    Genero(string);
    ~Genero();
    void setNombre(string);
    string getNombre();
    bool equals(Object*);
    string toString();

};
#endif // GENERO_H
