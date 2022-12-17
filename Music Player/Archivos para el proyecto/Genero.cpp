//
//  Genero.cpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#include "Genero.hpp"

Genero::Genero(string nombre) {
    this->nombre = nombre;
}

Genero::~Genero() {}

void Genero::setNombre(string nombre) {
    this->nombre = nombre;
}

string Genero::getNombre() {
    return nombre;
}

bool Genero::equals(Object* item) {
    return this == item;
}

string Genero::toString() {
    return nombre;
}
