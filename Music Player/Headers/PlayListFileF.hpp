//
//  PlayListFileF.hpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#ifndef PlayListFileF_hpp
#define PlayListFileF_hpp

#include "TDAArchivo.hpp"
#include <iostream>
#include <cstring>
using namespace std;

class PlayListFileF : public TDAArchivo {
    
public:
    PlayListFileF();
    ~PlayListFileF();
    string leer();
    void escribir();
    bool equals(Object*);
    string toString();
    
};

#endif /* PlayListFileF_hpp */
