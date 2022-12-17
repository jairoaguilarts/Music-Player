//
//  SongInfoFileF.hpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#ifndef SongInfoFileF_hpp
#define SongInfoFileF_hpp

#include "TDAArchivo.hpp"
#include "Object.hpp"
#include "SongInfo.hpp"
#include <vector>
#include <iostream>
using namespace std;

class SongInfoFileF : public TDAArchivo {
    
private:
    vector<Object*> canciones;
    int nombreSize = 15;
    int discoSize = 10;
    int artistaSize = 15;
    int rutaSize = 30;
    int totalBytes = nombreSize + discoSize + artistaSize + rutaSize;
    
public:
    SongInfoFileF(string);
    ~SongInfoFileF();
    void setCanciones(vector<Object*>);
    vector<Object*> getCanciones();
    bool agregarCancion(SongInfo*);
    virtual bool leer();
    virtual bool escribir();
    
};

#endif /* SongInfoFileF_hpp */
