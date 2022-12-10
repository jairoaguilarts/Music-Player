//
//  SongInfoFileV.hpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#ifndef SongInfoFileV_hpp
#define SongInfoFileV_hpp

#include "TDAArchivo.hpp"
#include "SongInfo.hpp"
#include "Object.hpp"
#include <vector>
#include <iostream>
using namespace std;

class SongInfoFileV : public TDAArchivo {
    
private:
    vector<Object*> canciones;
    
public:
    SongInfoFileV(string);
    ~SongInfoFileV();
    void setCanciones(vector<Object*>);
    vector<Object*> getCanciones();
    bool agregarCancion(SongInfo*);
    virtual bool leer();
    virtual bool
    escribir();
    
};

#endif /* SongInfoFileV_hpp */
