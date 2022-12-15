#include "GeneroFileV.h"
#include <sstream>
using namespace std;

GeneroFileV::GeneroFileV(string pName):TDAArchivo(pName) {}

GeneroFileV::~GeneroFileV(){
    for(int i = 0 ; i< generos.size();i++){
        delete generos[i];
    }
    generos.clear();
}

bool GeneroFileV::agregarGenero(Genero* pGenero) {
    for(int i = 0; i < generos.size(); i++) {
        Genero* genero = dynamic_cast<Genero*>(generos[i]);
        if(genero->getNombre() == pGenero->getNombre()) {
            return false;
        }
    }
    generos.push_back(pGenero);
    return true;
}

vector<Object*> GeneroFileV::getGeneros() {
    return generos;
}

bool GeneroFileV::leer() {
    if(!file->is_open()) {
        return false;
    } else {
        string datos;
        getline(*file, datos);
        string nombreGenero;
        stringstream input(datos);
        while (getline(input, nombreGenero, ':')) {
            generos.push_back(new Genero(nombreGenero));
        }
        return true;
    }
}

bool GeneroFileV::escribir() {
    if(!file->is_open()) {
        return false;
    } else {
        file->clear();
        string buffer;
        for(int i = 0; i < generos.size(); i++) {
            Genero* genero = dynamic_cast<Genero*>(generos[i]);
            buffer += genero->getNombre() + ":";
        }
        file->write(buffer.data(),buffer.size());
        return true;
    }
}
