#include "PlayListInfo.h"

PlayListInfo::PlayListInfo(string _nombre){
    this->nombre = _nombre;
}

PlayListInfo::~PlayListInfo() {}

void PlayListInfo::setNombre(string _nombre){
    this->nombre = _nombre;
}

string PlayListInfo::getNombre(){
    return this->nombre;
}

void PlayListInfo::setCanciones(vector<Object*> _canciones)  {
    this->canciones = _canciones;
}

vector<Object*> PlayListInfo::getCanciones() {
    return this->canciones;
}

bool PlayListInfo::addCancion(Object* _cancion){
    canciones.push_back(_cancion);
    return 1;
}

bool PlayListInfo::equals(Object* item) {
    return this == item;
}

string PlayListInfo::toString() {
    return nombre;
}
