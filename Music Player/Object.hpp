//
//  Object.hpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#ifndef Object_hpp
#define Object_hpp

#include <stdio.h>

#include <string>
using std::string;

class Object {
    
    public:
        virtual bool equals(Object*) = 0;
        virtual string toString() = 0;
    protected:
    
};

#endif /* Object_hpp */
