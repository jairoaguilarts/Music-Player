//
//  main.cpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#include "Genero.hpp"
#include "GeneroFileF.hpp"

#include <iostream>
#include <boost/algorithm/string.hpp>
using namespace boost;
using namespace std;

int main(int argc, char** argv) {
    
    
    string sayHi="     Hola Mundo     ";
    cout<<"Original:"<<sayHi<<"."<<endl;
    trim_left(sayHi);
    cout<<"Left:"<<sayHi<<"."<<endl;
    trim_right(sayHi);
    cout<<"Right:"<<sayHi<<"."<<endl;
    
    GeneroFileF* gf=new GeneroFileF("/Users/jairoaguilar/Documents/Clases/2022\ Q4/Estructura\ de\ Datos\ II/Proyecto/Music\ Player/Music\ Player/Genero.txt");
    
    /*gf->agregarGenero(new Genero("Jazz"));
    gf->agregarGenero(new Genero("Blues"));
    gf->agregarGenero(new Genero("Classic"));
    gf->agregarGenero(new Genero("Pop"));
    gf->agregarGenero(new Genero("Rock"));
    gf->agregarGenero(new Genero("Country"));*/
    
    
    if(gf->abrir()){
        cout<<"Abierto\n";
        gf->escribir();
        //gf->leer();
        gf->cerrar();
    }
    cout<<"Salir" << endl;
    delete gf;
    
    return 0;
}
