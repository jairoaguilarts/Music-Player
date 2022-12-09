//
//  PlayListFileV.hpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#ifndef PlayListFileV_hpp
#define PlayListFileV_hpp

#include "TDAArchivo.hpp"
#include "SongInfo.hpp"
#include "ArrayList.hpp"
#include <iostream>
#include <cstring>
using namespace std;

class PlayListFileV : public TDAArchivo {
    
private:
    ArrayList canciones;
    
public:
    PlayListFileV(string);
    ~PlayListFileV();
    void setCanciones(ArrayList);
    ArrayList getCanciones();
    virtual bool leer();
    virtual bool escribir();
    
};

#endif /* PlayListFileV_hpp */
