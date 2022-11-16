//
//  TDAArchivo.cpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#include "TDAArchivo.hpp"
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
    if (data) {
        delete data;
    }
    if(file) {
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

void TDAArchivo::abrir() {
    this->file = new fstream(fileName, ios::in | ios::out);
}

void TDAArchivo::cerrar() {
    if(file->is_open()) {
        file->close();
    }
}
