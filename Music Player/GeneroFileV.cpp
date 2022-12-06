//
//  GeneroFileV.cpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#include "GeneroFileV.hpp"

GeneroFileV::GeneroFileV(string pName):TDAArchivo(pName) {}

GeneroFileV::~GeneroFileV(){
    for(int i = 0 ; i< generos.size();i++){
        delete generos[i];
    }
    generos.clear();
}

bool GeneroFileV::agregarGenero(Genero* pGenero) {
    for(int i = 0; i < generos.size(); i++) {
        Genero* genero = dynamic_cast<Genero*>(generos[i]);
        if(genero->getNombre() == pGenero->getNombre()) {
            return false;
        }
    }
    generos.push_back(pGenero);
    return true;
}


bool GeneroFileV::leer() {
    if(!file->is_open()) {
        return false;
    } else {
        
        return true;
    }
}

bool GeneroFileV::escribir() {
    if(!file->is_open()) {
        return false;
    } else {
        string buffer;
        for(int i = 0; i < generos.size(); i++) {
            Genero* genero = dynamic_cast<Genero*>(generos[i]);
            if(i == (generos.size() - 1)) {
                buffer += genero->getNombre();
            } else {
                buffer += genero->getNombre() + ":";
            }
        }
        file->write(buffer.data(),buffer.size());
        return true;
    }
}
