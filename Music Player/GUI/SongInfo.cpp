#include "SongInfo.h"

SongInfo::SongInfo(string _nombre, string _disco, string _artista, string _ruta, string _genero) {
    this->nombre = _nombre;
    this->disco = _disco;
    this->artista = _artista;
    this->ruta = _ruta;
    this->genero = _genero;
}

SongInfo::~SongInfo() {}

void SongInfo::setNombre(string _nombre) {
    this->nombre = _nombre;
}

string SongInfo::getNombre() {
    return nombre;
}

void SongInfo::setDisco(string _disco) {
    this->disco = _disco;
}

string SongInfo::getDisco() {
    return disco;
}

void SongInfo::setArtista(string _artista) {
    this->artista = _artista;
}

string SongInfo::getArtista() {
    return artista;
}

void SongInfo::setRuta(string _ruta) {
    this->ruta = _ruta;
}

string SongInfo::getRuta() {
    return ruta;
}

void SongInfo::setGenero(string _genero){
    this->genero = _genero;
}

string SongInfo::getGenero(){
    return this->genero;
}

bool SongInfo::equals(Object* item) {
    return this == item;
}

string SongInfo::toString() {
    return nombre + " " + disco + " " + artista;
}
