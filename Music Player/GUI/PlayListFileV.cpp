#include "PlayListFileV.h"
#include <sstream>
using namespace std;

PlayListFileV::PlayListFileV(string pName):TDAArchivo(pName) {}

PlayListFileV::~PlayListFileV() {
    for(int i = 0 ; i < listaCanciones.size();i++){
        delete listaCanciones[i];
    }
    listaCanciones.clear();
}

void PlayListFileV::setPlaylists(vector<Object*> canciones)  {
    this->listaCanciones = canciones;
}

vector<Object*> PlayListFileV::getPlaylists() {
    return this->listaCanciones;
}

bool PlayListFileV::agregarPlayList(PlayListInfo* _pLista) {

    for(int i = 0; i < listaCanciones.size(); i++) {
        PlayListInfo* cancion = dynamic_cast<PlayListInfo*>(listaCanciones[i]);
        if(cancion->getNombre() == _pLista->getNombre()) {
            return false;
        }
    }
    listaCanciones.push_back(_pLista);
    return true;
}

bool PlayListFileV::leer() {

    /*if(!file->is_open()) {
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
                listaCanciones.push_back(oCancion);
            }
        }


        return true;
    }*/
}

bool PlayListFileV::escribir() {

    if(!file->is_open()) {
        return false;
    } else {
        file->clear();
        string buffer;

        // NombrePLaylist{nombre;disco;artista;ruta;genero%nombre;disco;artista;ruta;genero%}Playlist2{nombre;disco;artista;ruta;genero%nombre;disco;artista;ruta;genero%}
        //buffer +=this->getNombre() + "{";

        for(int i = 0; i < listaCanciones.size(); i++) {
            PlayListInfo* pLista = dynamic_cast<PlayListInfo*>(listaCanciones[i]);
            if(pLista) {
                buffer += pLista->getNombre() + "{";
                for (int i = 0; i < pLista->getCanciones().size(); ++i) {
                    SongInfo* pCancion = dynamic_cast<SongInfo*>(pLista->getCanciones()[i]);

                    string dato = pCancion->getNombre() + ";" + pCancion->getDisco() + ";" + pCancion->getArtista() + ";"
                            + pCancion->getRuta() + ";" + pCancion->getGenero();
                    buffer += dato + "%";
                }
             }
            buffer += "}";
        }
        file->write(buffer.data(),buffer.size());
        return true;
    }
}
