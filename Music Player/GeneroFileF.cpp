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
            cout << "datos leidos: " << datos << endl;
            datos = nullptr;
        } while(datos);
    }
     //leer un bloque de datos (registros de tipo genero)
     //multiplicar SIZE_NOMBRE x 25 (aprox 1 sector) = 500 bytes
         //definir un buffer char*
         //cargar los datos con read de fstream
         //parse el buffer y obtener los registros
         //quitar los chars de relleno
         //a pie
         //usando alguna funcion string
         //usar otra libreria como boost
         
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
