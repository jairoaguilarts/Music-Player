//
//  TDAArchivo.hpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#ifndef TDAArchivo_hpp
#define TDAArchivo_hpp

#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

class TDAArchivo {
    
private:
    char* data;
    int size;
    string fileName;
    fstream *file = nullptr;
    
public:
    TDAArchivo(char*, int, string);
    TDAArchivo(string);
    ~TDAArchivo();
    void setData(char*);
    char* getData();
    void setSize(int);
    int getSize();
    void setFileName(string);
    string getFileName();
    void cerrar();
    void abrir();
    virtual void escribir() = 0;
    virtual void leer() = 0;
    
};

#endif /* TDAArchivo_hpp */
