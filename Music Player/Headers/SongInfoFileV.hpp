//
//  SongInfoFileV.hpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#ifndef SongInfoFileV_hpp
#define SongInfoFileV_hpp

#include "TDAArchivo.hpp"
#include "ArrayList.hpp"
#include <iostream>
using namespace std;

class SongInfoFileV : public TDAArchivo {
    
private:
    ArrayList canciones;
    
public:
    SongInfoFileV();
    ~SongInfoFileV();
    void setCanciones(ArrayList);
    ArrayList getCanciones();
    void leer();
    void escribir();
    
};

#endif /* SongInfoFileV_hpp */
