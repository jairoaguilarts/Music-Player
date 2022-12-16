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

void PlayListFileV::setPlaylists(vector<Object*> canciones)  {
    this->canciones = canciones;
}

vector<Object*> PlayListFileV::getPlaylists() {
    return this->canciones;
}

void PlayListFileV::setNombre(string _nombre)
{
    this->nombrePlaylist=_nombre;
}

string PlayListFileV::getNombre()
{
    return this->nombrePlaylist;
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
        string playlist;
        string cancion;
        stringstream input(datos);

        //hacer un fwhile de las llaves {
        while (getline(input, playlist, '}')){
            string name, listaCanciones;
            stringstream inputPLaylists(playlist);
            getline(inputPLaylists, name, '{');
            getline(inputPLaylists, listaCanciones,'{');
            cout << name << endl;
            cout << listaCanciones << endl;
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

        // NombrePLaylist{nombre;disco;artista;ruta;genero:nombre%disco;artista;ruta;genero%}Playlist2{nombre;disco;artista;ruta;genero:nombre%disco;artista;ruta;genero%}
        buffer +=this->getNombre() + "{";

        for(int i = 0; i < canciones.size(); i++) {
            SongInfo* cancion = dynamic_cast<SongInfo*>(canciones[i]);
            if(cancion) {
                string dato = cancion->getNombre() + ";" + cancion->getDisco() + ";" + cancion->getArtista() + ";" + cancion->getRuta() + ";" + cancion->getGenero();
                buffer += dato + ":";
             }
        }
        buffer += "}";

        file->write(buffer.data(),buffer.size());
        return true;
    }
}
