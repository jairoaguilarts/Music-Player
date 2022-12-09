//
//  main.cpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#include "Genero.hpp"
#include "GeneroFileF.hpp"
#include "GeneroFileV.hpp"
#include "PlayListFileF.hpp"
#include "PlayListFileV.hpp"

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
    
    PlayListFileV* gf = new PlayListFileV("/Users/jairoaguilar/Documents/Clases/2022\ Q4/Estructura\ de\ Datos\ II/Proyecto/Music\ Player/Music\ Player/PlayListV.txt");
    
    /*gf->agregarCancion(new SongInfo("Una Vez", "YHLQMDLG", "Bad Bunny, Mora", "12346"));
    gf->agregarCancion(new SongInfo("La Santa", "YHLQMDLG", "Bad Bunny", "12347"));
    gf->agregarCancion(new SongInfo("badtrip", "MICRODOSIS", "Mora", "12348"));
    gf->agregarCancion(new SongInfo("2010", "MICRODOSIS", "MORA", "12349"));
    gf->agregarCancion(new SongInfo("Dark Horse", "PRISM", "Katy Perry", "12355"));
    gf->agregarCancion(new SongInfo("200mph", "X100PRE", "Bad Bunny", "12346"));*/
    
    
    if(gf->abrir()){
        cout<<"Abierto\n";
        //gf->escribir();
        gf->leer();
        gf->cerrar();
    }
    cout<<"Salir" << endl;
    delete gf;
    
    return 0;
}
