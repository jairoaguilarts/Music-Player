//
//  GeneroFileF.cpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#include "GeneroFileF.hpp"

GeneroFileF::GeneroFileF():TDAArchivo("") {}

GeneroFileF::GeneroFileF(string fileName):TDAArchivo(fileName) {}

GeneroFileF::~GeneroFileF(){}

bool GeneroFileF::escribir() {
    if(file->is_open()) {
        string dato;
        
        file->write(dato.data(), this->NombreSize);
        return false;
    }
    return false;
}
