//
//  SongInfo.cpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#include "SongInfo.hpp"

SongInfo::SongInfo(string nombre, string disco, string artista, string ruta) {
    this->nombre = nombre;
    this->disco = disco;
    this->artista = artista;
    this->ruta = ruta;
}

SongInfo::~SongInfo() {}

void SongInfo::setNombre(string nombre) {
    this->nombre = nombre;
}

string SongInfo::getNombre() {
    return nombre;
}

void SongInfo::setDisco(string disco) {
    this->disco = disco;
}

string SongInfo::getDisco() {
    return disco;
}

void SongInfo::setArtista(string artista) {
    this->artista = artista;
}

string SongInfo::getArtista() {
    return artista;
}

void SongInfo::setRuta(string ruta) {
    this->ruta = ruta;
}
string SongInfo::getRuta() {
    return ruta;
}

bool SongInfo::equals(Object* item) {
    return this == item;
}

string SongInfo::toString() {
    return nombre + disco + artista;
}
