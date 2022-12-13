#ifndef OBJECT_H
#define OBJECT_H
#include <stdio.h>

#include <string>
using std::string;

class Object {

    public:
        virtual bool equals(Object*) = 0;
        virtual string toString() = 0;
    protected:

};

#endif // OBJECT_H
