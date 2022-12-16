#include "PlayListFileV.h"
#include <sstream>
using namespace std;

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
        string datos;
        getline(*file, datos);
        string cancion;
        stringstream input(datos);

        //hacer un fwhile de las llaves {
        while (getline(input, cancion, '%')) {
            string nombre, disco, artista, ruta, genero;
            stringstream inputCancion(cancion);
            //Getlines para obtener los datos
            getline(inputCancion, nombre, ';');
            getline(inputCancion, disco, ';');
            getline(inputCancion, artista, ';');
            getline(inputCancion, ruta, ';');
            getline(inputCancion, genero, ';');
            SongInfo* oCancion = new SongInfo(nombre, disco, artista, ruta, genero);
            canciones.push_back(oCancion);
        }

        return true;
    }
}

bool PlayListFileV::escribir() {

    if(!file->is_open()) {
        return false;
    } else {
        file->clear();
        string buffer;

        //Nombre{nombre;disco;artista;ruta;genero:nombre%disco;artista;ruta;genero%}Nombre1{nombre;disco;artista;ruta;genero:nombre%disco;artista;ruta;genero%}

        for(int i = 0; i < canciones.size(); i++) {
            SongInfo* cancion = dynamic_cast<SongInfo*>(canciones[i]);
            if(cancion) {
                string dato = cancion->getNombre() + ";" + cancion->getDisco() + ";" + cancion->getArtista() + ";" + cancion->getRuta() + ";" + cancion->getGenero();
                buffer += dato + ":";
             }
        }

        file->write(buffer.data(),buffer.size());
        return true;
    }
}
