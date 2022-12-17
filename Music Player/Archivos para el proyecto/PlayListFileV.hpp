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
#include "Object.hpp"
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;

class PlayListFileV : public TDAArchivo {
    
private:
    vector<Object*> canciones;
    
public:
    PlayListFileV(string);
    ~PlayListFileV();
    void setCanciones(vector<Object*>);
    vector<Object*> getCanciones();
    bool agregarCancion(SongInfo*);
    virtual bool leer();
    virtual bool escribir();
    
};

#endif /* PlayListFileV_hpp */
