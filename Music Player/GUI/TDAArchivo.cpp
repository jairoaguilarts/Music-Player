#include "TDAArchivo.h"
#include <fstream>
using namespace std;

TDAArchivo::TDAArchivo(char* data, int size, string fileName) {
    this->data = data;
    this->size = size;
    this->fileName = fileName;
}

TDAArchivo::TDAArchivo(string fileName) {
    this->fileName = fileName;
}

TDAArchivo::~TDAArchivo() {
    if (data) { //Libera la memoria de los datos
        delete data;
    }
    if(file) { //Libera la memoria del archivo
        delete file;
    }
}

void TDAArchivo::setData(char* data) {
    this->data = data;
}

char* TDAArchivo::getData() {
    return data;
}

void TDAArchivo::setSize(int size) {
    this->size = size;
}

int TDAArchivo::getSize() {
    return size;
}

void TDAArchivo::setFileName(string fileName) {
    this->fileName = fileName;
}

string TDAArchivo::getFileName() {
    return fileName;
}

bool TDAArchivo::abrir() {
    this->file = new fstream(fileName, ios::out | ios::in); //Instancia el archivo
    return this->file->is_open();
}

void TDAArchivo::cerrar() {
    if(file->is_open()) { //Valida si el archivo esta abierto
        file->close();
    }
}
