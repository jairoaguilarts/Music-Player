//
//  PlayListFileF.hpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#ifndef PlayListFileF_hpp
#define PlayListFileF_hpp

#include "Object.hpp"
#include <iostream>
#include <cstring>
using namespace std;

class PlayListFile : public Object {
    
public:
    PlayListFile();
    ~PlayListFile();
    string leer();
    void escribir();
    bool equals(Object*);
    string toString();
    
};

#endif /* PlayListFileF_hpp */
