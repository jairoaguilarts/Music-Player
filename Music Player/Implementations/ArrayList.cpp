//
//  ArrayList.cpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#include "ArrayList.hpp"
//#include "Alumno.h"
#include <iostream>
using namespace std;

ArrayList::ArrayList() {
    n = 0;
    capacidad = 10;
    array = new Object*[capacidad];
    for(int i = 0; i < capacidad; i++)
        array[i] = NULL;
}

ArrayList::~ArrayList() {
    //libera el contenido de las casillas
    for(int i = 0; i < capacidad; i++){
        if(array[i]){
            delete &array[i];
        }
    }
    //libera el arreglo
    delete[] array;
}

int ArrayList::getSize() {
    return n;
}

void ArrayList::imprimir_lista(){
    if(n != 0) {
        for (int i = 0; i < n; i++){
            cout << (i+1) << ") " << array[i]->toString() << endl;
        }
    } else {
        cout << "La lista está vacia" << endl;
    }
}

bool ArrayList::inserta(Object* item, int posicion) {
    if(n == capacidad) {
        capacidad += 10;
        Object** aux = new Object*[capacidad];
        for(int i = 0; i < n; i++) {
            aux[i] = array[i];
        }
        delete[] array;
        array = aux;
    }
    if(item == nullptr) {
        return false;
    }
    if (posicion >= 1 && posicion <= n + 1) {
        for (int i = n; i >= posicion; i--) {
            array[i] = array[i - 1];
        }
        array[posicion - 1] = item;
        n++;
        return true;
    }
    return false;
}

bool ArrayList::suprime(int posicion) {
    if (posicion >= 1 && posicion <= n) {
        array[posicion - 1] = nullptr;
        for (int i = posicion - 1; i < n; i++) {
            array[i] = array[i + 1];
        }
        n--;
        return true;
    }
    return false;
}

void ArrayList::anula() {
    for(int i = n - 1; i >= 0; i--) {
        array[i] = nullptr;
    }
    n = 0;
}

Object* ArrayList::recupera(int posicion) {
    if(posicion >= 1 && posicion <= n) {
        return array[posicion - 1];
    }
    return nullptr;
}

Object* ArrayList::siguiente(int posicion) {
    return recupera(posicion + 1);
}

Object* ArrayList::anterior(int posicion) {
    return recupera(posicion - 1);
}

void ArrayList::append(Object* objeto) {
    array[n + 1] = objeto;
    n++;
}

int ArrayList::localiza(Object* objeto) {
    int posicion = -1;
    for(int i = 0; i < n; i++) {
        /*if(dynamic_cast<Alumno*>(array[i])->getCuenta() == dynamic_cast<Alumno*>(objeto)->getCuenta()) {
            posicion = i + 1;
            break;
        }*/
    }
    return posicion;
}

Object* ArrayList::primero() {
    return array[0];
}

bool ArrayList::vacia() {
    return n == 0;
}
