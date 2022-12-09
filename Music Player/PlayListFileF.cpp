//
//  PlayListFileF.cpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#include "PlayListFileF.hpp"
#include "SongInfo.hpp"
using namespace std;

PlayListFileF::PlayListFileF(string pName):TDAArchivo(pName) {}

PlayListFileF::~PlayListFileF() {
    for(int i = 0 ; i< canciones.size();i++){
        delete canciones[i];
    }
    canciones.clear();
}

void PlayListFileF::setCanciones(vector<Object*> canciones)  {
    this->canciones = canciones;
}

vector<Object*> PlayListFileF::getCanciones() {
    return this->canciones;
}

bool PlayListFileF::agregarCancion(SongInfo* pCancion) {
    for(int i = 0; i < canciones.size(); i++) {
        SongInfo* cancion = dynamic_cast<SongInfo*>(canciones[i]);
        if(cancion->getNombre() == pCancion->getNombre()) {
            return false;
        }
    }
    canciones.push_back(pCancion);
    return true;
}

bool PlayListFileF::leer() {
    if(!file->is_open()) {
        return false;
    } else {
        //Hacer el metodo de leer
        return true;
    }
}

bool PlayListFileF::escribir() {
    if(!file->is_open()) {
        return false;
    } else {
        string buffer;
        for(int i = 0; i < canciones.size(); i++) {
            SongInfo* cancion = dynamic_cast<SongInfo*>(canciones[i]);
            if(cancion) {
                //Obtiene los datos de la cancion
                string nombre = cancion->getNombre();
                string disco = cancion->getDisco();
                string artista = cancion->getArtista();
                string ruta = cancion->getRuta();
                //Trunca los datos
                string nombreTruncado = nombre.substr(0, nombreSize);
                string discoTruncado = disco.substr(0, discoSize);
                string artistaTruncado = artista.substr(0, artistaSize);
                string rutaTruncado = ruta.substr(0, rutaSize);
                //Rellena espacios no utilizados
                nombreTruncado.append(nombreSize - nombreTruncado.size(), '"');
                discoTruncado.append(discoSize - discoTruncado.size(), '"');
                artistaTruncado.append(artistaSize - artistaTruncado.size(), '"');
                rutaTruncado.append(rutaSize - rutaTruncado.size(), '"');
                //Construye el buffer
                buffer += nombreTruncado + discoTruncado + artistaTruncado + rutaTruncado;
            }
        }
        file->write(buffer.data(),buffer.size());
        return true;
    }
}
