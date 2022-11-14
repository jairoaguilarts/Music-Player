//
//  PlayListFileV.hpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#ifndef PlayListFileV_hpp
#define PlayListFileV_hpp

#include "TDAArchivo.hpp"
#include <iostream>
#include <cstring>
using namespace std;

class PlayListFileV : public TDAArchivo {
    
public:
    PlayListFileV();
    ~PlayListFileV();
    string leer();
    void escribir();
    bool equals(Object*);
    string toString();
    
};

#endif /* PlayListFileV_hpp */
