//
//  GeneroFileF.cpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#include "GeneroFileF.hpp"
#include <iostream>
using namespace std;

GeneroFileF::~GeneroFileF(){
    for(int i = 0 ; i< generos.size();i++){
        delete generos[i];
    }
    generos.clear();
}

bool GeneroFileF::agregarGenero(Genero* pGenero){
    //TODO: validar si no está repetido
    
    generos.push_back(pGenero);
    return true;
    
}

GeneroFileF::GeneroFileF(string pName):TDAArchivo(pName){
    
}

bool GeneroFileF::leer(){
    if(!file->is_open()) {
        return false;
    } else {
        int sector = this->SizeNombre * 25;
        char * datos = nullptr;
        do {
            datos = new char[sector];
            file->read(datos, sector);
            int pos = 0;
            for(int j = 0; j < strlen(datos)/20; j++) {
                string genero;
                for(int i = 0; i < 20; i++) {
                    if(datos[pos] != ' ') {
                        genero.push_back(datos[pos]);
                    }
                    pos++;
                }
                Object* gen = new Genero(genero);
                this->generos.push_back(gen);
            }
            datos = nullptr;
        } while(datos);
        return true;
    }
    return false;
}

 bool GeneroFileF::escribir(){
     if(!file->is_open())
         return false;
    else{
        //necesitamos un buffer
        string buffer;
        
        //construir buffer
        for(int i = 0 ; i< generos.size();i++){
            //recuperar todos los campos del registro
            Genero* genero = dynamic_cast<Genero*>(generos[i]);
            
            if(genero){
                string dato = genero->getNombre();
                
                
                 //truncar a SIZE_NOMBRE o menos
                string datoTruncado = dato.substr(0,SizeNombre);
                
                //rellenar si es necesario el espacio no utilizado del campo
                datoTruncado.append(SizeNombre-datoTruncado.size(),' ');
                
                //construir el buffer
                buffer+=datoTruncado;
            }
        }
        //escribir un bloque de datos
        file->write(buffer.data(),buffer.size());
        return true;
    }
        
}
