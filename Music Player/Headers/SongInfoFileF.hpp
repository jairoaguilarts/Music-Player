//
//  SongInfoFileF.hpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#ifndef SongInfoFileF_hpp
#define SongInfoFileF_hpp

#include "TDAArchivo.hpp"
#include "ArrayList.hpp"
#include <iostream>
using namespace std;

class SongInfoFileF : public TDAArchivo {
    
private:
    ArrayList canciones;
    
public:
    SongInfoFileF();
    ~SongInfoFileF();
    void setCanciones(ArrayList);
    ArrayList getCanciones();
    void leer();
    void escribir();
    
};

#endif /* SongInfoFileF_hpp */
