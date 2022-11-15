//
//  TDAArchivo.hpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#ifndef TDAArchivo_hpp
#define TDAArchivo_hpp

#include "Object.hpp"
#include <iostream>
#include <cstring>
using namespace std;

class TDAArchivo {
    
private:
    char* data;
    int size;
    string fileName;
    
public:
    TDAArchivo(char*, int, string);
    ~TDAArchivo();
    void setData(char*);
    char* getData();
    void setSize(int);
    int getSize();
    void setFileName();
    string getFileName();
    void cerrar();
    void abrir();
    virtual void escribir() = 0;
    virtual void leer() = 0;
    bool equals(Object*);
    string toString();
    
};

#endif /* TDAArchivo_hpp */
