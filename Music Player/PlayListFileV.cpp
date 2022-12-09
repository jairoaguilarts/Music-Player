//
//  PlayListFileV.cpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#include "PlayListFileV.hpp"

PlayListFileV::PlayListFileV(string pName):TDAArchivo(pName) {}

PlayListFileV::~PlayListFileV() {
    for(int i = 0 ; i< canciones.size();i++){
        delete canciones[i];
    }
    canciones.clear();
}

void PlayListFileV::setCanciones(vector<Object*> canciones)  {
    this->canciones = canciones;
}

vector<Object*> PlayListFileV::getCanciones() {
    return this->canciones;
}

bool PlayListFileV::agregarCancion(SongInfo* pCancion) {
    for(int i = 0; i < canciones.size(); i++) {
        SongInfo* cancion = dynamic_cast<SongInfo*>(canciones[i]);
        if(cancion->getNombre() == pCancion->getNombre()) {
            return false;
        }
    }
    canciones.push_back(pCancion);
    return true;
}

bool PlayListFileV::leer() {
    if(!file->is_open()) {
        return false;
    } else {
        
        return true;
    }
}

bool PlayListFileV::escribir() {
    if(!file->is_open()) {
        return false;
    } else {
        string buffer;
        for(int i = 0; i < canciones.size(); i++) {
            SongInfo* cancion = dynamic_cast<SongInfo*>(canciones[i]);
            if(cancion) {
                string dato = cancion->getNombre() + ";" + cancion->getDisco() + ";" + cancion->getArtista() + ";" + cancion->getRuta();
                buffer += dato + ":";
             }
        }
        file->write(buffer.data(),buffer.size());
        return true;
    }
}
