//
//  PlayListFileF.hpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#ifndef PlayListFileF_hpp
#define PlayListFileF_hpp

#include "TDAArchivo.hpp"
#include "ArrayList.hpp"
#include "SongInfo.hpp"
#include <iostream>
#include <cstring>
using namespace std;

class PlayListFileF : public TDAArchivo {
    
private:
    ArrayList canciones;
    
public:
    PlayListFileF();
    ~PlayListFileF();
    void setCanciones(ArrayList);
    ArrayList getCanciones();
    void leer();
    void escribir();
    
};

#endif /* PlayListFileF_hpp */
