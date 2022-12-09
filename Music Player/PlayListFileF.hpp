//
//  PlayListFileF.hpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#ifndef PlayListFileF_hpp
#define PlayListFileF_hpp

#include "TDAArchivo.hpp"
#include "Object.hpp"
#include "SongInfo.hpp"
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class PlayListFileF : public TDAArchivo {
    
private:
    vector<Object*> canciones;
    int nombreSize = 15;
    int discoSize = 10;
    int artistaSize = 15;
    int rutaSize = 30;
    int totalBytes = nombreSize + discoSize + artistaSize + rutaSize;
    
public:
    PlayListFileF(string);
    ~PlayListFileF();
    void setCanciones(vector<Object*>);
    vector<Object*> getCanciones();
    bool agregarCancion(SongInfo*);
    virtual bool leer();
    virtual bool escribir();
    
};

#endif /* PlayListFileF_hpp */
