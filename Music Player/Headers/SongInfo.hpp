//
//  SongInfo.hpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#ifndef SongInfo_hpp
#define SongInfo_hpp

#include "Object.hpp"
#include <iostream>
using namespace std;

class SongInfo : public Object {
    
private:
    string nombre, disco, artista, ruta;
    
public:
    SongInfo(string,string,string,string);
    ~SongInfo();
    void setNombre(string);
    string getNombre();
    void setDisco(string);
    string getDisco();
    void setArtistas(string);
    string getArtistas();
    void setRuta(string);
    string getRuta();
    bool equals(Object*);
    string toString();
    
};

#endif /* SongInfo_hpp */
