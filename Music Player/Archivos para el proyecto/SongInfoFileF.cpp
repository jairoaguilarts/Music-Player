//
//  SongInfoFileF.cpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#include "SongInfoFileF.hpp"

SongInfoFileF::SongInfoFileF(string pName):TDAArchivo(pName) {}

SongInfoFileF::~SongInfoFileF() {
    for(int i = 0 ; i< canciones.size();i++){
        delete canciones[i];
    }
    canciones.clear();
}

void SongInfoFileF::setCanciones(vector<Object*> canciones)  {
    this->canciones = canciones;
}

vector<Object*> SongInfoFileF::getCanciones() {
    return this->canciones;
}

bool SongInfoFileF::agregarCancion(SongInfo* pCancion) {
    for(int i = 0; i < canciones.size(); i++) {
        SongInfo* cancion = dynamic_cast<SongInfo*>(canciones[i]);
        if(cancion->getNombre() == pCancion->getNombre()) {
            return false;
        }
    }
    canciones.push_back(pCancion);
    return true;
}

bool SongInfoFileF::leer() {
    if(!file->is_open()) {
        return false;
    } else {
        int sector = this->totalBytes * 7;
        char* datos = nullptr;
        do {
            datos = new char[sector];
            file->read(datos, sector);
            int pos = 0;
            for(int i = 0; i < strlen(datos)/70; i++) {
                string nombre, disco, artista, ruta;
                for(int j = 0; j < 15; j++) { //Construye el nombre de la cancion
                    if(datos[pos] != '"') {
                        nombre.push_back(datos[pos]);
                    }
                    pos++;
                }
                for(int j = 0; j < 10; j++) { //Construye el nombre del disco
                    if(datos[pos] != '"') {
                        disco.push_back(datos[pos]);
                    }
                    pos++;
                }
                for(int j = 0; j < 15; j++) { //Construye el nombre del artista
                    if(datos[pos] != '"') {
                        artista.push_back(datos[pos]);
                    }
                    pos++;
                }
                for(int j = 0; j < 30; j++) { //Construye la ruta
                    if(datos[pos] != '"') {
                        ruta.push_back(datos[pos]);
                    }
                    pos++;
                }
                cout << nombre << " " << disco << " " << artista << " " << ruta << endl;
                SongInfo* cancion = new SongInfo(nombre, disco, artista, ruta);
                canciones.push_back(cancion);
            }
        } while(strlen(datos) != 0);
        return true;
    }
}

bool SongInfoFileF::escribir() {
    if(!file->is_open()) {
        return false;
    } else {
        file->clear();
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

